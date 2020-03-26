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

AliyuncvcClient::ActiveMeetingOutcome AliyuncvcClient::activeMeeting(const ActiveMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActiveMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActiveMeetingOutcome(ActiveMeetingResult(outcome.result()));
	else
		return ActiveMeetingOutcome(outcome.error());
}

void AliyuncvcClient::activeMeetingAsync(const ActiveMeetingRequest& request, const ActiveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activeMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ActiveMeetingOutcomeCallable AliyuncvcClient::activeMeetingCallable(const ActiveMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActiveMeetingOutcome()>>(
			[this, request]()
			{
			return this->activeMeeting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::CreateEvaluationOutcome AliyuncvcClient::createEvaluation(const CreateEvaluationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEvaluationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEvaluationOutcome(CreateEvaluationResult(outcome.result()));
	else
		return CreateEvaluationOutcome(outcome.error());
}

void AliyuncvcClient::createEvaluationAsync(const CreateEvaluationRequest& request, const CreateEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEvaluation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::CreateEvaluationOutcomeCallable AliyuncvcClient::createEvaluationCallable(const CreateEvaluationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEvaluationOutcome()>>(
			[this, request]()
			{
			return this->createEvaluation(request);
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

AliyuncvcClient::DeleteMeetingOutcome AliyuncvcClient::deleteMeeting(const DeleteMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMeetingOutcome(DeleteMeetingResult(outcome.result()));
	else
		return DeleteMeetingOutcome(outcome.error());
}

void AliyuncvcClient::deleteMeetingAsync(const DeleteMeetingRequest& request, const DeleteMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::DeleteMeetingOutcomeCallable AliyuncvcClient::deleteMeetingCallable(const DeleteMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMeetingOutcome()>>(
			[this, request]()
			{
			return this->deleteMeeting(request);
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

AliyuncvcClient::GetMeetingOutcome AliyuncvcClient::getMeeting(const GetMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMeetingOutcome(GetMeetingResult(outcome.result()));
	else
		return GetMeetingOutcome(outcome.error());
}

void AliyuncvcClient::getMeetingAsync(const GetMeetingRequest& request, const GetMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::GetMeetingOutcomeCallable AliyuncvcClient::getMeetingCallable(const GetMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMeetingOutcome()>>(
			[this, request]()
			{
			return this->getMeeting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::GetMeetingMemberOutcome AliyuncvcClient::getMeetingMember(const GetMeetingMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMeetingMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMeetingMemberOutcome(GetMeetingMemberResult(outcome.result()));
	else
		return GetMeetingMemberOutcome(outcome.error());
}

void AliyuncvcClient::getMeetingMemberAsync(const GetMeetingMemberRequest& request, const GetMeetingMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMeetingMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::GetMeetingMemberOutcomeCallable AliyuncvcClient::getMeetingMemberCallable(const GetMeetingMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMeetingMemberOutcome()>>(
			[this, request]()
			{
			return this->getMeetingMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::GetUserOutcome AliyuncvcClient::getUser(const GetUserRequest &request) const
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

void AliyuncvcClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::GetUserOutcomeCallable AliyuncvcClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::JoinMeetingOutcome AliyuncvcClient::joinMeeting(const JoinMeetingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinMeetingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinMeetingOutcome(JoinMeetingResult(outcome.result()));
	else
		return JoinMeetingOutcome(outcome.error());
}

void AliyuncvcClient::joinMeetingAsync(const JoinMeetingRequest& request, const JoinMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinMeeting(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::JoinMeetingOutcomeCallable AliyuncvcClient::joinMeetingCallable(const JoinMeetingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinMeetingOutcome()>>(
			[this, request]()
			{
			return this->joinMeeting(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::ListEvaluationsOutcome AliyuncvcClient::listEvaluations(const ListEvaluationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEvaluationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEvaluationsOutcome(ListEvaluationsResult(outcome.result()));
	else
		return ListEvaluationsOutcome(outcome.error());
}

void AliyuncvcClient::listEvaluationsAsync(const ListEvaluationsRequest& request, const ListEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEvaluations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ListEvaluationsOutcomeCallable AliyuncvcClient::listEvaluationsCallable(const ListEvaluationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEvaluationsOutcome()>>(
			[this, request]()
			{
			return this->listEvaluations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::ListIsvStatisticsOutcome AliyuncvcClient::listIsvStatistics(const ListIsvStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIsvStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIsvStatisticsOutcome(ListIsvStatisticsResult(outcome.result()));
	else
		return ListIsvStatisticsOutcome(outcome.error());
}

void AliyuncvcClient::listIsvStatisticsAsync(const ListIsvStatisticsRequest& request, const ListIsvStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIsvStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ListIsvStatisticsOutcomeCallable AliyuncvcClient::listIsvStatisticsCallable(const ListIsvStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIsvStatisticsOutcome()>>(
			[this, request]()
			{
			return this->listIsvStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::ListMembersOutcome AliyuncvcClient::listMembers(const ListMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMembersOutcome(ListMembersResult(outcome.result()));
	else
		return ListMembersOutcome(outcome.error());
}

void AliyuncvcClient::listMembersAsync(const ListMembersRequest& request, const ListMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ListMembersOutcomeCallable AliyuncvcClient::listMembersCallable(const ListMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMembersOutcome()>>(
			[this, request]()
			{
			return this->listMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AliyuncvcClient::ListUsersOutcome AliyuncvcClient::listUsers(const ListUsersRequest &request) const
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

void AliyuncvcClient::listUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AliyuncvcClient::ListUsersOutcomeCallable AliyuncvcClient::listUsersCallable(const ListUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
			[this, request]()
			{
			return this->listUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

