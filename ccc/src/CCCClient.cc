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

#include <alibabacloud/ccc/CCCClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

namespace
{
	const std::string SERVICE_NAME = "CCC";
}

CCCClient::CCCClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::CCCClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::CCCClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "CCC");
}

CCCClient::~CCCClient()
{}

CCCClient::AnswerCallOutcome CCCClient::answerCall(const AnswerCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AnswerCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AnswerCallOutcome(AnswerCallResult(outcome.result()));
	else
		return AnswerCallOutcome(outcome.error());
}

void CCCClient::answerCallAsync(const AnswerCallRequest& request, const AnswerCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, answerCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AnswerCallOutcomeCallable CCCClient::answerCallCallable(const AnswerCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AnswerCallOutcome()>>(
			[this, request]()
			{
			return this->answerCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::BargeInCallOutcome CCCClient::bargeInCall(const BargeInCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BargeInCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BargeInCallOutcome(BargeInCallResult(outcome.result()));
	else
		return BargeInCallOutcome(outcome.error());
}

void CCCClient::bargeInCallAsync(const BargeInCallRequest& request, const BargeInCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bargeInCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::BargeInCallOutcomeCallable CCCClient::bargeInCallCallable(const BargeInCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BargeInCallOutcome()>>(
			[this, request]()
			{
			return this->bargeInCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::BlindTransferOutcome CCCClient::blindTransfer(const BlindTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BlindTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BlindTransferOutcome(BlindTransferResult(outcome.result()));
	else
		return BlindTransferOutcome(outcome.error());
}

void CCCClient::blindTransferAsync(const BlindTransferRequest& request, const BlindTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, blindTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::BlindTransferOutcomeCallable CCCClient::blindTransferCallable(const BlindTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BlindTransferOutcome()>>(
			[this, request]()
			{
			return this->blindTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CancelAttendedTransferOutcome CCCClient::cancelAttendedTransfer(const CancelAttendedTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAttendedTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAttendedTransferOutcome(CancelAttendedTransferResult(outcome.result()));
	else
		return CancelAttendedTransferOutcome(outcome.error());
}

void CCCClient::cancelAttendedTransferAsync(const CancelAttendedTransferRequest& request, const CancelAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAttendedTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CancelAttendedTransferOutcomeCallable CCCClient::cancelAttendedTransferCallable(const CancelAttendedTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAttendedTransferOutcome()>>(
			[this, request]()
			{
			return this->cancelAttendedTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ChangeWorkModeOutcome CCCClient::changeWorkMode(const ChangeWorkModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeWorkModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeWorkModeOutcome(ChangeWorkModeResult(outcome.result()));
	else
		return ChangeWorkModeOutcome(outcome.error());
}

void CCCClient::changeWorkModeAsync(const ChangeWorkModeRequest& request, const ChangeWorkModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeWorkMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ChangeWorkModeOutcomeCallable CCCClient::changeWorkModeCallable(const ChangeWorkModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeWorkModeOutcome()>>(
			[this, request]()
			{
			return this->changeWorkMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CompleteAttendedTransferOutcome CCCClient::completeAttendedTransfer(const CompleteAttendedTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompleteAttendedTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompleteAttendedTransferOutcome(CompleteAttendedTransferResult(outcome.result()));
	else
		return CompleteAttendedTransferOutcome(outcome.error());
}

void CCCClient::completeAttendedTransferAsync(const CompleteAttendedTransferRequest& request, const CompleteAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completeAttendedTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CompleteAttendedTransferOutcomeCallable CCCClient::completeAttendedTransferCallable(const CompleteAttendedTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompleteAttendedTransferOutcome()>>(
			[this, request]()
			{
			return this->completeAttendedTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetLoginDetailsOutcome CCCClient::getLoginDetails(const GetLoginDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLoginDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLoginDetailsOutcome(GetLoginDetailsResult(outcome.result()));
	else
		return GetLoginDetailsOutcome(outcome.error());
}

void CCCClient::getLoginDetailsAsync(const GetLoginDetailsRequest& request, const GetLoginDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLoginDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetLoginDetailsOutcomeCallable CCCClient::getLoginDetailsCallable(const GetLoginDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLoginDetailsOutcome()>>(
			[this, request]()
			{
			return this->getLoginDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetNumberLocationOutcome CCCClient::getNumberLocation(const GetNumberLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNumberLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNumberLocationOutcome(GetNumberLocationResult(outcome.result()));
	else
		return GetNumberLocationOutcome(outcome.error());
}

void CCCClient::getNumberLocationAsync(const GetNumberLocationRequest& request, const GetNumberLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNumberLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetNumberLocationOutcomeCallable CCCClient::getNumberLocationCallable(const GetNumberLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNumberLocationOutcome()>>(
			[this, request]()
			{
			return this->getNumberLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTurnCredentialsOutcome CCCClient::getTurnCredentials(const GetTurnCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTurnCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTurnCredentialsOutcome(GetTurnCredentialsResult(outcome.result()));
	else
		return GetTurnCredentialsOutcome(outcome.error());
}

void CCCClient::getTurnCredentialsAsync(const GetTurnCredentialsRequest& request, const GetTurnCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTurnCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTurnCredentialsOutcomeCallable CCCClient::getTurnCredentialsCallable(const GetTurnCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTurnCredentialsOutcome()>>(
			[this, request]()
			{
			return this->getTurnCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTurnServerListOutcome CCCClient::getTurnServerList(const GetTurnServerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTurnServerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTurnServerListOutcome(GetTurnServerListResult(outcome.result()));
	else
		return GetTurnServerListOutcome(outcome.error());
}

void CCCClient::getTurnServerListAsync(const GetTurnServerListRequest& request, const GetTurnServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTurnServerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTurnServerListOutcomeCallable CCCClient::getTurnServerListCallable(const GetTurnServerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTurnServerListOutcome()>>(
			[this, request]()
			{
			return this->getTurnServerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::HoldCallOutcome CCCClient::holdCall(const HoldCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HoldCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HoldCallOutcome(HoldCallResult(outcome.result()));
	else
		return HoldCallOutcome(outcome.error());
}

void CCCClient::holdCallAsync(const HoldCallRequest& request, const HoldCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, holdCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::HoldCallOutcomeCallable CCCClient::holdCallCallable(const HoldCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HoldCallOutcome()>>(
			[this, request]()
			{
			return this->holdCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::InitiateAttendedTransferOutcome CCCClient::initiateAttendedTransfer(const InitiateAttendedTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitiateAttendedTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitiateAttendedTransferOutcome(InitiateAttendedTransferResult(outcome.result()));
	else
		return InitiateAttendedTransferOutcome(outcome.error());
}

void CCCClient::initiateAttendedTransferAsync(const InitiateAttendedTransferRequest& request, const InitiateAttendedTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initiateAttendedTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::InitiateAttendedTransferOutcomeCallable CCCClient::initiateAttendedTransferCallable(const InitiateAttendedTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitiateAttendedTransferOutcome()>>(
			[this, request]()
			{
			return this->initiateAttendedTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::InterceptCallOutcome CCCClient::interceptCall(const InterceptCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InterceptCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InterceptCallOutcome(InterceptCallResult(outcome.result()));
	else
		return InterceptCallOutcome(outcome.error());
}

void CCCClient::interceptCallAsync(const InterceptCallRequest& request, const InterceptCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, interceptCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::InterceptCallOutcomeCallable CCCClient::interceptCallCallable(const InterceptCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InterceptCallOutcome()>>(
			[this, request]()
			{
			return this->interceptCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::LaunchAuthenticationOutcome CCCClient::launchAuthentication(const LaunchAuthenticationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LaunchAuthenticationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LaunchAuthenticationOutcome(LaunchAuthenticationResult(outcome.result()));
	else
		return LaunchAuthenticationOutcome(outcome.error());
}

void CCCClient::launchAuthenticationAsync(const LaunchAuthenticationRequest& request, const LaunchAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, launchAuthentication(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::LaunchAuthenticationOutcomeCallable CCCClient::launchAuthenticationCallable(const LaunchAuthenticationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LaunchAuthenticationOutcome()>>(
			[this, request]()
			{
			return this->launchAuthentication(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::LaunchSurveyOutcome CCCClient::launchSurvey(const LaunchSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LaunchSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LaunchSurveyOutcome(LaunchSurveyResult(outcome.result()));
	else
		return LaunchSurveyOutcome(outcome.error());
}

void CCCClient::launchSurveyAsync(const LaunchSurveyRequest& request, const LaunchSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, launchSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::LaunchSurveyOutcomeCallable CCCClient::launchSurveyCallable(const LaunchSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LaunchSurveyOutcome()>>(
			[this, request]()
			{
			return this->launchSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListBriefSkillGroupsOutcome CCCClient::listBriefSkillGroups(const ListBriefSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBriefSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBriefSkillGroupsOutcome(ListBriefSkillGroupsResult(outcome.result()));
	else
		return ListBriefSkillGroupsOutcome(outcome.error());
}

void CCCClient::listBriefSkillGroupsAsync(const ListBriefSkillGroupsRequest& request, const ListBriefSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBriefSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListBriefSkillGroupsOutcomeCallable CCCClient::listBriefSkillGroupsCallable(const ListBriefSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBriefSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->listBriefSkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCallDetailRecordsOutcome CCCClient::listCallDetailRecords(const ListCallDetailRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCallDetailRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCallDetailRecordsOutcome(ListCallDetailRecordsResult(outcome.result()));
	else
		return ListCallDetailRecordsOutcome(outcome.error());
}

void CCCClient::listCallDetailRecordsAsync(const ListCallDetailRecordsRequest& request, const ListCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCallDetailRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCallDetailRecordsOutcomeCallable CCCClient::listCallDetailRecordsCallable(const ListCallDetailRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCallDetailRecordsOutcome()>>(
			[this, request]()
			{
			return this->listCallDetailRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListConfigItemsOutcome CCCClient::listConfigItems(const ListConfigItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigItemsOutcome(ListConfigItemsResult(outcome.result()));
	else
		return ListConfigItemsOutcome(outcome.error());
}

void CCCClient::listConfigItemsAsync(const ListConfigItemsRequest& request, const ListConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfigItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListConfigItemsOutcomeCallable CCCClient::listConfigItemsCallable(const ListConfigItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigItemsOutcome()>>(
			[this, request]()
			{
			return this->listConfigItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListDevicesOutcome CCCClient::listDevices(const ListDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDevicesOutcome(ListDevicesResult(outcome.result()));
	else
		return ListDevicesOutcome(outcome.error());
}

void CCCClient::listDevicesAsync(const ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListDevicesOutcomeCallable CCCClient::listDevicesCallable(const ListDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDevicesOutcome()>>(
			[this, request]()
			{
			return this->listDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListHistoricalAgentReportOutcome CCCClient::listHistoricalAgentReport(const ListHistoricalAgentReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHistoricalAgentReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHistoricalAgentReportOutcome(ListHistoricalAgentReportResult(outcome.result()));
	else
		return ListHistoricalAgentReportOutcome(outcome.error());
}

void CCCClient::listHistoricalAgentReportAsync(const ListHistoricalAgentReportRequest& request, const ListHistoricalAgentReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHistoricalAgentReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListHistoricalAgentReportOutcomeCallable CCCClient::listHistoricalAgentReportCallable(const ListHistoricalAgentReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHistoricalAgentReportOutcome()>>(
			[this, request]()
			{
			return this->listHistoricalAgentReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListOutboundNumbersOfUserOutcome CCCClient::listOutboundNumbersOfUser(const ListOutboundNumbersOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOutboundNumbersOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOutboundNumbersOfUserOutcome(ListOutboundNumbersOfUserResult(outcome.result()));
	else
		return ListOutboundNumbersOfUserOutcome(outcome.error());
}

void CCCClient::listOutboundNumbersOfUserAsync(const ListOutboundNumbersOfUserRequest& request, const ListOutboundNumbersOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOutboundNumbersOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListOutboundNumbersOfUserOutcomeCallable CCCClient::listOutboundNumbersOfUserCallable(const ListOutboundNumbersOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOutboundNumbersOfUserOutcome()>>(
			[this, request]()
			{
			return this->listOutboundNumbersOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPrivilegesOfUserOutcome CCCClient::listPrivilegesOfUser(const ListPrivilegesOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPrivilegesOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPrivilegesOfUserOutcome(ListPrivilegesOfUserResult(outcome.result()));
	else
		return ListPrivilegesOfUserOutcome(outcome.error());
}

void CCCClient::listPrivilegesOfUserAsync(const ListPrivilegesOfUserRequest& request, const ListPrivilegesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPrivilegesOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPrivilegesOfUserOutcomeCallable CCCClient::listPrivilegesOfUserCallable(const ListPrivilegesOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPrivilegesOfUserOutcome()>>(
			[this, request]()
			{
			return this->listPrivilegesOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRealtimeAgentStatesOutcome CCCClient::listRealtimeAgentStates(const ListRealtimeAgentStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealtimeAgentStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealtimeAgentStatesOutcome(ListRealtimeAgentStatesResult(outcome.result()));
	else
		return ListRealtimeAgentStatesOutcome(outcome.error());
}

void CCCClient::listRealtimeAgentStatesAsync(const ListRealtimeAgentStatesRequest& request, const ListRealtimeAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealtimeAgentStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRealtimeAgentStatesOutcomeCallable CCCClient::listRealtimeAgentStatesCallable(const ListRealtimeAgentStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealtimeAgentStatesOutcome()>>(
			[this, request]()
			{
			return this->listRealtimeAgentStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecentCallDetailRecordsOutcome CCCClient::listRecentCallDetailRecords(const ListRecentCallDetailRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecentCallDetailRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecentCallDetailRecordsOutcome(ListRecentCallDetailRecordsResult(outcome.result()));
	else
		return ListRecentCallDetailRecordsOutcome(outcome.error());
}

void CCCClient::listRecentCallDetailRecordsAsync(const ListRecentCallDetailRecordsRequest& request, const ListRecentCallDetailRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecentCallDetailRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecentCallDetailRecordsOutcomeCallable CCCClient::listRecentCallDetailRecordsCallable(const ListRecentCallDetailRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecentCallDetailRecordsOutcome()>>(
			[this, request]()
			{
			return this->listRecentCallDetailRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillLevelsOfUserOutcome CCCClient::listSkillLevelsOfUser(const ListSkillLevelsOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillLevelsOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillLevelsOfUserOutcome(ListSkillLevelsOfUserResult(outcome.result()));
	else
		return ListSkillLevelsOfUserOutcome(outcome.error());
}

void CCCClient::listSkillLevelsOfUserAsync(const ListSkillLevelsOfUserRequest& request, const ListSkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillLevelsOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillLevelsOfUserOutcomeCallable CCCClient::listSkillLevelsOfUserCallable(const ListSkillLevelsOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillLevelsOfUserOutcome()>>(
			[this, request]()
			{
			return this->listSkillLevelsOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::MakeCallOutcome CCCClient::makeCall(const MakeCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MakeCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MakeCallOutcome(MakeCallResult(outcome.result()));
	else
		return MakeCallOutcome(outcome.error());
}

void CCCClient::makeCallAsync(const MakeCallRequest& request, const MakeCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, makeCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::MakeCallOutcomeCallable CCCClient::makeCallCallable(const MakeCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MakeCallOutcome()>>(
			[this, request]()
			{
			return this->makeCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::MonitorCallOutcome CCCClient::monitorCall(const MonitorCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MonitorCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MonitorCallOutcome(MonitorCallResult(outcome.result()));
	else
		return MonitorCallOutcome(outcome.error());
}

void CCCClient::monitorCallAsync(const MonitorCallRequest& request, const MonitorCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, monitorCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::MonitorCallOutcomeCallable CCCClient::monitorCallCallable(const MonitorCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MonitorCallOutcome()>>(
			[this, request]()
			{
			return this->monitorCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::MuteCallOutcome CCCClient::muteCall(const MuteCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MuteCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MuteCallOutcome(MuteCallResult(outcome.result()));
	else
		return MuteCallOutcome(outcome.error());
}

void CCCClient::muteCallAsync(const MuteCallRequest& request, const MuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, muteCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::MuteCallOutcomeCallable CCCClient::muteCallCallable(const MuteCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MuteCallOutcome()>>(
			[this, request]()
			{
			return this->muteCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PickOutboundNumbersOutcome CCCClient::pickOutboundNumbers(const PickOutboundNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PickOutboundNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PickOutboundNumbersOutcome(PickOutboundNumbersResult(outcome.result()));
	else
		return PickOutboundNumbersOutcome(outcome.error());
}

void CCCClient::pickOutboundNumbersAsync(const PickOutboundNumbersRequest& request, const PickOutboundNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pickOutboundNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PickOutboundNumbersOutcomeCallable CCCClient::pickOutboundNumbersCallable(const PickOutboundNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PickOutboundNumbersOutcome()>>(
			[this, request]()
			{
			return this->pickOutboundNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PollUserStatusOutcome CCCClient::pollUserStatus(const PollUserStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PollUserStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PollUserStatusOutcome(PollUserStatusResult(outcome.result()));
	else
		return PollUserStatusOutcome(outcome.error());
}

void CCCClient::pollUserStatusAsync(const PollUserStatusRequest& request, const PollUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pollUserStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PollUserStatusOutcomeCallable CCCClient::pollUserStatusCallable(const PollUserStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PollUserStatusOutcome()>>(
			[this, request]()
			{
			return this->pollUserStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ReadyForServiceOutcome CCCClient::readyForService(const ReadyForServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReadyForServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReadyForServiceOutcome(ReadyForServiceResult(outcome.result()));
	else
		return ReadyForServiceOutcome(outcome.error());
}

void CCCClient::readyForServiceAsync(const ReadyForServiceRequest& request, const ReadyForServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, readyForService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ReadyForServiceOutcomeCallable CCCClient::readyForServiceCallable(const ReadyForServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReadyForServiceOutcome()>>(
			[this, request]()
			{
			return this->readyForService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RegisterDeviceOutcome CCCClient::registerDevice(const RegisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDeviceOutcome(RegisterDeviceResult(outcome.result()));
	else
		return RegisterDeviceOutcome(outcome.error());
}

void CCCClient::registerDeviceAsync(const RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RegisterDeviceOutcomeCallable CCCClient::registerDeviceCallable(const RegisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->registerDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ReleaseCallOutcome CCCClient::releaseCall(const ReleaseCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseCallOutcome(ReleaseCallResult(outcome.result()));
	else
		return ReleaseCallOutcome(outcome.error());
}

void CCCClient::releaseCallAsync(const ReleaseCallRequest& request, const ReleaseCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ReleaseCallOutcomeCallable CCCClient::releaseCallCallable(const ReleaseCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseCallOutcome()>>(
			[this, request]()
			{
			return this->releaseCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResetAgentStateOutcome CCCClient::resetAgentState(const ResetAgentStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetAgentStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetAgentStateOutcome(ResetAgentStateResult(outcome.result()));
	else
		return ResetAgentStateOutcome(outcome.error());
}

void CCCClient::resetAgentStateAsync(const ResetAgentStateRequest& request, const ResetAgentStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetAgentState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResetAgentStateOutcomeCallable CCCClient::resetAgentStateCallable(const ResetAgentStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetAgentStateOutcome()>>(
			[this, request]()
			{
			return this->resetAgentState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RetrieveCallOutcome CCCClient::retrieveCall(const RetrieveCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RetrieveCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RetrieveCallOutcome(RetrieveCallResult(outcome.result()));
	else
		return RetrieveCallOutcome(outcome.error());
}

void CCCClient::retrieveCallAsync(const RetrieveCallRequest& request, const RetrieveCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, retrieveCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RetrieveCallOutcomeCallable CCCClient::retrieveCallCallable(const RetrieveCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RetrieveCallOutcome()>>(
			[this, request]()
			{
			return this->retrieveCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SendDtmfSignalingOutcome CCCClient::sendDtmfSignaling(const SendDtmfSignalingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendDtmfSignalingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendDtmfSignalingOutcome(SendDtmfSignalingResult(outcome.result()));
	else
		return SendDtmfSignalingOutcome(outcome.error());
}

void CCCClient::sendDtmfSignalingAsync(const SendDtmfSignalingRequest& request, const SendDtmfSignalingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendDtmfSignaling(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SendDtmfSignalingOutcomeCallable CCCClient::sendDtmfSignalingCallable(const SendDtmfSignalingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendDtmfSignalingOutcome()>>(
			[this, request]()
			{
			return this->sendDtmfSignaling(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SignInGroupOutcome CCCClient::signInGroup(const SignInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignInGroupOutcome(SignInGroupResult(outcome.result()));
	else
		return SignInGroupOutcome(outcome.error());
}

void CCCClient::signInGroupAsync(const SignInGroupRequest& request, const SignInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SignInGroupOutcomeCallable CCCClient::signInGroupCallable(const SignInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignInGroupOutcome()>>(
			[this, request]()
			{
			return this->signInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SignOutGroupOutcome CCCClient::signOutGroup(const SignOutGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SignOutGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SignOutGroupOutcome(SignOutGroupResult(outcome.result()));
	else
		return SignOutGroupOutcome(outcome.error());
}

void CCCClient::signOutGroupAsync(const SignOutGroupRequest& request, const SignOutGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, signOutGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SignOutGroupOutcomeCallable CCCClient::signOutGroupCallable(const SignOutGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SignOutGroupOutcome()>>(
			[this, request]()
			{
			return this->signOutGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::TakeBreakOutcome CCCClient::takeBreak(const TakeBreakRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TakeBreakOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TakeBreakOutcome(TakeBreakResult(outcome.result()));
	else
		return TakeBreakOutcome(outcome.error());
}

void CCCClient::takeBreakAsync(const TakeBreakRequest& request, const TakeBreakAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, takeBreak(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::TakeBreakOutcomeCallable CCCClient::takeBreakCallable(const TakeBreakRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TakeBreakOutcome()>>(
			[this, request]()
			{
			return this->takeBreak(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::UnmuteCallOutcome CCCClient::unmuteCall(const UnmuteCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnmuteCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnmuteCallOutcome(UnmuteCallResult(outcome.result()));
	else
		return UnmuteCallOutcome(outcome.error());
}

void CCCClient::unmuteCallAsync(const UnmuteCallRequest& request, const UnmuteCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unmuteCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::UnmuteCallOutcomeCallable CCCClient::unmuteCallCallable(const UnmuteCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnmuteCallOutcome()>>(
			[this, request]()
			{
			return this->unmuteCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

