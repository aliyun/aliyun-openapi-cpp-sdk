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

#include <alibabacloud/aliyuncvc/AliyuncvcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Aliyuncvc;
using namespace AlibabaCloud::Aliyuncvc::Model;

namespace
{
	const std::string SERVICE_NAME = "aliyuncvc";
}

AliyuncvcClient::AliyuncvcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aliyuncvc");
}

AliyuncvcClient::AliyuncvcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aliyuncvc");
}

AliyuncvcClient::AliyuncvcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "aliyuncvc");
}

AliyuncvcClient::~AliyuncvcClient()
{}

AliyuncvcClient::ActiveMeetingCodeOutcome AliyuncvcClient::activeMeetingCode(const ActiveMeetingCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActiveMeetingCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActiveMeetingCodeOutcome(ActiveMeetingCodeResult(outcome.result()));
	else
		return ActiveMeetingCodeOutcome(outcome.error());
}

void AliyuncvcClient::activeMeetingCodeAsync(const ActiveMeetingCodeRequest& request, const ActiveMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeMeetingCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ActiveMeetingCodeOutcomeCallable AliyuncvcClient::activeMeetingCodeCallable(const ActiveMeetingCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveMeetingCodeOutcome()>>(
			[this, request]()
			{
			return this->activeMeetingCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::CheckMeetingCodeOutcome AliyuncvcClient::checkMeetingCode(const CheckMeetingCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckMeetingCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckMeetingCodeOutcome(CheckMeetingCodeResult(outcome.result()));
	else
		return CheckMeetingCodeOutcome(outcome.error());
}

void AliyuncvcClient::checkMeetingCodeAsync(const CheckMeetingCodeRequest& request, const CheckMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkMeetingCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::CheckMeetingCodeOutcomeCallable AliyuncvcClient::checkMeetingCodeCallable(const CheckMeetingCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckMeetingCodeOutcome()>>(
			[this, request]()
			{
			return this->checkMeetingCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::CreateMeetingOutcome AliyuncvcClient::createMeeting(const CreateMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMeetingOutcome(CreateMeetingResult(outcome.result()));
	else
		return CreateMeetingOutcome(outcome.error());
}

void AliyuncvcClient::createMeetingAsync(const CreateMeetingRequest& request, const CreateMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::CreateMeetingOutcomeCallable AliyuncvcClient::createMeetingCallable(const CreateMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMeetingOutcome()>>(
			[this, request]()
			{
			return this->createMeeting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::CreateUserOutcome AliyuncvcClient::createUser(const CreateUserRequest &request) const
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

void AliyuncvcClient::createUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::CreateUserOutcomeCallable AliyuncvcClient::createUserCallable(const CreateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
			[this, request]()
			{
			return this->createUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::CreateUserEvaluationsOutcome AliyuncvcClient::createUserEvaluations(const CreateUserEvaluationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserEvaluationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserEvaluationsOutcome(CreateUserEvaluationsResult(outcome.result()));
	else
		return CreateUserEvaluationsOutcome(outcome.error());
}

void AliyuncvcClient::createUserEvaluationsAsync(const CreateUserEvaluationsRequest& request, const CreateUserEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserEvaluations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::CreateUserEvaluationsOutcomeCallable AliyuncvcClient::createUserEvaluationsCallable(const CreateUserEvaluationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserEvaluationsOutcome()>>(
			[this, request]()
			{
			return this->createUserEvaluations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::DeleteUserOutcome AliyuncvcClient::deleteUser(const DeleteUserRequest &request) const
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

void AliyuncvcClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::DeleteUserOutcomeCallable AliyuncvcClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::ListCommoditiesOutcome AliyuncvcClient::listCommodities(const ListCommoditiesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCommoditiesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCommoditiesOutcome(ListCommoditiesResult(outcome.result()));
	else
		return ListCommoditiesOutcome(outcome.error());
}

void AliyuncvcClient::listCommoditiesAsync(const ListCommoditiesRequest& request, const ListCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCommodities(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ListCommoditiesOutcomeCallable AliyuncvcClient::listCommoditiesCallable(const ListCommoditiesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCommoditiesOutcome()>>(
			[this, request]()
			{
			return this->listCommodities(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryIsvUserInfoOutcome AliyuncvcClient::queryIsvUserInfo(const QueryIsvUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryIsvUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryIsvUserInfoOutcome(QueryIsvUserInfoResult(outcome.result()));
	else
		return QueryIsvUserInfoOutcome(outcome.error());
}

void AliyuncvcClient::queryIsvUserInfoAsync(const QueryIsvUserInfoRequest& request, const QueryIsvUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryIsvUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryIsvUserInfoOutcomeCallable AliyuncvcClient::queryIsvUserInfoCallable(const QueryIsvUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryIsvUserInfoOutcome()>>(
			[this, request]()
			{
			return this->queryIsvUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryMeetingInfoOutcome AliyuncvcClient::queryMeetingInfo(const QueryMeetingInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMeetingInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMeetingInfoOutcome(QueryMeetingInfoResult(outcome.result()));
	else
		return QueryMeetingInfoOutcome(outcome.error());
}

void AliyuncvcClient::queryMeetingInfoAsync(const QueryMeetingInfoRequest& request, const QueryMeetingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMeetingInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryMeetingInfoOutcomeCallable AliyuncvcClient::queryMeetingInfoCallable(const QueryMeetingInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMeetingInfoOutcome()>>(
			[this, request]()
			{
			return this->queryMeetingInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryMemberRecordOutcome AliyuncvcClient::queryMemberRecord(const QueryMemberRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMemberRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMemberRecordOutcome(QueryMemberRecordResult(outcome.result()));
	else
		return QueryMemberRecordOutcome(outcome.error());
}

void AliyuncvcClient::queryMemberRecordAsync(const QueryMemberRecordRequest& request, const QueryMemberRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMemberRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryMemberRecordOutcomeCallable AliyuncvcClient::queryMemberRecordCallable(const QueryMemberRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMemberRecordOutcome()>>(
			[this, request]()
			{
			return this->queryMemberRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryStatisticsOutcome AliyuncvcClient::queryStatistics(const QueryStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryStatisticsOutcome(QueryStatisticsResult(outcome.result()));
	else
		return QueryStatisticsOutcome(outcome.error());
}

void AliyuncvcClient::queryStatisticsAsync(const QueryStatisticsRequest& request, const QueryStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryStatisticsOutcomeCallable AliyuncvcClient::queryStatisticsCallable(const QueryStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryStatisticsOutcome()>>(
			[this, request]()
			{
			return this->queryStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryUserBuyAttributeOutcome AliyuncvcClient::queryUserBuyAttribute(const QueryUserBuyAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserBuyAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserBuyAttributeOutcome(QueryUserBuyAttributeResult(outcome.result()));
	else
		return QueryUserBuyAttributeOutcome(outcome.error());
}

void AliyuncvcClient::queryUserBuyAttributeAsync(const QueryUserBuyAttributeRequest& request, const QueryUserBuyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserBuyAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryUserBuyAttributeOutcomeCallable AliyuncvcClient::queryUserBuyAttributeCallable(const QueryUserBuyAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserBuyAttributeOutcome()>>(
			[this, request]()
			{
			return this->queryUserBuyAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryUserEvaluationOutcome AliyuncvcClient::queryUserEvaluation(const QueryUserEvaluationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserEvaluationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserEvaluationOutcome(QueryUserEvaluationResult(outcome.result()));
	else
		return QueryUserEvaluationOutcome(outcome.error());
}

void AliyuncvcClient::queryUserEvaluationAsync(const QueryUserEvaluationRequest& request, const QueryUserEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserEvaluation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryUserEvaluationOutcomeCallable AliyuncvcClient::queryUserEvaluationCallable(const QueryUserEvaluationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserEvaluationOutcome()>>(
			[this, request]()
			{
			return this->queryUserEvaluation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryUserInfoOutcome AliyuncvcClient::queryUserInfo(const QueryUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserInfoOutcome(QueryUserInfoResult(outcome.result()));
	else
		return QueryUserInfoOutcome(outcome.error());
}

void AliyuncvcClient::queryUserInfoAsync(const QueryUserInfoRequest& request, const QueryUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryUserInfoOutcomeCallable AliyuncvcClient::queryUserInfoCallable(const QueryUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserInfoOutcome()>>(
			[this, request]()
			{
			return this->queryUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::QueryUserListOutcome AliyuncvcClient::queryUserList(const QueryUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserListOutcome(QueryUserListResult(outcome.result()));
	else
		return QueryUserListOutcome(outcome.error());
}

void AliyuncvcClient::queryUserListAsync(const QueryUserListRequest& request, const QueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::QueryUserListOutcomeCallable AliyuncvcClient::queryUserListCallable(const QueryUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserListOutcome()>>(
			[this, request]()
			{
			return this->queryUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::RemoveMeetingOutcome AliyuncvcClient::removeMeeting(const RemoveMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveMeetingOutcome(RemoveMeetingResult(outcome.result()));
	else
		return RemoveMeetingOutcome(outcome.error());
}

void AliyuncvcClient::removeMeetingAsync(const RemoveMeetingRequest& request, const RemoveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::RemoveMeetingOutcomeCallable AliyuncvcClient::removeMeetingCallable(const RemoveMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveMeetingOutcome()>>(
			[this, request]()
			{
			return this->removeMeeting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

