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

