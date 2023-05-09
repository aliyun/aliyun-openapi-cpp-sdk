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

CCCClient::AbortCampaignOutcome CCCClient::abortCampaign(const AbortCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AbortCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AbortCampaignOutcome(AbortCampaignResult(outcome.result()));
	else
		return AbortCampaignOutcome(outcome.error());
}

void CCCClient::abortCampaignAsync(const AbortCampaignRequest& request, const AbortCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, abortCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AbortCampaignOutcomeCallable CCCClient::abortCampaignCallable(const AbortCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AbortCampaignOutcome()>>(
			[this, request]()
			{
			return this->abortCampaign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddCasesOutcome CCCClient::addCases(const AddCasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasesOutcome(AddCasesResult(outcome.result()));
	else
		return AddCasesOutcome(outcome.error());
}

void CCCClient::addCasesAsync(const AddCasesRequest& request, const AddCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddCasesOutcomeCallable CCCClient::addCasesCallable(const AddCasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasesOutcome()>>(
			[this, request]()
			{
			return this->addCases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddNumbersToSkillGroupOutcome CCCClient::addNumbersToSkillGroup(const AddNumbersToSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddNumbersToSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddNumbersToSkillGroupOutcome(AddNumbersToSkillGroupResult(outcome.result()));
	else
		return AddNumbersToSkillGroupOutcome(outcome.error());
}

void CCCClient::addNumbersToSkillGroupAsync(const AddNumbersToSkillGroupRequest& request, const AddNumbersToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addNumbersToSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddNumbersToSkillGroupOutcomeCallable CCCClient::addNumbersToSkillGroupCallable(const AddNumbersToSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddNumbersToSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->addNumbersToSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddPersonalNumbersToUserOutcome CCCClient::addPersonalNumbersToUser(const AddPersonalNumbersToUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPersonalNumbersToUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPersonalNumbersToUserOutcome(AddPersonalNumbersToUserResult(outcome.result()));
	else
		return AddPersonalNumbersToUserOutcome(outcome.error());
}

void CCCClient::addPersonalNumbersToUserAsync(const AddPersonalNumbersToUserRequest& request, const AddPersonalNumbersToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPersonalNumbersToUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPersonalNumbersToUserOutcomeCallable CCCClient::addPersonalNumbersToUserCallable(const AddPersonalNumbersToUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPersonalNumbersToUserOutcome()>>(
			[this, request]()
			{
			return this->addPersonalNumbersToUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddPhoneNumberToSkillGroupsOutcome CCCClient::addPhoneNumberToSkillGroups(const AddPhoneNumberToSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPhoneNumberToSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPhoneNumberToSkillGroupsOutcome(AddPhoneNumberToSkillGroupsResult(outcome.result()));
	else
		return AddPhoneNumberToSkillGroupsOutcome(outcome.error());
}

void CCCClient::addPhoneNumberToSkillGroupsAsync(const AddPhoneNumberToSkillGroupsRequest& request, const AddPhoneNumberToSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPhoneNumberToSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPhoneNumberToSkillGroupsOutcomeCallable CCCClient::addPhoneNumberToSkillGroupsCallable(const AddPhoneNumberToSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPhoneNumberToSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->addPhoneNumberToSkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddPhoneNumbersOutcome CCCClient::addPhoneNumbers(const AddPhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPhoneNumbersOutcome(AddPhoneNumbersResult(outcome.result()));
	else
		return AddPhoneNumbersOutcome(outcome.error());
}

void CCCClient::addPhoneNumbersAsync(const AddPhoneNumbersRequest& request, const AddPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPhoneNumbersOutcomeCallable CCCClient::addPhoneNumbersCallable(const AddPhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->addPhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddSkillGroupsToUserOutcome CCCClient::addSkillGroupsToUser(const AddSkillGroupsToUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddSkillGroupsToUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddSkillGroupsToUserOutcome(AddSkillGroupsToUserResult(outcome.result()));
	else
		return AddSkillGroupsToUserOutcome(outcome.error());
}

void CCCClient::addSkillGroupsToUserAsync(const AddSkillGroupsToUserRequest& request, const AddSkillGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addSkillGroupsToUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddSkillGroupsToUserOutcomeCallable CCCClient::addSkillGroupsToUserCallable(const AddSkillGroupsToUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddSkillGroupsToUserOutcome()>>(
			[this, request]()
			{
			return this->addSkillGroupsToUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AddUsersToSkillGroupOutcome CCCClient::addUsersToSkillGroup(const AddUsersToSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUsersToSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUsersToSkillGroupOutcome(AddUsersToSkillGroupResult(outcome.result()));
	else
		return AddUsersToSkillGroupOutcome(outcome.error());
}

void CCCClient::addUsersToSkillGroupAsync(const AddUsersToSkillGroupRequest& request, const AddUsersToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUsersToSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddUsersToSkillGroupOutcomeCallable CCCClient::addUsersToSkillGroupCallable(const AddUsersToSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUsersToSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->addUsersToSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

CCCClient::AppendCasesOutcome CCCClient::appendCases(const AppendCasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AppendCasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AppendCasesOutcome(AppendCasesResult(outcome.result()));
	else
		return AppendCasesOutcome(outcome.error());
}

void CCCClient::appendCasesAsync(const AppendCasesRequest& request, const AppendCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, appendCases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AppendCasesOutcomeCallable CCCClient::appendCasesCallable(const AppendCasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AppendCasesOutcome()>>(
			[this, request]()
			{
			return this->appendCases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AssignUsersOutcome CCCClient::assignUsers(const AssignUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignUsersOutcome(AssignUsersResult(outcome.result()));
	else
		return AssignUsersOutcome(outcome.error());
}

void CCCClient::assignUsersAsync(const AssignUsersRequest& request, const AssignUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AssignUsersOutcomeCallable CCCClient::assignUsersCallable(const AssignUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignUsersOutcome()>>(
			[this, request]()
			{
			return this->assignUsers(request);
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

CCCClient::BridgeRtcCallOutcome CCCClient::bridgeRtcCall(const BridgeRtcCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BridgeRtcCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BridgeRtcCallOutcome(BridgeRtcCallResult(outcome.result()));
	else
		return BridgeRtcCallOutcome(outcome.error());
}

void CCCClient::bridgeRtcCallAsync(const BridgeRtcCallRequest& request, const BridgeRtcCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bridgeRtcCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::BridgeRtcCallOutcomeCallable CCCClient::bridgeRtcCallCallable(const BridgeRtcCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BridgeRtcCallOutcome()>>(
			[this, request]()
			{
			return this->bridgeRtcCall(request);
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

CCCClient::CoachCallOutcome CCCClient::coachCall(const CoachCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CoachCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CoachCallOutcome(CoachCallResult(outcome.result()));
	else
		return CoachCallOutcome(outcome.error());
}

void CCCClient::coachCallAsync(const CoachCallRequest& request, const CoachCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, coachCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CoachCallOutcomeCallable CCCClient::coachCallCallable(const CoachCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CoachCallOutcome()>>(
			[this, request]()
			{
			return this->coachCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CommitContactFlowOutcome CCCClient::commitContactFlow(const CommitContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CommitContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CommitContactFlowOutcome(CommitContactFlowResult(outcome.result()));
	else
		return CommitContactFlowOutcome(outcome.error());
}

void CCCClient::commitContactFlowAsync(const CommitContactFlowRequest& request, const CommitContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, commitContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CommitContactFlowOutcomeCallable CCCClient::commitContactFlowCallable(const CommitContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CommitContactFlowOutcome()>>(
			[this, request]()
			{
			return this->commitContactFlow(request);
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

CCCClient::CreateAudioFileOutcome CCCClient::createAudioFile(const CreateAudioFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAudioFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAudioFileOutcome(CreateAudioFileResult(outcome.result()));
	else
		return CreateAudioFileOutcome(outcome.error());
}

void CCCClient::createAudioFileAsync(const CreateAudioFileRequest& request, const CreateAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAudioFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateAudioFileOutcomeCallable CCCClient::createAudioFileCallable(const CreateAudioFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAudioFileOutcome()>>(
			[this, request]()
			{
			return this->createAudioFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateCallTagsOutcome CCCClient::createCallTags(const CreateCallTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCallTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCallTagsOutcome(CreateCallTagsResult(outcome.result()));
	else
		return CreateCallTagsOutcome(outcome.error());
}

void CCCClient::createCallTagsAsync(const CreateCallTagsRequest& request, const CreateCallTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCallTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateCallTagsOutcomeCallable CCCClient::createCallTagsCallable(const CreateCallTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCallTagsOutcome()>>(
			[this, request]()
			{
			return this->createCallTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateCampaignOutcome CCCClient::createCampaign(const CreateCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCampaignOutcome(CreateCampaignResult(outcome.result()));
	else
		return CreateCampaignOutcome(outcome.error());
}

void CCCClient::createCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateCampaignOutcomeCallable CCCClient::createCampaignCallable(const CreateCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCampaignOutcome()>>(
			[this, request]()
			{
			return this->createCampaign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateContactFlowOutcome CCCClient::createContactFlow(const CreateContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateContactFlowOutcome(CreateContactFlowResult(outcome.result()));
	else
		return CreateContactFlowOutcome(outcome.error());
}

void CCCClient::createContactFlowAsync(const CreateContactFlowRequest& request, const CreateContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateContactFlowOutcomeCallable CCCClient::createContactFlowCallable(const CreateContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateContactFlowOutcome()>>(
			[this, request]()
			{
			return this->createContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateCustomCallTaggingOutcome CCCClient::createCustomCallTagging(const CreateCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomCallTaggingOutcome(CreateCustomCallTaggingResult(outcome.result()));
	else
		return CreateCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::createCustomCallTaggingAsync(const CreateCustomCallTaggingRequest& request, const CreateCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateCustomCallTaggingOutcomeCallable CCCClient::createCustomCallTaggingCallable(const CreateCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->createCustomCallTagging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateInstanceOutcome CCCClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void CCCClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateInstanceOutcomeCallable CCCClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateSkillGroupOutcome CCCClient::createSkillGroup(const CreateSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSkillGroupOutcome(CreateSkillGroupResult(outcome.result()));
	else
		return CreateSkillGroupOutcome(outcome.error());
}

void CCCClient::createSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateSkillGroupOutcomeCallable CCCClient::createSkillGroupCallable(const CreateSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->createSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateUserOutcome CCCClient::createUser(const CreateUserRequest &request) const
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

void CCCClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateUserOutcomeCallable CCCClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteAudioFileOutcome CCCClient::deleteAudioFile(const DeleteAudioFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAudioFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAudioFileOutcome(DeleteAudioFileResult(outcome.result()));
	else
		return DeleteAudioFileOutcome(outcome.error());
}

void CCCClient::deleteAudioFileAsync(const DeleteAudioFileRequest& request, const DeleteAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAudioFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteAudioFileOutcomeCallable CCCClient::deleteAudioFileCallable(const DeleteAudioFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAudioFileOutcome()>>(
			[this, request]()
			{
			return this->deleteAudioFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteCallTagOutcome CCCClient::deleteCallTag(const DeleteCallTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCallTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCallTagOutcome(DeleteCallTagResult(outcome.result()));
	else
		return DeleteCallTagOutcome(outcome.error());
}

void CCCClient::deleteCallTagAsync(const DeleteCallTagRequest& request, const DeleteCallTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCallTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteCallTagOutcomeCallable CCCClient::deleteCallTagCallable(const DeleteCallTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCallTagOutcome()>>(
			[this, request]()
			{
			return this->deleteCallTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteContactFlowOutcome CCCClient::deleteContactFlow(const DeleteContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactFlowOutcome(DeleteContactFlowResult(outcome.result()));
	else
		return DeleteContactFlowOutcome(outcome.error());
}

void CCCClient::deleteContactFlowAsync(const DeleteContactFlowRequest& request, const DeleteContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteContactFlowOutcomeCallable CCCClient::deleteContactFlowCallable(const DeleteContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteCustomCallTaggingOutcome CCCClient::deleteCustomCallTagging(const DeleteCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomCallTaggingOutcome(DeleteCustomCallTaggingResult(outcome.result()));
	else
		return DeleteCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::deleteCustomCallTaggingAsync(const DeleteCustomCallTaggingRequest& request, const DeleteCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteCustomCallTaggingOutcomeCallable CCCClient::deleteCustomCallTaggingCallable(const DeleteCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomCallTagging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteSkillGroupOutcome CCCClient::deleteSkillGroup(const DeleteSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSkillGroupOutcome(DeleteSkillGroupResult(outcome.result()));
	else
		return DeleteSkillGroupOutcome(outcome.error());
}

void CCCClient::deleteSkillGroupAsync(const DeleteSkillGroupRequest& request, const DeleteSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteSkillGroupOutcomeCallable CCCClient::deleteSkillGroupCallable(const DeleteSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DiscardEditingContactFlowOutcome CCCClient::discardEditingContactFlow(const DiscardEditingContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DiscardEditingContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DiscardEditingContactFlowOutcome(DiscardEditingContactFlowResult(outcome.result()));
	else
		return DiscardEditingContactFlowOutcome(outcome.error());
}

void CCCClient::discardEditingContactFlowAsync(const DiscardEditingContactFlowRequest& request, const DiscardEditingContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, discardEditingContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DiscardEditingContactFlowOutcomeCallable CCCClient::discardEditingContactFlowCallable(const DiscardEditingContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DiscardEditingContactFlowOutcome()>>(
			[this, request]()
			{
			return this->discardEditingContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::EndConferenceOutcome CCCClient::endConference(const EndConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EndConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EndConferenceOutcome(EndConferenceResult(outcome.result()));
	else
		return EndConferenceOutcome(outcome.error());
}

void CCCClient::endConferenceAsync(const EndConferenceRequest& request, const EndConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, endConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::EndConferenceOutcomeCallable CCCClient::endConferenceCallable(const EndConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EndConferenceOutcome()>>(
			[this, request]()
			{
			return this->endConference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ExportCustomCallTaggingOutcome CCCClient::exportCustomCallTagging(const ExportCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportCustomCallTaggingOutcome(ExportCustomCallTaggingResult(outcome.result()));
	else
		return ExportCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::exportCustomCallTaggingAsync(const ExportCustomCallTaggingRequest& request, const ExportCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ExportCustomCallTaggingOutcomeCallable CCCClient::exportCustomCallTaggingCallable(const ExportCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->exportCustomCallTagging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ExportDoNotCallNumbersOutcome CCCClient::exportDoNotCallNumbers(const ExportDoNotCallNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDoNotCallNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDoNotCallNumbersOutcome(ExportDoNotCallNumbersResult(outcome.result()));
	else
		return ExportDoNotCallNumbersOutcome(outcome.error());
}

void CCCClient::exportDoNotCallNumbersAsync(const ExportDoNotCallNumbersRequest& request, const ExportDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDoNotCallNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ExportDoNotCallNumbersOutcomeCallable CCCClient::exportDoNotCallNumbersCallable(const ExportDoNotCallNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDoNotCallNumbersOutcome()>>(
			[this, request]()
			{
			return this->exportDoNotCallNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetAudioFileOutcome CCCClient::getAudioFile(const GetAudioFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAudioFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAudioFileOutcome(GetAudioFileResult(outcome.result()));
	else
		return GetAudioFileOutcome(outcome.error());
}

void CCCClient::getAudioFileAsync(const GetAudioFileRequest& request, const GetAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAudioFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetAudioFileOutcomeCallable CCCClient::getAudioFileCallable(const GetAudioFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAudioFileOutcome()>>(
			[this, request]()
			{
			return this->getAudioFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetAudioFileDownloadUrlOutcome CCCClient::getAudioFileDownloadUrl(const GetAudioFileDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAudioFileDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAudioFileDownloadUrlOutcome(GetAudioFileDownloadUrlResult(outcome.result()));
	else
		return GetAudioFileDownloadUrlOutcome(outcome.error());
}

void CCCClient::getAudioFileDownloadUrlAsync(const GetAudioFileDownloadUrlRequest& request, const GetAudioFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAudioFileDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetAudioFileDownloadUrlOutcomeCallable CCCClient::getAudioFileDownloadUrlCallable(const GetAudioFileDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAudioFileDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getAudioFileDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetAudioFileUploadParametersOutcome CCCClient::getAudioFileUploadParameters(const GetAudioFileUploadParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAudioFileUploadParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAudioFileUploadParametersOutcome(GetAudioFileUploadParametersResult(outcome.result()));
	else
		return GetAudioFileUploadParametersOutcome(outcome.error());
}

void CCCClient::getAudioFileUploadParametersAsync(const GetAudioFileUploadParametersRequest& request, const GetAudioFileUploadParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAudioFileUploadParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetAudioFileUploadParametersOutcomeCallable CCCClient::getAudioFileUploadParametersCallable(const GetAudioFileUploadParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAudioFileUploadParametersOutcome()>>(
			[this, request]()
			{
			return this->getAudioFileUploadParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetCallDetailRecordOutcome CCCClient::getCallDetailRecord(const GetCallDetailRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCallDetailRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCallDetailRecordOutcome(GetCallDetailRecordResult(outcome.result()));
	else
		return GetCallDetailRecordOutcome(outcome.error());
}

void CCCClient::getCallDetailRecordAsync(const GetCallDetailRecordRequest& request, const GetCallDetailRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCallDetailRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetCallDetailRecordOutcomeCallable CCCClient::getCallDetailRecordCallable(const GetCallDetailRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCallDetailRecordOutcome()>>(
			[this, request]()
			{
			return this->getCallDetailRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetCampaignOutcome CCCClient::getCampaign(const GetCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCampaignOutcome(GetCampaignResult(outcome.result()));
	else
		return GetCampaignOutcome(outcome.error());
}

void CCCClient::getCampaignAsync(const GetCampaignRequest& request, const GetCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetCampaignOutcomeCallable CCCClient::getCampaignCallable(const GetCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCampaignOutcome()>>(
			[this, request]()
			{
			return this->getCampaign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetCaseFileUploadUrlOutcome CCCClient::getCaseFileUploadUrl(const GetCaseFileUploadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCaseFileUploadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCaseFileUploadUrlOutcome(GetCaseFileUploadUrlResult(outcome.result()));
	else
		return GetCaseFileUploadUrlOutcome(outcome.error());
}

void CCCClient::getCaseFileUploadUrlAsync(const GetCaseFileUploadUrlRequest& request, const GetCaseFileUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCaseFileUploadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetCaseFileUploadUrlOutcomeCallable CCCClient::getCaseFileUploadUrlCallable(const GetCaseFileUploadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCaseFileUploadUrlOutcome()>>(
			[this, request]()
			{
			return this->getCaseFileUploadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetContactFlowOutcome CCCClient::getContactFlow(const GetContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContactFlowOutcome(GetContactFlowResult(outcome.result()));
	else
		return GetContactFlowOutcome(outcome.error());
}

void CCCClient::getContactFlowAsync(const GetContactFlowRequest& request, const GetContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetContactFlowOutcomeCallable CCCClient::getContactFlowCallable(const GetContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContactFlowOutcome()>>(
			[this, request]()
			{
			return this->getContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetConversationDetailOutcome CCCClient::getConversationDetail(const GetConversationDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConversationDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConversationDetailOutcome(GetConversationDetailResult(outcome.result()));
	else
		return GetConversationDetailOutcome(outcome.error());
}

void CCCClient::getConversationDetailAsync(const GetConversationDetailRequest& request, const GetConversationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConversationDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConversationDetailOutcomeCallable CCCClient::getConversationDetailCallable(const GetConversationDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConversationDetailOutcome()>>(
			[this, request]()
			{
			return this->getConversationDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetDataChannelCredentialsOutcome CCCClient::getDataChannelCredentials(const GetDataChannelCredentialsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataChannelCredentialsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataChannelCredentialsOutcome(GetDataChannelCredentialsResult(outcome.result()));
	else
		return GetDataChannelCredentialsOutcome(outcome.error());
}

void CCCClient::getDataChannelCredentialsAsync(const GetDataChannelCredentialsRequest& request, const GetDataChannelCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataChannelCredentials(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetDataChannelCredentialsOutcomeCallable CCCClient::getDataChannelCredentialsCallable(const GetDataChannelCredentialsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataChannelCredentialsOutcome()>>(
			[this, request]()
			{
			return this->getDataChannelCredentials(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetDoNotCallFileUploadParametersOutcome CCCClient::getDoNotCallFileUploadParameters(const GetDoNotCallFileUploadParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDoNotCallFileUploadParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDoNotCallFileUploadParametersOutcome(GetDoNotCallFileUploadParametersResult(outcome.result()));
	else
		return GetDoNotCallFileUploadParametersOutcome(outcome.error());
}

void CCCClient::getDoNotCallFileUploadParametersAsync(const GetDoNotCallFileUploadParametersRequest& request, const GetDoNotCallFileUploadParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDoNotCallFileUploadParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetDoNotCallFileUploadParametersOutcomeCallable CCCClient::getDoNotCallFileUploadParametersCallable(const GetDoNotCallFileUploadParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDoNotCallFileUploadParametersOutcome()>>(
			[this, request]()
			{
			return this->getDoNotCallFileUploadParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetEarlyMediaRecordingOutcome CCCClient::getEarlyMediaRecording(const GetEarlyMediaRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEarlyMediaRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEarlyMediaRecordingOutcome(GetEarlyMediaRecordingResult(outcome.result()));
	else
		return GetEarlyMediaRecordingOutcome(outcome.error());
}

void CCCClient::getEarlyMediaRecordingAsync(const GetEarlyMediaRecordingRequest& request, const GetEarlyMediaRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEarlyMediaRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetEarlyMediaRecordingOutcomeCallable CCCClient::getEarlyMediaRecordingCallable(const GetEarlyMediaRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEarlyMediaRecordingOutcome()>>(
			[this, request]()
			{
			return this->getEarlyMediaRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetHistoricalCallerReportOutcome CCCClient::getHistoricalCallerReport(const GetHistoricalCallerReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoricalCallerReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoricalCallerReportOutcome(GetHistoricalCallerReportResult(outcome.result()));
	else
		return GetHistoricalCallerReportOutcome(outcome.error());
}

void CCCClient::getHistoricalCallerReportAsync(const GetHistoricalCallerReportRequest& request, const GetHistoricalCallerReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoricalCallerReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetHistoricalCallerReportOutcomeCallable CCCClient::getHistoricalCallerReportCallable(const GetHistoricalCallerReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoricalCallerReportOutcome()>>(
			[this, request]()
			{
			return this->getHistoricalCallerReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetHistoricalCampaignReportOutcome CCCClient::getHistoricalCampaignReport(const GetHistoricalCampaignReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoricalCampaignReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoricalCampaignReportOutcome(GetHistoricalCampaignReportResult(outcome.result()));
	else
		return GetHistoricalCampaignReportOutcome(outcome.error());
}

void CCCClient::getHistoricalCampaignReportAsync(const GetHistoricalCampaignReportRequest& request, const GetHistoricalCampaignReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoricalCampaignReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetHistoricalCampaignReportOutcomeCallable CCCClient::getHistoricalCampaignReportCallable(const GetHistoricalCampaignReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoricalCampaignReportOutcome()>>(
			[this, request]()
			{
			return this->getHistoricalCampaignReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetHistoricalInstanceReportOutcome CCCClient::getHistoricalInstanceReport(const GetHistoricalInstanceReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHistoricalInstanceReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHistoricalInstanceReportOutcome(GetHistoricalInstanceReportResult(outcome.result()));
	else
		return GetHistoricalInstanceReportOutcome(outcome.error());
}

void CCCClient::getHistoricalInstanceReportAsync(const GetHistoricalInstanceReportRequest& request, const GetHistoricalInstanceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHistoricalInstanceReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetHistoricalInstanceReportOutcomeCallable CCCClient::getHistoricalInstanceReportCallable(const GetHistoricalInstanceReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHistoricalInstanceReportOutcome()>>(
			[this, request]()
			{
			return this->getHistoricalInstanceReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceOutcome CCCClient::getInstance(const GetInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceOutcome(GetInstanceResult(outcome.result()));
	else
		return GetInstanceOutcome(outcome.error());
}

void CCCClient::getInstanceAsync(const GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceOutcomeCallable CCCClient::getInstanceCallable(const GetInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceOutcome()>>(
			[this, request]()
			{
			return this->getInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetInstanceTrendingReportOutcome CCCClient::getInstanceTrendingReport(const GetInstanceTrendingReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceTrendingReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceTrendingReportOutcome(GetInstanceTrendingReportResult(outcome.result()));
	else
		return GetInstanceTrendingReportOutcome(outcome.error());
}

void CCCClient::getInstanceTrendingReportAsync(const GetInstanceTrendingReportRequest& request, const GetInstanceTrendingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceTrendingReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetInstanceTrendingReportOutcomeCallable CCCClient::getInstanceTrendingReportCallable(const GetInstanceTrendingReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceTrendingReportOutcome()>>(
			[this, request]()
			{
			return this->getInstanceTrendingReport(request);
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

CCCClient::GetMonoRecordingOutcome CCCClient::getMonoRecording(const GetMonoRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMonoRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMonoRecordingOutcome(GetMonoRecordingResult(outcome.result()));
	else
		return GetMonoRecordingOutcome(outcome.error());
}

void CCCClient::getMonoRecordingAsync(const GetMonoRecordingRequest& request, const GetMonoRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMonoRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetMonoRecordingOutcomeCallable CCCClient::getMonoRecordingCallable(const GetMonoRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMonoRecordingOutcome()>>(
			[this, request]()
			{
			return this->getMonoRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetMultiChannelRecordingOutcome CCCClient::getMultiChannelRecording(const GetMultiChannelRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMultiChannelRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMultiChannelRecordingOutcome(GetMultiChannelRecordingResult(outcome.result()));
	else
		return GetMultiChannelRecordingOutcome(outcome.error());
}

void CCCClient::getMultiChannelRecordingAsync(const GetMultiChannelRecordingRequest& request, const GetMultiChannelRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMultiChannelRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetMultiChannelRecordingOutcomeCallable CCCClient::getMultiChannelRecordingCallable(const GetMultiChannelRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMultiChannelRecordingOutcome()>>(
			[this, request]()
			{
			return this->getMultiChannelRecording(request);
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

CCCClient::GetRealtimeCampaignStatsOutcome CCCClient::getRealtimeCampaignStats(const GetRealtimeCampaignStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRealtimeCampaignStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRealtimeCampaignStatsOutcome(GetRealtimeCampaignStatsResult(outcome.result()));
	else
		return GetRealtimeCampaignStatsOutcome(outcome.error());
}

void CCCClient::getRealtimeCampaignStatsAsync(const GetRealtimeCampaignStatsRequest& request, const GetRealtimeCampaignStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRealtimeCampaignStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetRealtimeCampaignStatsOutcomeCallable CCCClient::getRealtimeCampaignStatsCallable(const GetRealtimeCampaignStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRealtimeCampaignStatsOutcome()>>(
			[this, request]()
			{
			return this->getRealtimeCampaignStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetRealtimeInstanceStatesOutcome CCCClient::getRealtimeInstanceStates(const GetRealtimeInstanceStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRealtimeInstanceStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRealtimeInstanceStatesOutcome(GetRealtimeInstanceStatesResult(outcome.result()));
	else
		return GetRealtimeInstanceStatesOutcome(outcome.error());
}

void CCCClient::getRealtimeInstanceStatesAsync(const GetRealtimeInstanceStatesRequest& request, const GetRealtimeInstanceStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRealtimeInstanceStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetRealtimeInstanceStatesOutcomeCallable CCCClient::getRealtimeInstanceStatesCallable(const GetRealtimeInstanceStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRealtimeInstanceStatesOutcome()>>(
			[this, request]()
			{
			return this->getRealtimeInstanceStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetSkillGroupOutcome CCCClient::getSkillGroup(const GetSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSkillGroupOutcome(GetSkillGroupResult(outcome.result()));
	else
		return GetSkillGroupOutcome(outcome.error());
}

void CCCClient::getSkillGroupAsync(const GetSkillGroupRequest& request, const GetSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetSkillGroupOutcomeCallable CCCClient::getSkillGroupCallable(const GetSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->getSkillGroup(request);
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

CCCClient::GetUploadAudioDataParamsOutcome CCCClient::getUploadAudioDataParams(const GetUploadAudioDataParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUploadAudioDataParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUploadAudioDataParamsOutcome(GetUploadAudioDataParamsResult(outcome.result()));
	else
		return GetUploadAudioDataParamsOutcome(outcome.error());
}

void CCCClient::getUploadAudioDataParamsAsync(const GetUploadAudioDataParamsRequest& request, const GetUploadAudioDataParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUploadAudioDataParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetUploadAudioDataParamsOutcomeCallable CCCClient::getUploadAudioDataParamsCallable(const GetUploadAudioDataParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUploadAudioDataParamsOutcome()>>(
			[this, request]()
			{
			return this->getUploadAudioDataParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetUserOutcome CCCClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void CCCClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetUserOutcomeCallable CCCClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetVideoOutcome CCCClient::getVideo(const GetVideoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVideoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVideoOutcome(GetVideoResult(outcome.result()));
	else
		return GetVideoOutcome(outcome.error());
}

void CCCClient::getVideoAsync(const GetVideoRequest& request, const GetVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVideo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetVideoOutcomeCallable CCCClient::getVideoCallable(const GetVideoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVideoOutcome()>>(
			[this, request]()
			{
			return this->getVideo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetVoicemailRecordingOutcome CCCClient::getVoicemailRecording(const GetVoicemailRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVoicemailRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVoicemailRecordingOutcome(GetVoicemailRecordingResult(outcome.result()));
	else
		return GetVoicemailRecordingOutcome(outcome.error());
}

void CCCClient::getVoicemailRecordingAsync(const GetVoicemailRecordingRequest& request, const GetVoicemailRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVoicemailRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetVoicemailRecordingOutcomeCallable CCCClient::getVoicemailRecordingCallable(const GetVoicemailRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVoicemailRecordingOutcome()>>(
			[this, request]()
			{
			return this->getVoicemailRecording(request);
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

CCCClient::ImportAdminsOutcome CCCClient::importAdmins(const ImportAdminsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportAdminsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportAdminsOutcome(ImportAdminsResult(outcome.result()));
	else
		return ImportAdminsOutcome(outcome.error());
}

void CCCClient::importAdminsAsync(const ImportAdminsRequest& request, const ImportAdminsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importAdmins(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ImportAdminsOutcomeCallable CCCClient::importAdminsCallable(const ImportAdminsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportAdminsOutcome()>>(
			[this, request]()
			{
			return this->importAdmins(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ImportCustomCallTaggingOutcome CCCClient::importCustomCallTagging(const ImportCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportCustomCallTaggingOutcome(ImportCustomCallTaggingResult(outcome.result()));
	else
		return ImportCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::importCustomCallTaggingAsync(const ImportCustomCallTaggingRequest& request, const ImportCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ImportCustomCallTaggingOutcomeCallable CCCClient::importCustomCallTaggingCallable(const ImportCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->importCustomCallTagging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ImportDoNotCallNumbersOutcome CCCClient::importDoNotCallNumbers(const ImportDoNotCallNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportDoNotCallNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportDoNotCallNumbersOutcome(ImportDoNotCallNumbersResult(outcome.result()));
	else
		return ImportDoNotCallNumbersOutcome(outcome.error());
}

void CCCClient::importDoNotCallNumbersAsync(const ImportDoNotCallNumbersRequest& request, const ImportDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importDoNotCallNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ImportDoNotCallNumbersOutcomeCallable CCCClient::importDoNotCallNumbersCallable(const ImportDoNotCallNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportDoNotCallNumbersOutcome()>>(
			[this, request]()
			{
			return this->importDoNotCallNumbers(request);
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

CCCClient::ListAgentStateLogsOutcome CCCClient::listAgentStateLogs(const ListAgentStateLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentStateLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentStateLogsOutcome(ListAgentStateLogsResult(outcome.result()));
	else
		return ListAgentStateLogsOutcome(outcome.error());
}

void CCCClient::listAgentStateLogsAsync(const ListAgentStateLogsRequest& request, const ListAgentStateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentStateLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentStateLogsOutcomeCallable CCCClient::listAgentStateLogsCallable(const ListAgentStateLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentStateLogsOutcome()>>(
			[this, request]()
			{
			return this->listAgentStateLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentStatesOutcome CCCClient::listAgentStates(const ListAgentStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentStatesOutcome(ListAgentStatesResult(outcome.result()));
	else
		return ListAgentStatesOutcome(outcome.error());
}

void CCCClient::listAgentStatesAsync(const ListAgentStatesRequest& request, const ListAgentStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentStatesOutcomeCallable CCCClient::listAgentStatesCallable(const ListAgentStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentStatesOutcome()>>(
			[this, request]()
			{
			return this->listAgentStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAgentSummaryReportsSinceMidnightOutcome CCCClient::listAgentSummaryReportsSinceMidnight(const ListAgentSummaryReportsSinceMidnightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentSummaryReportsSinceMidnightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentSummaryReportsSinceMidnightOutcome(ListAgentSummaryReportsSinceMidnightResult(outcome.result()));
	else
		return ListAgentSummaryReportsSinceMidnightOutcome(outcome.error());
}

void CCCClient::listAgentSummaryReportsSinceMidnightAsync(const ListAgentSummaryReportsSinceMidnightRequest& request, const ListAgentSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentSummaryReportsSinceMidnight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAgentSummaryReportsSinceMidnightOutcomeCallable CCCClient::listAgentSummaryReportsSinceMidnightCallable(const ListAgentSummaryReportsSinceMidnightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentSummaryReportsSinceMidnightOutcome()>>(
			[this, request]()
			{
			return this->listAgentSummaryReportsSinceMidnight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAttemptsOutcome CCCClient::listAttempts(const ListAttemptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAttemptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAttemptsOutcome(ListAttemptsResult(outcome.result()));
	else
		return ListAttemptsOutcome(outcome.error());
}

void CCCClient::listAttemptsAsync(const ListAttemptsRequest& request, const ListAttemptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAttempts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAttemptsOutcomeCallable CCCClient::listAttemptsCallable(const ListAttemptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAttemptsOutcome()>>(
			[this, request]()
			{
			return this->listAttempts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListAudioFilesOutcome CCCClient::listAudioFiles(const ListAudioFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAudioFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAudioFilesOutcome(ListAudioFilesResult(outcome.result()));
	else
		return ListAudioFilesOutcome(outcome.error());
}

void CCCClient::listAudioFilesAsync(const ListAudioFilesRequest& request, const ListAudioFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAudioFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListAudioFilesOutcomeCallable CCCClient::listAudioFilesCallable(const ListAudioFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAudioFilesOutcome()>>(
			[this, request]()
			{
			return this->listAudioFiles(request);
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

CCCClient::ListCallTagsOutcome CCCClient::listCallTags(const ListCallTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCallTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCallTagsOutcome(ListCallTagsResult(outcome.result()));
	else
		return ListCallTagsOutcome(outcome.error());
}

void CCCClient::listCallTagsAsync(const ListCallTagsRequest& request, const ListCallTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCallTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCallTagsOutcomeCallable CCCClient::listCallTagsCallable(const ListCallTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCallTagsOutcome()>>(
			[this, request]()
			{
			return this->listCallTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCampaignTrendingReportOutcome CCCClient::listCampaignTrendingReport(const ListCampaignTrendingReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCampaignTrendingReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCampaignTrendingReportOutcome(ListCampaignTrendingReportResult(outcome.result()));
	else
		return ListCampaignTrendingReportOutcome(outcome.error());
}

void CCCClient::listCampaignTrendingReportAsync(const ListCampaignTrendingReportRequest& request, const ListCampaignTrendingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCampaignTrendingReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCampaignTrendingReportOutcomeCallable CCCClient::listCampaignTrendingReportCallable(const ListCampaignTrendingReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCampaignTrendingReportOutcome()>>(
			[this, request]()
			{
			return this->listCampaignTrendingReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCampaignsOutcome CCCClient::listCampaigns(const ListCampaignsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCampaignsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCampaignsOutcome(ListCampaignsResult(outcome.result()));
	else
		return ListCampaignsOutcome(outcome.error());
}

void CCCClient::listCampaignsAsync(const ListCampaignsRequest& request, const ListCampaignsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCampaigns(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCampaignsOutcomeCallable CCCClient::listCampaignsCallable(const ListCampaignsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCampaignsOutcome()>>(
			[this, request]()
			{
			return this->listCampaigns(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCasesOutcome CCCClient::listCases(const ListCasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCasesOutcome(ListCasesResult(outcome.result()));
	else
		return ListCasesOutcome(outcome.error());
}

void CCCClient::listCasesAsync(const ListCasesRequest& request, const ListCasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCasesOutcomeCallable CCCClient::listCasesCallable(const ListCasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCasesOutcome()>>(
			[this, request]()
			{
			return this->listCases(request);
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

CCCClient::ListContactFlowsOutcome CCCClient::listContactFlows(const ListContactFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListContactFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListContactFlowsOutcome(ListContactFlowsResult(outcome.result()));
	else
		return ListContactFlowsOutcome(outcome.error());
}

void CCCClient::listContactFlowsAsync(const ListContactFlowsRequest& request, const ListContactFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listContactFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListContactFlowsOutcomeCallable CCCClient::listContactFlowsCallable(const ListContactFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListContactFlowsOutcome()>>(
			[this, request]()
			{
			return this->listContactFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListCustomCallTaggingOutcome CCCClient::listCustomCallTagging(const ListCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCustomCallTaggingOutcome(ListCustomCallTaggingResult(outcome.result()));
	else
		return ListCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::listCustomCallTaggingAsync(const ListCustomCallTaggingRequest& request, const ListCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListCustomCallTaggingOutcomeCallable CCCClient::listCustomCallTaggingCallable(const ListCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->listCustomCallTagging(request);
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

CCCClient::ListDoNotCallNumbersOutcome CCCClient::listDoNotCallNumbers(const ListDoNotCallNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDoNotCallNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDoNotCallNumbersOutcome(ListDoNotCallNumbersResult(outcome.result()));
	else
		return ListDoNotCallNumbersOutcome(outcome.error());
}

void CCCClient::listDoNotCallNumbersAsync(const ListDoNotCallNumbersRequest& request, const ListDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDoNotCallNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListDoNotCallNumbersOutcomeCallable CCCClient::listDoNotCallNumbersCallable(const ListDoNotCallNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDoNotCallNumbersOutcome()>>(
			[this, request]()
			{
			return this->listDoNotCallNumbers(request);
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

CCCClient::ListHistoricalSkillGroupReportOutcome CCCClient::listHistoricalSkillGroupReport(const ListHistoricalSkillGroupReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHistoricalSkillGroupReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHistoricalSkillGroupReportOutcome(ListHistoricalSkillGroupReportResult(outcome.result()));
	else
		return ListHistoricalSkillGroupReportOutcome(outcome.error());
}

void CCCClient::listHistoricalSkillGroupReportAsync(const ListHistoricalSkillGroupReportRequest& request, const ListHistoricalSkillGroupReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHistoricalSkillGroupReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListHistoricalSkillGroupReportOutcomeCallable CCCClient::listHistoricalSkillGroupReportCallable(const ListHistoricalSkillGroupReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHistoricalSkillGroupReportOutcome()>>(
			[this, request]()
			{
			return this->listHistoricalSkillGroupReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListInstancesOutcome CCCClient::listInstances(const ListInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOutcome(ListInstancesResult(outcome.result()));
	else
		return ListInstancesOutcome(outcome.error());
}

void CCCClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListInstancesOutcomeCallable CCCClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListInstancesOfUserOutcome CCCClient::listInstancesOfUser(const ListInstancesOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListInstancesOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListInstancesOfUserOutcome(ListInstancesOfUserResult(outcome.result()));
	else
		return ListInstancesOfUserOutcome(outcome.error());
}

void CCCClient::listInstancesOfUserAsync(const ListInstancesOfUserRequest& request, const ListInstancesOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstancesOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListInstancesOfUserOutcomeCallable CCCClient::listInstancesOfUserCallable(const ListInstancesOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOfUserOutcome()>>(
			[this, request]()
			{
			return this->listInstancesOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListIntervalAgentReportOutcome CCCClient::listIntervalAgentReport(const ListIntervalAgentReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntervalAgentReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntervalAgentReportOutcome(ListIntervalAgentReportResult(outcome.result()));
	else
		return ListIntervalAgentReportOutcome(outcome.error());
}

void CCCClient::listIntervalAgentReportAsync(const ListIntervalAgentReportRequest& request, const ListIntervalAgentReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntervalAgentReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListIntervalAgentReportOutcomeCallable CCCClient::listIntervalAgentReportCallable(const ListIntervalAgentReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntervalAgentReportOutcome()>>(
			[this, request]()
			{
			return this->listIntervalAgentReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListIntervalInstanceReportOutcome CCCClient::listIntervalInstanceReport(const ListIntervalInstanceReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntervalInstanceReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntervalInstanceReportOutcome(ListIntervalInstanceReportResult(outcome.result()));
	else
		return ListIntervalInstanceReportOutcome(outcome.error());
}

void CCCClient::listIntervalInstanceReportAsync(const ListIntervalInstanceReportRequest& request, const ListIntervalInstanceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntervalInstanceReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListIntervalInstanceReportOutcomeCallable CCCClient::listIntervalInstanceReportCallable(const ListIntervalInstanceReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntervalInstanceReportOutcome()>>(
			[this, request]()
			{
			return this->listIntervalInstanceReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListIntervalSkillGroupReportOutcome CCCClient::listIntervalSkillGroupReport(const ListIntervalSkillGroupReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntervalSkillGroupReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntervalSkillGroupReportOutcome(ListIntervalSkillGroupReportResult(outcome.result()));
	else
		return ListIntervalSkillGroupReportOutcome(outcome.error());
}

void CCCClient::listIntervalSkillGroupReportAsync(const ListIntervalSkillGroupReportRequest& request, const ListIntervalSkillGroupReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntervalSkillGroupReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListIntervalSkillGroupReportOutcomeCallable CCCClient::listIntervalSkillGroupReportCallable(const ListIntervalSkillGroupReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntervalSkillGroupReportOutcome()>>(
			[this, request]()
			{
			return this->listIntervalSkillGroupReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListIvrTrackingDetailsOutcome CCCClient::listIvrTrackingDetails(const ListIvrTrackingDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIvrTrackingDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIvrTrackingDetailsOutcome(ListIvrTrackingDetailsResult(outcome.result()));
	else
		return ListIvrTrackingDetailsOutcome(outcome.error());
}

void CCCClient::listIvrTrackingDetailsAsync(const ListIvrTrackingDetailsRequest& request, const ListIvrTrackingDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIvrTrackingDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListIvrTrackingDetailsOutcomeCallable CCCClient::listIvrTrackingDetailsCallable(const ListIvrTrackingDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIvrTrackingDetailsOutcome()>>(
			[this, request]()
			{
			return this->listIvrTrackingDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListLegacyAgentEventLogsOutcome CCCClient::listLegacyAgentEventLogs(const ListLegacyAgentEventLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLegacyAgentEventLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLegacyAgentEventLogsOutcome(ListLegacyAgentEventLogsResult(outcome.result()));
	else
		return ListLegacyAgentEventLogsOutcome(outcome.error());
}

void CCCClient::listLegacyAgentEventLogsAsync(const ListLegacyAgentEventLogsRequest& request, const ListLegacyAgentEventLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLegacyAgentEventLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListLegacyAgentEventLogsOutcomeCallable CCCClient::listLegacyAgentEventLogsCallable(const ListLegacyAgentEventLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLegacyAgentEventLogsOutcome()>>(
			[this, request]()
			{
			return this->listLegacyAgentEventLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListLegacyAgentStatusLogsOutcome CCCClient::listLegacyAgentStatusLogs(const ListLegacyAgentStatusLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLegacyAgentStatusLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLegacyAgentStatusLogsOutcome(ListLegacyAgentStatusLogsResult(outcome.result()));
	else
		return ListLegacyAgentStatusLogsOutcome(outcome.error());
}

void CCCClient::listLegacyAgentStatusLogsAsync(const ListLegacyAgentStatusLogsRequest& request, const ListLegacyAgentStatusLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLegacyAgentStatusLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListLegacyAgentStatusLogsOutcomeCallable CCCClient::listLegacyAgentStatusLogsCallable(const ListLegacyAgentStatusLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLegacyAgentStatusLogsOutcome()>>(
			[this, request]()
			{
			return this->listLegacyAgentStatusLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListLegacyAppraiseLogsOutcome CCCClient::listLegacyAppraiseLogs(const ListLegacyAppraiseLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLegacyAppraiseLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLegacyAppraiseLogsOutcome(ListLegacyAppraiseLogsResult(outcome.result()));
	else
		return ListLegacyAppraiseLogsOutcome(outcome.error());
}

void CCCClient::listLegacyAppraiseLogsAsync(const ListLegacyAppraiseLogsRequest& request, const ListLegacyAppraiseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLegacyAppraiseLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListLegacyAppraiseLogsOutcomeCallable CCCClient::listLegacyAppraiseLogsCallable(const ListLegacyAppraiseLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLegacyAppraiseLogsOutcome()>>(
			[this, request]()
			{
			return this->listLegacyAppraiseLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListLegacyQueueEventLogsOutcome CCCClient::listLegacyQueueEventLogs(const ListLegacyQueueEventLogsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLegacyQueueEventLogsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLegacyQueueEventLogsOutcome(ListLegacyQueueEventLogsResult(outcome.result()));
	else
		return ListLegacyQueueEventLogsOutcome(outcome.error());
}

void CCCClient::listLegacyQueueEventLogsAsync(const ListLegacyQueueEventLogsRequest& request, const ListLegacyQueueEventLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLegacyQueueEventLogs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListLegacyQueueEventLogsOutcomeCallable CCCClient::listLegacyQueueEventLogsCallable(const ListLegacyQueueEventLogsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLegacyQueueEventLogsOutcome()>>(
			[this, request]()
			{
			return this->listLegacyQueueEventLogs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListMonoRecordingsOutcome CCCClient::listMonoRecordings(const ListMonoRecordingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMonoRecordingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMonoRecordingsOutcome(ListMonoRecordingsResult(outcome.result()));
	else
		return ListMonoRecordingsOutcome(outcome.error());
}

void CCCClient::listMonoRecordingsAsync(const ListMonoRecordingsRequest& request, const ListMonoRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMonoRecordings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListMonoRecordingsOutcomeCallable CCCClient::listMonoRecordingsCallable(const ListMonoRecordingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMonoRecordingsOutcome()>>(
			[this, request]()
			{
			return this->listMonoRecordings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListMultiChannelRecordingsOutcome CCCClient::listMultiChannelRecordings(const ListMultiChannelRecordingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMultiChannelRecordingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMultiChannelRecordingsOutcome(ListMultiChannelRecordingsResult(outcome.result()));
	else
		return ListMultiChannelRecordingsOutcome(outcome.error());
}

void CCCClient::listMultiChannelRecordingsAsync(const ListMultiChannelRecordingsRequest& request, const ListMultiChannelRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMultiChannelRecordings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListMultiChannelRecordingsOutcomeCallable CCCClient::listMultiChannelRecordingsCallable(const ListMultiChannelRecordingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMultiChannelRecordingsOutcome()>>(
			[this, request]()
			{
			return this->listMultiChannelRecordings(request);
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

CCCClient::ListPersonalNumbersOfUserOutcome CCCClient::listPersonalNumbersOfUser(const ListPersonalNumbersOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPersonalNumbersOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPersonalNumbersOfUserOutcome(ListPersonalNumbersOfUserResult(outcome.result()));
	else
		return ListPersonalNumbersOfUserOutcome(outcome.error());
}

void CCCClient::listPersonalNumbersOfUserAsync(const ListPersonalNumbersOfUserRequest& request, const ListPersonalNumbersOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPersonalNumbersOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPersonalNumbersOfUserOutcomeCallable CCCClient::listPersonalNumbersOfUserCallable(const ListPersonalNumbersOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPersonalNumbersOfUserOutcome()>>(
			[this, request]()
			{
			return this->listPersonalNumbersOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPhoneNumbersOutcome CCCClient::listPhoneNumbers(const ListPhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPhoneNumbersOutcome(ListPhoneNumbersResult(outcome.result()));
	else
		return ListPhoneNumbersOutcome(outcome.error());
}

void CCCClient::listPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPhoneNumbersOutcomeCallable CCCClient::listPhoneNumbersCallable(const ListPhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->listPhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPhoneNumbersOfSkillGroupOutcome CCCClient::listPhoneNumbersOfSkillGroup(const ListPhoneNumbersOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPhoneNumbersOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPhoneNumbersOfSkillGroupOutcome(ListPhoneNumbersOfSkillGroupResult(outcome.result()));
	else
		return ListPhoneNumbersOfSkillGroupOutcome(outcome.error());
}

void CCCClient::listPhoneNumbersOfSkillGroupAsync(const ListPhoneNumbersOfSkillGroupRequest& request, const ListPhoneNumbersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPhoneNumbersOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPhoneNumbersOfSkillGroupOutcomeCallable CCCClient::listPhoneNumbersOfSkillGroupCallable(const ListPhoneNumbersOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPhoneNumbersOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listPhoneNumbersOfSkillGroup(request);
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

CCCClient::ListRamUsersOutcome CCCClient::listRamUsers(const ListRamUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRamUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRamUsersOutcome(ListRamUsersResult(outcome.result()));
	else
		return ListRamUsersOutcome(outcome.error());
}

void CCCClient::listRamUsersAsync(const ListRamUsersRequest& request, const ListRamUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRamUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRamUsersOutcomeCallable CCCClient::listRamUsersCallable(const ListRamUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRamUsersOutcome()>>(
			[this, request]()
			{
			return this->listRamUsers(request);
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

CCCClient::ListRealtimeSkillGroupStatesOutcome CCCClient::listRealtimeSkillGroupStates(const ListRealtimeSkillGroupStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealtimeSkillGroupStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealtimeSkillGroupStatesOutcome(ListRealtimeSkillGroupStatesResult(outcome.result()));
	else
		return ListRealtimeSkillGroupStatesOutcome(outcome.error());
}

void CCCClient::listRealtimeSkillGroupStatesAsync(const ListRealtimeSkillGroupStatesRequest& request, const ListRealtimeSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealtimeSkillGroupStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRealtimeSkillGroupStatesOutcomeCallable CCCClient::listRealtimeSkillGroupStatesCallable(const ListRealtimeSkillGroupStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealtimeSkillGroupStatesOutcome()>>(
			[this, request]()
			{
			return this->listRealtimeSkillGroupStates(request);
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

CCCClient::ListRolesOutcome CCCClient::listRoles(const ListRolesRequest &request) const
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

void CCCClient::listRolesAsync(const ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRolesOutcomeCallable CCCClient::listRolesCallable(const ListRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRolesOutcome()>>(
			[this, request]()
			{
			return this->listRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupStatesOutcome CCCClient::listSkillGroupStates(const ListSkillGroupStatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupStatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupStatesOutcome(ListSkillGroupStatesResult(outcome.result()));
	else
		return ListSkillGroupStatesOutcome(outcome.error());
}

void CCCClient::listSkillGroupStatesAsync(const ListSkillGroupStatesRequest& request, const ListSkillGroupStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupStates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupStatesOutcomeCallable CCCClient::listSkillGroupStatesCallable(const ListSkillGroupStatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupStatesOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupStates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupSummaryReportsSinceMidnightOutcome CCCClient::listSkillGroupSummaryReportsSinceMidnight(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(ListSkillGroupSummaryReportsSinceMidnightResult(outcome.result()));
	else
		return ListSkillGroupSummaryReportsSinceMidnightOutcome(outcome.error());
}

void CCCClient::listSkillGroupSummaryReportsSinceMidnightAsync(const ListSkillGroupSummaryReportsSinceMidnightRequest& request, const ListSkillGroupSummaryReportsSinceMidnightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupSummaryReportsSinceMidnight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupSummaryReportsSinceMidnightOutcomeCallable CCCClient::listSkillGroupSummaryReportsSinceMidnightCallable(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupSummaryReportsSinceMidnightOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupSummaryReportsSinceMidnight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSkillGroupsOutcome CCCClient::listSkillGroups(const ListSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupsOutcome(ListSkillGroupsResult(outcome.result()));
	else
		return ListSkillGroupsOutcome(outcome.error());
}

void CCCClient::listSkillGroupsAsync(const ListSkillGroupsRequest& request, const ListSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupsOutcomeCallable CCCClient::listSkillGroupsCallable(const ListSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroups(request);
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

CCCClient::ListUnassignedNumbersOutcome CCCClient::listUnassignedNumbers(const ListUnassignedNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUnassignedNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUnassignedNumbersOutcome(ListUnassignedNumbersResult(outcome.result()));
	else
		return ListUnassignedNumbersOutcome(outcome.error());
}

void CCCClient::listUnassignedNumbersAsync(const ListUnassignedNumbersRequest& request, const ListUnassignedNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnassignedNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUnassignedNumbersOutcomeCallable CCCClient::listUnassignedNumbersCallable(const ListUnassignedNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnassignedNumbersOutcome()>>(
			[this, request]()
			{
			return this->listUnassignedNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUserLevelsOfSkillGroupOutcome CCCClient::listUserLevelsOfSkillGroup(const ListUserLevelsOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserLevelsOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserLevelsOfSkillGroupOutcome(ListUserLevelsOfSkillGroupResult(outcome.result()));
	else
		return ListUserLevelsOfSkillGroupOutcome(outcome.error());
}

void CCCClient::listUserLevelsOfSkillGroupAsync(const ListUserLevelsOfSkillGroupRequest& request, const ListUserLevelsOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserLevelsOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUserLevelsOfSkillGroupOutcomeCallable CCCClient::listUserLevelsOfSkillGroupCallable(const ListUserLevelsOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserLevelsOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listUserLevelsOfSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUsersOutcome CCCClient::listUsers(const ListUsersRequest &request) const
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

void CCCClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUsersOutcomeCallable CCCClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
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

CCCClient::ModifyAudioFileOutcome CCCClient::modifyAudioFile(const ModifyAudioFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAudioFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAudioFileOutcome(ModifyAudioFileResult(outcome.result()));
	else
		return ModifyAudioFileOutcome(outcome.error());
}

void CCCClient::modifyAudioFileAsync(const ModifyAudioFileRequest& request, const ModifyAudioFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAudioFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyAudioFileOutcomeCallable CCCClient::modifyAudioFileCallable(const ModifyAudioFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAudioFileOutcome()>>(
			[this, request]()
			{
			return this->modifyAudioFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyCustomCallTaggingOutcome CCCClient::modifyCustomCallTagging(const ModifyCustomCallTaggingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustomCallTaggingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustomCallTaggingOutcome(ModifyCustomCallTaggingResult(outcome.result()));
	else
		return ModifyCustomCallTaggingOutcome(outcome.error());
}

void CCCClient::modifyCustomCallTaggingAsync(const ModifyCustomCallTaggingRequest& request, const ModifyCustomCallTaggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustomCallTagging(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyCustomCallTaggingOutcomeCallable CCCClient::modifyCustomCallTaggingCallable(const ModifyCustomCallTaggingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustomCallTaggingOutcome()>>(
			[this, request]()
			{
			return this->modifyCustomCallTagging(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyInstanceOutcome CCCClient::modifyInstance(const ModifyInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyInstanceOutcome(ModifyInstanceResult(outcome.result()));
	else
		return ModifyInstanceOutcome(outcome.error());
}

void CCCClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyInstanceOutcomeCallable CCCClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyPhoneNumberOutcome CCCClient::modifyPhoneNumber(const ModifyPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhoneNumberOutcome(ModifyPhoneNumberResult(outcome.result()));
	else
		return ModifyPhoneNumberOutcome(outcome.error());
}

void CCCClient::modifyPhoneNumberAsync(const ModifyPhoneNumberRequest& request, const ModifyPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyPhoneNumberOutcomeCallable CCCClient::modifyPhoneNumberCallable(const ModifyPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->modifyPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySkillGroupOutcome CCCClient::modifySkillGroup(const ModifySkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySkillGroupOutcome(ModifySkillGroupResult(outcome.result()));
	else
		return ModifySkillGroupOutcome(outcome.error());
}

void CCCClient::modifySkillGroupAsync(const ModifySkillGroupRequest& request, const ModifySkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySkillGroupOutcomeCallable CCCClient::modifySkillGroupCallable(const ModifySkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySkillGroupOutcome()>>(
			[this, request]()
			{
			return this->modifySkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySkillLevelsOfUserOutcome CCCClient::modifySkillLevelsOfUser(const ModifySkillLevelsOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySkillLevelsOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySkillLevelsOfUserOutcome(ModifySkillLevelsOfUserResult(outcome.result()));
	else
		return ModifySkillLevelsOfUserOutcome(outcome.error());
}

void CCCClient::modifySkillLevelsOfUserAsync(const ModifySkillLevelsOfUserRequest& request, const ModifySkillLevelsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySkillLevelsOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySkillLevelsOfUserOutcomeCallable CCCClient::modifySkillLevelsOfUserCallable(const ModifySkillLevelsOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySkillLevelsOfUserOutcome()>>(
			[this, request]()
			{
			return this->modifySkillLevelsOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyUserOutcome CCCClient::modifyUser(const ModifyUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserOutcome(ModifyUserResult(outcome.result()));
	else
		return ModifyUserOutcome(outcome.error());
}

void CCCClient::modifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyUserOutcomeCallable CCCClient::modifyUserCallable(const ModifyUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
			[this, request]()
			{
			return this->modifyUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyUserLevelsOfSkillGroupOutcome CCCClient::modifyUserLevelsOfSkillGroup(const ModifyUserLevelsOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUserLevelsOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUserLevelsOfSkillGroupOutcome(ModifyUserLevelsOfSkillGroupResult(outcome.result()));
	else
		return ModifyUserLevelsOfSkillGroupOutcome(outcome.error());
}

void CCCClient::modifyUserLevelsOfSkillGroupAsync(const ModifyUserLevelsOfSkillGroupRequest& request, const ModifyUserLevelsOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUserLevelsOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyUserLevelsOfSkillGroupOutcomeCallable CCCClient::modifyUserLevelsOfSkillGroupCallable(const ModifyUserLevelsOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUserLevelsOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyUserLevelsOfSkillGroup(request);
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

CCCClient::PauseCampaignOutcome CCCClient::pauseCampaign(const PauseCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PauseCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PauseCampaignOutcome(PauseCampaignResult(outcome.result()));
	else
		return PauseCampaignOutcome(outcome.error());
}

void CCCClient::pauseCampaignAsync(const PauseCampaignRequest& request, const PauseCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pauseCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PauseCampaignOutcomeCallable CCCClient::pauseCampaignCallable(const PauseCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PauseCampaignOutcome()>>(
			[this, request]()
			{
			return this->pauseCampaign(request);
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

CCCClient::PublishContactFlowOutcome CCCClient::publishContactFlow(const PublishContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishContactFlowOutcome(PublishContactFlowResult(outcome.result()));
	else
		return PublishContactFlowOutcome(outcome.error());
}

void CCCClient::publishContactFlowAsync(const PublishContactFlowRequest& request, const PublishContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PublishContactFlowOutcomeCallable CCCClient::publishContactFlowCallable(const PublishContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishContactFlowOutcome()>>(
			[this, request]()
			{
			return this->publishContactFlow(request);
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

CCCClient::RedialCallOutcome CCCClient::redialCall(const RedialCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RedialCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RedialCallOutcome(RedialCallResult(outcome.result()));
	else
		return RedialCallOutcome(outcome.error());
}

void CCCClient::redialCallAsync(const RedialCallRequest& request, const RedialCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, redialCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RedialCallOutcomeCallable CCCClient::redialCallCallable(const RedialCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RedialCallOutcome()>>(
			[this, request]()
			{
			return this->redialCall(request);
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

CCCClient::RegisterDevicesOutcome CCCClient::registerDevices(const RegisterDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RegisterDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RegisterDevicesOutcome(RegisterDevicesResult(outcome.result()));
	else
		return RegisterDevicesOutcome(outcome.error());
}

void CCCClient::registerDevicesAsync(const RegisterDevicesRequest& request, const RegisterDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, registerDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RegisterDevicesOutcomeCallable CCCClient::registerDevicesCallable(const RegisterDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RegisterDevicesOutcome()>>(
			[this, request]()
			{
			return this->registerDevices(request);
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

CCCClient::RemoveDoNotCallNumbersOutcome CCCClient::removeDoNotCallNumbers(const RemoveDoNotCallNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveDoNotCallNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveDoNotCallNumbersOutcome(RemoveDoNotCallNumbersResult(outcome.result()));
	else
		return RemoveDoNotCallNumbersOutcome(outcome.error());
}

void CCCClient::removeDoNotCallNumbersAsync(const RemoveDoNotCallNumbersRequest& request, const RemoveDoNotCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeDoNotCallNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveDoNotCallNumbersOutcomeCallable CCCClient::removeDoNotCallNumbersCallable(const RemoveDoNotCallNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveDoNotCallNumbersOutcome()>>(
			[this, request]()
			{
			return this->removeDoNotCallNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePersonalNumbersFromUserOutcome CCCClient::removePersonalNumbersFromUser(const RemovePersonalNumbersFromUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePersonalNumbersFromUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePersonalNumbersFromUserOutcome(RemovePersonalNumbersFromUserResult(outcome.result()));
	else
		return RemovePersonalNumbersFromUserOutcome(outcome.error());
}

void CCCClient::removePersonalNumbersFromUserAsync(const RemovePersonalNumbersFromUserRequest& request, const RemovePersonalNumbersFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePersonalNumbersFromUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePersonalNumbersFromUserOutcomeCallable CCCClient::removePersonalNumbersFromUserCallable(const RemovePersonalNumbersFromUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePersonalNumbersFromUserOutcome()>>(
			[this, request]()
			{
			return this->removePersonalNumbersFromUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePhoneNumberFromSkillGroupsOutcome CCCClient::removePhoneNumberFromSkillGroups(const RemovePhoneNumberFromSkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePhoneNumberFromSkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePhoneNumberFromSkillGroupsOutcome(RemovePhoneNumberFromSkillGroupsResult(outcome.result()));
	else
		return RemovePhoneNumberFromSkillGroupsOutcome(outcome.error());
}

void CCCClient::removePhoneNumberFromSkillGroupsAsync(const RemovePhoneNumberFromSkillGroupsRequest& request, const RemovePhoneNumberFromSkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePhoneNumberFromSkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePhoneNumberFromSkillGroupsOutcomeCallable CCCClient::removePhoneNumberFromSkillGroupsCallable(const RemovePhoneNumberFromSkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePhoneNumberFromSkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->removePhoneNumberFromSkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePhoneNumbersOutcome CCCClient::removePhoneNumbers(const RemovePhoneNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePhoneNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePhoneNumbersOutcome(RemovePhoneNumbersResult(outcome.result()));
	else
		return RemovePhoneNumbersOutcome(outcome.error());
}

void CCCClient::removePhoneNumbersAsync(const RemovePhoneNumbersRequest& request, const RemovePhoneNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePhoneNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePhoneNumbersOutcomeCallable CCCClient::removePhoneNumbersCallable(const RemovePhoneNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePhoneNumbersOutcome()>>(
			[this, request]()
			{
			return this->removePhoneNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePhoneNumbersFromSkillGroupOutcome CCCClient::removePhoneNumbersFromSkillGroup(const RemovePhoneNumbersFromSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePhoneNumbersFromSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePhoneNumbersFromSkillGroupOutcome(RemovePhoneNumbersFromSkillGroupResult(outcome.result()));
	else
		return RemovePhoneNumbersFromSkillGroupOutcome(outcome.error());
}

void CCCClient::removePhoneNumbersFromSkillGroupAsync(const RemovePhoneNumbersFromSkillGroupRequest& request, const RemovePhoneNumbersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePhoneNumbersFromSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePhoneNumbersFromSkillGroupOutcomeCallable CCCClient::removePhoneNumbersFromSkillGroupCallable(const RemovePhoneNumbersFromSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePhoneNumbersFromSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->removePhoneNumbersFromSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemoveSkillGroupsFromUserOutcome CCCClient::removeSkillGroupsFromUser(const RemoveSkillGroupsFromUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSkillGroupsFromUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSkillGroupsFromUserOutcome(RemoveSkillGroupsFromUserResult(outcome.result()));
	else
		return RemoveSkillGroupsFromUserOutcome(outcome.error());
}

void CCCClient::removeSkillGroupsFromUserAsync(const RemoveSkillGroupsFromUserRequest& request, const RemoveSkillGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSkillGroupsFromUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveSkillGroupsFromUserOutcomeCallable CCCClient::removeSkillGroupsFromUserCallable(const RemoveSkillGroupsFromUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSkillGroupsFromUserOutcome()>>(
			[this, request]()
			{
			return this->removeSkillGroupsFromUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemoveUsersOutcome CCCClient::removeUsers(const RemoveUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersOutcome(RemoveUsersResult(outcome.result()));
	else
		return RemoveUsersOutcome(outcome.error());
}

void CCCClient::removeUsersAsync(const RemoveUsersRequest& request, const RemoveUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveUsersOutcomeCallable CCCClient::removeUsersCallable(const RemoveUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersOutcome()>>(
			[this, request]()
			{
			return this->removeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemoveUsersFromSkillGroupOutcome CCCClient::removeUsersFromSkillGroup(const RemoveUsersFromSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveUsersFromSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveUsersFromSkillGroupOutcome(RemoveUsersFromSkillGroupResult(outcome.result()));
	else
		return RemoveUsersFromSkillGroupOutcome(outcome.error());
}

void CCCClient::removeUsersFromSkillGroupAsync(const RemoveUsersFromSkillGroupRequest& request, const RemoveUsersFromSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeUsersFromSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemoveUsersFromSkillGroupOutcomeCallable CCCClient::removeUsersFromSkillGroupCallable(const RemoveUsersFromSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveUsersFromSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->removeUsersFromSkillGroup(request);
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

CCCClient::ResetUserPasswordOutcome CCCClient::resetUserPassword(const ResetUserPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetUserPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetUserPasswordOutcome(ResetUserPasswordResult(outcome.result()));
	else
		return ResetUserPasswordOutcome(outcome.error());
}

void CCCClient::resetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetUserPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResetUserPasswordOutcomeCallable CCCClient::resetUserPasswordCallable(const ResetUserPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetUserPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetUserPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RestoreArchivedRecordingsOutcome CCCClient::restoreArchivedRecordings(const RestoreArchivedRecordingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreArchivedRecordingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreArchivedRecordingsOutcome(RestoreArchivedRecordingsResult(outcome.result()));
	else
		return RestoreArchivedRecordingsOutcome(outcome.error());
}

void CCCClient::restoreArchivedRecordingsAsync(const RestoreArchivedRecordingsRequest& request, const RestoreArchivedRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreArchivedRecordings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RestoreArchivedRecordingsOutcomeCallable CCCClient::restoreArchivedRecordingsCallable(const RestoreArchivedRecordingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreArchivedRecordingsOutcome()>>(
			[this, request]()
			{
			return this->restoreArchivedRecordings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResumeCampaignOutcome CCCClient::resumeCampaign(const ResumeCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeCampaignOutcome(ResumeCampaignResult(outcome.result()));
	else
		return ResumeCampaignOutcome(outcome.error());
}

void CCCClient::resumeCampaignAsync(const ResumeCampaignRequest& request, const ResumeCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResumeCampaignOutcomeCallable CCCClient::resumeCampaignCallable(const ResumeCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeCampaignOutcome()>>(
			[this, request]()
			{
			return this->resumeCampaign(request);
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

CCCClient::SaveRTCStatsV2Outcome CCCClient::saveRTCStatsV2(const SaveRTCStatsV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveRTCStatsV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveRTCStatsV2Outcome(SaveRTCStatsV2Result(outcome.result()));
	else
		return SaveRTCStatsV2Outcome(outcome.error());
}

void CCCClient::saveRTCStatsV2Async(const SaveRTCStatsV2Request& request, const SaveRTCStatsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveRTCStatsV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SaveRTCStatsV2OutcomeCallable CCCClient::saveRTCStatsV2Callable(const SaveRTCStatsV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveRTCStatsV2Outcome()>>(
			[this, request]()
			{
			return this->saveRTCStatsV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SaveTerminalLogOutcome CCCClient::saveTerminalLog(const SaveTerminalLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveTerminalLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveTerminalLogOutcome(SaveTerminalLogResult(outcome.result()));
	else
		return SaveTerminalLogOutcome(outcome.error());
}

void CCCClient::saveTerminalLogAsync(const SaveTerminalLogRequest& request, const SaveTerminalLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveTerminalLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SaveTerminalLogOutcomeCallable CCCClient::saveTerminalLogCallable(const SaveTerminalLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveTerminalLogOutcome()>>(
			[this, request]()
			{
			return this->saveTerminalLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SaveWebRTCStatsOutcome CCCClient::saveWebRTCStats(const SaveWebRTCStatsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveWebRTCStatsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveWebRTCStatsOutcome(SaveWebRTCStatsResult(outcome.result()));
	else
		return SaveWebRTCStatsOutcome(outcome.error());
}

void CCCClient::saveWebRTCStatsAsync(const SaveWebRTCStatsRequest& request, const SaveWebRTCStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveWebRTCStats(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SaveWebRTCStatsOutcomeCallable CCCClient::saveWebRTCStatsCallable(const SaveWebRTCStatsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveWebRTCStatsOutcome()>>(
			[this, request]()
			{
			return this->saveWebRTCStats(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SaveWebRtcInfoOutcome CCCClient::saveWebRtcInfo(const SaveWebRtcInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveWebRtcInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveWebRtcInfoOutcome(SaveWebRtcInfoResult(outcome.result()));
	else
		return SaveWebRtcInfoOutcome(outcome.error());
}

void CCCClient::saveWebRtcInfoAsync(const SaveWebRtcInfoRequest& request, const SaveWebRtcInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveWebRtcInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SaveWebRtcInfoOutcomeCallable CCCClient::saveWebRtcInfoCallable(const SaveWebRtcInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveWebRtcInfoOutcome()>>(
			[this, request]()
			{
			return this->saveWebRtcInfo(request);
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

CCCClient::StartBack2BackCallOutcome CCCClient::startBack2BackCall(const StartBack2BackCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartBack2BackCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartBack2BackCallOutcome(StartBack2BackCallResult(outcome.result()));
	else
		return StartBack2BackCallOutcome(outcome.error());
}

void CCCClient::startBack2BackCallAsync(const StartBack2BackCallRequest& request, const StartBack2BackCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startBack2BackCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartBack2BackCallOutcomeCallable CCCClient::startBack2BackCallCallable(const StartBack2BackCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartBack2BackCallOutcome()>>(
			[this, request]()
			{
			return this->startBack2BackCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartConferenceOutcome CCCClient::startConference(const StartConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartConferenceOutcome(StartConferenceResult(outcome.result()));
	else
		return StartConferenceOutcome(outcome.error());
}

void CCCClient::startConferenceAsync(const StartConferenceRequest& request, const StartConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartConferenceOutcomeCallable CCCClient::startConferenceCallable(const StartConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartConferenceOutcome()>>(
			[this, request]()
			{
			return this->startConference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartEditContactFlowOutcome CCCClient::startEditContactFlow(const StartEditContactFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartEditContactFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartEditContactFlowOutcome(StartEditContactFlowResult(outcome.result()));
	else
		return StartEditContactFlowOutcome(outcome.error());
}

void CCCClient::startEditContactFlowAsync(const StartEditContactFlowRequest& request, const StartEditContactFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startEditContactFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartEditContactFlowOutcomeCallable CCCClient::startEditContactFlowCallable(const StartEditContactFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartEditContactFlowOutcome()>>(
			[this, request]()
			{
			return this->startEditContactFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartPredictiveCallOutcome CCCClient::startPredictiveCall(const StartPredictiveCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPredictiveCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPredictiveCallOutcome(StartPredictiveCallResult(outcome.result()));
	else
		return StartPredictiveCallOutcome(outcome.error());
}

void CCCClient::startPredictiveCallAsync(const StartPredictiveCallRequest& request, const StartPredictiveCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPredictiveCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartPredictiveCallOutcomeCallable CCCClient::startPredictiveCallCallable(const StartPredictiveCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPredictiveCallOutcome()>>(
			[this, request]()
			{
			return this->startPredictiveCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartPrivacyCallOutcome CCCClient::startPrivacyCall(const StartPrivacyCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPrivacyCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPrivacyCallOutcome(StartPrivacyCallResult(outcome.result()));
	else
		return StartPrivacyCallOutcome(outcome.error());
}

void CCCClient::startPrivacyCallAsync(const StartPrivacyCallRequest& request, const StartPrivacyCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPrivacyCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartPrivacyCallOutcomeCallable CCCClient::startPrivacyCallCallable(const StartPrivacyCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPrivacyCallOutcome()>>(
			[this, request]()
			{
			return this->startPrivacyCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SubmitCampaignOutcome CCCClient::submitCampaign(const SubmitCampaignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitCampaignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitCampaignOutcome(SubmitCampaignResult(outcome.result()));
	else
		return SubmitCampaignOutcome(outcome.error());
}

void CCCClient::submitCampaignAsync(const SubmitCampaignRequest& request, const SubmitCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitCampaign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SubmitCampaignOutcomeCallable CCCClient::submitCampaignCallable(const SubmitCampaignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitCampaignOutcome()>>(
			[this, request]()
			{
			return this->submitCampaign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SwitchToConferenceOutcome CCCClient::switchToConference(const SwitchToConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SwitchToConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SwitchToConferenceOutcome(SwitchToConferenceResult(outcome.result()));
	else
		return SwitchToConferenceOutcome(outcome.error());
}

void CCCClient::switchToConferenceAsync(const SwitchToConferenceRequest& request, const SwitchToConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, switchToConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SwitchToConferenceOutcomeCallable CCCClient::switchToConferenceCallable(const SwitchToConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SwitchToConferenceOutcome()>>(
			[this, request]()
			{
			return this->switchToConference(request);
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

CCCClient::UnregisterDeviceOutcome CCCClient::unregisterDevice(const UnregisterDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnregisterDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnregisterDeviceOutcome(UnregisterDeviceResult(outcome.result()));
	else
		return UnregisterDeviceOutcome(outcome.error());
}

void CCCClient::unregisterDeviceAsync(const UnregisterDeviceRequest& request, const UnregisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unregisterDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::UnregisterDeviceOutcomeCallable CCCClient::unregisterDeviceCallable(const UnregisterDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnregisterDeviceOutcome()>>(
			[this, request]()
			{
			return this->unregisterDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::UpdateConfigItemsOutcome CCCClient::updateConfigItems(const UpdateConfigItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigItemsOutcome(UpdateConfigItemsResult(outcome.result()));
	else
		return UpdateConfigItemsOutcome(outcome.error());
}

void CCCClient::updateConfigItemsAsync(const UpdateConfigItemsRequest& request, const UpdateConfigItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfigItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::UpdateConfigItemsOutcomeCallable CCCClient::updateConfigItemsCallable(const UpdateConfigItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigItemsOutcome()>>(
			[this, request]()
			{
			return this->updateConfigItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

