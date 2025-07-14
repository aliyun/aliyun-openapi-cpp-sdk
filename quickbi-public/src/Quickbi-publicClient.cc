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

#include <alibabacloud/quickbi-public/Quickbi_publicClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

namespace
{
	const std::string SERVICE_NAME = "quickbi-public";
}

Quickbi_publicClient::Quickbi_publicClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "2.2.0");
}

Quickbi_publicClient::Quickbi_publicClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "2.2.0");
}

Quickbi_publicClient::Quickbi_publicClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "2.2.0");
}

Quickbi_publicClient::~Quickbi_publicClient()
{}

Quickbi_publicClient::AddDataLevelPermissionRuleUsersOutcome Quickbi_publicClient::addDataLevelPermissionRuleUsers(const AddDataLevelPermissionRuleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataLevelPermissionRuleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataLevelPermissionRuleUsersOutcome(AddDataLevelPermissionRuleUsersResult(outcome.result()));
	else
		return AddDataLevelPermissionRuleUsersOutcome(outcome.error());
}

void Quickbi_publicClient::addDataLevelPermissionRuleUsersAsync(const AddDataLevelPermissionRuleUsersRequest& request, const AddDataLevelPermissionRuleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataLevelPermissionRuleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddDataLevelPermissionRuleUsersOutcomeCallable Quickbi_publicClient::addDataLevelPermissionRuleUsersCallable(const AddDataLevelPermissionRuleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataLevelPermissionRuleUsersOutcome()>>(
			[this, request]()
			{
			return this->addDataLevelPermissionRuleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddDataLevelPermissionWhiteListOutcome Quickbi_publicClient::addDataLevelPermissionWhiteList(const AddDataLevelPermissionWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddDataLevelPermissionWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddDataLevelPermissionWhiteListOutcome(AddDataLevelPermissionWhiteListResult(outcome.result()));
	else
		return AddDataLevelPermissionWhiteListOutcome(outcome.error());
}

void Quickbi_publicClient::addDataLevelPermissionWhiteListAsync(const AddDataLevelPermissionWhiteListRequest& request, const AddDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addDataLevelPermissionWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddDataLevelPermissionWhiteListOutcomeCallable Quickbi_publicClient::addDataLevelPermissionWhiteListCallable(const AddDataLevelPermissionWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddDataLevelPermissionWhiteListOutcome()>>(
			[this, request]()
			{
			return this->addDataLevelPermissionWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddShareReportOutcome Quickbi_publicClient::addShareReport(const AddShareReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddShareReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddShareReportOutcome(AddShareReportResult(outcome.result()));
	else
		return AddShareReportOutcome(outcome.error());
}

void Quickbi_publicClient::addShareReportAsync(const AddShareReportRequest& request, const AddShareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addShareReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddShareReportOutcomeCallable Quickbi_publicClient::addShareReportCallable(const AddShareReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddShareReportOutcome()>>(
			[this, request]()
			{
			return this->addShareReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddUserOutcome Quickbi_publicClient::addUser(const AddUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserOutcome(AddUserResult(outcome.result()));
	else
		return AddUserOutcome(outcome.error());
}

void Quickbi_publicClient::addUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddUserOutcomeCallable Quickbi_publicClient::addUserCallable(const AddUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserOutcome()>>(
			[this, request]()
			{
			return this->addUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddUserGroupMemberOutcome Quickbi_publicClient::addUserGroupMember(const AddUserGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserGroupMemberOutcome(AddUserGroupMemberResult(outcome.result()));
	else
		return AddUserGroupMemberOutcome(outcome.error());
}

void Quickbi_publicClient::addUserGroupMemberAsync(const AddUserGroupMemberRequest& request, const AddUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddUserGroupMemberOutcomeCallable Quickbi_publicClient::addUserGroupMemberCallable(const AddUserGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->addUserGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddUserGroupMembersOutcome Quickbi_publicClient::addUserGroupMembers(const AddUserGroupMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserGroupMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserGroupMembersOutcome(AddUserGroupMembersResult(outcome.result()));
	else
		return AddUserGroupMembersOutcome(outcome.error());
}

void Quickbi_publicClient::addUserGroupMembersAsync(const AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserGroupMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddUserGroupMembersOutcomeCallable Quickbi_publicClient::addUserGroupMembersCallable(const AddUserGroupMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserGroupMembersOutcome()>>(
			[this, request]()
			{
			return this->addUserGroupMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddUserTagMetaOutcome Quickbi_publicClient::addUserTagMeta(const AddUserTagMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserTagMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserTagMetaOutcome(AddUserTagMetaResult(outcome.result()));
	else
		return AddUserTagMetaOutcome(outcome.error());
}

void Quickbi_publicClient::addUserTagMetaAsync(const AddUserTagMetaRequest& request, const AddUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserTagMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddUserTagMetaOutcomeCallable Quickbi_publicClient::addUserTagMetaCallable(const AddUserTagMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserTagMetaOutcome()>>(
			[this, request]()
			{
			return this->addUserTagMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddUserToWorkspaceOutcome Quickbi_publicClient::addUserToWorkspace(const AddUserToWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserToWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserToWorkspaceOutcome(AddUserToWorkspaceResult(outcome.result()));
	else
		return AddUserToWorkspaceOutcome(outcome.error());
}

void Quickbi_publicClient::addUserToWorkspaceAsync(const AddUserToWorkspaceRequest& request, const AddUserToWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUserToWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddUserToWorkspaceOutcomeCallable Quickbi_publicClient::addUserToWorkspaceCallable(const AddUserToWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserToWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->addUserToWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AddWorkspaceUsersOutcome Quickbi_publicClient::addWorkspaceUsers(const AddWorkspaceUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddWorkspaceUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddWorkspaceUsersOutcome(AddWorkspaceUsersResult(outcome.result()));
	else
		return AddWorkspaceUsersOutcome(outcome.error());
}

void Quickbi_publicClient::addWorkspaceUsersAsync(const AddWorkspaceUsersRequest& request, const AddWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addWorkspaceUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AddWorkspaceUsersOutcomeCallable Quickbi_publicClient::addWorkspaceUsersCallable(const AddWorkspaceUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddWorkspaceUsersOutcome()>>(
			[this, request]()
			{
			return this->addWorkspaceUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AllotDatasetAccelerationTaskOutcome Quickbi_publicClient::allotDatasetAccelerationTask(const AllotDatasetAccelerationTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AllotDatasetAccelerationTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllotDatasetAccelerationTaskOutcome(AllotDatasetAccelerationTaskResult(outcome.result()));
	else
		return AllotDatasetAccelerationTaskOutcome(outcome.error());
}

void Quickbi_publicClient::allotDatasetAccelerationTaskAsync(const AllotDatasetAccelerationTaskRequest& request, const AllotDatasetAccelerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allotDatasetAccelerationTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AllotDatasetAccelerationTaskOutcomeCallable Quickbi_publicClient::allotDatasetAccelerationTaskCallable(const AllotDatasetAccelerationTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllotDatasetAccelerationTaskOutcome()>>(
			[this, request]()
			{
			return this->allotDatasetAccelerationTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::AuthorizeMenuOutcome Quickbi_publicClient::authorizeMenu(const AuthorizeMenuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthorizeMenuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthorizeMenuOutcome(AuthorizeMenuResult(outcome.result()));
	else
		return AuthorizeMenuOutcome(outcome.error());
}

void Quickbi_publicClient::authorizeMenuAsync(const AuthorizeMenuRequest& request, const AuthorizeMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authorizeMenu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::AuthorizeMenuOutcomeCallable Quickbi_publicClient::authorizeMenuCallable(const AuthorizeMenuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthorizeMenuOutcome()>>(
			[this, request]()
			{
			return this->authorizeMenu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::BatchAddFeishuUsersOutcome Quickbi_publicClient::batchAddFeishuUsers(const BatchAddFeishuUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAddFeishuUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAddFeishuUsersOutcome(BatchAddFeishuUsersResult(outcome.result()));
	else
		return BatchAddFeishuUsersOutcome(outcome.error());
}

void Quickbi_publicClient::batchAddFeishuUsersAsync(const BatchAddFeishuUsersRequest& request, const BatchAddFeishuUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAddFeishuUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::BatchAddFeishuUsersOutcomeCallable Quickbi_publicClient::batchAddFeishuUsersCallable(const BatchAddFeishuUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAddFeishuUsersOutcome()>>(
			[this, request]()
			{
			return this->batchAddFeishuUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CancelAuthorizationMenuOutcome Quickbi_publicClient::cancelAuthorizationMenu(const CancelAuthorizationMenuRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelAuthorizationMenuOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelAuthorizationMenuOutcome(CancelAuthorizationMenuResult(outcome.result()));
	else
		return CancelAuthorizationMenuOutcome(outcome.error());
}

void Quickbi_publicClient::cancelAuthorizationMenuAsync(const CancelAuthorizationMenuRequest& request, const CancelAuthorizationMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelAuthorizationMenu(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CancelAuthorizationMenuOutcomeCallable Quickbi_publicClient::cancelAuthorizationMenuCallable(const CancelAuthorizationMenuRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelAuthorizationMenuOutcome()>>(
			[this, request]()
			{
			return this->cancelAuthorizationMenu(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CancelCollectionOutcome Quickbi_publicClient::cancelCollection(const CancelCollectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelCollectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelCollectionOutcome(CancelCollectionResult(outcome.result()));
	else
		return CancelCollectionOutcome(outcome.error());
}

void Quickbi_publicClient::cancelCollectionAsync(const CancelCollectionRequest& request, const CancelCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelCollection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CancelCollectionOutcomeCallable Quickbi_publicClient::cancelCollectionCallable(const CancelCollectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelCollectionOutcome()>>(
			[this, request]()
			{
			return this->cancelCollection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CancelReportShareOutcome Quickbi_publicClient::cancelReportShare(const CancelReportShareRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelReportShareOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelReportShareOutcome(CancelReportShareResult(outcome.result()));
	else
		return CancelReportShareOutcome(outcome.error());
}

void Quickbi_publicClient::cancelReportShareAsync(const CancelReportShareRequest& request, const CancelReportShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelReportShare(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CancelReportShareOutcomeCallable Quickbi_publicClient::cancelReportShareCallable(const CancelReportShareRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelReportShareOutcome()>>(
			[this, request]()
			{
			return this->cancelReportShare(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ChangeVisibilityModelOutcome Quickbi_publicClient::changeVisibilityModel(const ChangeVisibilityModelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeVisibilityModelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeVisibilityModelOutcome(ChangeVisibilityModelResult(outcome.result()));
	else
		return ChangeVisibilityModelOutcome(outcome.error());
}

void Quickbi_publicClient::changeVisibilityModelAsync(const ChangeVisibilityModelRequest& request, const ChangeVisibilityModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeVisibilityModel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ChangeVisibilityModelOutcomeCallable Quickbi_publicClient::changeVisibilityModelCallable(const ChangeVisibilityModelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeVisibilityModelOutcome()>>(
			[this, request]()
			{
			return this->changeVisibilityModel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CheckReadableOutcome Quickbi_publicClient::checkReadable(const CheckReadableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckReadableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckReadableOutcome(CheckReadableResult(outcome.result()));
	else
		return CheckReadableOutcome(outcome.error());
}

void Quickbi_publicClient::checkReadableAsync(const CheckReadableRequest& request, const CheckReadableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkReadable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CheckReadableOutcomeCallable Quickbi_publicClient::checkReadableCallable(const CheckReadableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckReadableOutcome()>>(
			[this, request]()
			{
			return this->checkReadable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CreateTicketOutcome Quickbi_publicClient::createTicket(const CreateTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTicketOutcome(CreateTicketResult(outcome.result()));
	else
		return CreateTicketOutcome(outcome.error());
}

void Quickbi_publicClient::createTicketAsync(const CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CreateTicketOutcomeCallable Quickbi_publicClient::createTicketCallable(const CreateTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicketOutcome()>>(
			[this, request]()
			{
			return this->createTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CreateTicket4CopilotOutcome Quickbi_publicClient::createTicket4Copilot(const CreateTicket4CopilotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTicket4CopilotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTicket4CopilotOutcome(CreateTicket4CopilotResult(outcome.result()));
	else
		return CreateTicket4CopilotOutcome(outcome.error());
}

void Quickbi_publicClient::createTicket4CopilotAsync(const CreateTicket4CopilotRequest& request, const CreateTicket4CopilotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicket4Copilot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CreateTicket4CopilotOutcomeCallable Quickbi_publicClient::createTicket4CopilotCallable(const CreateTicket4CopilotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicket4CopilotOutcome()>>(
			[this, request]()
			{
			return this->createTicket4Copilot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::CreateUserGroupOutcome Quickbi_publicClient::createUserGroup(const CreateUserGroupRequest &request) const
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

void Quickbi_publicClient::createUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::CreateUserGroupOutcomeCallable Quickbi_publicClient::createUserGroupCallable(const CreateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->createUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DataInterpretationOutcome Quickbi_publicClient::dataInterpretation(const DataInterpretationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DataInterpretationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DataInterpretationOutcome(DataInterpretationResult(outcome.result()));
	else
		return DataInterpretationOutcome(outcome.error());
}

void Quickbi_publicClient::dataInterpretationAsync(const DataInterpretationRequest& request, const DataInterpretationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dataInterpretation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DataInterpretationOutcomeCallable Quickbi_publicClient::dataInterpretationCallable(const DataInterpretationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DataInterpretationOutcome()>>(
			[this, request]()
			{
			return this->dataInterpretation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DataSetBloodOutcome Quickbi_publicClient::dataSetBlood(const DataSetBloodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DataSetBloodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DataSetBloodOutcome(DataSetBloodResult(outcome.result()));
	else
		return DataSetBloodOutcome(outcome.error());
}

void Quickbi_publicClient::dataSetBloodAsync(const DataSetBloodRequest& request, const DataSetBloodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dataSetBlood(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DataSetBloodOutcomeCallable Quickbi_publicClient::dataSetBloodCallable(const DataSetBloodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DataSetBloodOutcome()>>(
			[this, request]()
			{
			return this->dataSetBlood(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DataSourceBloodOutcome Quickbi_publicClient::dataSourceBlood(const DataSourceBloodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DataSourceBloodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DataSourceBloodOutcome(DataSourceBloodResult(outcome.result()));
	else
		return DataSourceBloodOutcome(outcome.error());
}

void Quickbi_publicClient::dataSourceBloodAsync(const DataSourceBloodRequest& request, const DataSourceBloodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dataSourceBlood(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DataSourceBloodOutcomeCallable Quickbi_publicClient::dataSourceBloodCallable(const DataSourceBloodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DataSourceBloodOutcome()>>(
			[this, request]()
			{
			return this->dataSourceBlood(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DelayTicketExpireTimeOutcome Quickbi_publicClient::delayTicketExpireTime(const DelayTicketExpireTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DelayTicketExpireTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DelayTicketExpireTimeOutcome(DelayTicketExpireTimeResult(outcome.result()));
	else
		return DelayTicketExpireTimeOutcome(outcome.error());
}

void Quickbi_publicClient::delayTicketExpireTimeAsync(const DelayTicketExpireTimeRequest& request, const DelayTicketExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, delayTicketExpireTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DelayTicketExpireTimeOutcomeCallable Quickbi_publicClient::delayTicketExpireTimeCallable(const DelayTicketExpireTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DelayTicketExpireTimeOutcome()>>(
			[this, request]()
			{
			return this->delayTicketExpireTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteDataLevelPermissionRuleUsersOutcome Quickbi_publicClient::deleteDataLevelPermissionRuleUsers(const DeleteDataLevelPermissionRuleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataLevelPermissionRuleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataLevelPermissionRuleUsersOutcome(DeleteDataLevelPermissionRuleUsersResult(outcome.result()));
	else
		return DeleteDataLevelPermissionRuleUsersOutcome(outcome.error());
}

void Quickbi_publicClient::deleteDataLevelPermissionRuleUsersAsync(const DeleteDataLevelPermissionRuleUsersRequest& request, const DeleteDataLevelPermissionRuleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataLevelPermissionRuleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteDataLevelPermissionRuleUsersOutcomeCallable Quickbi_publicClient::deleteDataLevelPermissionRuleUsersCallable(const DeleteDataLevelPermissionRuleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataLevelPermissionRuleUsersOutcome()>>(
			[this, request]()
			{
			return this->deleteDataLevelPermissionRuleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteDataLevelRuleConfigOutcome Quickbi_publicClient::deleteDataLevelRuleConfig(const DeleteDataLevelRuleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDataLevelRuleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDataLevelRuleConfigOutcome(DeleteDataLevelRuleConfigResult(outcome.result()));
	else
		return DeleteDataLevelRuleConfigOutcome(outcome.error());
}

void Quickbi_publicClient::deleteDataLevelRuleConfigAsync(const DeleteDataLevelRuleConfigRequest& request, const DeleteDataLevelRuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDataLevelRuleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteDataLevelRuleConfigOutcomeCallable Quickbi_publicClient::deleteDataLevelRuleConfigCallable(const DeleteDataLevelRuleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDataLevelRuleConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteDataLevelRuleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteTicketOutcome Quickbi_publicClient::deleteTicket(const DeleteTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTicketOutcome(DeleteTicketResult(outcome.result()));
	else
		return DeleteTicketOutcome(outcome.error());
}

void Quickbi_publicClient::deleteTicketAsync(const DeleteTicketRequest& request, const DeleteTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteTicketOutcomeCallable Quickbi_publicClient::deleteTicketCallable(const DeleteTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTicketOutcome()>>(
			[this, request]()
			{
			return this->deleteTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserOutcome Quickbi_publicClient::deleteUser(const DeleteUserRequest &request) const
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

void Quickbi_publicClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserOutcomeCallable Quickbi_publicClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserFromWorkspaceOutcome Quickbi_publicClient::deleteUserFromWorkspace(const DeleteUserFromWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserFromWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserFromWorkspaceOutcome(DeleteUserFromWorkspaceResult(outcome.result()));
	else
		return DeleteUserFromWorkspaceOutcome(outcome.error());
}

void Quickbi_publicClient::deleteUserFromWorkspaceAsync(const DeleteUserFromWorkspaceRequest& request, const DeleteUserFromWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserFromWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserFromWorkspaceOutcomeCallable Quickbi_publicClient::deleteUserFromWorkspaceCallable(const DeleteUserFromWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserFromWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->deleteUserFromWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserGroupOutcome Quickbi_publicClient::deleteUserGroup(const DeleteUserGroupRequest &request) const
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

void Quickbi_publicClient::deleteUserGroupAsync(const DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserGroupOutcomeCallable Quickbi_publicClient::deleteUserGroupCallable(const DeleteUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserGroupMemberOutcome Quickbi_publicClient::deleteUserGroupMember(const DeleteUserGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserGroupMemberOutcome(DeleteUserGroupMemberResult(outcome.result()));
	else
		return DeleteUserGroupMemberOutcome(outcome.error());
}

void Quickbi_publicClient::deleteUserGroupMemberAsync(const DeleteUserGroupMemberRequest& request, const DeleteUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserGroupMemberOutcomeCallable Quickbi_publicClient::deleteUserGroupMemberCallable(const DeleteUserGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserGroupMembersOutcome Quickbi_publicClient::deleteUserGroupMembers(const DeleteUserGroupMembersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserGroupMembersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserGroupMembersOutcome(DeleteUserGroupMembersResult(outcome.result()));
	else
		return DeleteUserGroupMembersOutcome(outcome.error());
}

void Quickbi_publicClient::deleteUserGroupMembersAsync(const DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserGroupMembers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserGroupMembersOutcomeCallable Quickbi_publicClient::deleteUserGroupMembersCallable(const DeleteUserGroupMembersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserGroupMembersOutcome()>>(
			[this, request]()
			{
			return this->deleteUserGroupMembers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::DeleteUserTagMetaOutcome Quickbi_publicClient::deleteUserTagMeta(const DeleteUserTagMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserTagMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserTagMetaOutcome(DeleteUserTagMetaResult(outcome.result()));
	else
		return DeleteUserTagMetaOutcome(outcome.error());
}

void Quickbi_publicClient::deleteUserTagMetaAsync(const DeleteUserTagMetaRequest& request, const DeleteUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserTagMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::DeleteUserTagMetaOutcomeCallable Quickbi_publicClient::deleteUserTagMetaCallable(const DeleteUserTagMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserTagMetaOutcome()>>(
			[this, request]()
			{
			return this->deleteUserTagMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::GetDataSourceConnectionInfoOutcome Quickbi_publicClient::getDataSourceConnectionInfo(const GetDataSourceConnectionInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDataSourceConnectionInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDataSourceConnectionInfoOutcome(GetDataSourceConnectionInfoResult(outcome.result()));
	else
		return GetDataSourceConnectionInfoOutcome(outcome.error());
}

void Quickbi_publicClient::getDataSourceConnectionInfoAsync(const GetDataSourceConnectionInfoRequest& request, const GetDataSourceConnectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDataSourceConnectionInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::GetDataSourceConnectionInfoOutcomeCallable Quickbi_publicClient::getDataSourceConnectionInfoCallable(const GetDataSourceConnectionInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDataSourceConnectionInfoOutcome()>>(
			[this, request]()
			{
			return this->getDataSourceConnectionInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::GetMailTaskStatusOutcome Quickbi_publicClient::getMailTaskStatus(const GetMailTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMailTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMailTaskStatusOutcome(GetMailTaskStatusResult(outcome.result()));
	else
		return GetMailTaskStatusOutcome(outcome.error());
}

void Quickbi_publicClient::getMailTaskStatusAsync(const GetMailTaskStatusRequest& request, const GetMailTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMailTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::GetMailTaskStatusOutcomeCallable Quickbi_publicClient::getMailTaskStatusCallable(const GetMailTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMailTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->getMailTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::GetUserGroupInfoOutcome Quickbi_publicClient::getUserGroupInfo(const GetUserGroupInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserGroupInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserGroupInfoOutcome(GetUserGroupInfoResult(outcome.result()));
	else
		return GetUserGroupInfoOutcome(outcome.error());
}

void Quickbi_publicClient::getUserGroupInfoAsync(const GetUserGroupInfoRequest& request, const GetUserGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserGroupInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::GetUserGroupInfoOutcomeCallable Quickbi_publicClient::getUserGroupInfoCallable(const GetUserGroupInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserGroupInfoOutcome()>>(
			[this, request]()
			{
			return this->getUserGroupInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::GetWorksEmbedListOutcome Quickbi_publicClient::getWorksEmbedList(const GetWorksEmbedListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorksEmbedListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorksEmbedListOutcome(GetWorksEmbedListResult(outcome.result()));
	else
		return GetWorksEmbedListOutcome(outcome.error());
}

void Quickbi_publicClient::getWorksEmbedListAsync(const GetWorksEmbedListRequest& request, const GetWorksEmbedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorksEmbedList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::GetWorksEmbedListOutcomeCallable Quickbi_publicClient::getWorksEmbedListCallable(const GetWorksEmbedListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorksEmbedListOutcome()>>(
			[this, request]()
			{
			return this->getWorksEmbedList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListApiDatasourceOutcome Quickbi_publicClient::listApiDatasource(const ListApiDatasourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApiDatasourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApiDatasourceOutcome(ListApiDatasourceResult(outcome.result()));
	else
		return ListApiDatasourceOutcome(outcome.error());
}

void Quickbi_publicClient::listApiDatasourceAsync(const ListApiDatasourceRequest& request, const ListApiDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApiDatasource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListApiDatasourceOutcomeCallable Quickbi_publicClient::listApiDatasourceCallable(const ListApiDatasourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApiDatasourceOutcome()>>(
			[this, request]()
			{
			return this->listApiDatasource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListByUserGroupIdOutcome Quickbi_publicClient::listByUserGroupId(const ListByUserGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListByUserGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListByUserGroupIdOutcome(ListByUserGroupIdResult(outcome.result()));
	else
		return ListByUserGroupIdOutcome(outcome.error());
}

void Quickbi_publicClient::listByUserGroupIdAsync(const ListByUserGroupIdRequest& request, const ListByUserGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listByUserGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListByUserGroupIdOutcomeCallable Quickbi_publicClient::listByUserGroupIdCallable(const ListByUserGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListByUserGroupIdOutcome()>>(
			[this, request]()
			{
			return this->listByUserGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListCollectionsOutcome Quickbi_publicClient::listCollections(const ListCollectionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCollectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCollectionsOutcome(ListCollectionsResult(outcome.result()));
	else
		return ListCollectionsOutcome(outcome.error());
}

void Quickbi_publicClient::listCollectionsAsync(const ListCollectionsRequest& request, const ListCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCollections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListCollectionsOutcomeCallable Quickbi_publicClient::listCollectionsCallable(const ListCollectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCollectionsOutcome()>>(
			[this, request]()
			{
			return this->listCollections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListCubeDataLevelPermissionConfigOutcome Quickbi_publicClient::listCubeDataLevelPermissionConfig(const ListCubeDataLevelPermissionConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListCubeDataLevelPermissionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListCubeDataLevelPermissionConfigOutcome(ListCubeDataLevelPermissionConfigResult(outcome.result()));
	else
		return ListCubeDataLevelPermissionConfigOutcome(outcome.error());
}

void Quickbi_publicClient::listCubeDataLevelPermissionConfigAsync(const ListCubeDataLevelPermissionConfigRequest& request, const ListCubeDataLevelPermissionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listCubeDataLevelPermissionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListCubeDataLevelPermissionConfigOutcomeCallable Quickbi_publicClient::listCubeDataLevelPermissionConfigCallable(const ListCubeDataLevelPermissionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListCubeDataLevelPermissionConfigOutcome()>>(
			[this, request]()
			{
			return this->listCubeDataLevelPermissionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListDataLevelPermissionWhiteListOutcome Quickbi_publicClient::listDataLevelPermissionWhiteList(const ListDataLevelPermissionWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDataLevelPermissionWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDataLevelPermissionWhiteListOutcome(ListDataLevelPermissionWhiteListResult(outcome.result()));
	else
		return ListDataLevelPermissionWhiteListOutcome(outcome.error());
}

void Quickbi_publicClient::listDataLevelPermissionWhiteListAsync(const ListDataLevelPermissionWhiteListRequest& request, const ListDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataLevelPermissionWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListDataLevelPermissionWhiteListOutcomeCallable Quickbi_publicClient::listDataLevelPermissionWhiteListCallable(const ListDataLevelPermissionWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataLevelPermissionWhiteListOutcome()>>(
			[this, request]()
			{
			return this->listDataLevelPermissionWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListDataSourceOutcome Quickbi_publicClient::listDataSource(const ListDataSourceRequest &request) const
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

void Quickbi_publicClient::listDataSourceAsync(const ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDataSource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListDataSourceOutcomeCallable Quickbi_publicClient::listDataSourceCallable(const ListDataSourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDataSourceOutcome()>>(
			[this, request]()
			{
			return this->listDataSource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListFavoriteReportsOutcome Quickbi_publicClient::listFavoriteReports(const ListFavoriteReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListFavoriteReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListFavoriteReportsOutcome(ListFavoriteReportsResult(outcome.result()));
	else
		return ListFavoriteReportsOutcome(outcome.error());
}

void Quickbi_publicClient::listFavoriteReportsAsync(const ListFavoriteReportsRequest& request, const ListFavoriteReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listFavoriteReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListFavoriteReportsOutcomeCallable Quickbi_publicClient::listFavoriteReportsCallable(const ListFavoriteReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListFavoriteReportsOutcome()>>(
			[this, request]()
			{
			return this->listFavoriteReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListOrganizationRoleUsersOutcome Quickbi_publicClient::listOrganizationRoleUsers(const ListOrganizationRoleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationRoleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationRoleUsersOutcome(ListOrganizationRoleUsersResult(outcome.result()));
	else
		return ListOrganizationRoleUsersOutcome(outcome.error());
}

void Quickbi_publicClient::listOrganizationRoleUsersAsync(const ListOrganizationRoleUsersRequest& request, const ListOrganizationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationRoleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListOrganizationRoleUsersOutcomeCallable Quickbi_publicClient::listOrganizationRoleUsersCallable(const ListOrganizationRoleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationRoleUsersOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationRoleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListOrganizationRolesOutcome Quickbi_publicClient::listOrganizationRoles(const ListOrganizationRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOrganizationRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOrganizationRolesOutcome(ListOrganizationRolesResult(outcome.result()));
	else
		return ListOrganizationRolesOutcome(outcome.error());
}

void Quickbi_publicClient::listOrganizationRolesAsync(const ListOrganizationRolesRequest& request, const ListOrganizationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOrganizationRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListOrganizationRolesOutcomeCallable Quickbi_publicClient::listOrganizationRolesCallable(const ListOrganizationRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOrganizationRolesOutcome()>>(
			[this, request]()
			{
			return this->listOrganizationRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListPortalMenuAuthorizationOutcome Quickbi_publicClient::listPortalMenuAuthorization(const ListPortalMenuAuthorizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPortalMenuAuthorizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPortalMenuAuthorizationOutcome(ListPortalMenuAuthorizationResult(outcome.result()));
	else
		return ListPortalMenuAuthorizationOutcome(outcome.error());
}

void Quickbi_publicClient::listPortalMenuAuthorizationAsync(const ListPortalMenuAuthorizationRequest& request, const ListPortalMenuAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPortalMenuAuthorization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListPortalMenuAuthorizationOutcomeCallable Quickbi_publicClient::listPortalMenuAuthorizationCallable(const ListPortalMenuAuthorizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPortalMenuAuthorizationOutcome()>>(
			[this, request]()
			{
			return this->listPortalMenuAuthorization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListPortalMenusOutcome Quickbi_publicClient::listPortalMenus(const ListPortalMenusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPortalMenusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPortalMenusOutcome(ListPortalMenusResult(outcome.result()));
	else
		return ListPortalMenusOutcome(outcome.error());
}

void Quickbi_publicClient::listPortalMenusAsync(const ListPortalMenusRequest& request, const ListPortalMenusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPortalMenus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListPortalMenusOutcomeCallable Quickbi_publicClient::listPortalMenusCallable(const ListPortalMenusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPortalMenusOutcome()>>(
			[this, request]()
			{
			return this->listPortalMenus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListRecentViewReportsOutcome Quickbi_publicClient::listRecentViewReports(const ListRecentViewReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRecentViewReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRecentViewReportsOutcome(ListRecentViewReportsResult(outcome.result()));
	else
		return ListRecentViewReportsOutcome(outcome.error());
}

void Quickbi_publicClient::listRecentViewReportsAsync(const ListRecentViewReportsRequest& request, const ListRecentViewReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRecentViewReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListRecentViewReportsOutcomeCallable Quickbi_publicClient::listRecentViewReportsCallable(const ListRecentViewReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRecentViewReportsOutcome()>>(
			[this, request]()
			{
			return this->listRecentViewReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListSharedReportsOutcome Quickbi_publicClient::listSharedReports(const ListSharedReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSharedReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSharedReportsOutcome(ListSharedReportsResult(outcome.result()));
	else
		return ListSharedReportsOutcome(outcome.error());
}

void Quickbi_publicClient::listSharedReportsAsync(const ListSharedReportsRequest& request, const ListSharedReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSharedReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListSharedReportsOutcomeCallable Quickbi_publicClient::listSharedReportsCallable(const ListSharedReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSharedReportsOutcome()>>(
			[this, request]()
			{
			return this->listSharedReports(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListUserGroupsByUserIdOutcome Quickbi_publicClient::listUserGroupsByUserId(const ListUserGroupsByUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUserGroupsByUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUserGroupsByUserIdOutcome(ListUserGroupsByUserIdResult(outcome.result()));
	else
		return ListUserGroupsByUserIdOutcome(outcome.error());
}

void Quickbi_publicClient::listUserGroupsByUserIdAsync(const ListUserGroupsByUserIdRequest& request, const ListUserGroupsByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUserGroupsByUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListUserGroupsByUserIdOutcomeCallable Quickbi_publicClient::listUserGroupsByUserIdCallable(const ListUserGroupsByUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUserGroupsByUserIdOutcome()>>(
			[this, request]()
			{
			return this->listUserGroupsByUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListWorkspaceRoleUsersOutcome Quickbi_publicClient::listWorkspaceRoleUsers(const ListWorkspaceRoleUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkspaceRoleUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkspaceRoleUsersOutcome(ListWorkspaceRoleUsersResult(outcome.result()));
	else
		return ListWorkspaceRoleUsersOutcome(outcome.error());
}

void Quickbi_publicClient::listWorkspaceRoleUsersAsync(const ListWorkspaceRoleUsersRequest& request, const ListWorkspaceRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkspaceRoleUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListWorkspaceRoleUsersOutcomeCallable Quickbi_publicClient::listWorkspaceRoleUsersCallable(const ListWorkspaceRoleUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkspaceRoleUsersOutcome()>>(
			[this, request]()
			{
			return this->listWorkspaceRoleUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ListWorkspaceRolesOutcome Quickbi_publicClient::listWorkspaceRoles(const ListWorkspaceRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListWorkspaceRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListWorkspaceRolesOutcome(ListWorkspaceRolesResult(outcome.result()));
	else
		return ListWorkspaceRolesOutcome(outcome.error());
}

void Quickbi_publicClient::listWorkspaceRolesAsync(const ListWorkspaceRolesRequest& request, const ListWorkspaceRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listWorkspaceRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ListWorkspaceRolesOutcomeCallable Quickbi_publicClient::listWorkspaceRolesCallable(const ListWorkspaceRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListWorkspaceRolesOutcome()>>(
			[this, request]()
			{
			return this->listWorkspaceRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ManualRunMailTaskOutcome Quickbi_publicClient::manualRunMailTask(const ManualRunMailTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ManualRunMailTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ManualRunMailTaskOutcome(ManualRunMailTaskResult(outcome.result()));
	else
		return ManualRunMailTaskOutcome(outcome.error());
}

void Quickbi_publicClient::manualRunMailTaskAsync(const ManualRunMailTaskRequest& request, const ManualRunMailTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, manualRunMailTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ManualRunMailTaskOutcomeCallable Quickbi_publicClient::manualRunMailTaskCallable(const ManualRunMailTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ManualRunMailTaskOutcome()>>(
			[this, request]()
			{
			return this->manualRunMailTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ModifyApiDatasourceParametersOutcome Quickbi_publicClient::modifyApiDatasourceParameters(const ModifyApiDatasourceParametersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiDatasourceParametersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiDatasourceParametersOutcome(ModifyApiDatasourceParametersResult(outcome.result()));
	else
		return ModifyApiDatasourceParametersOutcome(outcome.error());
}

void Quickbi_publicClient::modifyApiDatasourceParametersAsync(const ModifyApiDatasourceParametersRequest& request, const ModifyApiDatasourceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiDatasourceParameters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ModifyApiDatasourceParametersOutcomeCallable Quickbi_publicClient::modifyApiDatasourceParametersCallable(const ModifyApiDatasourceParametersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiDatasourceParametersOutcome()>>(
			[this, request]()
			{
			return this->modifyApiDatasourceParameters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ModifyCopilotEmbedConfigOutcome Quickbi_publicClient::modifyCopilotEmbedConfig(const ModifyCopilotEmbedConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCopilotEmbedConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCopilotEmbedConfigOutcome(ModifyCopilotEmbedConfigResult(outcome.result()));
	else
		return ModifyCopilotEmbedConfigOutcome(outcome.error());
}

void Quickbi_publicClient::modifyCopilotEmbedConfigAsync(const ModifyCopilotEmbedConfigRequest& request, const ModifyCopilotEmbedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCopilotEmbedConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ModifyCopilotEmbedConfigOutcomeCallable Quickbi_publicClient::modifyCopilotEmbedConfigCallable(const ModifyCopilotEmbedConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCopilotEmbedConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyCopilotEmbedConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryApprovalInfoOutcome Quickbi_publicClient::queryApprovalInfo(const QueryApprovalInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryApprovalInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryApprovalInfoOutcome(QueryApprovalInfoResult(outcome.result()));
	else
		return QueryApprovalInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryApprovalInfoAsync(const QueryApprovalInfoRequest& request, const QueryApprovalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryApprovalInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryApprovalInfoOutcomeCallable Quickbi_publicClient::queryApprovalInfoCallable(const QueryApprovalInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryApprovalInfoOutcome()>>(
			[this, request]()
			{
			return this->queryApprovalInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryAuditLogOutcome Quickbi_publicClient::queryAuditLog(const QueryAuditLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAuditLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAuditLogOutcome(QueryAuditLogResult(outcome.result()));
	else
		return QueryAuditLogOutcome(outcome.error());
}

void Quickbi_publicClient::queryAuditLogAsync(const QueryAuditLogRequest& request, const QueryAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAuditLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryAuditLogOutcomeCallable Quickbi_publicClient::queryAuditLogCallable(const QueryAuditLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAuditLogOutcome()>>(
			[this, request]()
			{
			return this->queryAuditLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryComponentPerformanceOutcome Quickbi_publicClient::queryComponentPerformance(const QueryComponentPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryComponentPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryComponentPerformanceOutcome(QueryComponentPerformanceResult(outcome.result()));
	else
		return QueryComponentPerformanceOutcome(outcome.error());
}

void Quickbi_publicClient::queryComponentPerformanceAsync(const QueryComponentPerformanceRequest& request, const QueryComponentPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryComponentPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryComponentPerformanceOutcomeCallable Quickbi_publicClient::queryComponentPerformanceCallable(const QueryComponentPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryComponentPerformanceOutcome()>>(
			[this, request]()
			{
			return this->queryComponentPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryCopilotEmbedConfigOutcome Quickbi_publicClient::queryCopilotEmbedConfig(const QueryCopilotEmbedConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCopilotEmbedConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCopilotEmbedConfigOutcome(QueryCopilotEmbedConfigResult(outcome.result()));
	else
		return QueryCopilotEmbedConfigOutcome(outcome.error());
}

void Quickbi_publicClient::queryCopilotEmbedConfigAsync(const QueryCopilotEmbedConfigRequest& request, const QueryCopilotEmbedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCopilotEmbedConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryCopilotEmbedConfigOutcomeCallable Quickbi_publicClient::queryCopilotEmbedConfigCallable(const QueryCopilotEmbedConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCopilotEmbedConfigOutcome()>>(
			[this, request]()
			{
			return this->queryCopilotEmbedConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryCubeOptimizationOutcome Quickbi_publicClient::queryCubeOptimization(const QueryCubeOptimizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCubeOptimizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCubeOptimizationOutcome(QueryCubeOptimizationResult(outcome.result()));
	else
		return QueryCubeOptimizationOutcome(outcome.error());
}

void Quickbi_publicClient::queryCubeOptimizationAsync(const QueryCubeOptimizationRequest& request, const QueryCubeOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCubeOptimization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryCubeOptimizationOutcomeCallable Quickbi_publicClient::queryCubeOptimizationCallable(const QueryCubeOptimizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCubeOptimizationOutcome()>>(
			[this, request]()
			{
			return this->queryCubeOptimization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryCubePerformanceOutcome Quickbi_publicClient::queryCubePerformance(const QueryCubePerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryCubePerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryCubePerformanceOutcome(QueryCubePerformanceResult(outcome.result()));
	else
		return QueryCubePerformanceOutcome(outcome.error());
}

void Quickbi_publicClient::queryCubePerformanceAsync(const QueryCubePerformanceRequest& request, const QueryCubePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryCubePerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryCubePerformanceOutcomeCallable Quickbi_publicClient::queryCubePerformanceCallable(const QueryCubePerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryCubePerformanceOutcome()>>(
			[this, request]()
			{
			return this->queryCubePerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDataOutcome Quickbi_publicClient::queryData(const QueryDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataOutcome(QueryDataResult(outcome.result()));
	else
		return QueryDataOutcome(outcome.error());
}

void Quickbi_publicClient::queryDataAsync(const QueryDataRequest& request, const QueryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDataOutcomeCallable Quickbi_publicClient::queryDataCallable(const QueryDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataOutcome()>>(
			[this, request]()
			{
			return this->queryData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDataRangeOutcome Quickbi_publicClient::queryDataRange(const QueryDataRangeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataRangeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataRangeOutcome(QueryDataRangeResult(outcome.result()));
	else
		return QueryDataRangeOutcome(outcome.error());
}

void Quickbi_publicClient::queryDataRangeAsync(const QueryDataRangeRequest& request, const QueryDataRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataRange(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDataRangeOutcomeCallable Quickbi_publicClient::queryDataRangeCallable(const QueryDataRangeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataRangeOutcome()>>(
			[this, request]()
			{
			return this->queryDataRange(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDataServiceOutcome Quickbi_publicClient::queryDataService(const QueryDataServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataServiceOutcome(QueryDataServiceResult(outcome.result()));
	else
		return QueryDataServiceOutcome(outcome.error());
}

void Quickbi_publicClient::queryDataServiceAsync(const QueryDataServiceRequest& request, const QueryDataServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDataServiceOutcomeCallable Quickbi_publicClient::queryDataServiceCallable(const QueryDataServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataServiceOutcome()>>(
			[this, request]()
			{
			return this->queryDataService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDataServiceListOutcome Quickbi_publicClient::queryDataServiceList(const QueryDataServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataServiceListOutcome(QueryDataServiceListResult(outcome.result()));
	else
		return QueryDataServiceListOutcome(outcome.error());
}

void Quickbi_publicClient::queryDataServiceListAsync(const QueryDataServiceListRequest& request, const QueryDataServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDataServiceListOutcomeCallable Quickbi_publicClient::queryDataServiceListCallable(const QueryDataServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataServiceListOutcome()>>(
			[this, request]()
			{
			return this->queryDataServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDatasetDetailInfoOutcome Quickbi_publicClient::queryDatasetDetailInfo(const QueryDatasetDetailInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetDetailInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetDetailInfoOutcome(QueryDatasetDetailInfoResult(outcome.result()));
	else
		return QueryDatasetDetailInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryDatasetDetailInfoAsync(const QueryDatasetDetailInfoRequest& request, const QueryDatasetDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDatasetDetailInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDatasetDetailInfoOutcomeCallable Quickbi_publicClient::queryDatasetDetailInfoCallable(const QueryDatasetDetailInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetDetailInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDatasetDetailInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDatasetInfoOutcome Quickbi_publicClient::queryDatasetInfo(const QueryDatasetInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetInfoOutcome(QueryDatasetInfoResult(outcome.result()));
	else
		return QueryDatasetInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryDatasetInfoAsync(const QueryDatasetInfoRequest& request, const QueryDatasetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDatasetInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDatasetInfoOutcomeCallable Quickbi_publicClient::queryDatasetInfoCallable(const QueryDatasetInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDatasetInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDatasetListOutcome Quickbi_publicClient::queryDatasetList(const QueryDatasetListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetListOutcome(QueryDatasetListResult(outcome.result()));
	else
		return QueryDatasetListOutcome(outcome.error());
}

void Quickbi_publicClient::queryDatasetListAsync(const QueryDatasetListRequest& request, const QueryDatasetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDatasetList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDatasetListOutcomeCallable Quickbi_publicClient::queryDatasetListCallable(const QueryDatasetListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetListOutcome()>>(
			[this, request]()
			{
			return this->queryDatasetList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDatasetSmartqStatusOutcome Quickbi_publicClient::queryDatasetSmartqStatus(const QueryDatasetSmartqStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetSmartqStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetSmartqStatusOutcome(QueryDatasetSmartqStatusResult(outcome.result()));
	else
		return QueryDatasetSmartqStatusOutcome(outcome.error());
}

void Quickbi_publicClient::queryDatasetSmartqStatusAsync(const QueryDatasetSmartqStatusRequest& request, const QueryDatasetSmartqStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDatasetSmartqStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDatasetSmartqStatusOutcomeCallable Quickbi_publicClient::queryDatasetSmartqStatusCallable(const QueryDatasetSmartqStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetSmartqStatusOutcome()>>(
			[this, request]()
			{
			return this->queryDatasetSmartqStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryDatasetSwitchInfoOutcome Quickbi_publicClient::queryDatasetSwitchInfo(const QueryDatasetSwitchInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDatasetSwitchInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDatasetSwitchInfoOutcome(QueryDatasetSwitchInfoResult(outcome.result()));
	else
		return QueryDatasetSwitchInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryDatasetSwitchInfoAsync(const QueryDatasetSwitchInfoRequest& request, const QueryDatasetSwitchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDatasetSwitchInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryDatasetSwitchInfoOutcomeCallable Quickbi_publicClient::queryDatasetSwitchInfoCallable(const QueryDatasetSwitchInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDatasetSwitchInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDatasetSwitchInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryEmbeddedInfoOutcome Quickbi_publicClient::queryEmbeddedInfo(const QueryEmbeddedInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEmbeddedInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEmbeddedInfoOutcome(QueryEmbeddedInfoResult(outcome.result()));
	else
		return QueryEmbeddedInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryEmbeddedInfoAsync(const QueryEmbeddedInfoRequest& request, const QueryEmbeddedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEmbeddedInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryEmbeddedInfoOutcomeCallable Quickbi_publicClient::queryEmbeddedInfoCallable(const QueryEmbeddedInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEmbeddedInfoOutcome()>>(
			[this, request]()
			{
			return this->queryEmbeddedInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryEmbeddedStatusOutcome Quickbi_publicClient::queryEmbeddedStatus(const QueryEmbeddedStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEmbeddedStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEmbeddedStatusOutcome(QueryEmbeddedStatusResult(outcome.result()));
	else
		return QueryEmbeddedStatusOutcome(outcome.error());
}

void Quickbi_publicClient::queryEmbeddedStatusAsync(const QueryEmbeddedStatusRequest& request, const QueryEmbeddedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEmbeddedStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryEmbeddedStatusOutcomeCallable Quickbi_publicClient::queryEmbeddedStatusCallable(const QueryEmbeddedStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEmbeddedStatusOutcome()>>(
			[this, request]()
			{
			return this->queryEmbeddedStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryLlmCubeWithThemeListByUserIdOutcome Quickbi_publicClient::queryLlmCubeWithThemeListByUserId(const QueryLlmCubeWithThemeListByUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLlmCubeWithThemeListByUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLlmCubeWithThemeListByUserIdOutcome(QueryLlmCubeWithThemeListByUserIdResult(outcome.result()));
	else
		return QueryLlmCubeWithThemeListByUserIdOutcome(outcome.error());
}

void Quickbi_publicClient::queryLlmCubeWithThemeListByUserIdAsync(const QueryLlmCubeWithThemeListByUserIdRequest& request, const QueryLlmCubeWithThemeListByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLlmCubeWithThemeListByUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryLlmCubeWithThemeListByUserIdOutcomeCallable Quickbi_publicClient::queryLlmCubeWithThemeListByUserIdCallable(const QueryLlmCubeWithThemeListByUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLlmCubeWithThemeListByUserIdOutcome()>>(
			[this, request]()
			{
			return this->queryLlmCubeWithThemeListByUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryOrganizationRoleConfigOutcome Quickbi_publicClient::queryOrganizationRoleConfig(const QueryOrganizationRoleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOrganizationRoleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOrganizationRoleConfigOutcome(QueryOrganizationRoleConfigResult(outcome.result()));
	else
		return QueryOrganizationRoleConfigOutcome(outcome.error());
}

void Quickbi_publicClient::queryOrganizationRoleConfigAsync(const QueryOrganizationRoleConfigRequest& request, const QueryOrganizationRoleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOrganizationRoleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryOrganizationRoleConfigOutcomeCallable Quickbi_publicClient::queryOrganizationRoleConfigCallable(const QueryOrganizationRoleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOrganizationRoleConfigOutcome()>>(
			[this, request]()
			{
			return this->queryOrganizationRoleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryOrganizationWorkspaceListOutcome Quickbi_publicClient::queryOrganizationWorkspaceList(const QueryOrganizationWorkspaceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryOrganizationWorkspaceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryOrganizationWorkspaceListOutcome(QueryOrganizationWorkspaceListResult(outcome.result()));
	else
		return QueryOrganizationWorkspaceListOutcome(outcome.error());
}

void Quickbi_publicClient::queryOrganizationWorkspaceListAsync(const QueryOrganizationWorkspaceListRequest& request, const QueryOrganizationWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryOrganizationWorkspaceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryOrganizationWorkspaceListOutcomeCallable Quickbi_publicClient::queryOrganizationWorkspaceListCallable(const QueryOrganizationWorkspaceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryOrganizationWorkspaceListOutcome()>>(
			[this, request]()
			{
			return this->queryOrganizationWorkspaceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryReadableResourcesListByUserIdOutcome Quickbi_publicClient::queryReadableResourcesListByUserId(const QueryReadableResourcesListByUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryReadableResourcesListByUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryReadableResourcesListByUserIdOutcome(QueryReadableResourcesListByUserIdResult(outcome.result()));
	else
		return QueryReadableResourcesListByUserIdOutcome(outcome.error());
}

void Quickbi_publicClient::queryReadableResourcesListByUserIdAsync(const QueryReadableResourcesListByUserIdRequest& request, const QueryReadableResourcesListByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryReadableResourcesListByUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryReadableResourcesListByUserIdOutcomeCallable Quickbi_publicClient::queryReadableResourcesListByUserIdCallable(const QueryReadableResourcesListByUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryReadableResourcesListByUserIdOutcome()>>(
			[this, request]()
			{
			return this->queryReadableResourcesListByUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryReadableResourcesListByUserIdV2Outcome Quickbi_publicClient::queryReadableResourcesListByUserIdV2(const QueryReadableResourcesListByUserIdV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryReadableResourcesListByUserIdV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryReadableResourcesListByUserIdV2Outcome(QueryReadableResourcesListByUserIdV2Result(outcome.result()));
	else
		return QueryReadableResourcesListByUserIdV2Outcome(outcome.error());
}

void Quickbi_publicClient::queryReadableResourcesListByUserIdV2Async(const QueryReadableResourcesListByUserIdV2Request& request, const QueryReadableResourcesListByUserIdV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryReadableResourcesListByUserIdV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryReadableResourcesListByUserIdV2OutcomeCallable Quickbi_publicClient::queryReadableResourcesListByUserIdV2Callable(const QueryReadableResourcesListByUserIdV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryReadableResourcesListByUserIdV2Outcome()>>(
			[this, request]()
			{
			return this->queryReadableResourcesListByUserIdV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryReportPerformanceOutcome Quickbi_publicClient::queryReportPerformance(const QueryReportPerformanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryReportPerformanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryReportPerformanceOutcome(QueryReportPerformanceResult(outcome.result()));
	else
		return QueryReportPerformanceOutcome(outcome.error());
}

void Quickbi_publicClient::queryReportPerformanceAsync(const QueryReportPerformanceRequest& request, const QueryReportPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryReportPerformance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryReportPerformanceOutcomeCallable Quickbi_publicClient::queryReportPerformanceCallable(const QueryReportPerformanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryReportPerformanceOutcome()>>(
			[this, request]()
			{
			return this->queryReportPerformance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryShareListOutcome Quickbi_publicClient::queryShareList(const QueryShareListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryShareListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryShareListOutcome(QueryShareListResult(outcome.result()));
	else
		return QueryShareListOutcome(outcome.error());
}

void Quickbi_publicClient::queryShareListAsync(const QueryShareListRequest& request, const QueryShareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryShareList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryShareListOutcomeCallable Quickbi_publicClient::queryShareListCallable(const QueryShareListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryShareListOutcome()>>(
			[this, request]()
			{
			return this->queryShareList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QuerySharesToUserListOutcome Quickbi_publicClient::querySharesToUserList(const QuerySharesToUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySharesToUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySharesToUserListOutcome(QuerySharesToUserListResult(outcome.result()));
	else
		return QuerySharesToUserListOutcome(outcome.error());
}

void Quickbi_publicClient::querySharesToUserListAsync(const QuerySharesToUserListRequest& request, const QuerySharesToUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySharesToUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QuerySharesToUserListOutcomeCallable Quickbi_publicClient::querySharesToUserListCallable(const QuerySharesToUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySharesToUserListOutcome()>>(
			[this, request]()
			{
			return this->querySharesToUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QuerySmartqPermissionByCubeIdOutcome Quickbi_publicClient::querySmartqPermissionByCubeId(const QuerySmartqPermissionByCubeIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySmartqPermissionByCubeIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySmartqPermissionByCubeIdOutcome(QuerySmartqPermissionByCubeIdResult(outcome.result()));
	else
		return QuerySmartqPermissionByCubeIdOutcome(outcome.error());
}

void Quickbi_publicClient::querySmartqPermissionByCubeIdAsync(const QuerySmartqPermissionByCubeIdRequest& request, const QuerySmartqPermissionByCubeIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySmartqPermissionByCubeId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QuerySmartqPermissionByCubeIdOutcomeCallable Quickbi_publicClient::querySmartqPermissionByCubeIdCallable(const QuerySmartqPermissionByCubeIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySmartqPermissionByCubeIdOutcome()>>(
			[this, request]()
			{
			return this->querySmartqPermissionByCubeId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryTicketInfoOutcome Quickbi_publicClient::queryTicketInfo(const QueryTicketInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTicketInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTicketInfoOutcome(QueryTicketInfoResult(outcome.result()));
	else
		return QueryTicketInfoOutcome(outcome.error());
}

void Quickbi_publicClient::queryTicketInfoAsync(const QueryTicketInfoRequest& request, const QueryTicketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTicketInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryTicketInfoOutcomeCallable Quickbi_publicClient::queryTicketInfoCallable(const QueryTicketInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTicketInfoOutcome()>>(
			[this, request]()
			{
			return this->queryTicketInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserGroupListByParentIdOutcome Quickbi_publicClient::queryUserGroupListByParentId(const QueryUserGroupListByParentIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserGroupListByParentIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserGroupListByParentIdOutcome(QueryUserGroupListByParentIdResult(outcome.result()));
	else
		return QueryUserGroupListByParentIdOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserGroupListByParentIdAsync(const QueryUserGroupListByParentIdRequest& request, const QueryUserGroupListByParentIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserGroupListByParentId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserGroupListByParentIdOutcomeCallable Quickbi_publicClient::queryUserGroupListByParentIdCallable(const QueryUserGroupListByParentIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserGroupListByParentIdOutcome()>>(
			[this, request]()
			{
			return this->queryUserGroupListByParentId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserGroupMemberOutcome Quickbi_publicClient::queryUserGroupMember(const QueryUserGroupMemberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserGroupMemberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserGroupMemberOutcome(QueryUserGroupMemberResult(outcome.result()));
	else
		return QueryUserGroupMemberOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserGroupMemberAsync(const QueryUserGroupMemberRequest& request, const QueryUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserGroupMember(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserGroupMemberOutcomeCallable Quickbi_publicClient::queryUserGroupMemberCallable(const QueryUserGroupMemberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserGroupMemberOutcome()>>(
			[this, request]()
			{
			return this->queryUserGroupMember(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserInfoByAccountOutcome Quickbi_publicClient::queryUserInfoByAccount(const QueryUserInfoByAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserInfoByAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserInfoByAccountOutcome(QueryUserInfoByAccountResult(outcome.result()));
	else
		return QueryUserInfoByAccountOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserInfoByAccountAsync(const QueryUserInfoByAccountRequest& request, const QueryUserInfoByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserInfoByAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserInfoByAccountOutcomeCallable Quickbi_publicClient::queryUserInfoByAccountCallable(const QueryUserInfoByAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserInfoByAccountOutcome()>>(
			[this, request]()
			{
			return this->queryUserInfoByAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserInfoByUserIdOutcome Quickbi_publicClient::queryUserInfoByUserId(const QueryUserInfoByUserIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserInfoByUserIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserInfoByUserIdOutcome(QueryUserInfoByUserIdResult(outcome.result()));
	else
		return QueryUserInfoByUserIdOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserInfoByUserIdAsync(const QueryUserInfoByUserIdRequest& request, const QueryUserInfoByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserInfoByUserId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserInfoByUserIdOutcomeCallable Quickbi_publicClient::queryUserInfoByUserIdCallable(const QueryUserInfoByUserIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserInfoByUserIdOutcome()>>(
			[this, request]()
			{
			return this->queryUserInfoByUserId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserListOutcome Quickbi_publicClient::queryUserList(const QueryUserListRequest &request) const
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

void Quickbi_publicClient::queryUserListAsync(const QueryUserListRequest& request, const QueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserListOutcomeCallable Quickbi_publicClient::queryUserListCallable(const QueryUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserListOutcome()>>(
			[this, request]()
			{
			return this->queryUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserRoleInfoInWorkspaceOutcome Quickbi_publicClient::queryUserRoleInfoInWorkspace(const QueryUserRoleInfoInWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserRoleInfoInWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserRoleInfoInWorkspaceOutcome(QueryUserRoleInfoInWorkspaceResult(outcome.result()));
	else
		return QueryUserRoleInfoInWorkspaceOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserRoleInfoInWorkspaceAsync(const QueryUserRoleInfoInWorkspaceRequest& request, const QueryUserRoleInfoInWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserRoleInfoInWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserRoleInfoInWorkspaceOutcomeCallable Quickbi_publicClient::queryUserRoleInfoInWorkspaceCallable(const QueryUserRoleInfoInWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserRoleInfoInWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->queryUserRoleInfoInWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserTagMetaListOutcome Quickbi_publicClient::queryUserTagMetaList(const QueryUserTagMetaListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserTagMetaListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserTagMetaListOutcome(QueryUserTagMetaListResult(outcome.result()));
	else
		return QueryUserTagMetaListOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserTagMetaListAsync(const QueryUserTagMetaListRequest& request, const QueryUserTagMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserTagMetaList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserTagMetaListOutcomeCallable Quickbi_publicClient::queryUserTagMetaListCallable(const QueryUserTagMetaListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserTagMetaListOutcome()>>(
			[this, request]()
			{
			return this->queryUserTagMetaList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryUserTagValueListOutcome Quickbi_publicClient::queryUserTagValueList(const QueryUserTagValueListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUserTagValueListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUserTagValueListOutcome(QueryUserTagValueListResult(outcome.result()));
	else
		return QueryUserTagValueListOutcome(outcome.error());
}

void Quickbi_publicClient::queryUserTagValueListAsync(const QueryUserTagValueListRequest& request, const QueryUserTagValueListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUserTagValueList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryUserTagValueListOutcomeCallable Quickbi_publicClient::queryUserTagValueListCallable(const QueryUserTagValueListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUserTagValueListOutcome()>>(
			[this, request]()
			{
			return this->queryUserTagValueList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorksOutcome Quickbi_publicClient::queryWorks(const QueryWorksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorksOutcome(QueryWorksResult(outcome.result()));
	else
		return QueryWorksOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorksAsync(const QueryWorksRequest& request, const QueryWorksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorksOutcomeCallable Quickbi_publicClient::queryWorksCallable(const QueryWorksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorksOutcome()>>(
			[this, request]()
			{
			return this->queryWorks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorksBloodRelationshipOutcome Quickbi_publicClient::queryWorksBloodRelationship(const QueryWorksBloodRelationshipRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorksBloodRelationshipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorksBloodRelationshipOutcome(QueryWorksBloodRelationshipResult(outcome.result()));
	else
		return QueryWorksBloodRelationshipOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorksBloodRelationshipAsync(const QueryWorksBloodRelationshipRequest& request, const QueryWorksBloodRelationshipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorksBloodRelationship(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorksBloodRelationshipOutcomeCallable Quickbi_publicClient::queryWorksBloodRelationshipCallable(const QueryWorksBloodRelationshipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorksBloodRelationshipOutcome()>>(
			[this, request]()
			{
			return this->queryWorksBloodRelationship(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorksByOrganizationOutcome Quickbi_publicClient::queryWorksByOrganization(const QueryWorksByOrganizationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorksByOrganizationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorksByOrganizationOutcome(QueryWorksByOrganizationResult(outcome.result()));
	else
		return QueryWorksByOrganizationOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorksByOrganizationAsync(const QueryWorksByOrganizationRequest& request, const QueryWorksByOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorksByOrganization(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorksByOrganizationOutcomeCallable Quickbi_publicClient::queryWorksByOrganizationCallable(const QueryWorksByOrganizationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorksByOrganizationOutcome()>>(
			[this, request]()
			{
			return this->queryWorksByOrganization(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorksByWorkspaceOutcome Quickbi_publicClient::queryWorksByWorkspace(const QueryWorksByWorkspaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorksByWorkspaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorksByWorkspaceOutcome(QueryWorksByWorkspaceResult(outcome.result()));
	else
		return QueryWorksByWorkspaceOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorksByWorkspaceAsync(const QueryWorksByWorkspaceRequest& request, const QueryWorksByWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorksByWorkspace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorksByWorkspaceOutcomeCallable Quickbi_publicClient::queryWorksByWorkspaceCallable(const QueryWorksByWorkspaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorksByWorkspaceOutcome()>>(
			[this, request]()
			{
			return this->queryWorksByWorkspace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorkspaceRoleConfigOutcome Quickbi_publicClient::queryWorkspaceRoleConfig(const QueryWorkspaceRoleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorkspaceRoleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorkspaceRoleConfigOutcome(QueryWorkspaceRoleConfigResult(outcome.result()));
	else
		return QueryWorkspaceRoleConfigOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorkspaceRoleConfigAsync(const QueryWorkspaceRoleConfigRequest& request, const QueryWorkspaceRoleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorkspaceRoleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorkspaceRoleConfigOutcomeCallable Quickbi_publicClient::queryWorkspaceRoleConfigCallable(const QueryWorkspaceRoleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorkspaceRoleConfigOutcome()>>(
			[this, request]()
			{
			return this->queryWorkspaceRoleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::QueryWorkspaceUserListOutcome Quickbi_publicClient::queryWorkspaceUserList(const QueryWorkspaceUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryWorkspaceUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryWorkspaceUserListOutcome(QueryWorkspaceUserListResult(outcome.result()));
	else
		return QueryWorkspaceUserListOutcome(outcome.error());
}

void Quickbi_publicClient::queryWorkspaceUserListAsync(const QueryWorkspaceUserListRequest& request, const QueryWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryWorkspaceUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::QueryWorkspaceUserListOutcomeCallable Quickbi_publicClient::queryWorkspaceUserListCallable(const QueryWorkspaceUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryWorkspaceUserListOutcome()>>(
			[this, request]()
			{
			return this->queryWorkspaceUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::ResultCallbackOutcome Quickbi_publicClient::resultCallback(const ResultCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResultCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResultCallbackOutcome(ResultCallbackResult(outcome.result()));
	else
		return ResultCallbackOutcome(outcome.error());
}

void Quickbi_publicClient::resultCallbackAsync(const ResultCallbackRequest& request, const ResultCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resultCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::ResultCallbackOutcomeCallable Quickbi_publicClient::resultCallbackCallable(const ResultCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResultCallbackOutcome()>>(
			[this, request]()
			{
			return this->resultCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SaveFavoritesOutcome Quickbi_publicClient::saveFavorites(const SaveFavoritesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveFavoritesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveFavoritesOutcome(SaveFavoritesResult(outcome.result()));
	else
		return SaveFavoritesOutcome(outcome.error());
}

void Quickbi_publicClient::saveFavoritesAsync(const SaveFavoritesRequest& request, const SaveFavoritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveFavorites(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SaveFavoritesOutcomeCallable Quickbi_publicClient::saveFavoritesCallable(const SaveFavoritesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveFavoritesOutcome()>>(
			[this, request]()
			{
			return this->saveFavorites(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SetDataLevelPermissionExtraConfigOutcome Quickbi_publicClient::setDataLevelPermissionExtraConfig(const SetDataLevelPermissionExtraConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataLevelPermissionExtraConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataLevelPermissionExtraConfigOutcome(SetDataLevelPermissionExtraConfigResult(outcome.result()));
	else
		return SetDataLevelPermissionExtraConfigOutcome(outcome.error());
}

void Quickbi_publicClient::setDataLevelPermissionExtraConfigAsync(const SetDataLevelPermissionExtraConfigRequest& request, const SetDataLevelPermissionExtraConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataLevelPermissionExtraConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SetDataLevelPermissionExtraConfigOutcomeCallable Quickbi_publicClient::setDataLevelPermissionExtraConfigCallable(const SetDataLevelPermissionExtraConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataLevelPermissionExtraConfigOutcome()>>(
			[this, request]()
			{
			return this->setDataLevelPermissionExtraConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SetDataLevelPermissionRuleConfigOutcome Quickbi_publicClient::setDataLevelPermissionRuleConfig(const SetDataLevelPermissionRuleConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataLevelPermissionRuleConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataLevelPermissionRuleConfigOutcome(SetDataLevelPermissionRuleConfigResult(outcome.result()));
	else
		return SetDataLevelPermissionRuleConfigOutcome(outcome.error());
}

void Quickbi_publicClient::setDataLevelPermissionRuleConfigAsync(const SetDataLevelPermissionRuleConfigRequest& request, const SetDataLevelPermissionRuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataLevelPermissionRuleConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SetDataLevelPermissionRuleConfigOutcomeCallable Quickbi_publicClient::setDataLevelPermissionRuleConfigCallable(const SetDataLevelPermissionRuleConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataLevelPermissionRuleConfigOutcome()>>(
			[this, request]()
			{
			return this->setDataLevelPermissionRuleConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SetDataLevelPermissionWhiteListOutcome Quickbi_publicClient::setDataLevelPermissionWhiteList(const SetDataLevelPermissionWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDataLevelPermissionWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDataLevelPermissionWhiteListOutcome(SetDataLevelPermissionWhiteListResult(outcome.result()));
	else
		return SetDataLevelPermissionWhiteListOutcome(outcome.error());
}

void Quickbi_publicClient::setDataLevelPermissionWhiteListAsync(const SetDataLevelPermissionWhiteListRequest& request, const SetDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDataLevelPermissionWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SetDataLevelPermissionWhiteListOutcomeCallable Quickbi_publicClient::setDataLevelPermissionWhiteListCallable(const SetDataLevelPermissionWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDataLevelPermissionWhiteListOutcome()>>(
			[this, request]()
			{
			return this->setDataLevelPermissionWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SmartqAuthTransferOutcome Quickbi_publicClient::smartqAuthTransfer(const SmartqAuthTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartqAuthTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartqAuthTransferOutcome(SmartqAuthTransferResult(outcome.result()));
	else
		return SmartqAuthTransferOutcome(outcome.error());
}

void Quickbi_publicClient::smartqAuthTransferAsync(const SmartqAuthTransferRequest& request, const SmartqAuthTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartqAuthTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SmartqAuthTransferOutcomeCallable Quickbi_publicClient::smartqAuthTransferCallable(const SmartqAuthTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartqAuthTransferOutcome()>>(
			[this, request]()
			{
			return this->smartqAuthTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SmartqAuthorizeOutcome Quickbi_publicClient::smartqAuthorize(const SmartqAuthorizeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartqAuthorizeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartqAuthorizeOutcome(SmartqAuthorizeResult(outcome.result()));
	else
		return SmartqAuthorizeOutcome(outcome.error());
}

void Quickbi_publicClient::smartqAuthorizeAsync(const SmartqAuthorizeRequest& request, const SmartqAuthorizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartqAuthorize(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SmartqAuthorizeOutcomeCallable Quickbi_publicClient::smartqAuthorizeCallable(const SmartqAuthorizeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartqAuthorizeOutcome()>>(
			[this, request]()
			{
			return this->smartqAuthorize(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::SmartqQueryAbilityOutcome Quickbi_publicClient::smartqQueryAbility(const SmartqQueryAbilityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SmartqQueryAbilityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SmartqQueryAbilityOutcome(SmartqQueryAbilityResult(outcome.result()));
	else
		return SmartqQueryAbilityOutcome(outcome.error());
}

void Quickbi_publicClient::smartqQueryAbilityAsync(const SmartqQueryAbilityRequest& request, const SmartqQueryAbilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, smartqQueryAbility(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::SmartqQueryAbilityOutcomeCallable Quickbi_publicClient::smartqQueryAbilityCallable(const SmartqQueryAbilityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SmartqQueryAbilityOutcome()>>(
			[this, request]()
			{
			return this->smartqQueryAbility(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateDataLevelPermissionStatusOutcome Quickbi_publicClient::updateDataLevelPermissionStatus(const UpdateDataLevelPermissionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDataLevelPermissionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDataLevelPermissionStatusOutcome(UpdateDataLevelPermissionStatusResult(outcome.result()));
	else
		return UpdateDataLevelPermissionStatusOutcome(outcome.error());
}

void Quickbi_publicClient::updateDataLevelPermissionStatusAsync(const UpdateDataLevelPermissionStatusRequest& request, const UpdateDataLevelPermissionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDataLevelPermissionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateDataLevelPermissionStatusOutcomeCallable Quickbi_publicClient::updateDataLevelPermissionStatusCallable(const UpdateDataLevelPermissionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDataLevelPermissionStatusOutcome()>>(
			[this, request]()
			{
			return this->updateDataLevelPermissionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateEmbeddedStatusOutcome Quickbi_publicClient::updateEmbeddedStatus(const UpdateEmbeddedStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEmbeddedStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEmbeddedStatusOutcome(UpdateEmbeddedStatusResult(outcome.result()));
	else
		return UpdateEmbeddedStatusOutcome(outcome.error());
}

void Quickbi_publicClient::updateEmbeddedStatusAsync(const UpdateEmbeddedStatusRequest& request, const UpdateEmbeddedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEmbeddedStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateEmbeddedStatusOutcomeCallable Quickbi_publicClient::updateEmbeddedStatusCallable(const UpdateEmbeddedStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEmbeddedStatusOutcome()>>(
			[this, request]()
			{
			return this->updateEmbeddedStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateTicketNumOutcome Quickbi_publicClient::updateTicketNum(const UpdateTicketNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTicketNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTicketNumOutcome(UpdateTicketNumResult(outcome.result()));
	else
		return UpdateTicketNumOutcome(outcome.error());
}

void Quickbi_publicClient::updateTicketNumAsync(const UpdateTicketNumRequest& request, const UpdateTicketNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTicketNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateTicketNumOutcomeCallable Quickbi_publicClient::updateTicketNumCallable(const UpdateTicketNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTicketNumOutcome()>>(
			[this, request]()
			{
			return this->updateTicketNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateUserOutcome Quickbi_publicClient::updateUser(const UpdateUserRequest &request) const
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

void Quickbi_publicClient::updateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateUserOutcomeCallable Quickbi_publicClient::updateUserCallable(const UpdateUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
			[this, request]()
			{
			return this->updateUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateUserGroupOutcome Quickbi_publicClient::updateUserGroup(const UpdateUserGroupRequest &request) const
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

void Quickbi_publicClient::updateUserGroupAsync(const UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateUserGroupOutcomeCallable Quickbi_publicClient::updateUserGroupCallable(const UpdateUserGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserGroupOutcome()>>(
			[this, request]()
			{
			return this->updateUserGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateUserTagMetaOutcome Quickbi_publicClient::updateUserTagMeta(const UpdateUserTagMetaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserTagMetaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserTagMetaOutcome(UpdateUserTagMetaResult(outcome.result()));
	else
		return UpdateUserTagMetaOutcome(outcome.error());
}

void Quickbi_publicClient::updateUserTagMetaAsync(const UpdateUserTagMetaRequest& request, const UpdateUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserTagMeta(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateUserTagMetaOutcomeCallable Quickbi_publicClient::updateUserTagMetaCallable(const UpdateUserTagMetaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserTagMetaOutcome()>>(
			[this, request]()
			{
			return this->updateUserTagMeta(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateUserTagValueOutcome Quickbi_publicClient::updateUserTagValue(const UpdateUserTagValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateUserTagValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateUserTagValueOutcome(UpdateUserTagValueResult(outcome.result()));
	else
		return UpdateUserTagValueOutcome(outcome.error());
}

void Quickbi_publicClient::updateUserTagValueAsync(const UpdateUserTagValueRequest& request, const UpdateUserTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateUserTagValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateUserTagValueOutcomeCallable Quickbi_publicClient::updateUserTagValueCallable(const UpdateUserTagValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateUserTagValueOutcome()>>(
			[this, request]()
			{
			return this->updateUserTagValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateWorkspaceUserRoleOutcome Quickbi_publicClient::updateWorkspaceUserRole(const UpdateWorkspaceUserRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkspaceUserRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkspaceUserRoleOutcome(UpdateWorkspaceUserRoleResult(outcome.result()));
	else
		return UpdateWorkspaceUserRoleOutcome(outcome.error());
}

void Quickbi_publicClient::updateWorkspaceUserRoleAsync(const UpdateWorkspaceUserRoleRequest& request, const UpdateWorkspaceUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkspaceUserRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateWorkspaceUserRoleOutcomeCallable Quickbi_publicClient::updateWorkspaceUserRoleCallable(const UpdateWorkspaceUserRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkspaceUserRoleOutcome()>>(
			[this, request]()
			{
			return this->updateWorkspaceUserRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::UpdateWorkspaceUsersRoleOutcome Quickbi_publicClient::updateWorkspaceUsersRole(const UpdateWorkspaceUsersRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateWorkspaceUsersRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateWorkspaceUsersRoleOutcome(UpdateWorkspaceUsersRoleResult(outcome.result()));
	else
		return UpdateWorkspaceUsersRoleOutcome(outcome.error());
}

void Quickbi_publicClient::updateWorkspaceUsersRoleAsync(const UpdateWorkspaceUsersRoleRequest& request, const UpdateWorkspaceUsersRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateWorkspaceUsersRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::UpdateWorkspaceUsersRoleOutcomeCallable Quickbi_publicClient::updateWorkspaceUsersRoleCallable(const UpdateWorkspaceUsersRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateWorkspaceUsersRoleOutcome()>>(
			[this, request]()
			{
			return this->updateWorkspaceUsersRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Quickbi_publicClient::WithdrawAllUserGroupsOutcome Quickbi_publicClient::withdrawAllUserGroups(const WithdrawAllUserGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WithdrawAllUserGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WithdrawAllUserGroupsOutcome(WithdrawAllUserGroupsResult(outcome.result()));
	else
		return WithdrawAllUserGroupsOutcome(outcome.error());
}

void Quickbi_publicClient::withdrawAllUserGroupsAsync(const WithdrawAllUserGroupsRequest& request, const WithdrawAllUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, withdrawAllUserGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Quickbi_publicClient::WithdrawAllUserGroupsOutcomeCallable Quickbi_publicClient::withdrawAllUserGroupsCallable(const WithdrawAllUserGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WithdrawAllUserGroupsOutcome()>>(
			[this, request]()
			{
			return this->withdrawAllUserGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

