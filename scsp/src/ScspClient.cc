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

#include <alibabacloud/scsp/ScspClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

namespace
{
	const std::string SERVICE_NAME = "scsp";
}

ScspClient::ScspClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScspClient::ScspClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScspClient::ScspClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

ScspClient::~ScspClient()
{}

ScspClient::AnswerCallOutcome ScspClient::answerCall(const AnswerCallRequest &request) const
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

void ScspClient::answerCallAsync(const AnswerCallRequest& request, const AnswerCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, answerCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::AnswerCallOutcomeCallable ScspClient::answerCallCallable(const AnswerCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AnswerCallOutcome()>>(
			[this, request]()
			{
			return this->answerCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::AppMessagePushOutcome ScspClient::appMessagePush(const AppMessagePushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AppMessagePushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AppMessagePushOutcome(AppMessagePushResult(outcome.result()));
	else
		return AppMessagePushOutcome(outcome.error());
}

void ScspClient::appMessagePushAsync(const AppMessagePushRequest& request, const AppMessagePushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, appMessagePush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::AppMessagePushOutcomeCallable ScspClient::appMessagePushCallable(const AppMessagePushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AppMessagePushOutcome()>>(
			[this, request]()
			{
			return this->appMessagePush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::AssignTicketOutcome ScspClient::assignTicket(const AssignTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignTicketOutcome(AssignTicketResult(outcome.result()));
	else
		return AssignTicketOutcome(outcome.error());
}

void ScspClient::assignTicketAsync(const AssignTicketRequest& request, const AssignTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::AssignTicketOutcomeCallable ScspClient::assignTicketCallable(const AssignTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignTicketOutcome()>>(
			[this, request]()
			{
			return this->assignTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ChangeChatAgentStatusOutcome ScspClient::changeChatAgentStatus(const ChangeChatAgentStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeChatAgentStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeChatAgentStatusOutcome(ChangeChatAgentStatusResult(outcome.result()));
	else
		return ChangeChatAgentStatusOutcome(outcome.error());
}

void ScspClient::changeChatAgentStatusAsync(const ChangeChatAgentStatusRequest& request, const ChangeChatAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeChatAgentStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ChangeChatAgentStatusOutcomeCallable ScspClient::changeChatAgentStatusCallable(const ChangeChatAgentStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeChatAgentStatusOutcome()>>(
			[this, request]()
			{
			return this->changeChatAgentStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CloseTicketOutcome ScspClient::closeTicket(const CloseTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseTicketOutcome(CloseTicketResult(outcome.result()));
	else
		return CloseTicketOutcome(outcome.error());
}

void ScspClient::closeTicketAsync(const CloseTicketRequest& request, const CloseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CloseTicketOutcomeCallable ScspClient::closeTicketCallable(const CloseTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseTicketOutcome()>>(
			[this, request]()
			{
			return this->closeTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateAgentOutcome ScspClient::createAgent(const CreateAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAgentOutcome(CreateAgentResult(outcome.result()));
	else
		return CreateAgentOutcome(outcome.error());
}

void ScspClient::createAgentAsync(const CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateAgentOutcomeCallable ScspClient::createAgentCallable(const CreateAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAgentOutcome()>>(
			[this, request]()
			{
			return this->createAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateCustomerOutcome ScspClient::createCustomer(const CreateCustomerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomerOutcome(CreateCustomerResult(outcome.result()));
	else
		return CreateCustomerOutcome(outcome.error());
}

void ScspClient::createCustomerAsync(const CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateCustomerOutcomeCallable ScspClient::createCustomerCallable(const CreateCustomerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomerOutcome()>>(
			[this, request]()
			{
			return this->createCustomer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateEntityIvrRouteOutcome ScspClient::createEntityIvrRoute(const CreateEntityIvrRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEntityIvrRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEntityIvrRouteOutcome(CreateEntityIvrRouteResult(outcome.result()));
	else
		return CreateEntityIvrRouteOutcome(outcome.error());
}

void ScspClient::createEntityIvrRouteAsync(const CreateEntityIvrRouteRequest& request, const CreateEntityIvrRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEntityIvrRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateEntityIvrRouteOutcomeCallable ScspClient::createEntityIvrRouteCallable(const CreateEntityIvrRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEntityIvrRouteOutcome()>>(
			[this, request]()
			{
			return this->createEntityIvrRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateOuterCallCenterDataOutcome ScspClient::createOuterCallCenterData(const CreateOuterCallCenterDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOuterCallCenterDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOuterCallCenterDataOutcome(CreateOuterCallCenterDataResult(outcome.result()));
	else
		return CreateOuterCallCenterDataOutcome(outcome.error());
}

void ScspClient::createOuterCallCenterDataAsync(const CreateOuterCallCenterDataRequest& request, const CreateOuterCallCenterDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOuterCallCenterData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateOuterCallCenterDataOutcomeCallable ScspClient::createOuterCallCenterDataCallable(const CreateOuterCallCenterDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOuterCallCenterDataOutcome()>>(
			[this, request]()
			{
			return this->createOuterCallCenterData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateRoleOutcome ScspClient::createRole(const CreateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRoleOutcome(CreateRoleResult(outcome.result()));
	else
		return CreateRoleOutcome(outcome.error());
}

void ScspClient::createRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateRoleOutcomeCallable ScspClient::createRoleCallable(const CreateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
			[this, request]()
			{
			return this->createRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateSkillGroupOutcome ScspClient::createSkillGroup(const CreateSkillGroupRequest &request) const
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

void ScspClient::createSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateSkillGroupOutcomeCallable ScspClient::createSkillGroupCallable(const CreateSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->createSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateThirdSsoAgentOutcome ScspClient::createThirdSsoAgent(const CreateThirdSsoAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateThirdSsoAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateThirdSsoAgentOutcome(CreateThirdSsoAgentResult(outcome.result()));
	else
		return CreateThirdSsoAgentOutcome(outcome.error());
}

void ScspClient::createThirdSsoAgentAsync(const CreateThirdSsoAgentRequest& request, const CreateThirdSsoAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createThirdSsoAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateThirdSsoAgentOutcomeCallable ScspClient::createThirdSsoAgentCallable(const CreateThirdSsoAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateThirdSsoAgentOutcome()>>(
			[this, request]()
			{
			return this->createThirdSsoAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateTicketOutcome ScspClient::createTicket(const CreateTicketRequest &request) const
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

void ScspClient::createTicketAsync(const CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateTicketOutcomeCallable ScspClient::createTicketCallable(const CreateTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicketOutcome()>>(
			[this, request]()
			{
			return this->createTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::CreateTicketWithBizDataOutcome ScspClient::createTicketWithBizData(const CreateTicketWithBizDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTicketWithBizDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTicketWithBizDataOutcome(CreateTicketWithBizDataResult(outcome.result()));
	else
		return CreateTicketWithBizDataOutcome(outcome.error());
}

void ScspClient::createTicketWithBizDataAsync(const CreateTicketWithBizDataRequest& request, const CreateTicketWithBizDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTicketWithBizData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::CreateTicketWithBizDataOutcomeCallable ScspClient::createTicketWithBizDataCallable(const CreateTicketWithBizDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTicketWithBizDataOutcome()>>(
			[this, request]()
			{
			return this->createTicketWithBizData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::DeleteAgentOutcome ScspClient::deleteAgent(const DeleteAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAgentOutcome(DeleteAgentResult(outcome.result()));
	else
		return DeleteAgentOutcome(outcome.error());
}

void ScspClient::deleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::DeleteAgentOutcomeCallable ScspClient::deleteAgentCallable(const DeleteAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAgentOutcome()>>(
			[this, request]()
			{
			return this->deleteAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::DeleteEntityRouteOutcome ScspClient::deleteEntityRoute(const DeleteEntityRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEntityRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEntityRouteOutcome(DeleteEntityRouteResult(outcome.result()));
	else
		return DeleteEntityRouteOutcome(outcome.error());
}

void ScspClient::deleteEntityRouteAsync(const DeleteEntityRouteRequest& request, const DeleteEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEntityRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::DeleteEntityRouteOutcomeCallable ScspClient::deleteEntityRouteCallable(const DeleteEntityRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEntityRouteOutcome()>>(
			[this, request]()
			{
			return this->deleteEntityRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::DisableRoleOutcome ScspClient::disableRole(const DisableRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableRoleOutcome(DisableRoleResult(outcome.result()));
	else
		return DisableRoleOutcome(outcome.error());
}

void ScspClient::disableRoleAsync(const DisableRoleRequest& request, const DisableRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::DisableRoleOutcomeCallable ScspClient::disableRoleCallable(const DisableRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableRoleOutcome()>>(
			[this, request]()
			{
			return this->disableRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::EditEntityRouteOutcome ScspClient::editEntityRoute(const EditEntityRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditEntityRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditEntityRouteOutcome(EditEntityRouteResult(outcome.result()));
	else
		return EditEntityRouteOutcome(outcome.error());
}

void ScspClient::editEntityRouteAsync(const EditEntityRouteRequest& request, const EditEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editEntityRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::EditEntityRouteOutcomeCallable ScspClient::editEntityRouteCallable(const EditEntityRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditEntityRouteOutcome()>>(
			[this, request]()
			{
			return this->editEntityRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::EnableRoleOutcome ScspClient::enableRole(const EnableRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableRoleOutcome(EnableRoleResult(outcome.result()));
	else
		return EnableRoleOutcome(outcome.error());
}

void ScspClient::enableRoleAsync(const EnableRoleRequest& request, const EnableRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::EnableRoleOutcomeCallable ScspClient::enableRoleCallable(const EnableRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableRoleOutcome()>>(
			[this, request]()
			{
			return this->enableRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ExecuteActivityOutcome ScspClient::executeActivity(const ExecuteActivityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteActivityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteActivityOutcome(ExecuteActivityResult(outcome.result()));
	else
		return ExecuteActivityOutcome(outcome.error());
}

void ScspClient::executeActivityAsync(const ExecuteActivityRequest& request, const ExecuteActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeActivity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ExecuteActivityOutcomeCallable ScspClient::executeActivityCallable(const ExecuteActivityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteActivityOutcome()>>(
			[this, request]()
			{
			return this->executeActivity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::FetchCallOutcome ScspClient::fetchCall(const FetchCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FetchCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FetchCallOutcome(FetchCallResult(outcome.result()));
	else
		return FetchCallOutcome(outcome.error());
}

void ScspClient::fetchCallAsync(const FetchCallRequest& request, const FetchCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fetchCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::FetchCallOutcomeCallable ScspClient::fetchCallCallable(const FetchCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FetchCallOutcome()>>(
			[this, request]()
			{
			return this->fetchCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::FinishHotlineServiceOutcome ScspClient::finishHotlineService(const FinishHotlineServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FinishHotlineServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FinishHotlineServiceOutcome(FinishHotlineServiceResult(outcome.result()));
	else
		return FinishHotlineServiceOutcome(outcome.error());
}

void ScspClient::finishHotlineServiceAsync(const FinishHotlineServiceRequest& request, const FinishHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, finishHotlineService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::FinishHotlineServiceOutcomeCallable ScspClient::finishHotlineServiceCallable(const FinishHotlineServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FinishHotlineServiceOutcome()>>(
			[this, request]()
			{
			return this->finishHotlineService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GenerateWebSocketSignOutcome ScspClient::generateWebSocketSign(const GenerateWebSocketSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateWebSocketSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateWebSocketSignOutcome(GenerateWebSocketSignResult(outcome.result()));
	else
		return GenerateWebSocketSignOutcome(outcome.error());
}

void ScspClient::generateWebSocketSignAsync(const GenerateWebSocketSignRequest& request, const GenerateWebSocketSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateWebSocketSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GenerateWebSocketSignOutcomeCallable ScspClient::generateWebSocketSignCallable(const GenerateWebSocketSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateWebSocketSignOutcome()>>(
			[this, request]()
			{
			return this->generateWebSocketSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetAgentOutcome ScspClient::getAgent(const GetAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAgentOutcome(GetAgentResult(outcome.result()));
	else
		return GetAgentOutcome(outcome.error());
}

void ScspClient::getAgentAsync(const GetAgentRequest& request, const GetAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetAgentOutcomeCallable ScspClient::getAgentCallable(const GetAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAgentOutcome()>>(
			[this, request]()
			{
			return this->getAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetAuthInfoOutcome ScspClient::getAuthInfo(const GetAuthInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAuthInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAuthInfoOutcome(GetAuthInfoResult(outcome.result()));
	else
		return GetAuthInfoOutcome(outcome.error());
}

void ScspClient::getAuthInfoAsync(const GetAuthInfoRequest& request, const GetAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAuthInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetAuthInfoOutcomeCallable ScspClient::getAuthInfoCallable(const GetAuthInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAuthInfoOutcome()>>(
			[this, request]()
			{
			return this->getAuthInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetCMSIdByForeignIdOutcome ScspClient::getCMSIdByForeignId(const GetCMSIdByForeignIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCMSIdByForeignIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCMSIdByForeignIdOutcome(GetCMSIdByForeignIdResult(outcome.result()));
	else
		return GetCMSIdByForeignIdOutcome(outcome.error());
}

void ScspClient::getCMSIdByForeignIdAsync(const GetCMSIdByForeignIdRequest& request, const GetCMSIdByForeignIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCMSIdByForeignId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetCMSIdByForeignIdOutcomeCallable ScspClient::getCMSIdByForeignIdCallable(const GetCMSIdByForeignIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCMSIdByForeignIdOutcome()>>(
			[this, request]()
			{
			return this->getCMSIdByForeignId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetCallsPerDayOutcome ScspClient::getCallsPerDay(const GetCallsPerDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCallsPerDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCallsPerDayOutcome(GetCallsPerDayResult(outcome.result()));
	else
		return GetCallsPerDayOutcome(outcome.error());
}

void ScspClient::getCallsPerDayAsync(const GetCallsPerDayRequest& request, const GetCallsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCallsPerDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetCallsPerDayOutcomeCallable ScspClient::getCallsPerDayCallable(const GetCallsPerDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCallsPerDayOutcome()>>(
			[this, request]()
			{
			return this->getCallsPerDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetEntityRouteOutcome ScspClient::getEntityRoute(const GetEntityRouteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEntityRouteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEntityRouteOutcome(GetEntityRouteResult(outcome.result()));
	else
		return GetEntityRouteOutcome(outcome.error());
}

void ScspClient::getEntityRouteAsync(const GetEntityRouteRequest& request, const GetEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEntityRoute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetEntityRouteOutcomeCallable ScspClient::getEntityRouteCallable(const GetEntityRouteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEntityRouteOutcome()>>(
			[this, request]()
			{
			return this->getEntityRoute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetEntityRouteListOutcome ScspClient::getEntityRouteList(const GetEntityRouteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEntityRouteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEntityRouteListOutcome(GetEntityRouteListResult(outcome.result()));
	else
		return GetEntityRouteListOutcome(outcome.error());
}

void ScspClient::getEntityRouteListAsync(const GetEntityRouteListRequest& request, const GetEntityRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEntityRouteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetEntityRouteListOutcomeCallable ScspClient::getEntityRouteListCallable(const GetEntityRouteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEntityRouteListOutcome()>>(
			[this, request]()
			{
			return this->getEntityRouteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetEntityTagRelationOutcome ScspClient::getEntityTagRelation(const GetEntityTagRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEntityTagRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEntityTagRelationOutcome(GetEntityTagRelationResult(outcome.result()));
	else
		return GetEntityTagRelationOutcome(outcome.error());
}

void ScspClient::getEntityTagRelationAsync(const GetEntityTagRelationRequest& request, const GetEntityTagRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEntityTagRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetEntityTagRelationOutcomeCallable ScspClient::getEntityTagRelationCallable(const GetEntityTagRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEntityTagRelationOutcome()>>(
			[this, request]()
			{
			return this->getEntityTagRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetGrantedRoleIdsOutcome ScspClient::getGrantedRoleIds(const GetGrantedRoleIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGrantedRoleIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGrantedRoleIdsOutcome(GetGrantedRoleIdsResult(outcome.result()));
	else
		return GetGrantedRoleIdsOutcome(outcome.error());
}

void ScspClient::getGrantedRoleIdsAsync(const GetGrantedRoleIdsRequest& request, const GetGrantedRoleIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGrantedRoleIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetGrantedRoleIdsOutcomeCallable ScspClient::getGrantedRoleIdsCallable(const GetGrantedRoleIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGrantedRoleIdsOutcome()>>(
			[this, request]()
			{
			return this->getGrantedRoleIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetHotlineAgentDetailOutcome ScspClient::getHotlineAgentDetail(const GetHotlineAgentDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineAgentDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineAgentDetailOutcome(GetHotlineAgentDetailResult(outcome.result()));
	else
		return GetHotlineAgentDetailOutcome(outcome.error());
}

void ScspClient::getHotlineAgentDetailAsync(const GetHotlineAgentDetailRequest& request, const GetHotlineAgentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineAgentDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetHotlineAgentDetailOutcomeCallable ScspClient::getHotlineAgentDetailCallable(const GetHotlineAgentDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineAgentDetailOutcome()>>(
			[this, request]()
			{
			return this->getHotlineAgentDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetHotlineAgentDetailReportOutcome ScspClient::getHotlineAgentDetailReport(const GetHotlineAgentDetailReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineAgentDetailReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineAgentDetailReportOutcome(GetHotlineAgentDetailReportResult(outcome.result()));
	else
		return GetHotlineAgentDetailReportOutcome(outcome.error());
}

void ScspClient::getHotlineAgentDetailReportAsync(const GetHotlineAgentDetailReportRequest& request, const GetHotlineAgentDetailReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineAgentDetailReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetHotlineAgentDetailReportOutcomeCallable ScspClient::getHotlineAgentDetailReportCallable(const GetHotlineAgentDetailReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineAgentDetailReportOutcome()>>(
			[this, request]()
			{
			return this->getHotlineAgentDetailReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetHotlineAgentStatusOutcome ScspClient::getHotlineAgentStatus(const GetHotlineAgentStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineAgentStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineAgentStatusOutcome(GetHotlineAgentStatusResult(outcome.result()));
	else
		return GetHotlineAgentStatusOutcome(outcome.error());
}

void ScspClient::getHotlineAgentStatusAsync(const GetHotlineAgentStatusRequest& request, const GetHotlineAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineAgentStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetHotlineAgentStatusOutcomeCallable ScspClient::getHotlineAgentStatusCallable(const GetHotlineAgentStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineAgentStatusOutcome()>>(
			[this, request]()
			{
			return this->getHotlineAgentStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetHotlineGroupDetailReportOutcome ScspClient::getHotlineGroupDetailReport(const GetHotlineGroupDetailReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineGroupDetailReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineGroupDetailReportOutcome(GetHotlineGroupDetailReportResult(outcome.result()));
	else
		return GetHotlineGroupDetailReportOutcome(outcome.error());
}

void ScspClient::getHotlineGroupDetailReportAsync(const GetHotlineGroupDetailReportRequest& request, const GetHotlineGroupDetailReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineGroupDetailReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetHotlineGroupDetailReportOutcomeCallable ScspClient::getHotlineGroupDetailReportCallable(const GetHotlineGroupDetailReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineGroupDetailReportOutcome()>>(
			[this, request]()
			{
			return this->getHotlineGroupDetailReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetHotlineWaitingNumberOutcome ScspClient::getHotlineWaitingNumber(const GetHotlineWaitingNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetHotlineWaitingNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetHotlineWaitingNumberOutcome(GetHotlineWaitingNumberResult(outcome.result()));
	else
		return GetHotlineWaitingNumberOutcome(outcome.error());
}

void ScspClient::getHotlineWaitingNumberAsync(const GetHotlineWaitingNumberRequest& request, const GetHotlineWaitingNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getHotlineWaitingNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetHotlineWaitingNumberOutcomeCallable ScspClient::getHotlineWaitingNumberCallable(const GetHotlineWaitingNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetHotlineWaitingNumberOutcome()>>(
			[this, request]()
			{
			return this->getHotlineWaitingNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetNumLocationOutcome ScspClient::getNumLocation(const GetNumLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNumLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNumLocationOutcome(GetNumLocationResult(outcome.result()));
	else
		return GetNumLocationOutcome(outcome.error());
}

void ScspClient::getNumLocationAsync(const GetNumLocationRequest& request, const GetNumLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNumLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetNumLocationOutcomeCallable ScspClient::getNumLocationCallable(const GetNumLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNumLocationOutcome()>>(
			[this, request]()
			{
			return this->getNumLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetOutbounNumListOutcome ScspClient::getOutbounNumList(const GetOutbounNumListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOutbounNumListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOutbounNumListOutcome(GetOutbounNumListResult(outcome.result()));
	else
		return GetOutbounNumListOutcome(outcome.error());
}

void ScspClient::getOutbounNumListAsync(const GetOutbounNumListRequest& request, const GetOutbounNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOutbounNumList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetOutbounNumListOutcomeCallable ScspClient::getOutbounNumListCallable(const GetOutbounNumListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOutbounNumListOutcome()>>(
			[this, request]()
			{
			return this->getOutbounNumList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetOuterCallCenterDataListOutcome ScspClient::getOuterCallCenterDataList(const GetOuterCallCenterDataListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOuterCallCenterDataListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOuterCallCenterDataListOutcome(GetOuterCallCenterDataListResult(outcome.result()));
	else
		return GetOuterCallCenterDataListOutcome(outcome.error());
}

void ScspClient::getOuterCallCenterDataListAsync(const GetOuterCallCenterDataListRequest& request, const GetOuterCallCenterDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOuterCallCenterDataList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetOuterCallCenterDataListOutcomeCallable ScspClient::getOuterCallCenterDataListCallable(const GetOuterCallCenterDataListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOuterCallCenterDataListOutcome()>>(
			[this, request]()
			{
			return this->getOuterCallCenterDataList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetTagListOutcome ScspClient::getTagList(const GetTagListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagListOutcome(GetTagListResult(outcome.result()));
	else
		return GetTagListOutcome(outcome.error());
}

void ScspClient::getTagListAsync(const GetTagListRequest& request, const GetTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetTagListOutcomeCallable ScspClient::getTagListCallable(const GetTagListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagListOutcome()>>(
			[this, request]()
			{
			return this->getTagList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetTicketTemplateSchemaOutcome ScspClient::getTicketTemplateSchema(const GetTicketTemplateSchemaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTicketTemplateSchemaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTicketTemplateSchemaOutcome(GetTicketTemplateSchemaResult(outcome.result()));
	else
		return GetTicketTemplateSchemaOutcome(outcome.error());
}

void ScspClient::getTicketTemplateSchemaAsync(const GetTicketTemplateSchemaRequest& request, const GetTicketTemplateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTicketTemplateSchema(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetTicketTemplateSchemaOutcomeCallable ScspClient::getTicketTemplateSchemaCallable(const GetTicketTemplateSchemaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTicketTemplateSchemaOutcome()>>(
			[this, request]()
			{
			return this->getTicketTemplateSchema(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GetUserTokenOutcome ScspClient::getUserToken(const GetUserTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserTokenOutcome(GetUserTokenResult(outcome.result()));
	else
		return GetUserTokenOutcome(outcome.error());
}

void ScspClient::getUserTokenAsync(const GetUserTokenRequest& request, const GetUserTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUserToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GetUserTokenOutcomeCallable ScspClient::getUserTokenCallable(const GetUserTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserTokenOutcome()>>(
			[this, request]()
			{
			return this->getUserToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::GrantRolesOutcome ScspClient::grantRoles(const GrantRolesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantRolesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantRolesOutcome(GrantRolesResult(outcome.result()));
	else
		return GrantRolesOutcome(outcome.error());
}

void ScspClient::grantRolesAsync(const GrantRolesRequest& request, const GrantRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantRoles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::GrantRolesOutcomeCallable ScspClient::grantRolesCallable(const GrantRolesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantRolesOutcome()>>(
			[this, request]()
			{
			return this->grantRoles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::HangupCallOutcome ScspClient::hangupCall(const HangupCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HangupCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HangupCallOutcome(HangupCallResult(outcome.result()));
	else
		return HangupCallOutcome(outcome.error());
}

void ScspClient::hangupCallAsync(const HangupCallRequest& request, const HangupCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hangupCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::HangupCallOutcomeCallable ScspClient::hangupCallCallable(const HangupCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HangupCallOutcome()>>(
			[this, request]()
			{
			return this->hangupCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::HangupThirdCallOutcome ScspClient::hangupThirdCall(const HangupThirdCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HangupThirdCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HangupThirdCallOutcome(HangupThirdCallResult(outcome.result()));
	else
		return HangupThirdCallOutcome(outcome.error());
}

void ScspClient::hangupThirdCallAsync(const HangupThirdCallRequest& request, const HangupThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hangupThirdCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::HangupThirdCallOutcomeCallable ScspClient::hangupThirdCallCallable(const HangupThirdCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HangupThirdCallOutcome()>>(
			[this, request]()
			{
			return this->hangupThirdCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::HoldCallOutcome ScspClient::holdCall(const HoldCallRequest &request) const
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

void ScspClient::holdCallAsync(const HoldCallRequest& request, const HoldCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, holdCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::HoldCallOutcomeCallable ScspClient::holdCallCallable(const HoldCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HoldCallOutcome()>>(
			[this, request]()
			{
			return this->holdCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::JoinThirdCallOutcome ScspClient::joinThirdCall(const JoinThirdCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinThirdCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinThirdCallOutcome(JoinThirdCallResult(outcome.result()));
	else
		return JoinThirdCallOutcome(outcome.error());
}

void ScspClient::joinThirdCallAsync(const JoinThirdCallRequest& request, const JoinThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinThirdCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::JoinThirdCallOutcomeCallable ScspClient::joinThirdCallCallable(const JoinThirdCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinThirdCallOutcome()>>(
			[this, request]()
			{
			return this->joinThirdCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ListAgentBySkillGroupIdOutcome ScspClient::listAgentBySkillGroupId(const ListAgentBySkillGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAgentBySkillGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAgentBySkillGroupIdOutcome(ListAgentBySkillGroupIdResult(outcome.result()));
	else
		return ListAgentBySkillGroupIdOutcome(outcome.error());
}

void ScspClient::listAgentBySkillGroupIdAsync(const ListAgentBySkillGroupIdRequest& request, const ListAgentBySkillGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAgentBySkillGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ListAgentBySkillGroupIdOutcomeCallable ScspClient::listAgentBySkillGroupIdCallable(const ListAgentBySkillGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAgentBySkillGroupIdOutcome()>>(
			[this, request]()
			{
			return this->listAgentBySkillGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ListHotlineRecordOutcome ScspClient::listHotlineRecord(const ListHotlineRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListHotlineRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListHotlineRecordOutcome(ListHotlineRecordResult(outcome.result()));
	else
		return ListHotlineRecordOutcome(outcome.error());
}

void ScspClient::listHotlineRecordAsync(const ListHotlineRecordRequest& request, const ListHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listHotlineRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ListHotlineRecordOutcomeCallable ScspClient::listHotlineRecordCallable(const ListHotlineRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListHotlineRecordOutcome()>>(
			[this, request]()
			{
			return this->listHotlineRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ListOutboundPhoneNumberOutcome ScspClient::listOutboundPhoneNumber(const ListOutboundPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOutboundPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOutboundPhoneNumberOutcome(ListOutboundPhoneNumberResult(outcome.result()));
	else
		return ListOutboundPhoneNumberOutcome(outcome.error());
}

void ScspClient::listOutboundPhoneNumberAsync(const ListOutboundPhoneNumberRequest& request, const ListOutboundPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOutboundPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ListOutboundPhoneNumberOutcomeCallable ScspClient::listOutboundPhoneNumberCallable(const ListOutboundPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOutboundPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->listOutboundPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::ListSkillGroupOutcome ScspClient::listSkillGroup(const ListSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSkillGroupOutcome(ListSkillGroupResult(outcome.result()));
	else
		return ListSkillGroupOutcome(outcome.error());
}

void ScspClient::listSkillGroupAsync(const ListSkillGroupRequest& request, const ListSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::ListSkillGroupOutcomeCallable ScspClient::listSkillGroupCallable(const ListSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->listSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryHotlineSessionOutcome ScspClient::queryHotlineSession(const QueryHotlineSessionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryHotlineSessionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryHotlineSessionOutcome(QueryHotlineSessionResult(outcome.result()));
	else
		return QueryHotlineSessionOutcome(outcome.error());
}

void ScspClient::queryHotlineSessionAsync(const QueryHotlineSessionRequest& request, const QueryHotlineSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryHotlineSession(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryHotlineSessionOutcomeCallable ScspClient::queryHotlineSessionCallable(const QueryHotlineSessionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryHotlineSessionOutcome()>>(
			[this, request]()
			{
			return this->queryHotlineSession(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryRingDetailListOutcome ScspClient::queryRingDetailList(const QueryRingDetailListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRingDetailListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRingDetailListOutcome(QueryRingDetailListResult(outcome.result()));
	else
		return QueryRingDetailListOutcome(outcome.error());
}

void ScspClient::queryRingDetailListAsync(const QueryRingDetailListRequest& request, const QueryRingDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRingDetailList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryRingDetailListOutcomeCallable ScspClient::queryRingDetailListCallable(const QueryRingDetailListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRingDetailListOutcome()>>(
			[this, request]()
			{
			return this->queryRingDetailList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryServiceConfigOutcome ScspClient::queryServiceConfig(const QueryServiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryServiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryServiceConfigOutcome(QueryServiceConfigResult(outcome.result()));
	else
		return QueryServiceConfigOutcome(outcome.error());
}

void ScspClient::queryServiceConfigAsync(const QueryServiceConfigRequest& request, const QueryServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryServiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryServiceConfigOutcomeCallable ScspClient::queryServiceConfigCallable(const QueryServiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryServiceConfigOutcome()>>(
			[this, request]()
			{
			return this->queryServiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QuerySkillGroupsOutcome ScspClient::querySkillGroups(const QuerySkillGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySkillGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySkillGroupsOutcome(QuerySkillGroupsResult(outcome.result()));
	else
		return QuerySkillGroupsOutcome(outcome.error());
}

void ScspClient::querySkillGroupsAsync(const QuerySkillGroupsRequest& request, const QuerySkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySkillGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QuerySkillGroupsOutcomeCallable ScspClient::querySkillGroupsCallable(const QuerySkillGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySkillGroupsOutcome()>>(
			[this, request]()
			{
			return this->querySkillGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryTicketActionsOutcome ScspClient::queryTicketActions(const QueryTicketActionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTicketActionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTicketActionsOutcome(QueryTicketActionsResult(outcome.result()));
	else
		return QueryTicketActionsOutcome(outcome.error());
}

void ScspClient::queryTicketActionsAsync(const QueryTicketActionsRequest& request, const QueryTicketActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTicketActions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryTicketActionsOutcomeCallable ScspClient::queryTicketActionsCallable(const QueryTicketActionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTicketActionsOutcome()>>(
			[this, request]()
			{
			return this->queryTicketActions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryTicketCountOutcome ScspClient::queryTicketCount(const QueryTicketCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTicketCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTicketCountOutcome(QueryTicketCountResult(outcome.result()));
	else
		return QueryTicketCountOutcome(outcome.error());
}

void ScspClient::queryTicketCountAsync(const QueryTicketCountRequest& request, const QueryTicketCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTicketCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryTicketCountOutcomeCallable ScspClient::queryTicketCountCallable(const QueryTicketCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTicketCountOutcome()>>(
			[this, request]()
			{
			return this->queryTicketCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::QueryTicketsOutcome ScspClient::queryTickets(const QueryTicketsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTicketsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTicketsOutcome(QueryTicketsResult(outcome.result()));
	else
		return QueryTicketsOutcome(outcome.error());
}

void ScspClient::queryTicketsAsync(const QueryTicketsRequest& request, const QueryTicketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTickets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::QueryTicketsOutcomeCallable ScspClient::queryTicketsCallable(const QueryTicketsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTicketsOutcome()>>(
			[this, request]()
			{
			return this->queryTickets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::RemoveSkillGroupOutcome ScspClient::removeSkillGroup(const RemoveSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveSkillGroupOutcome(RemoveSkillGroupResult(outcome.result()));
	else
		return RemoveSkillGroupOutcome(outcome.error());
}

void ScspClient::removeSkillGroupAsync(const RemoveSkillGroupRequest& request, const RemoveSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::RemoveSkillGroupOutcomeCallable ScspClient::removeSkillGroupCallable(const RemoveSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->removeSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SearchTicketByIdOutcome ScspClient::searchTicketById(const SearchTicketByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTicketByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTicketByIdOutcome(SearchTicketByIdResult(outcome.result()));
	else
		return SearchTicketByIdOutcome(outcome.error());
}

void ScspClient::searchTicketByIdAsync(const SearchTicketByIdRequest& request, const SearchTicketByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTicketById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SearchTicketByIdOutcomeCallable ScspClient::searchTicketByIdCallable(const SearchTicketByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTicketByIdOutcome()>>(
			[this, request]()
			{
			return this->searchTicketById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SearchTicketByPhoneOutcome ScspClient::searchTicketByPhone(const SearchTicketByPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTicketByPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTicketByPhoneOutcome(SearchTicketByPhoneResult(outcome.result()));
	else
		return SearchTicketByPhoneOutcome(outcome.error());
}

void ScspClient::searchTicketByPhoneAsync(const SearchTicketByPhoneRequest& request, const SearchTicketByPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTicketByPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SearchTicketByPhoneOutcomeCallable ScspClient::searchTicketByPhoneCallable(const SearchTicketByPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTicketByPhoneOutcome()>>(
			[this, request]()
			{
			return this->searchTicketByPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SearchTicketListOutcome ScspClient::searchTicketList(const SearchTicketListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTicketListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTicketListOutcome(SearchTicketListResult(outcome.result()));
	else
		return SearchTicketListOutcome(outcome.error());
}

void ScspClient::searchTicketListAsync(const SearchTicketListRequest& request, const SearchTicketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTicketList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SearchTicketListOutcomeCallable ScspClient::searchTicketListCallable(const SearchTicketListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTicketListOutcome()>>(
			[this, request]()
			{
			return this->searchTicketList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SendHotlineHeartBeatOutcome ScspClient::sendHotlineHeartBeat(const SendHotlineHeartBeatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendHotlineHeartBeatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendHotlineHeartBeatOutcome(SendHotlineHeartBeatResult(outcome.result()));
	else
		return SendHotlineHeartBeatOutcome(outcome.error());
}

void ScspClient::sendHotlineHeartBeatAsync(const SendHotlineHeartBeatRequest& request, const SendHotlineHeartBeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendHotlineHeartBeat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SendHotlineHeartBeatOutcomeCallable ScspClient::sendHotlineHeartBeatCallable(const SendHotlineHeartBeatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendHotlineHeartBeatOutcome()>>(
			[this, request]()
			{
			return this->sendHotlineHeartBeat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SendOutboundCommandOutcome ScspClient::sendOutboundCommand(const SendOutboundCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendOutboundCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendOutboundCommandOutcome(SendOutboundCommandResult(outcome.result()));
	else
		return SendOutboundCommandOutcome(outcome.error());
}

void ScspClient::sendOutboundCommandAsync(const SendOutboundCommandRequest& request, const SendOutboundCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendOutboundCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SendOutboundCommandOutcomeCallable ScspClient::sendOutboundCommandCallable(const SendOutboundCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendOutboundCommandOutcome()>>(
			[this, request]()
			{
			return this->sendOutboundCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::StartCallOutcome ScspClient::startCall(const StartCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCallOutcome(StartCallResult(outcome.result()));
	else
		return StartCallOutcome(outcome.error());
}

void ScspClient::startCallAsync(const StartCallRequest& request, const StartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::StartCallOutcomeCallable ScspClient::startCallCallable(const StartCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCallOutcome()>>(
			[this, request]()
			{
			return this->startCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::StartCallV2Outcome ScspClient::startCallV2(const StartCallV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCallV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCallV2Outcome(StartCallV2Result(outcome.result()));
	else
		return StartCallV2Outcome(outcome.error());
}

void ScspClient::startCallV2Async(const StartCallV2Request& request, const StartCallV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCallV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::StartCallV2OutcomeCallable ScspClient::startCallV2Callable(const StartCallV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCallV2Outcome()>>(
			[this, request]()
			{
			return this->startCallV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::StartChatWorkOutcome ScspClient::startChatWork(const StartChatWorkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartChatWorkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartChatWorkOutcome(StartChatWorkResult(outcome.result()));
	else
		return StartChatWorkOutcome(outcome.error());
}

void ScspClient::startChatWorkAsync(const StartChatWorkRequest& request, const StartChatWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startChatWork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::StartChatWorkOutcomeCallable ScspClient::startChatWorkCallable(const StartChatWorkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartChatWorkOutcome()>>(
			[this, request]()
			{
			return this->startChatWork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::StartHotlineServiceOutcome ScspClient::startHotlineService(const StartHotlineServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartHotlineServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartHotlineServiceOutcome(StartHotlineServiceResult(outcome.result()));
	else
		return StartHotlineServiceOutcome(outcome.error());
}

void ScspClient::startHotlineServiceAsync(const StartHotlineServiceRequest& request, const StartHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startHotlineService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::StartHotlineServiceOutcomeCallable ScspClient::startHotlineServiceCallable(const StartHotlineServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartHotlineServiceOutcome()>>(
			[this, request]()
			{
			return this->startHotlineService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::SuspendHotlineServiceOutcome ScspClient::suspendHotlineService(const SuspendHotlineServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendHotlineServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendHotlineServiceOutcome(SuspendHotlineServiceResult(outcome.result()));
	else
		return SuspendHotlineServiceOutcome(outcome.error());
}

void ScspClient::suspendHotlineServiceAsync(const SuspendHotlineServiceRequest& request, const SuspendHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendHotlineService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::SuspendHotlineServiceOutcomeCallable ScspClient::suspendHotlineServiceCallable(const SuspendHotlineServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendHotlineServiceOutcome()>>(
			[this, request]()
			{
			return this->suspendHotlineService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::TransferCallToAgentOutcome ScspClient::transferCallToAgent(const TransferCallToAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferCallToAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferCallToAgentOutcome(TransferCallToAgentResult(outcome.result()));
	else
		return TransferCallToAgentOutcome(outcome.error());
}

void ScspClient::transferCallToAgentAsync(const TransferCallToAgentRequest& request, const TransferCallToAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferCallToAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::TransferCallToAgentOutcomeCallable ScspClient::transferCallToAgentCallable(const TransferCallToAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferCallToAgentOutcome()>>(
			[this, request]()
			{
			return this->transferCallToAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::TransferCallToPhoneOutcome ScspClient::transferCallToPhone(const TransferCallToPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferCallToPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferCallToPhoneOutcome(TransferCallToPhoneResult(outcome.result()));
	else
		return TransferCallToPhoneOutcome(outcome.error());
}

void ScspClient::transferCallToPhoneAsync(const TransferCallToPhoneRequest& request, const TransferCallToPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferCallToPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::TransferCallToPhoneOutcomeCallable ScspClient::transferCallToPhoneCallable(const TransferCallToPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferCallToPhoneOutcome()>>(
			[this, request]()
			{
			return this->transferCallToPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::TransferCallToSkillGroupOutcome ScspClient::transferCallToSkillGroup(const TransferCallToSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferCallToSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferCallToSkillGroupOutcome(TransferCallToSkillGroupResult(outcome.result()));
	else
		return TransferCallToSkillGroupOutcome(outcome.error());
}

void ScspClient::transferCallToSkillGroupAsync(const TransferCallToSkillGroupRequest& request, const TransferCallToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferCallToSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::TransferCallToSkillGroupOutcomeCallable ScspClient::transferCallToSkillGroupCallable(const TransferCallToSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferCallToSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->transferCallToSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::TransferToThirdCallOutcome ScspClient::transferToThirdCall(const TransferToThirdCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TransferToThirdCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TransferToThirdCallOutcome(TransferToThirdCallResult(outcome.result()));
	else
		return TransferToThirdCallOutcome(outcome.error());
}

void ScspClient::transferToThirdCallAsync(const TransferToThirdCallRequest& request, const TransferToThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, transferToThirdCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::TransferToThirdCallOutcomeCallable ScspClient::transferToThirdCallCallable(const TransferToThirdCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TransferToThirdCallOutcome()>>(
			[this, request]()
			{
			return this->transferToThirdCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateAgentOutcome ScspClient::updateAgent(const UpdateAgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAgentOutcome(UpdateAgentResult(outcome.result()));
	else
		return UpdateAgentOutcome(outcome.error());
}

void ScspClient::updateAgentAsync(const UpdateAgentRequest& request, const UpdateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateAgentOutcomeCallable ScspClient::updateAgentCallable(const UpdateAgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAgentOutcome()>>(
			[this, request]()
			{
			return this->updateAgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateCustomerOutcome ScspClient::updateCustomer(const UpdateCustomerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomerOutcome(UpdateCustomerResult(outcome.result()));
	else
		return UpdateCustomerOutcome(outcome.error());
}

void ScspClient::updateCustomerAsync(const UpdateCustomerRequest& request, const UpdateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateCustomerOutcomeCallable ScspClient::updateCustomerCallable(const UpdateCustomerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomerOutcome()>>(
			[this, request]()
			{
			return this->updateCustomer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateEntityTagRelationOutcome ScspClient::updateEntityTagRelation(const UpdateEntityTagRelationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEntityTagRelationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEntityTagRelationOutcome(UpdateEntityTagRelationResult(outcome.result()));
	else
		return UpdateEntityTagRelationOutcome(outcome.error());
}

void ScspClient::updateEntityTagRelationAsync(const UpdateEntityTagRelationRequest& request, const UpdateEntityTagRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEntityTagRelation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateEntityTagRelationOutcomeCallable ScspClient::updateEntityTagRelationCallable(const UpdateEntityTagRelationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEntityTagRelationOutcome()>>(
			[this, request]()
			{
			return this->updateEntityTagRelation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateRingStatusOutcome ScspClient::updateRingStatus(const UpdateRingStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRingStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRingStatusOutcome(UpdateRingStatusResult(outcome.result()));
	else
		return UpdateRingStatusOutcome(outcome.error());
}

void ScspClient::updateRingStatusAsync(const UpdateRingStatusRequest& request, const UpdateRingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRingStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateRingStatusOutcomeCallable ScspClient::updateRingStatusCallable(const UpdateRingStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRingStatusOutcome()>>(
			[this, request]()
			{
			return this->updateRingStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateRoleOutcome ScspClient::updateRole(const UpdateRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRoleOutcome(UpdateRoleResult(outcome.result()));
	else
		return UpdateRoleOutcome(outcome.error());
}

void ScspClient::updateRoleAsync(const UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateRoleOutcomeCallable ScspClient::updateRoleCallable(const UpdateRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRoleOutcome()>>(
			[this, request]()
			{
			return this->updateRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateSkillGroupOutcome ScspClient::updateSkillGroup(const UpdateSkillGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSkillGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSkillGroupOutcome(UpdateSkillGroupResult(outcome.result()));
	else
		return UpdateSkillGroupOutcome(outcome.error());
}

void ScspClient::updateSkillGroupAsync(const UpdateSkillGroupRequest& request, const UpdateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSkillGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateSkillGroupOutcomeCallable ScspClient::updateSkillGroupCallable(const UpdateSkillGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSkillGroupOutcome()>>(
			[this, request]()
			{
			return this->updateSkillGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

ScspClient::UpdateTicketOutcome ScspClient::updateTicket(const UpdateTicketRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateTicketOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateTicketOutcome(UpdateTicketResult(outcome.result()));
	else
		return UpdateTicketOutcome(outcome.error());
}

void ScspClient::updateTicketAsync(const UpdateTicketRequest& request, const UpdateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateTicket(request), context);
	};

	asyncExecute(new Runnable(fn));
}

ScspClient::UpdateTicketOutcomeCallable ScspClient::updateTicketCallable(const UpdateTicketRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateTicketOutcome()>>(
			[this, request]()
			{
			return this->updateTicket(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

