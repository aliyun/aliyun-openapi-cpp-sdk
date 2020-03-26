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

#include <alibabacloud/outboundbot/OutboundBotClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

namespace
{
	const std::string SERVICE_NAME = "OutboundBot";
}

OutboundBotClient::OutboundBotClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "outboundbot");
}

OutboundBotClient::OutboundBotClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "outboundbot");
}

OutboundBotClient::OutboundBotClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "outboundbot");
}

OutboundBotClient::~OutboundBotClient()
{}

OutboundBotClient::AssignJobsOutcome OutboundBotClient::assignJobs(const AssignJobsRequest &request) const
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

void OutboundBotClient::assignJobsAsync(const AssignJobsRequest& request, const AssignJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::AssignJobsOutcomeCallable OutboundBotClient::assignJobsCallable(const AssignJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignJobsOutcome()>>(
			[this, request]()
			{
			return this->assignJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CancelJobsOutcome OutboundBotClient::cancelJobs(const CancelJobsRequest &request) const
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

void OutboundBotClient::cancelJobsAsync(const CancelJobsRequest& request, const CancelJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CancelJobsOutcomeCallable OutboundBotClient::cancelJobsCallable(const CancelJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelJobsOutcome()>>(
			[this, request]()
			{
			return this->cancelJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateBatchJobsOutcome OutboundBotClient::createBatchJobs(const CreateBatchJobsRequest &request) const
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

void OutboundBotClient::createBatchJobsAsync(const CreateBatchJobsRequest& request, const CreateBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateBatchJobsOutcomeCallable OutboundBotClient::createBatchJobsCallable(const CreateBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->createBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateDialogueFlowOutcome OutboundBotClient::createDialogueFlow(const CreateDialogueFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDialogueFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDialogueFlowOutcome(CreateDialogueFlowResult(outcome.result()));
	else
		return CreateDialogueFlowOutcome(outcome.error());
}

void OutboundBotClient::createDialogueFlowAsync(const CreateDialogueFlowRequest& request, const CreateDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDialogueFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateDialogueFlowOutcomeCallable OutboundBotClient::createDialogueFlowCallable(const CreateDialogueFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDialogueFlowOutcome()>>(
			[this, request]()
			{
			return this->createDialogueFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateGlobalQuestionOutcome OutboundBotClient::createGlobalQuestion(const CreateGlobalQuestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalQuestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalQuestionOutcome(CreateGlobalQuestionResult(outcome.result()));
	else
		return CreateGlobalQuestionOutcome(outcome.error());
}

void OutboundBotClient::createGlobalQuestionAsync(const CreateGlobalQuestionRequest& request, const CreateGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalQuestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateGlobalQuestionOutcomeCallable OutboundBotClient::createGlobalQuestionCallable(const CreateGlobalQuestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalQuestionOutcome()>>(
			[this, request]()
			{
			return this->createGlobalQuestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateInstanceOutcome OutboundBotClient::createInstance(const CreateInstanceRequest &request) const
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

void OutboundBotClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateInstanceOutcomeCallable OutboundBotClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateIntentOutcome OutboundBotClient::createIntent(const CreateIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateIntentOutcome(CreateIntentResult(outcome.result()));
	else
		return CreateIntentOutcome(outcome.error());
}

void OutboundBotClient::createIntentAsync(const CreateIntentRequest& request, const CreateIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateIntentOutcomeCallable OutboundBotClient::createIntentCallable(const CreateIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateIntentOutcome()>>(
			[this, request]()
			{
			return this->createIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateJobGroupOutcome OutboundBotClient::createJobGroup(const CreateJobGroupRequest &request) const
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

void OutboundBotClient::createJobGroupAsync(const CreateJobGroupRequest& request, const CreateJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateJobGroupOutcomeCallable OutboundBotClient::createJobGroupCallable(const CreateJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobGroupOutcome()>>(
			[this, request]()
			{
			return this->createJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateOutboundCallNumberOutcome OutboundBotClient::createOutboundCallNumber(const CreateOutboundCallNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateOutboundCallNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateOutboundCallNumberOutcome(CreateOutboundCallNumberResult(outcome.result()));
	else
		return CreateOutboundCallNumberOutcome(outcome.error());
}

void OutboundBotClient::createOutboundCallNumberAsync(const CreateOutboundCallNumberRequest& request, const CreateOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createOutboundCallNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateOutboundCallNumberOutcomeCallable OutboundBotClient::createOutboundCallNumberCallable(const CreateOutboundCallNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateOutboundCallNumberOutcome()>>(
			[this, request]()
			{
			return this->createOutboundCallNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateScriptOutcome OutboundBotClient::createScript(const CreateScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScriptOutcome(CreateScriptResult(outcome.result()));
	else
		return CreateScriptOutcome(outcome.error());
}

void OutboundBotClient::createScriptAsync(const CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateScriptOutcomeCallable OutboundBotClient::createScriptCallable(const CreateScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScriptOutcome()>>(
			[this, request]()
			{
			return this->createScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateScriptWaveformOutcome OutboundBotClient::createScriptWaveform(const CreateScriptWaveformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateScriptWaveformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateScriptWaveformOutcome(CreateScriptWaveformResult(outcome.result()));
	else
		return CreateScriptWaveformOutcome(outcome.error());
}

void OutboundBotClient::createScriptWaveformAsync(const CreateScriptWaveformRequest& request, const CreateScriptWaveformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createScriptWaveform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateScriptWaveformOutcomeCallable OutboundBotClient::createScriptWaveformCallable(const CreateScriptWaveformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateScriptWaveformOutcome()>>(
			[this, request]()
			{
			return this->createScriptWaveform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateTagOutcome OutboundBotClient::createTag(const CreateTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTagOutcome(CreateTagResult(outcome.result()));
	else
		return CreateTagOutcome(outcome.error());
}

void OutboundBotClient::createTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateTagOutcomeCallable OutboundBotClient::createTagCallable(const CreateTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTagOutcome()>>(
			[this, request]()
			{
			return this->createTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteDialogueFlowOutcome OutboundBotClient::deleteDialogueFlow(const DeleteDialogueFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteDialogueFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteDialogueFlowOutcome(DeleteDialogueFlowResult(outcome.result()));
	else
		return DeleteDialogueFlowOutcome(outcome.error());
}

void OutboundBotClient::deleteDialogueFlowAsync(const DeleteDialogueFlowRequest& request, const DeleteDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteDialogueFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteDialogueFlowOutcomeCallable OutboundBotClient::deleteDialogueFlowCallable(const DeleteDialogueFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteDialogueFlowOutcome()>>(
			[this, request]()
			{
			return this->deleteDialogueFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteGlobalQuestionOutcome OutboundBotClient::deleteGlobalQuestion(const DeleteGlobalQuestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalQuestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalQuestionOutcome(DeleteGlobalQuestionResult(outcome.result()));
	else
		return DeleteGlobalQuestionOutcome(outcome.error());
}

void OutboundBotClient::deleteGlobalQuestionAsync(const DeleteGlobalQuestionRequest& request, const DeleteGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalQuestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteGlobalQuestionOutcomeCallable OutboundBotClient::deleteGlobalQuestionCallable(const DeleteGlobalQuestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalQuestionOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalQuestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteInstanceOutcome OutboundBotClient::deleteInstance(const DeleteInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteInstanceOutcome(DeleteInstanceResult(outcome.result()));
	else
		return DeleteInstanceOutcome(outcome.error());
}

void OutboundBotClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteInstanceOutcomeCallable OutboundBotClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteIntentOutcome OutboundBotClient::deleteIntent(const DeleteIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteIntentOutcome(DeleteIntentResult(outcome.result()));
	else
		return DeleteIntentOutcome(outcome.error());
}

void OutboundBotClient::deleteIntentAsync(const DeleteIntentRequest& request, const DeleteIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteIntentOutcomeCallable OutboundBotClient::deleteIntentCallable(const DeleteIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteIntentOutcome()>>(
			[this, request]()
			{
			return this->deleteIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteJobGroupOutcome OutboundBotClient::deleteJobGroup(const DeleteJobGroupRequest &request) const
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

void OutboundBotClient::deleteJobGroupAsync(const DeleteJobGroupRequest& request, const DeleteJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteJobGroupOutcomeCallable OutboundBotClient::deleteJobGroupCallable(const DeleteJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteOutboundCallNumberOutcome OutboundBotClient::deleteOutboundCallNumber(const DeleteOutboundCallNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteOutboundCallNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteOutboundCallNumberOutcome(DeleteOutboundCallNumberResult(outcome.result()));
	else
		return DeleteOutboundCallNumberOutcome(outcome.error());
}

void OutboundBotClient::deleteOutboundCallNumberAsync(const DeleteOutboundCallNumberRequest& request, const DeleteOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteOutboundCallNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteOutboundCallNumberOutcomeCallable OutboundBotClient::deleteOutboundCallNumberCallable(const DeleteOutboundCallNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteOutboundCallNumberOutcome()>>(
			[this, request]()
			{
			return this->deleteOutboundCallNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteScriptOutcome OutboundBotClient::deleteScript(const DeleteScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScriptOutcome(DeleteScriptResult(outcome.result()));
	else
		return DeleteScriptOutcome(outcome.error());
}

void OutboundBotClient::deleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteScriptOutcomeCallable OutboundBotClient::deleteScriptCallable(const DeleteScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScriptOutcome()>>(
			[this, request]()
			{
			return this->deleteScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteScriptWaveformOutcome OutboundBotClient::deleteScriptWaveform(const DeleteScriptWaveformRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScriptWaveformOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScriptWaveformOutcome(DeleteScriptWaveformResult(outcome.result()));
	else
		return DeleteScriptWaveformOutcome(outcome.error());
}

void OutboundBotClient::deleteScriptWaveformAsync(const DeleteScriptWaveformRequest& request, const DeleteScriptWaveformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScriptWaveform(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteScriptWaveformOutcomeCallable OutboundBotClient::deleteScriptWaveformCallable(const DeleteScriptWaveformRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScriptWaveformOutcome()>>(
			[this, request]()
			{
			return this->deleteScriptWaveform(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeGlobalQuestionOutcome OutboundBotClient::describeGlobalQuestion(const DescribeGlobalQuestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalQuestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalQuestionOutcome(DescribeGlobalQuestionResult(outcome.result()));
	else
		return DescribeGlobalQuestionOutcome(outcome.error());
}

void OutboundBotClient::describeGlobalQuestionAsync(const DescribeGlobalQuestionRequest& request, const DescribeGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalQuestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeGlobalQuestionOutcomeCallable OutboundBotClient::describeGlobalQuestionCallable(const DescribeGlobalQuestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalQuestionOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalQuestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeInstanceOutcome OutboundBotClient::describeInstance(const DescribeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeInstanceOutcome(DescribeInstanceResult(outcome.result()));
	else
		return DescribeInstanceOutcome(outcome.error());
}

void OutboundBotClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeInstanceOutcomeCallable OutboundBotClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeIntentOutcome OutboundBotClient::describeIntent(const DescribeIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntentOutcome(DescribeIntentResult(outcome.result()));
	else
		return DescribeIntentOutcome(outcome.error());
}

void OutboundBotClient::describeIntentAsync(const DescribeIntentRequest& request, const DescribeIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeIntentOutcomeCallable OutboundBotClient::describeIntentCallable(const DescribeIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntentOutcome()>>(
			[this, request]()
			{
			return this->describeIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeJobOutcome OutboundBotClient::describeJob(const DescribeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobOutcome(DescribeJobResult(outcome.result()));
	else
		return DescribeJobOutcome(outcome.error());
}

void OutboundBotClient::describeJobAsync(const DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeJobOutcomeCallable OutboundBotClient::describeJobCallable(const DescribeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobOutcome()>>(
			[this, request]()
			{
			return this->describeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeJobGroupOutcome OutboundBotClient::describeJobGroup(const DescribeJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobGroupOutcome(DescribeJobGroupResult(outcome.result()));
	else
		return DescribeJobGroupOutcome(outcome.error());
}

void OutboundBotClient::describeJobGroupAsync(const DescribeJobGroupRequest& request, const DescribeJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeJobGroupOutcomeCallable OutboundBotClient::describeJobGroupCallable(const DescribeJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobGroupOutcome()>>(
			[this, request]()
			{
			return this->describeJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeScriptOutcome OutboundBotClient::describeScript(const DescribeScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScriptOutcome(DescribeScriptResult(outcome.result()));
	else
		return DescribeScriptOutcome(outcome.error());
}

void OutboundBotClient::describeScriptAsync(const DescribeScriptRequest& request, const DescribeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeScriptOutcomeCallable OutboundBotClient::describeScriptCallable(const DescribeScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScriptOutcome()>>(
			[this, request]()
			{
			return this->describeScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeScriptVoiceConfigOutcome OutboundBotClient::describeScriptVoiceConfig(const DescribeScriptVoiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeScriptVoiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeScriptVoiceConfigOutcome(DescribeScriptVoiceConfigResult(outcome.result()));
	else
		return DescribeScriptVoiceConfigOutcome(outcome.error());
}

void OutboundBotClient::describeScriptVoiceConfigAsync(const DescribeScriptVoiceConfigRequest& request, const DescribeScriptVoiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeScriptVoiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeScriptVoiceConfigOutcomeCallable OutboundBotClient::describeScriptVoiceConfigCallable(const DescribeScriptVoiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeScriptVoiceConfigOutcome()>>(
			[this, request]()
			{
			return this->describeScriptVoiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeTTSConfigOutcome OutboundBotClient::describeTTSConfig(const DescribeTTSConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTTSConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTTSConfigOutcome(DescribeTTSConfigResult(outcome.result()));
	else
		return DescribeTTSConfigOutcome(outcome.error());
}

void OutboundBotClient::describeTTSConfigAsync(const DescribeTTSConfigRequest& request, const DescribeTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeTTSConfigOutcomeCallable OutboundBotClient::describeTTSConfigCallable(const DescribeTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->describeTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeTagHitsSummaryOutcome OutboundBotClient::describeTagHitsSummary(const DescribeTagHitsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTagHitsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTagHitsSummaryOutcome(DescribeTagHitsSummaryResult(outcome.result()));
	else
		return DescribeTagHitsSummaryOutcome(outcome.error());
}

void OutboundBotClient::describeTagHitsSummaryAsync(const DescribeTagHitsSummaryRequest& request, const DescribeTagHitsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTagHitsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeTagHitsSummaryOutcomeCallable OutboundBotClient::describeTagHitsSummaryCallable(const DescribeTagHitsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTagHitsSummaryOutcome()>>(
			[this, request]()
			{
			return this->describeTagHitsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DialogueOutcome OutboundBotClient::dialogue(const DialogueRequest &request) const
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

void OutboundBotClient::dialogueAsync(const DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DialogueOutcomeCallable OutboundBotClient::dialogueCallable(const DialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialogueOutcome()>>(
			[this, request]()
			{
			return this->dialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DownloadBasicStatisticsReportOutcome OutboundBotClient::downloadBasicStatisticsReport(const DownloadBasicStatisticsReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadBasicStatisticsReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadBasicStatisticsReportOutcome(DownloadBasicStatisticsReportResult(outcome.result()));
	else
		return DownloadBasicStatisticsReportOutcome(outcome.error());
}

void OutboundBotClient::downloadBasicStatisticsReportAsync(const DownloadBasicStatisticsReportRequest& request, const DownloadBasicStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadBasicStatisticsReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DownloadBasicStatisticsReportOutcomeCallable OutboundBotClient::downloadBasicStatisticsReportCallable(const DownloadBasicStatisticsReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadBasicStatisticsReportOutcome()>>(
			[this, request]()
			{
			return this->downloadBasicStatisticsReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DownloadConversationDetailsOutcome OutboundBotClient::downloadConversationDetails(const DownloadConversationDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadConversationDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadConversationDetailsOutcome(DownloadConversationDetailsResult(outcome.result()));
	else
		return DownloadConversationDetailsOutcome(outcome.error());
}

void OutboundBotClient::downloadConversationDetailsAsync(const DownloadConversationDetailsRequest& request, const DownloadConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadConversationDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DownloadConversationDetailsOutcomeCallable OutboundBotClient::downloadConversationDetailsCallable(const DownloadConversationDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadConversationDetailsOutcome()>>(
			[this, request]()
			{
			return this->downloadConversationDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DownloadRecordingOutcome OutboundBotClient::downloadRecording(const DownloadRecordingRequest &request) const
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

void OutboundBotClient::downloadRecordingAsync(const DownloadRecordingRequest& request, const DownloadRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DownloadRecordingOutcomeCallable OutboundBotClient::downloadRecordingCallable(const DownloadRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DownloadUnreachableContactsOutcome OutboundBotClient::downloadUnreachableContacts(const DownloadUnreachableContactsRequest &request) const
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

void OutboundBotClient::downloadUnreachableContactsAsync(const DownloadUnreachableContactsRequest& request, const DownloadUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DownloadUnreachableContactsOutcomeCallable OutboundBotClient::downloadUnreachableContactsCallable(const DownloadUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->downloadUnreachableContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DuplicateScriptOutcome OutboundBotClient::duplicateScript(const DuplicateScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DuplicateScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DuplicateScriptOutcome(DuplicateScriptResult(outcome.result()));
	else
		return DuplicateScriptOutcome(outcome.error());
}

void OutboundBotClient::duplicateScriptAsync(const DuplicateScriptRequest& request, const DuplicateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, duplicateScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DuplicateScriptOutcomeCallable OutboundBotClient::duplicateScriptCallable(const DuplicateScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DuplicateScriptOutcome()>>(
			[this, request]()
			{
			return this->duplicateScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ExportScriptOutcome OutboundBotClient::exportScript(const ExportScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportScriptOutcome(ExportScriptResult(outcome.result()));
	else
		return ExportScriptOutcome(outcome.error());
}

void OutboundBotClient::exportScriptAsync(const ExportScriptRequest& request, const ExportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ExportScriptOutcomeCallable OutboundBotClient::exportScriptCallable(const ExportScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportScriptOutcome()>>(
			[this, request]()
			{
			return this->exportScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GenerateBasicStatisticsReportOutcome OutboundBotClient::generateBasicStatisticsReport(const GenerateBasicStatisticsReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateBasicStatisticsReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateBasicStatisticsReportOutcome(GenerateBasicStatisticsReportResult(outcome.result()));
	else
		return GenerateBasicStatisticsReportOutcome(outcome.error());
}

void OutboundBotClient::generateBasicStatisticsReportAsync(const GenerateBasicStatisticsReportRequest& request, const GenerateBasicStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateBasicStatisticsReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GenerateBasicStatisticsReportOutcomeCallable OutboundBotClient::generateBasicStatisticsReportCallable(const GenerateBasicStatisticsReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateBasicStatisticsReportOutcome()>>(
			[this, request]()
			{
			return this->generateBasicStatisticsReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GenerateOverallStatisticsReportOutcome OutboundBotClient::generateOverallStatisticsReport(const GenerateOverallStatisticsReportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateOverallStatisticsReportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateOverallStatisticsReportOutcome(GenerateOverallStatisticsReportResult(outcome.result()));
	else
		return GenerateOverallStatisticsReportOutcome(outcome.error());
}

void OutboundBotClient::generateOverallStatisticsReportAsync(const GenerateOverallStatisticsReportRequest& request, const GenerateOverallStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateOverallStatisticsReport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GenerateOverallStatisticsReportOutcomeCallable OutboundBotClient::generateOverallStatisticsReportCallable(const GenerateOverallStatisticsReportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateOverallStatisticsReportOutcome()>>(
			[this, request]()
			{
			return this->generateOverallStatisticsReport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetJobByPhoneNumberOutcome OutboundBotClient::getJobByPhoneNumber(const GetJobByPhoneNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobByPhoneNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobByPhoneNumberOutcome(GetJobByPhoneNumberResult(outcome.result()));
	else
		return GetJobByPhoneNumberOutcome(outcome.error());
}

void OutboundBotClient::getJobByPhoneNumberAsync(const GetJobByPhoneNumberRequest& request, const GetJobByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobByPhoneNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetJobByPhoneNumberOutcomeCallable OutboundBotClient::getJobByPhoneNumberCallable(const GetJobByPhoneNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobByPhoneNumberOutcome()>>(
			[this, request]()
			{
			return this->getJobByPhoneNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetJobStatusByCallIdOutcome OutboundBotClient::getJobStatusByCallId(const GetJobStatusByCallIdRequest &request) const
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

void OutboundBotClient::getJobStatusByCallIdAsync(const GetJobStatusByCallIdRequest& request, const GetJobStatusByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatusByCallId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetJobStatusByCallIdOutcomeCallable OutboundBotClient::getJobStatusByCallIdCallable(const GetJobStatusByCallIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusByCallIdOutcome()>>(
			[this, request]()
			{
			return this->getJobStatusByCallId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetTagHitsSummaryOutcome OutboundBotClient::getTagHitsSummary(const GetTagHitsSummaryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTagHitsSummaryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTagHitsSummaryOutcome(GetTagHitsSummaryResult(outcome.result()));
	else
		return GetTagHitsSummaryOutcome(outcome.error());
}

void OutboundBotClient::getTagHitsSummaryAsync(const GetTagHitsSummaryRequest& request, const GetTagHitsSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTagHitsSummary(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetTagHitsSummaryOutcomeCallable OutboundBotClient::getTagHitsSummaryCallable(const GetTagHitsSummaryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTagHitsSummaryOutcome()>>(
			[this, request]()
			{
			return this->getTagHitsSummary(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ImportScriptOutcome OutboundBotClient::importScript(const ImportScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportScriptOutcome(ImportScriptResult(outcome.result()));
	else
		return ImportScriptOutcome(outcome.error());
}

void OutboundBotClient::importScriptAsync(const ImportScriptRequest& request, const ImportScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ImportScriptOutcomeCallable OutboundBotClient::importScriptCallable(const ImportScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportScriptOutcome()>>(
			[this, request]()
			{
			return this->importScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListBasicStatisticsReportSubItemsOutcome OutboundBotClient::listBasicStatisticsReportSubItems(const ListBasicStatisticsReportSubItemsRequest &request) const
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

void OutboundBotClient::listBasicStatisticsReportSubItemsAsync(const ListBasicStatisticsReportSubItemsRequest& request, const ListBasicStatisticsReportSubItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listBasicStatisticsReportSubItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListBasicStatisticsReportSubItemsOutcomeCallable OutboundBotClient::listBasicStatisticsReportSubItemsCallable(const ListBasicStatisticsReportSubItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListBasicStatisticsReportSubItemsOutcome()>>(
			[this, request]()
			{
			return this->listBasicStatisticsReportSubItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListConversationsWithUnrecognizedIntentsOutcome OutboundBotClient::listConversationsWithUnrecognizedIntents(const ListConversationsWithUnrecognizedIntentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConversationsWithUnrecognizedIntentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConversationsWithUnrecognizedIntentsOutcome(ListConversationsWithUnrecognizedIntentsResult(outcome.result()));
	else
		return ListConversationsWithUnrecognizedIntentsOutcome(outcome.error());
}

void OutboundBotClient::listConversationsWithUnrecognizedIntentsAsync(const ListConversationsWithUnrecognizedIntentsRequest& request, const ListConversationsWithUnrecognizedIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConversationsWithUnrecognizedIntents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListConversationsWithUnrecognizedIntentsOutcomeCallable OutboundBotClient::listConversationsWithUnrecognizedIntentsCallable(const ListConversationsWithUnrecognizedIntentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConversationsWithUnrecognizedIntentsOutcome()>>(
			[this, request]()
			{
			return this->listConversationsWithUnrecognizedIntents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListDialogueFlowsOutcome OutboundBotClient::listDialogueFlows(const ListDialogueFlowsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDialogueFlowsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDialogueFlowsOutcome(ListDialogueFlowsResult(outcome.result()));
	else
		return ListDialogueFlowsOutcome(outcome.error());
}

void OutboundBotClient::listDialogueFlowsAsync(const ListDialogueFlowsRequest& request, const ListDialogueFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDialogueFlows(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListDialogueFlowsOutcomeCallable OutboundBotClient::listDialogueFlowsCallable(const ListDialogueFlowsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDialogueFlowsOutcome()>>(
			[this, request]()
			{
			return this->listDialogueFlows(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListGlobalQuestionsOutcome OutboundBotClient::listGlobalQuestions(const ListGlobalQuestionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGlobalQuestionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGlobalQuestionsOutcome(ListGlobalQuestionsResult(outcome.result()));
	else
		return ListGlobalQuestionsOutcome(outcome.error());
}

void OutboundBotClient::listGlobalQuestionsAsync(const ListGlobalQuestionsRequest& request, const ListGlobalQuestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGlobalQuestions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListGlobalQuestionsOutcomeCallable OutboundBotClient::listGlobalQuestionsCallable(const ListGlobalQuestionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGlobalQuestionsOutcome()>>(
			[this, request]()
			{
			return this->listGlobalQuestions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListInstancesOutcome OutboundBotClient::listInstances(const ListInstancesRequest &request) const
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

void OutboundBotClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListInstancesOutcomeCallable OutboundBotClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListIntentsOutcome OutboundBotClient::listIntents(const ListIntentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListIntentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListIntentsOutcome(ListIntentsResult(outcome.result()));
	else
		return ListIntentsOutcome(outcome.error());
}

void OutboundBotClient::listIntentsAsync(const ListIntentsRequest& request, const ListIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listIntents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListIntentsOutcomeCallable OutboundBotClient::listIntentsCallable(const ListIntentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListIntentsOutcome()>>(
			[this, request]()
			{
			return this->listIntents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListJobGroupsOutcome OutboundBotClient::listJobGroups(const ListJobGroupsRequest &request) const
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

void OutboundBotClient::listJobGroupsAsync(const ListJobGroupsRequest& request, const ListJobGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListJobGroupsOutcomeCallable OutboundBotClient::listJobGroupsCallable(const ListJobGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobGroupsOutcome()>>(
			[this, request]()
			{
			return this->listJobGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListJobGroupsWithScenarioOutcome OutboundBotClient::listJobGroupsWithScenario(const ListJobGroupsWithScenarioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobGroupsWithScenarioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobGroupsWithScenarioOutcome(ListJobGroupsWithScenarioResult(outcome.result()));
	else
		return ListJobGroupsWithScenarioOutcome(outcome.error());
}

void OutboundBotClient::listJobGroupsWithScenarioAsync(const ListJobGroupsWithScenarioRequest& request, const ListJobGroupsWithScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobGroupsWithScenario(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListJobGroupsWithScenarioOutcomeCallable OutboundBotClient::listJobGroupsWithScenarioCallable(const ListJobGroupsWithScenarioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobGroupsWithScenarioOutcome()>>(
			[this, request]()
			{
			return this->listJobGroupsWithScenario(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListJobsOutcome OutboundBotClient::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void OutboundBotClient::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListJobsOutcomeCallable OutboundBotClient::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListJobsByGroupOutcome OutboundBotClient::listJobsByGroup(const ListJobsByGroupRequest &request) const
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

void OutboundBotClient::listJobsByGroupAsync(const ListJobsByGroupRequest& request, const ListJobsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobsByGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListJobsByGroupOutcomeCallable OutboundBotClient::listJobsByGroupCallable(const ListJobsByGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsByGroupOutcome()>>(
			[this, request]()
			{
			return this->listJobsByGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListMediaOutcome OutboundBotClient::listMedia(const ListMediaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediaOutcome(ListMediaResult(outcome.result()));
	else
		return ListMediaOutcome(outcome.error());
}

void OutboundBotClient::listMediaAsync(const ListMediaRequest& request, const ListMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMedia(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListMediaOutcomeCallable OutboundBotClient::listMediaCallable(const ListMediaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediaOutcome()>>(
			[this, request]()
			{
			return this->listMedia(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListMediasOutcome OutboundBotClient::listMedias(const ListMediasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMediasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMediasOutcome(ListMediasResult(outcome.result()));
	else
		return ListMediasOutcome(outcome.error());
}

void OutboundBotClient::listMediasAsync(const ListMediasRequest& request, const ListMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMedias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListMediasOutcomeCallable OutboundBotClient::listMediasCallable(const ListMediasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMediasOutcome()>>(
			[this, request]()
			{
			return this->listMedias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListOutboundCallNumbersOutcome OutboundBotClient::listOutboundCallNumbers(const ListOutboundCallNumbersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListOutboundCallNumbersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListOutboundCallNumbersOutcome(ListOutboundCallNumbersResult(outcome.result()));
	else
		return ListOutboundCallNumbersOutcome(outcome.error());
}

void OutboundBotClient::listOutboundCallNumbersAsync(const ListOutboundCallNumbersRequest& request, const ListOutboundCallNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listOutboundCallNumbers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListOutboundCallNumbersOutcomeCallable OutboundBotClient::listOutboundCallNumbersCallable(const ListOutboundCallNumbersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListOutboundCallNumbersOutcome()>>(
			[this, request]()
			{
			return this->listOutboundCallNumbers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListScriptPublishHistoriesOutcome OutboundBotClient::listScriptPublishHistories(const ListScriptPublishHistoriesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScriptPublishHistoriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScriptPublishHistoriesOutcome(ListScriptPublishHistoriesResult(outcome.result()));
	else
		return ListScriptPublishHistoriesOutcome(outcome.error());
}

void OutboundBotClient::listScriptPublishHistoriesAsync(const ListScriptPublishHistoriesRequest& request, const ListScriptPublishHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScriptPublishHistories(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListScriptPublishHistoriesOutcomeCallable OutboundBotClient::listScriptPublishHistoriesCallable(const ListScriptPublishHistoriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScriptPublishHistoriesOutcome()>>(
			[this, request]()
			{
			return this->listScriptPublishHistories(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListScriptVoiceConfigsOutcome OutboundBotClient::listScriptVoiceConfigs(const ListScriptVoiceConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScriptVoiceConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScriptVoiceConfigsOutcome(ListScriptVoiceConfigsResult(outcome.result()));
	else
		return ListScriptVoiceConfigsOutcome(outcome.error());
}

void OutboundBotClient::listScriptVoiceConfigsAsync(const ListScriptVoiceConfigsRequest& request, const ListScriptVoiceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScriptVoiceConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListScriptVoiceConfigsOutcomeCallable OutboundBotClient::listScriptVoiceConfigsCallable(const ListScriptVoiceConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScriptVoiceConfigsOutcome()>>(
			[this, request]()
			{
			return this->listScriptVoiceConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListScriptsOutcome OutboundBotClient::listScripts(const ListScriptsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScriptsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScriptsOutcome(ListScriptsResult(outcome.result()));
	else
		return ListScriptsOutcome(outcome.error());
}

void OutboundBotClient::listScriptsAsync(const ListScriptsRequest& request, const ListScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScripts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListScriptsOutcomeCallable OutboundBotClient::listScriptsCallable(const ListScriptsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScriptsOutcome()>>(
			[this, request]()
			{
			return this->listScripts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListTagsOutcome OutboundBotClient::listTags(const ListTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsOutcome(ListTagsResult(outcome.result()));
	else
		return ListTagsOutcome(outcome.error());
}

void OutboundBotClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListTagsOutcomeCallable OutboundBotClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListUnreachableContactsOutcome OutboundBotClient::listUnreachableContacts(const ListUnreachableContactsRequest &request) const
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

void OutboundBotClient::listUnreachableContactsAsync(const ListUnreachableContactsRequest& request, const ListUnreachableContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnreachableContacts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListUnreachableContactsOutcomeCallable OutboundBotClient::listUnreachableContactsCallable(const ListUnreachableContactsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnreachableContactsOutcome()>>(
			[this, request]()
			{
			return this->listUnreachableContacts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListUnrecognizedIntentsOutcome OutboundBotClient::listUnrecognizedIntents(const ListUnrecognizedIntentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListUnrecognizedIntentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListUnrecognizedIntentsOutcome(ListUnrecognizedIntentsResult(outcome.result()));
	else
		return ListUnrecognizedIntentsOutcome(outcome.error());
}

void OutboundBotClient::listUnrecognizedIntentsAsync(const ListUnrecognizedIntentsRequest& request, const ListUnrecognizedIntentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listUnrecognizedIntents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListUnrecognizedIntentsOutcomeCallable OutboundBotClient::listUnrecognizedIntentsCallable(const ListUnrecognizedIntentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListUnrecognizedIntentsOutcome()>>(
			[this, request]()
			{
			return this->listUnrecognizedIntents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyBatchJobsOutcome OutboundBotClient::modifyBatchJobs(const ModifyBatchJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBatchJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBatchJobsOutcome(ModifyBatchJobsResult(outcome.result()));
	else
		return ModifyBatchJobsOutcome(outcome.error());
}

void OutboundBotClient::modifyBatchJobsAsync(const ModifyBatchJobsRequest& request, const ModifyBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyBatchJobsOutcomeCallable OutboundBotClient::modifyBatchJobsCallable(const ModifyBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->modifyBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyDialogueFlowOutcome OutboundBotClient::modifyDialogueFlow(const ModifyDialogueFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyDialogueFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyDialogueFlowOutcome(ModifyDialogueFlowResult(outcome.result()));
	else
		return ModifyDialogueFlowOutcome(outcome.error());
}

void OutboundBotClient::modifyDialogueFlowAsync(const ModifyDialogueFlowRequest& request, const ModifyDialogueFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyDialogueFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyDialogueFlowOutcomeCallable OutboundBotClient::modifyDialogueFlowCallable(const ModifyDialogueFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyDialogueFlowOutcome()>>(
			[this, request]()
			{
			return this->modifyDialogueFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyGlobalQuestionOutcome OutboundBotClient::modifyGlobalQuestion(const ModifyGlobalQuestionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalQuestionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalQuestionOutcome(ModifyGlobalQuestionResult(outcome.result()));
	else
		return ModifyGlobalQuestionOutcome(outcome.error());
}

void OutboundBotClient::modifyGlobalQuestionAsync(const ModifyGlobalQuestionRequest& request, const ModifyGlobalQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalQuestion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyGlobalQuestionOutcomeCallable OutboundBotClient::modifyGlobalQuestionCallable(const ModifyGlobalQuestionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalQuestionOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalQuestion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyInstanceOutcome OutboundBotClient::modifyInstance(const ModifyInstanceRequest &request) const
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

void OutboundBotClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyInstanceOutcomeCallable OutboundBotClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyIntentOutcome OutboundBotClient::modifyIntent(const ModifyIntentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyIntentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyIntentOutcome(ModifyIntentResult(outcome.result()));
	else
		return ModifyIntentOutcome(outcome.error());
}

void OutboundBotClient::modifyIntentAsync(const ModifyIntentRequest& request, const ModifyIntentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyIntent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyIntentOutcomeCallable OutboundBotClient::modifyIntentCallable(const ModifyIntentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyIntentOutcome()>>(
			[this, request]()
			{
			return this->modifyIntent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyJobGroupOutcome OutboundBotClient::modifyJobGroup(const ModifyJobGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyJobGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyJobGroupOutcome(ModifyJobGroupResult(outcome.result()));
	else
		return ModifyJobGroupOutcome(outcome.error());
}

void OutboundBotClient::modifyJobGroupAsync(const ModifyJobGroupRequest& request, const ModifyJobGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyJobGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyJobGroupOutcomeCallable OutboundBotClient::modifyJobGroupCallable(const ModifyJobGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyJobGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyJobGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyOutboundCallNumberOutcome OutboundBotClient::modifyOutboundCallNumber(const ModifyOutboundCallNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyOutboundCallNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyOutboundCallNumberOutcome(ModifyOutboundCallNumberResult(outcome.result()));
	else
		return ModifyOutboundCallNumberOutcome(outcome.error());
}

void OutboundBotClient::modifyOutboundCallNumberAsync(const ModifyOutboundCallNumberRequest& request, const ModifyOutboundCallNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyOutboundCallNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyOutboundCallNumberOutcomeCallable OutboundBotClient::modifyOutboundCallNumberCallable(const ModifyOutboundCallNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyOutboundCallNumberOutcome()>>(
			[this, request]()
			{
			return this->modifyOutboundCallNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyScriptOutcome OutboundBotClient::modifyScript(const ModifyScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScriptOutcome(ModifyScriptResult(outcome.result()));
	else
		return ModifyScriptOutcome(outcome.error());
}

void OutboundBotClient::modifyScriptAsync(const ModifyScriptRequest& request, const ModifyScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyScriptOutcomeCallable OutboundBotClient::modifyScriptCallable(const ModifyScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScriptOutcome()>>(
			[this, request]()
			{
			return this->modifyScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyScriptVoiceConfigOutcome OutboundBotClient::modifyScriptVoiceConfig(const ModifyScriptVoiceConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyScriptVoiceConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyScriptVoiceConfigOutcome(ModifyScriptVoiceConfigResult(outcome.result()));
	else
		return ModifyScriptVoiceConfigOutcome(outcome.error());
}

void OutboundBotClient::modifyScriptVoiceConfigAsync(const ModifyScriptVoiceConfigRequest& request, const ModifyScriptVoiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyScriptVoiceConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyScriptVoiceConfigOutcomeCallable OutboundBotClient::modifyScriptVoiceConfigCallable(const ModifyScriptVoiceConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyScriptVoiceConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyScriptVoiceConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyTTSConfigOutcome OutboundBotClient::modifyTTSConfig(const ModifyTTSConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTTSConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTTSConfigOutcome(ModifyTTSConfigResult(outcome.result()));
	else
		return ModifyTTSConfigOutcome(outcome.error());
}

void OutboundBotClient::modifyTTSConfigAsync(const ModifyTTSConfigRequest& request, const ModifyTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyTTSConfigOutcomeCallable OutboundBotClient::modifyTTSConfigCallable(const ModifyTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ModifyTagGroupsOutcome OutboundBotClient::modifyTagGroups(const ModifyTagGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyTagGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyTagGroupsOutcome(ModifyTagGroupsResult(outcome.result()));
	else
		return ModifyTagGroupsOutcome(outcome.error());
}

void OutboundBotClient::modifyTagGroupsAsync(const ModifyTagGroupsRequest& request, const ModifyTagGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTagGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyTagGroupsOutcomeCallable OutboundBotClient::modifyTagGroupsCallable(const ModifyTagGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTagGroupsOutcome()>>(
			[this, request]()
			{
			return this->modifyTagGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::PublishScriptOutcome OutboundBotClient::publishScript(const PublishScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishScriptOutcome(PublishScriptResult(outcome.result()));
	else
		return PublishScriptOutcome(outcome.error());
}

void OutboundBotClient::publishScriptAsync(const PublishScriptRequest& request, const PublishScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::PublishScriptOutcomeCallable OutboundBotClient::publishScriptCallable(const PublishScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishScriptOutcome()>>(
			[this, request]()
			{
			return this->publishScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::PublishScriptForDebugOutcome OutboundBotClient::publishScriptForDebug(const PublishScriptForDebugRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishScriptForDebugOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishScriptForDebugOutcome(PublishScriptForDebugResult(outcome.result()));
	else
		return PublishScriptForDebugOutcome(outcome.error());
}

void OutboundBotClient::publishScriptForDebugAsync(const PublishScriptForDebugRequest& request, const PublishScriptForDebugAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishScriptForDebug(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::PublishScriptForDebugOutcomeCallable OutboundBotClient::publishScriptForDebugCallable(const PublishScriptForDebugRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishScriptForDebugOutcome()>>(
			[this, request]()
			{
			return this->publishScriptForDebug(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::QueryJobsOutcome OutboundBotClient::queryJobs(const QueryJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJobsOutcome(QueryJobsResult(outcome.result()));
	else
		return QueryJobsOutcome(outcome.error());
}

void OutboundBotClient::queryJobsAsync(const QueryJobsRequest& request, const QueryJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::QueryJobsOutcomeCallable OutboundBotClient::queryJobsCallable(const QueryJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJobsOutcome()>>(
			[this, request]()
			{
			return this->queryJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::QueryScriptWaveformsOutcome OutboundBotClient::queryScriptWaveforms(const QueryScriptWaveformsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryScriptWaveformsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryScriptWaveformsOutcome(QueryScriptWaveformsResult(outcome.result()));
	else
		return QueryScriptWaveformsOutcome(outcome.error());
}

void OutboundBotClient::queryScriptWaveformsAsync(const QueryScriptWaveformsRequest& request, const QueryScriptWaveformsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryScriptWaveforms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::QueryScriptWaveformsOutcomeCallable OutboundBotClient::queryScriptWaveformsCallable(const QueryScriptWaveformsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryScriptWaveformsOutcome()>>(
			[this, request]()
			{
			return this->queryScriptWaveforms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::QueryScriptsByStatusOutcome OutboundBotClient::queryScriptsByStatus(const QueryScriptsByStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryScriptsByStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryScriptsByStatusOutcome(QueryScriptsByStatusResult(outcome.result()));
	else
		return QueryScriptsByStatusOutcome(outcome.error());
}

void OutboundBotClient::queryScriptsByStatusAsync(const QueryScriptsByStatusRequest& request, const QueryScriptsByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryScriptsByStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::QueryScriptsByStatusOutcomeCallable OutboundBotClient::queryScriptsByStatusCallable(const QueryScriptsByStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryScriptsByStatusOutcome()>>(
			[this, request]()
			{
			return this->queryScriptsByStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::RecordFailureOutcome OutboundBotClient::recordFailure(const RecordFailureRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecordFailureOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecordFailureOutcome(RecordFailureResult(outcome.result()));
	else
		return RecordFailureOutcome(outcome.error());
}

void OutboundBotClient::recordFailureAsync(const RecordFailureRequest& request, const RecordFailureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recordFailure(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::RecordFailureOutcomeCallable OutboundBotClient::recordFailureCallable(const RecordFailureRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecordFailureOutcome()>>(
			[this, request]()
			{
			return this->recordFailure(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ResumeJobsOutcome OutboundBotClient::resumeJobs(const ResumeJobsRequest &request) const
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

void OutboundBotClient::resumeJobsAsync(const ResumeJobsRequest& request, const ResumeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ResumeJobsOutcomeCallable OutboundBotClient::resumeJobsCallable(const ResumeJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeJobsOutcome()>>(
			[this, request]()
			{
			return this->resumeJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::RollbackScriptOutcome OutboundBotClient::rollbackScript(const RollbackScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackScriptOutcome(RollbackScriptResult(outcome.result()));
	else
		return RollbackScriptOutcome(outcome.error());
}

void OutboundBotClient::rollbackScriptAsync(const RollbackScriptRequest& request, const RollbackScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::RollbackScriptOutcomeCallable OutboundBotClient::rollbackScriptCallable(const RollbackScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackScriptOutcome()>>(
			[this, request]()
			{
			return this->rollbackScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::StartJobOutcome OutboundBotClient::startJob(const StartJobRequest &request) const
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

void OutboundBotClient::startJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::StartJobOutcomeCallable OutboundBotClient::startJobCallable(const StartJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartJobOutcome()>>(
			[this, request]()
			{
			return this->startJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SubmitBatchJobsOutcome OutboundBotClient::submitBatchJobs(const SubmitBatchJobsRequest &request) const
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

void OutboundBotClient::submitBatchJobsAsync(const SubmitBatchJobsRequest& request, const SubmitBatchJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitBatchJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SubmitBatchJobsOutcomeCallable OutboundBotClient::submitBatchJobsCallable(const SubmitBatchJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitBatchJobsOutcome()>>(
			[this, request]()
			{
			return this->submitBatchJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SubmitRecordingOutcome OutboundBotClient::submitRecording(const SubmitRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitRecordingOutcome(SubmitRecordingResult(outcome.result()));
	else
		return SubmitRecordingOutcome(outcome.error());
}

void OutboundBotClient::submitRecordingAsync(const SubmitRecordingRequest& request, const SubmitRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SubmitRecordingOutcomeCallable OutboundBotClient::submitRecordingCallable(const SubmitRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitRecordingOutcome()>>(
			[this, request]()
			{
			return this->submitRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SubmitScriptReviewOutcome OutboundBotClient::submitScriptReview(const SubmitScriptReviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitScriptReviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitScriptReviewOutcome(SubmitScriptReviewResult(outcome.result()));
	else
		return SubmitScriptReviewOutcome(outcome.error());
}

void OutboundBotClient::submitScriptReviewAsync(const SubmitScriptReviewRequest& request, const SubmitScriptReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitScriptReview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SubmitScriptReviewOutcomeCallable OutboundBotClient::submitScriptReviewCallable(const SubmitScriptReviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitScriptReviewOutcome()>>(
			[this, request]()
			{
			return this->submitScriptReview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SuspendJobsOutcome OutboundBotClient::suspendJobs(const SuspendJobsRequest &request) const
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

void OutboundBotClient::suspendJobsAsync(const SuspendJobsRequest& request, const SuspendJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SuspendJobsOutcomeCallable OutboundBotClient::suspendJobsCallable(const SuspendJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendJobsOutcome()>>(
			[this, request]()
			{
			return this->suspendJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::WithdrawScriptOutcome OutboundBotClient::withdrawScript(const WithdrawScriptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WithdrawScriptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WithdrawScriptOutcome(WithdrawScriptResult(outcome.result()));
	else
		return WithdrawScriptOutcome(outcome.error());
}

void OutboundBotClient::withdrawScriptAsync(const WithdrawScriptRequest& request, const WithdrawScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, withdrawScript(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::WithdrawScriptOutcomeCallable OutboundBotClient::withdrawScriptCallable(const WithdrawScriptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WithdrawScriptOutcome()>>(
			[this, request]()
			{
			return this->withdrawScript(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::WithdrawScriptReviewOutcome OutboundBotClient::withdrawScriptReview(const WithdrawScriptReviewRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return WithdrawScriptReviewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return WithdrawScriptReviewOutcome(WithdrawScriptReviewResult(outcome.result()));
	else
		return WithdrawScriptReviewOutcome(outcome.error());
}

void OutboundBotClient::withdrawScriptReviewAsync(const WithdrawScriptReviewRequest& request, const WithdrawScriptReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, withdrawScriptReview(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::WithdrawScriptReviewOutcomeCallable OutboundBotClient::withdrawScriptReviewCallable(const WithdrawScriptReviewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<WithdrawScriptReviewOutcome()>>(
			[this, request]()
			{
			return this->withdrawScriptReview(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

