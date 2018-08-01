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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccc");
}

CCCClient::CCCClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccc");
}

CCCClient::CCCClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ccc");
}

CCCClient::~CCCClient()
{}

CCCClient::GetJobListOutcome CCCClient::getJobList(const GetJobListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobListOutcome(GetJobListResult(outcome.result()));
	else
		return GetJobListOutcome(outcome.error());
}

void CCCClient::getJobListAsync(const GetJobListRequest& request, const GetJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobListOutcomeCallable CCCClient::getJobListCallable(const GetJobListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobListOutcome()>>(
			[this, request]()
			{
			return this->getJobList(request);
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

CCCClient::ListSkillGroupsOfUserOutcome CCCClient::listSkillGroupsOfUser(const ListSkillGroupsOfUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupsOfUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupsOfUserOutcome(ListSkillGroupsOfUserResult(outcome.result()));
	else
		return ListSkillGroupsOfUserOutcome(outcome.error());
}

void CCCClient::listSkillGroupsOfUserAsync(const ListSkillGroupsOfUserRequest& request, const ListSkillGroupsOfUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroupsOfUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSkillGroupsOfUserOutcomeCallable CCCClient::listSkillGroupsOfUserCallable(const ListSkillGroupsOfUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupsOfUserOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroupsOfUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::TwoPartiesCallOutcome CCCClient::twoPartiesCall(const TwoPartiesCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TwoPartiesCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TwoPartiesCallOutcome(TwoPartiesCallResult(outcome.result()));
	else
		return TwoPartiesCallOutcome(outcome.error());
}

void CCCClient::twoPartiesCallAsync(const TwoPartiesCallRequest& request, const TwoPartiesCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, twoPartiesCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::TwoPartiesCallOutcomeCallable CCCClient::twoPartiesCallCallable(const TwoPartiesCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TwoPartiesCallOutcome()>>(
			[this, request]()
			{
			return this->twoPartiesCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DeleteSurveyOutcome CCCClient::deleteSurvey(const DeleteSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSurveyOutcome(DeleteSurveyResult(outcome.result()));
	else
		return DeleteSurveyOutcome(outcome.error());
}

void CCCClient::deleteSurveyAsync(const DeleteSurveyRequest& request, const DeleteSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteSurveyOutcomeCallable CCCClient::deleteSurveyCallable(const DeleteSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSurveyOutcome()>>(
			[this, request]()
			{
			return this->deleteSurvey(request);
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

CCCClient::DownloadUnreachableContactsOutcome CCCClient::downloadUnreachableContacts(const DownloadUnreachableContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadUnreachableContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadUnreachableContactsOutcome(DownloadUnreachableContactsResult(outcome.result()));
	else
		return DownloadUnreachableContactsOutcome(outcome.error());
}

void CCCClient::downloadUnreachableContactsAsync(const DownloadUnreachableContactsRequest& request, const DownloadUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadUnreachableContactsOutcomeCallable CCCClient::downloadUnreachableContactsCallable(const DownloadUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->downloadUnreachableContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DialogueOutcome CCCClient::dialogue(const DialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DialogueOutcome(DialogueResult(outcome.result()));
	else
		return DialogueOutcome(outcome.error());
}

void CCCClient::dialogueAsync(const DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DialogueOutcomeCallable CCCClient::dialogueCallable(const DialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialogueOutcome()>>(
			[this, request]()
			{
			return this->dialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RefreshTokenOutcome CCCClient::refreshToken(const RefreshTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RefreshTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RefreshTokenOutcome(RefreshTokenResult(outcome.result()));
	else
		return RefreshTokenOutcome(outcome.error());
}

void CCCClient::refreshTokenAsync(const RefreshTokenRequest& request, const RefreshTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, refreshToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RefreshTokenOutcomeCallable CCCClient::refreshTokenCallable(const RefreshTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RefreshTokenOutcome()>>(
			[this, request]()
			{
			return this->refreshToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateBatchJobsOutcome CCCClient::createBatchJobs(const CreateBatchJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBatchJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBatchJobsOutcome(CreateBatchJobsResult(outcome.result()));
	else
		return CreateBatchJobsOutcome(outcome.error());
}

void CCCClient::createBatchJobsAsync(const CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateBatchJobsOutcomeCallable CCCClient::createBatchJobsCallable(const CreateBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->createBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RequestLoginInfoOutcome CCCClient::requestLoginInfo(const RequestLoginInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RequestLoginInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RequestLoginInfoOutcome(RequestLoginInfoResult(outcome.result()));
	else
		return RequestLoginInfoOutcome(outcome.error());
}

void CCCClient::requestLoginInfoAsync(const RequestLoginInfoRequest& request, const RequestLoginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, requestLoginInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RequestLoginInfoOutcomeCallable CCCClient::requestLoginInfoCallable(const RequestLoginInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RequestLoginInfoOutcome()>>(
			[this, request]()
			{
			return this->requestLoginInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobTemplateDownloadParamsOutcome CCCClient::getJobTemplateDownloadParams(const GetJobTemplateDownloadParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobTemplateDownloadParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobTemplateDownloadParamsOutcome(GetJobTemplateDownloadParamsResult(outcome.result()));
	else
		return GetJobTemplateDownloadParamsOutcome(outcome.error());
}

void CCCClient::getJobTemplateDownloadParamsAsync(const GetJobTemplateDownloadParamsRequest& request, const GetJobTemplateDownloadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobTemplateDownloadParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobTemplateDownloadParamsOutcomeCallable CCCClient::getJobTemplateDownloadParamsCallable(const GetJobTemplateDownloadParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobTemplateDownloadParamsOutcome()>>(
			[this, request]()
			{
			return this->getJobTemplateDownloadParams(request);
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

CCCClient::CancelPredictiveJobsOutcome CCCClient::cancelPredictiveJobs(const CancelPredictiveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPredictiveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPredictiveJobsOutcome(CancelPredictiveJobsResult(outcome.result()));
	else
		return CancelPredictiveJobsOutcome(outcome.error());
}

void CCCClient::cancelPredictiveJobsAsync(const CancelPredictiveJobsRequest& request, const CancelPredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPredictiveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CancelPredictiveJobsOutcomeCallable CCCClient::cancelPredictiveJobsCallable(const CancelPredictiveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPredictiveJobsOutcome()>>(
			[this, request]()
			{
			return this->cancelPredictiveJobs(request);
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

CCCClient::PublishSurveyOutcome CCCClient::publishSurvey(const PublishSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishSurveyOutcome(PublishSurveyResult(outcome.result()));
	else
		return PublishSurveyOutcome(outcome.error());
}

void CCCClient::publishSurveyAsync(const PublishSurveyRequest& request, const PublishSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PublishSurveyOutcomeCallable CCCClient::publishSurveyCallable(const PublishSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishSurveyOutcome()>>(
			[this, request]()
			{
			return this->publishSurvey(request);
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

CCCClient::GetConversationListOutcome CCCClient::getConversationList(const GetConversationListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConversationListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConversationListOutcome(GetConversationListResult(outcome.result()));
	else
		return GetConversationListOutcome(outcome.error());
}

void CCCClient::getConversationListAsync(const GetConversationListRequest& request, const GetConversationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConversationList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConversationListOutcomeCallable CCCClient::getConversationListCallable(const GetConversationListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConversationListOutcome()>>(
			[this, request]()
			{
			return this->getConversationList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUsersOfSkillGroupOutcome CCCClient::listUsersOfSkillGroup(const ListUsersOfSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUsersOfSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUsersOfSkillGroupOutcome(ListUsersOfSkillGroupResult(outcome.result()));
	else
		return ListUsersOfSkillGroupOutcome(outcome.error());
}

void CCCClient::listUsersOfSkillGroupAsync(const ListUsersOfSkillGroupRequest& request, const ListUsersOfSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsersOfSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUsersOfSkillGroupOutcomeCallable CCCClient::listUsersOfSkillGroupCallable(const ListUsersOfSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOfSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listUsersOfSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobsByGroupOutcome CCCClient::listJobsByGroup(const ListJobsByGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsByGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsByGroupOutcome(ListJobsByGroupResult(outcome.result()));
	else
		return ListJobsByGroupOutcome(outcome.error());
}

void CCCClient::listJobsByGroupAsync(const ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobsByGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobsByGroupOutcomeCallable CCCClient::listJobsByGroupCallable(const ListJobsByGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsByGroupOutcome()>>(
			[this, request]()
			{
			return this->listJobsByGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListPredictiveJobStatusOutcome CCCClient::listPredictiveJobStatus(const ListPredictiveJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPredictiveJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPredictiveJobStatusOutcome(ListPredictiveJobStatusResult(outcome.result()));
	else
		return ListPredictiveJobStatusOutcome(outcome.error());
}

void CCCClient::listPredictiveJobStatusAsync(const ListPredictiveJobStatusRequest& request, const ListPredictiveJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPredictiveJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListPredictiveJobStatusOutcomeCallable CCCClient::listPredictiveJobStatusCallable(const ListPredictiveJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPredictiveJobStatusOutcome()>>(
			[this, request]()
			{
			return this->listPredictiveJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobGroupsOutcome CCCClient::listJobGroups(const ListJobGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobGroupsOutcome(ListJobGroupsResult(outcome.result()));
	else
		return ListJobGroupsOutcome(outcome.error());
}

void CCCClient::listJobGroupsAsync(const ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobGroupsOutcomeCallable CCCClient::listJobGroupsCallable(const ListJobGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobGroupsOutcome()>>(
			[this, request]()
			{
			return this->listJobGroups(request);
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

CCCClient::AddPhoneNumberOutcome CCCClient::addPhoneNumber(const AddPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPhoneNumberOutcome(AddPhoneNumberResult(outcome.result()));
	else
		return AddPhoneNumberOutcome(outcome.error());
}

void CCCClient::addPhoneNumberAsync(const AddPhoneNumberRequest& request, const AddPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AddPhoneNumberOutcomeCallable CCCClient::addPhoneNumberCallable(const AddPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->addPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecordingsOutcome CCCClient::listRecordings(const ListRecordingsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecordingsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecordingsOutcome(ListRecordingsResult(outcome.result()));
	else
		return ListRecordingsOutcome(outcome.error());
}

void CCCClient::listRecordingsAsync(const ListRecordingsRequest& request, const ListRecordingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecordings(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecordingsOutcomeCallable CCCClient::listRecordingsCallable(const ListRecordingsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecordingsOutcome()>>(
			[this, request]()
			{
			return this->listRecordings(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::EncryptOutcome CCCClient::encrypt(const EncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncryptOutcome(EncryptResult(outcome.result()));
	else
		return EncryptOutcome(outcome.error());
}

void CCCClient::encryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::EncryptOutcomeCallable CCCClient::encryptCallable(const EncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
			[this, request]()
			{
			return this->encrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SubmitBatchJobsOutcome CCCClient::submitBatchJobs(const SubmitBatchJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitBatchJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitBatchJobsOutcome(SubmitBatchJobsResult(outcome.result()));
	else
		return SubmitBatchJobsOutcome(outcome.error());
}

void CCCClient::submitBatchJobsAsync(const SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SubmitBatchJobsOutcomeCallable CCCClient::submitBatchJobsCallable(const SubmitBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->submitBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListSurveysOutcome CCCClient::listSurveys(const ListSurveysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSurveysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSurveysOutcome(ListSurveysResult(outcome.result()));
	else
		return ListSurveysOutcome(outcome.error());
}

void CCCClient::listSurveysAsync(const ListSurveysRequest& request, const ListSurveysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSurveys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListSurveysOutcomeCallable CCCClient::listSurveysCallable(const ListSurveysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSurveysOutcome()>>(
			[this, request]()
			{
			return this->listSurveys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobDataUploadParamsOutcome CCCClient::getJobDataUploadParams(const GetJobDataUploadParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobDataUploadParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobDataUploadParamsOutcome(GetJobDataUploadParamsResult(outcome.result()));
	else
		return GetJobDataUploadParamsOutcome(outcome.error());
}

void CCCClient::getJobDataUploadParamsAsync(const GetJobDataUploadParamsRequest& request, const GetJobDataUploadParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobDataUploadParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobDataUploadParamsOutcomeCallable CCCClient::getJobDataUploadParamsCallable(const GetJobDataUploadParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobDataUploadParamsOutcome()>>(
			[this, request]()
			{
			return this->getJobDataUploadParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListBasicStatisticsReportSubItemsOutcome CCCClient::listBasicStatisticsReportSubItems(const ListBasicStatisticsReportSubItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListBasicStatisticsReportSubItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListBasicStatisticsReportSubItemsOutcome(ListBasicStatisticsReportSubItemsResult(outcome.result()));
	else
		return ListBasicStatisticsReportSubItemsOutcome(outcome.error());
}

void CCCClient::listBasicStatisticsReportSubItemsAsync(const ListBasicStatisticsReportSubItemsRequest& request, const ListBasicStatisticsReportSubItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicStatisticsReportSubItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListBasicStatisticsReportSubItemsOutcomeCallable CCCClient::listBasicStatisticsReportSubItemsCallable(const ListBasicStatisticsReportSubItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicStatisticsReportSubItemsOutcome()>>(
			[this, request]()
			{
			return this->listBasicStatisticsReportSubItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::SuspendJobsOutcome CCCClient::suspendJobs(const SuspendJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendJobsOutcome(SuspendJobsResult(outcome.result()));
	else
		return SuspendJobsOutcome(outcome.error());
}

void CCCClient::suspendJobsAsync(const SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::SuspendJobsOutcomeCallable CCCClient::suspendJobsCallable(const SuspendJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendJobsOutcome()>>(
			[this, request]()
			{
			return this->suspendJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobGroupOutcome CCCClient::getJobGroup(const GetJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobGroupOutcome(GetJobGroupResult(outcome.result()));
	else
		return GetJobGroupOutcome(outcome.error());
}

void CCCClient::getJobGroupAsync(const GetJobGroupRequest& request, const GetJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobGroupOutcomeCallable CCCClient::getJobGroupCallable(const GetJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobGroupOutcome()>>(
			[this, request]()
			{
			return this->getJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobStatusByCallIdOutcome CCCClient::getJobStatusByCallId(const GetJobStatusByCallIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusByCallIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusByCallIdOutcome(GetJobStatusByCallIdResult(outcome.result()));
	else
		return GetJobStatusByCallIdOutcome(outcome.error());
}

void CCCClient::getJobStatusByCallIdAsync(const GetJobStatusByCallIdRequest& request, const GetJobStatusByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatusByCallId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobStatusByCallIdOutcomeCallable CCCClient::getJobStatusByCallIdCallable(const GetJobStatusByCallIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusByCallIdOutcome()>>(
			[this, request]()
			{
			return this->getJobStatusByCallId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListUnreachableContactsOutcome CCCClient::listUnreachableContacts(const ListUnreachableContactsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUnreachableContactsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUnreachableContactsOutcome(ListUnreachableContactsResult(outcome.result()));
	else
		return ListUnreachableContactsOutcome(outcome.error());
}

void CCCClient::listUnreachableContactsAsync(const ListUnreachableContactsRequest& request, const ListUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListUnreachableContactsOutcomeCallable CCCClient::listUnreachableContactsCallable(const ListUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->listUnreachableContacts(request);
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

CCCClient::GetConversationDetailByContactIdOutcome CCCClient::getConversationDetailByContactId(const GetConversationDetailByContactIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConversationDetailByContactIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConversationDetailByContactIdOutcome(GetConversationDetailByContactIdResult(outcome.result()));
	else
		return GetConversationDetailByContactIdOutcome(outcome.error());
}

void CCCClient::getConversationDetailByContactIdAsync(const GetConversationDetailByContactIdRequest& request, const GetConversationDetailByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConversationDetailByContactId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConversationDetailByContactIdOutcomeCallable CCCClient::getConversationDetailByContactIdCallable(const GetConversationDetailByContactIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConversationDetailByContactIdOutcome()>>(
			[this, request]()
			{
			return this->getConversationDetailByContactId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRecordingsByContactIdOutcome CCCClient::listRecordingsByContactId(const ListRecordingsByContactIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecordingsByContactIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecordingsByContactIdOutcome(ListRecordingsByContactIdResult(outcome.result()));
	else
		return ListRecordingsByContactIdOutcome(outcome.error());
}

void CCCClient::listRecordingsByContactIdAsync(const ListRecordingsByContactIdRequest& request, const ListRecordingsByContactIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecordingsByContactId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRecordingsByContactIdOutcomeCallable CCCClient::listRecordingsByContactIdCallable(const ListRecordingsByContactIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecordingsByContactIdOutcome()>>(
			[this, request]()
			{
			return this->listRecordingsByContactId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::LaunchAppraiseOutcome CCCClient::launchAppraise(const LaunchAppraiseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LaunchAppraiseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LaunchAppraiseOutcome(LaunchAppraiseResult(outcome.result()));
	else
		return LaunchAppraiseOutcome(outcome.error());
}

void CCCClient::launchAppraiseAsync(const LaunchAppraiseRequest& request, const LaunchAppraiseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, launchAppraise(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::LaunchAppraiseOutcomeCallable CCCClient::launchAppraiseCallable(const LaunchAppraiseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LaunchAppraiseOutcome()>>(
			[this, request]()
			{
			return this->launchAppraise(request);
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

CCCClient::CreateScenarioOutcome CCCClient::createScenario(const CreateScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScenarioOutcome(CreateScenarioResult(outcome.result()));
	else
		return CreateScenarioOutcome(outcome.error());
}

void CCCClient::createScenarioAsync(const CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateScenarioOutcomeCallable CCCClient::createScenarioCallable(const CreateScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScenarioOutcome()>>(
			[this, request]()
			{
			return this->createScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::RemovePhoneNumberOutcome CCCClient::removePhoneNumber(const RemovePhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemovePhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemovePhoneNumberOutcome(RemovePhoneNumberResult(outcome.result()));
	else
		return RemovePhoneNumberOutcome(outcome.error());
}

void CCCClient::removePhoneNumberAsync(const RemovePhoneNumberRequest& request, const RemovePhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removePhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::RemovePhoneNumberOutcomeCallable CCCClient::removePhoneNumberCallable(const RemovePhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemovePhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->removePhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::PickLocalNumberOutcome CCCClient::pickLocalNumber(const PickLocalNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PickLocalNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PickLocalNumberOutcome(PickLocalNumberResult(outcome.result()));
	else
		return PickLocalNumberOutcome(outcome.error());
}

void CCCClient::pickLocalNumberAsync(const PickLocalNumberRequest& request, const PickLocalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pickLocalNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::PickLocalNumberOutcomeCallable CCCClient::pickLocalNumberCallable(const PickLocalNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PickLocalNumberOutcome()>>(
			[this, request]()
			{
			return this->pickLocalNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetJobOutcome CCCClient::getJob(const GetJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobOutcome(GetJobResult(outcome.result()));
	else
		return GetJobOutcome(outcome.error());
}

void CCCClient::getJobAsync(const GetJobRequest& request, const GetJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetJobOutcomeCallable CCCClient::getJobCallable(const GetJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobOutcome()>>(
			[this, request]()
			{
			return this->getJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::StartJobOutcome CCCClient::startJob(const StartJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartJobOutcome(StartJobResult(outcome.result()));
	else
		return StartJobOutcome(outcome.error());
}

void CCCClient::startJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::StartJobOutcomeCallable CCCClient::startJobCallable(const StartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartJobOutcome()>>(
			[this, request]()
			{
			return this->startJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CancelJobsOutcome CCCClient::cancelJobs(const CancelJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelJobsOutcome(CancelJobsResult(outcome.result()));
	else
		return CancelJobsOutcome(outcome.error());
}

void CCCClient::cancelJobsAsync(const CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CancelJobsOutcomeCallable CCCClient::cancelJobsCallable(const CancelJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJobsOutcome()>>(
			[this, request]()
			{
			return this->cancelJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetConfigOutcome CCCClient::getConfig(const GetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConfigOutcome(GetConfigResult(outcome.result()));
	else
		return GetConfigOutcome(outcome.error());
}

void CCCClient::getConfigAsync(const GetConfigRequest& request, const GetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetConfigOutcomeCallable CCCClient::getConfigCallable(const GetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConfigOutcome()>>(
			[this, request]()
			{
			return this->getConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadRecordingOutcome CCCClient::downloadRecording(const DownloadRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadRecordingOutcome(DownloadRecordingResult(outcome.result()));
	else
		return DownloadRecordingOutcome(outcome.error());
}

void CCCClient::downloadRecordingAsync(const DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadRecordingOutcomeCallable CCCClient::downloadRecordingCallable(const DownloadRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GenerateAgentStatisticReportOutcome CCCClient::generateAgentStatisticReport(const GenerateAgentStatisticReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAgentStatisticReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAgentStatisticReportOutcome(GenerateAgentStatisticReportResult(outcome.result()));
	else
		return GenerateAgentStatisticReportOutcome(outcome.error());
}

void CCCClient::generateAgentStatisticReportAsync(const GenerateAgentStatisticReportRequest& request, const GenerateAgentStatisticReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAgentStatisticReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GenerateAgentStatisticReportOutcomeCallable CCCClient::generateAgentStatisticReportCallable(const GenerateAgentStatisticReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAgentStatisticReportOutcome()>>(
			[this, request]()
			{
			return this->generateAgentStatisticReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateScenarioFromTemplateOutcome CCCClient::createScenarioFromTemplate(const CreateScenarioFromTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScenarioFromTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScenarioFromTemplateOutcome(CreateScenarioFromTemplateResult(outcome.result()));
	else
		return CreateScenarioFromTemplateOutcome(outcome.error());
}

void CCCClient::createScenarioFromTemplateAsync(const CreateScenarioFromTemplateRequest& request, const CreateScenarioFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScenarioFromTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateScenarioFromTemplateOutcomeCallable CCCClient::createScenarioFromTemplateCallable(const CreateScenarioFromTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScenarioFromTemplateOutcome()>>(
			[this, request]()
			{
			return this->createScenarioFromTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateJobGroupOutcome CCCClient::createJobGroup(const CreateJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobGroupOutcome(CreateJobGroupResult(outcome.result()));
	else
		return CreateJobGroupOutcome(outcome.error());
}

void CCCClient::createJobGroupAsync(const CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateJobGroupOutcomeCallable CCCClient::createJobGroupCallable(const CreateJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobGroupOutcome()>>(
			[this, request]()
			{
			return this->createJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetTaskListOutcome CCCClient::getTaskList(const GetTaskListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskListOutcome(GetTaskListResult(outcome.result()));
	else
		return GetTaskListOutcome(outcome.error());
}

void CCCClient::getTaskListAsync(const GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetTaskListOutcomeCallable CCCClient::getTaskListCallable(const GetTaskListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskListOutcome()>>(
			[this, request]()
			{
			return this->getTaskList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::DownloadOriginalStatisticsReportOutcome CCCClient::downloadOriginalStatisticsReport(const DownloadOriginalStatisticsReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadOriginalStatisticsReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadOriginalStatisticsReportOutcome(DownloadOriginalStatisticsReportResult(outcome.result()));
	else
		return DownloadOriginalStatisticsReportOutcome(outcome.error());
}

void CCCClient::downloadOriginalStatisticsReportAsync(const DownloadOriginalStatisticsReportRequest& request, const DownloadOriginalStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadOriginalStatisticsReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DownloadOriginalStatisticsReportOutcomeCallable CCCClient::downloadOriginalStatisticsReportCallable(const DownloadOriginalStatisticsReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadOriginalStatisticsReportOutcome()>>(
			[this, request]()
			{
			return this->downloadOriginalStatisticsReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListScenarioTemplatesOutcome CCCClient::listScenarioTemplates(const ListScenarioTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenarioTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenarioTemplatesOutcome(ListScenarioTemplatesResult(outcome.result()));
	else
		return ListScenarioTemplatesOutcome(outcome.error());
}

void CCCClient::listScenarioTemplatesAsync(const ListScenarioTemplatesRequest& request, const ListScenarioTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarioTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListScenarioTemplatesOutcomeCallable CCCClient::listScenarioTemplatesCallable(const ListScenarioTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenarioTemplatesOutcome()>>(
			[this, request]()
			{
			return this->listScenarioTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ResumeJobsOutcome CCCClient::resumeJobs(const ResumeJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeJobsOutcome(ResumeJobsResult(outcome.result()));
	else
		return ResumeJobsOutcome(outcome.error());
}

void CCCClient::resumeJobsAsync(const ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ResumeJobsOutcomeCallable CCCClient::resumeJobsCallable(const ResumeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeJobsOutcome()>>(
			[this, request]()
			{
			return this->resumeJobs(request);
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

CCCClient::GetSurveyOutcome CCCClient::getSurvey(const GetSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSurveyOutcome(GetSurveyResult(outcome.result()));
	else
		return GetSurveyOutcome(outcome.error());
}

void CCCClient::getSurveyAsync(const GetSurveyRequest& request, const GetSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetSurveyOutcomeCallable CCCClient::getSurveyCallable(const GetSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSurveyOutcome()>>(
			[this, request]()
			{
			return this->getSurvey(request);
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

CCCClient::ListConfigOutcome CCCClient::listConfig(const ListConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConfigOutcome(ListConfigResult(outcome.result()));
	else
		return ListConfigOutcome(outcome.error());
}

void CCCClient::listConfigAsync(const ListConfigRequest& request, const ListConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListConfigOutcomeCallable CCCClient::listConfigCallable(const ListConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConfigOutcome()>>(
			[this, request]()
			{
			return this->listConfig(request);
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

CCCClient::ListScenariosOutcome CCCClient::listScenarios(const ListScenariosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScenariosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScenariosOutcome(ListScenariosResult(outcome.result()));
	else
		return ListScenariosOutcome(outcome.error());
}

void CCCClient::listScenariosAsync(const ListScenariosRequest& request, const ListScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScenarios(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListScenariosOutcomeCallable CCCClient::listScenariosCallable(const ListScenariosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScenariosOutcome()>>(
			[this, request]()
			{
			return this->listScenarios(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListRealTimeAgentOutcome CCCClient::listRealTimeAgent(const ListRealTimeAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRealTimeAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRealTimeAgentOutcome(ListRealTimeAgentResult(outcome.result()));
	else
		return ListRealTimeAgentOutcome(outcome.error());
}

void CCCClient::listRealTimeAgentAsync(const ListRealTimeAgentRequest& request, const ListRealTimeAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRealTimeAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListRealTimeAgentOutcomeCallable CCCClient::listRealTimeAgentCallable(const ListRealTimeAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRealTimeAgentOutcome()>>(
			[this, request]()
			{
			return this->listRealTimeAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::AssignJobsOutcome CCCClient::assignJobs(const AssignJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignJobsOutcome(AssignJobsResult(outcome.result()));
	else
		return AssignJobsOutcome(outcome.error());
}

void CCCClient::assignJobsAsync(const AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::AssignJobsOutcomeCallable CCCClient::assignJobsCallable(const AssignJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignJobsOutcome()>>(
			[this, request]()
			{
			return this->assignJobs(request);
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

CCCClient::GetNumberRegionInfoOutcome CCCClient::getNumberRegionInfo(const GetNumberRegionInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNumberRegionInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNumberRegionInfoOutcome(GetNumberRegionInfoResult(outcome.result()));
	else
		return GetNumberRegionInfoOutcome(outcome.error());
}

void CCCClient::getNumberRegionInfoAsync(const GetNumberRegionInfoRequest& request, const GetNumberRegionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNumberRegionInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetNumberRegionInfoOutcomeCallable CCCClient::getNumberRegionInfoCallable(const GetNumberRegionInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNumberRegionInfoOutcome()>>(
			[this, request]()
			{
			return this->getNumberRegionInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetScenarioOutcome CCCClient::getScenario(const GetScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetScenarioOutcome(GetScenarioResult(outcome.result()));
	else
		return GetScenarioOutcome(outcome.error());
}

void CCCClient::getScenarioAsync(const GetScenarioRequest& request, const GetScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetScenarioOutcomeCallable CCCClient::getScenarioCallable(const GetScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetScenarioOutcome()>>(
			[this, request]()
			{
			return this->getScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreatePredictiveJobsOutcome CCCClient::createPredictiveJobs(const CreatePredictiveJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePredictiveJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePredictiveJobsOutcome(CreatePredictiveJobsResult(outcome.result()));
	else
		return CreatePredictiveJobsOutcome(outcome.error());
}

void CCCClient::createPredictiveJobsAsync(const CreatePredictiveJobsRequest& request, const CreatePredictiveJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPredictiveJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreatePredictiveJobsOutcomeCallable CCCClient::createPredictiveJobsCallable(const CreatePredictiveJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePredictiveJobsOutcome()>>(
			[this, request]()
			{
			return this->createPredictiveJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::GetAgentDataOutcome CCCClient::getAgentData(const GetAgentDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAgentDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAgentDataOutcome(GetAgentDataResult(outcome.result()));
	else
		return GetAgentDataOutcome(outcome.error());
}

void CCCClient::getAgentDataAsync(const GetAgentDataRequest& request, const GetAgentDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAgentData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetAgentDataOutcomeCallable CCCClient::getAgentDataCallable(const GetAgentDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAgentDataOutcome()>>(
			[this, request]()
			{
			return this->getAgentData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::CreateSurveyOutcome CCCClient::createSurvey(const CreateSurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSurveyOutcome(CreateSurveyResult(outcome.result()));
	else
		return CreateSurveyOutcome(outcome.error());
}

void CCCClient::createSurveyAsync(const CreateSurveyRequest& request, const CreateSurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::CreateSurveyOutcomeCallable CCCClient::createSurveyCallable(const CreateSurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSurveyOutcome()>>(
			[this, request]()
			{
			return this->createSurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ListJobStatusOutcome CCCClient::listJobStatus(const ListJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobStatusOutcome(ListJobStatusResult(outcome.result()));
	else
		return ListJobStatusOutcome(outcome.error());
}

void CCCClient::listJobStatusAsync(const ListJobStatusRequest& request, const ListJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ListJobStatusOutcomeCallable CCCClient::listJobStatusCallable(const ListJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobStatusOutcome()>>(
			[this, request]()
			{
			return this->listJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifySurveyOutcome CCCClient::modifySurvey(const ModifySurveyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySurveyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySurveyOutcome(ModifySurveyResult(outcome.result()));
	else
		return ModifySurveyOutcome(outcome.error());
}

void CCCClient::modifySurveyAsync(const ModifySurveyRequest& request, const ModifySurveyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySurvey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifySurveyOutcomeCallable CCCClient::modifySurveyCallable(const ModifySurveyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySurveyOutcome()>>(
			[this, request]()
			{
			return this->modifySurvey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CCCClient::ModifyScenarioOutcome CCCClient::modifyScenario(const ModifyScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScenarioOutcome(ModifyScenarioResult(outcome.result()));
	else
		return ModifyScenarioOutcome(outcome.error());
}

void CCCClient::modifyScenarioAsync(const ModifyScenarioRequest& request, const ModifyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::ModifyScenarioOutcomeCallable CCCClient::modifyScenarioCallable(const ModifyScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScenarioOutcome()>>(
			[this, request]()
			{
			return this->modifyScenario(request);
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

CCCClient::GetServiceExtensionsOutcome CCCClient::getServiceExtensions(const GetServiceExtensionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceExtensionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceExtensionsOutcome(GetServiceExtensionsResult(outcome.result()));
	else
		return GetServiceExtensionsOutcome(outcome.error());
}

void CCCClient::getServiceExtensionsAsync(const GetServiceExtensionsRequest& request, const GetServiceExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceExtensions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::GetServiceExtensionsOutcomeCallable CCCClient::getServiceExtensionsCallable(const GetServiceExtensionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceExtensionsOutcome()>>(
			[this, request]()
			{
			return this->getServiceExtensions(request);
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

CCCClient::DeleteJobGroupOutcome CCCClient::deleteJobGroup(const DeleteJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobGroupOutcome(DeleteJobGroupResult(outcome.result()));
	else
		return DeleteJobGroupOutcome(outcome.error());
}

void CCCClient::deleteJobGroupAsync(const DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CCCClient::DeleteJobGroupOutcomeCallable CCCClient::deleteJobGroupCallable(const DeleteJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

