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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OutboundBotClient::OutboundBotClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OutboundBotClient::OutboundBotClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

OutboundBotClient::~OutboundBotClient()
{}

OutboundBotClient::ApplyNumberDistrictInfoParsingResultOutcome OutboundBotClient::applyNumberDistrictInfoParsingResult(const ApplyNumberDistrictInfoParsingResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ApplyNumberDistrictInfoParsingResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ApplyNumberDistrictInfoParsingResultOutcome(ApplyNumberDistrictInfoParsingResultResult(outcome.result()));
	else
		return ApplyNumberDistrictInfoParsingResultOutcome(outcome.error());
}

void OutboundBotClient::applyNumberDistrictInfoParsingResultAsync(const ApplyNumberDistrictInfoParsingResultRequest& request, const ApplyNumberDistrictInfoParsingResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, applyNumberDistrictInfoParsingResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ApplyNumberDistrictInfoParsingResultOutcomeCallable OutboundBotClient::applyNumberDistrictInfoParsingResultCallable(const ApplyNumberDistrictInfoParsingResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ApplyNumberDistrictInfoParsingResultOutcome()>>(
			[this, request]()
			{
			return this->applyNumberDistrictInfoParsingResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

OutboundBotClient::ChangeResourceGroupOutcome OutboundBotClient::changeResourceGroup(const ChangeResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeResourceGroupOutcome(ChangeResourceGroupResult(outcome.result()));
	else
		return ChangeResourceGroupOutcome(outcome.error());
}

void OutboundBotClient::changeResourceGroupAsync(const ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ChangeResourceGroupOutcomeCallable OutboundBotClient::changeResourceGroupCallable(const ChangeResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeResourceGroup(request);
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

OutboundBotClient::CreateBatchRepeatJobOutcome OutboundBotClient::createBatchRepeatJob(const CreateBatchRepeatJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBatchRepeatJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBatchRepeatJobOutcome(CreateBatchRepeatJobResult(outcome.result()));
	else
		return CreateBatchRepeatJobOutcome(outcome.error());
}

void OutboundBotClient::createBatchRepeatJobAsync(const CreateBatchRepeatJobRequest& request, const CreateBatchRepeatJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBatchRepeatJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateBatchRepeatJobOutcomeCallable OutboundBotClient::createBatchRepeatJobCallable(const CreateBatchRepeatJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBatchRepeatJobOutcome()>>(
			[this, request]()
			{
			return this->createBatchRepeatJob(request);
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

OutboundBotClient::CreateDownloadUrlOutcome OutboundBotClient::createDownloadUrl(const CreateDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDownloadUrlOutcome(CreateDownloadUrlResult(outcome.result()));
	else
		return CreateDownloadUrlOutcome(outcome.error());
}

void OutboundBotClient::createDownloadUrlAsync(const CreateDownloadUrlRequest& request, const CreateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateDownloadUrlOutcomeCallable OutboundBotClient::createDownloadUrlCallable(const CreateDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->createDownloadUrl(request);
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

OutboundBotClient::CreateInstanceBindNumberOutcome OutboundBotClient::createInstanceBindNumber(const CreateInstanceBindNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceBindNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceBindNumberOutcome(CreateInstanceBindNumberResult(outcome.result()));
	else
		return CreateInstanceBindNumberOutcome(outcome.error());
}

void OutboundBotClient::createInstanceBindNumberAsync(const CreateInstanceBindNumberRequest& request, const CreateInstanceBindNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstanceBindNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateInstanceBindNumberOutcomeCallable OutboundBotClient::createInstanceBindNumberCallable(const CreateInstanceBindNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceBindNumberOutcome()>>(
			[this, request]()
			{
			return this->createInstanceBindNumber(request);
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

OutboundBotClient::CreateJobDataParsingTaskOutcome OutboundBotClient::createJobDataParsingTask(const CreateJobDataParsingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobDataParsingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobDataParsingTaskOutcome(CreateJobDataParsingTaskResult(outcome.result()));
	else
		return CreateJobDataParsingTaskOutcome(outcome.error());
}

void OutboundBotClient::createJobDataParsingTaskAsync(const CreateJobDataParsingTaskRequest& request, const CreateJobDataParsingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobDataParsingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateJobDataParsingTaskOutcomeCallable OutboundBotClient::createJobDataParsingTaskCallable(const CreateJobDataParsingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobDataParsingTaskOutcome()>>(
			[this, request]()
			{
			return this->createJobDataParsingTask(request);
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

OutboundBotClient::CreateJobGroupExportTaskOutcome OutboundBotClient::createJobGroupExportTask(const CreateJobGroupExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobGroupExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobGroupExportTaskOutcome(CreateJobGroupExportTaskResult(outcome.result()));
	else
		return CreateJobGroupExportTaskOutcome(outcome.error());
}

void OutboundBotClient::createJobGroupExportTaskAsync(const CreateJobGroupExportTaskRequest& request, const CreateJobGroupExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJobGroupExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateJobGroupExportTaskOutcomeCallable OutboundBotClient::createJobGroupExportTaskCallable(const CreateJobGroupExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobGroupExportTaskOutcome()>>(
			[this, request]()
			{
			return this->createJobGroupExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateNumberDistrictInfoDownloadUrlOutcome OutboundBotClient::createNumberDistrictInfoDownloadUrl(const CreateNumberDistrictInfoDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNumberDistrictInfoDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNumberDistrictInfoDownloadUrlOutcome(CreateNumberDistrictInfoDownloadUrlResult(outcome.result()));
	else
		return CreateNumberDistrictInfoDownloadUrlOutcome(outcome.error());
}

void OutboundBotClient::createNumberDistrictInfoDownloadUrlAsync(const CreateNumberDistrictInfoDownloadUrlRequest& request, const CreateNumberDistrictInfoDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNumberDistrictInfoDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateNumberDistrictInfoDownloadUrlOutcomeCallable OutboundBotClient::createNumberDistrictInfoDownloadUrlCallable(const CreateNumberDistrictInfoDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNumberDistrictInfoDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->createNumberDistrictInfoDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::CreateNumberDistrictInfoParsingTaskOutcome OutboundBotClient::createNumberDistrictInfoParsingTask(const CreateNumberDistrictInfoParsingTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNumberDistrictInfoParsingTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNumberDistrictInfoParsingTaskOutcome(CreateNumberDistrictInfoParsingTaskResult(outcome.result()));
	else
		return CreateNumberDistrictInfoParsingTaskOutcome(outcome.error());
}

void OutboundBotClient::createNumberDistrictInfoParsingTaskAsync(const CreateNumberDistrictInfoParsingTaskRequest& request, const CreateNumberDistrictInfoParsingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNumberDistrictInfoParsingTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateNumberDistrictInfoParsingTaskOutcomeCallable OutboundBotClient::createNumberDistrictInfoParsingTaskCallable(const CreateNumberDistrictInfoParsingTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNumberDistrictInfoParsingTaskOutcome()>>(
			[this, request]()
			{
			return this->createNumberDistrictInfoParsingTask(request);
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

OutboundBotClient::CreateTaskExportTaskOutcome OutboundBotClient::createTaskExportTask(const CreateTaskExportTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTaskExportTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTaskExportTaskOutcome(CreateTaskExportTaskResult(outcome.result()));
	else
		return CreateTaskExportTaskOutcome(outcome.error());
}

void OutboundBotClient::createTaskExportTaskAsync(const CreateTaskExportTaskRequest& request, const CreateTaskExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTaskExportTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::CreateTaskExportTaskOutcomeCallable OutboundBotClient::createTaskExportTaskCallable(const CreateTaskExportTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTaskExportTaskOutcome()>>(
			[this, request]()
			{
			return this->createTaskExportTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteAllNumberDistrictInfoOutcome OutboundBotClient::deleteAllNumberDistrictInfo(const DeleteAllNumberDistrictInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAllNumberDistrictInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAllNumberDistrictInfoOutcome(DeleteAllNumberDistrictInfoResult(outcome.result()));
	else
		return DeleteAllNumberDistrictInfoOutcome(outcome.error());
}

void OutboundBotClient::deleteAllNumberDistrictInfoAsync(const DeleteAllNumberDistrictInfoRequest& request, const DeleteAllNumberDistrictInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAllNumberDistrictInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteAllNumberDistrictInfoOutcomeCallable OutboundBotClient::deleteAllNumberDistrictInfoCallable(const DeleteAllNumberDistrictInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAllNumberDistrictInfoOutcome()>>(
			[this, request]()
			{
			return this->deleteAllNumberDistrictInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteContactBlockListOutcome OutboundBotClient::deleteContactBlockList(const DeleteContactBlockListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactBlockListOutcome(DeleteContactBlockListResult(outcome.result()));
	else
		return DeleteContactBlockListOutcome(outcome.error());
}

void OutboundBotClient::deleteContactBlockListAsync(const DeleteContactBlockListRequest& request, const DeleteContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteContactBlockListOutcomeCallable OutboundBotClient::deleteContactBlockListCallable(const DeleteContactBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactBlockListOutcome()>>(
			[this, request]()
			{
			return this->deleteContactBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DeleteContactWhiteListOutcome OutboundBotClient::deleteContactWhiteList(const DeleteContactWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteContactWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteContactWhiteListOutcome(DeleteContactWhiteListResult(outcome.result()));
	else
		return DeleteContactWhiteListOutcome(outcome.error());
}

void OutboundBotClient::deleteContactWhiteListAsync(const DeleteContactWhiteListRequest& request, const DeleteContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteContactWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteContactWhiteListOutcomeCallable OutboundBotClient::deleteContactWhiteListCallable(const DeleteContactWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteContactWhiteListOutcome()>>(
			[this, request]()
			{
			return this->deleteContactWhiteList(request);
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

OutboundBotClient::DeleteScriptRecordingOutcome OutboundBotClient::deleteScriptRecording(const DeleteScriptRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteScriptRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteScriptRecordingOutcome(DeleteScriptRecordingResult(outcome.result()));
	else
		return DeleteScriptRecordingOutcome(outcome.error());
}

void OutboundBotClient::deleteScriptRecordingAsync(const DeleteScriptRecordingRequest& request, const DeleteScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteScriptRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DeleteScriptRecordingOutcomeCallable OutboundBotClient::deleteScriptRecordingCallable(const DeleteScriptRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteScriptRecordingOutcome()>>(
			[this, request]()
			{
			return this->deleteScriptRecording(request);
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

OutboundBotClient::DescribeDialogueNodeStatisticsOutcome OutboundBotClient::describeDialogueNodeStatistics(const DescribeDialogueNodeStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDialogueNodeStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDialogueNodeStatisticsOutcome(DescribeDialogueNodeStatisticsResult(outcome.result()));
	else
		return DescribeDialogueNodeStatisticsOutcome(outcome.error());
}

void OutboundBotClient::describeDialogueNodeStatisticsAsync(const DescribeDialogueNodeStatisticsRequest& request, const DescribeDialogueNodeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDialogueNodeStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeDialogueNodeStatisticsOutcomeCallable OutboundBotClient::describeDialogueNodeStatisticsCallable(const DescribeDialogueNodeStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDialogueNodeStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeDialogueNodeStatistics(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeDsReportsOutcome OutboundBotClient::describeDsReports(const DescribeDsReportsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDsReportsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDsReportsOutcome(DescribeDsReportsResult(outcome.result()));
	else
		return DescribeDsReportsOutcome(outcome.error());
}

void OutboundBotClient::describeDsReportsAsync(const DescribeDsReportsRequest& request, const DescribeDsReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDsReports(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeDsReportsOutcomeCallable OutboundBotClient::describeDsReportsCallable(const DescribeDsReportsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDsReportsOutcome()>>(
			[this, request]()
			{
			return this->describeDsReports(request);
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

OutboundBotClient::DescribeGroupExecutingInfoOutcome OutboundBotClient::describeGroupExecutingInfo(const DescribeGroupExecutingInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGroupExecutingInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGroupExecutingInfoOutcome(DescribeGroupExecutingInfoResult(outcome.result()));
	else
		return DescribeGroupExecutingInfoOutcome(outcome.error());
}

void OutboundBotClient::describeGroupExecutingInfoAsync(const DescribeGroupExecutingInfoRequest& request, const DescribeGroupExecutingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGroupExecutingInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeGroupExecutingInfoOutcomeCallable OutboundBotClient::describeGroupExecutingInfoCallable(const DescribeGroupExecutingInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGroupExecutingInfoOutcome()>>(
			[this, request]()
			{
			return this->describeGroupExecutingInfo(request);
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

OutboundBotClient::DescribeIntentStatisticsOutcome OutboundBotClient::describeIntentStatistics(const DescribeIntentStatisticsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeIntentStatisticsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeIntentStatisticsOutcome(DescribeIntentStatisticsResult(outcome.result()));
	else
		return DescribeIntentStatisticsOutcome(outcome.error());
}

void OutboundBotClient::describeIntentStatisticsAsync(const DescribeIntentStatisticsRequest& request, const DescribeIntentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeIntentStatistics(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeIntentStatisticsOutcomeCallable OutboundBotClient::describeIntentStatisticsCallable(const DescribeIntentStatisticsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeIntentStatisticsOutcome()>>(
			[this, request]()
			{
			return this->describeIntentStatistics(request);
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

OutboundBotClient::DescribeJobDataParsingTaskProgressOutcome OutboundBotClient::describeJobDataParsingTaskProgress(const DescribeJobDataParsingTaskProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobDataParsingTaskProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobDataParsingTaskProgressOutcome(DescribeJobDataParsingTaskProgressResult(outcome.result()));
	else
		return DescribeJobDataParsingTaskProgressOutcome(outcome.error());
}

void OutboundBotClient::describeJobDataParsingTaskProgressAsync(const DescribeJobDataParsingTaskProgressRequest& request, const DescribeJobDataParsingTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobDataParsingTaskProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeJobDataParsingTaskProgressOutcomeCallable OutboundBotClient::describeJobDataParsingTaskProgressCallable(const DescribeJobDataParsingTaskProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobDataParsingTaskProgressOutcome()>>(
			[this, request]()
			{
			return this->describeJobDataParsingTaskProgress(request);
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

OutboundBotClient::DescribeJobGroupExportTaskProgressOutcome OutboundBotClient::describeJobGroupExportTaskProgress(const DescribeJobGroupExportTaskProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeJobGroupExportTaskProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeJobGroupExportTaskProgressOutcome(DescribeJobGroupExportTaskProgressResult(outcome.result()));
	else
		return DescribeJobGroupExportTaskProgressOutcome(outcome.error());
}

void OutboundBotClient::describeJobGroupExportTaskProgressAsync(const DescribeJobGroupExportTaskProgressRequest& request, const DescribeJobGroupExportTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeJobGroupExportTaskProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeJobGroupExportTaskProgressOutcomeCallable OutboundBotClient::describeJobGroupExportTaskProgressCallable(const DescribeJobGroupExportTaskProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeJobGroupExportTaskProgressOutcome()>>(
			[this, request]()
			{
			return this->describeJobGroupExportTaskProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::DescribeNumberDistrictInfoStatusOutcome OutboundBotClient::describeNumberDistrictInfoStatus(const DescribeNumberDistrictInfoStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNumberDistrictInfoStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNumberDistrictInfoStatusOutcome(DescribeNumberDistrictInfoStatusResult(outcome.result()));
	else
		return DescribeNumberDistrictInfoStatusOutcome(outcome.error());
}

void OutboundBotClient::describeNumberDistrictInfoStatusAsync(const DescribeNumberDistrictInfoStatusRequest& request, const DescribeNumberDistrictInfoStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNumberDistrictInfoStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeNumberDistrictInfoStatusOutcomeCallable OutboundBotClient::describeNumberDistrictInfoStatusCallable(const DescribeNumberDistrictInfoStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNumberDistrictInfoStatusOutcome()>>(
			[this, request]()
			{
			return this->describeNumberDistrictInfoStatus(request);
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

OutboundBotClient::DescribeTTSDemoOutcome OutboundBotClient::describeTTSDemo(const DescribeTTSDemoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTTSDemoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTTSDemoOutcome(DescribeTTSDemoResult(outcome.result()));
	else
		return DescribeTTSDemoOutcome(outcome.error());
}

void OutboundBotClient::describeTTSDemoAsync(const DescribeTTSDemoRequest& request, const DescribeTTSDemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTTSDemo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeTTSDemoOutcomeCallable OutboundBotClient::describeTTSDemoCallable(const DescribeTTSDemoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTTSDemoOutcome()>>(
			[this, request]()
			{
			return this->describeTTSDemo(request);
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

OutboundBotClient::DescribeTenantBindNumberOutcome OutboundBotClient::describeTenantBindNumber(const DescribeTenantBindNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeTenantBindNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeTenantBindNumberOutcome(DescribeTenantBindNumberResult(outcome.result()));
	else
		return DescribeTenantBindNumberOutcome(outcome.error());
}

void OutboundBotClient::describeTenantBindNumberAsync(const DescribeTenantBindNumberRequest& request, const DescribeTenantBindNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTenantBindNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DescribeTenantBindNumberOutcomeCallable OutboundBotClient::describeTenantBindNumberCallable(const DescribeTenantBindNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTenantBindNumberOutcome()>>(
			[this, request]()
			{
			return this->describeTenantBindNumber(request);
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

OutboundBotClient::DismissNumberDistrictInfoParsingResultOutcome OutboundBotClient::dismissNumberDistrictInfoParsingResult(const DismissNumberDistrictInfoParsingResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DismissNumberDistrictInfoParsingResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DismissNumberDistrictInfoParsingResultOutcome(DismissNumberDistrictInfoParsingResultResult(outcome.result()));
	else
		return DismissNumberDistrictInfoParsingResultOutcome(outcome.error());
}

void OutboundBotClient::dismissNumberDistrictInfoParsingResultAsync(const DismissNumberDistrictInfoParsingResultRequest& request, const DismissNumberDistrictInfoParsingResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dismissNumberDistrictInfoParsingResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DismissNumberDistrictInfoParsingResultOutcomeCallable OutboundBotClient::dismissNumberDistrictInfoParsingResultCallable(const DismissNumberDistrictInfoParsingResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DismissNumberDistrictInfoParsingResultOutcome()>>(
			[this, request]()
			{
			return this->dismissNumberDistrictInfoParsingResult(request);
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

OutboundBotClient::DownloadScriptRecordingOutcome OutboundBotClient::downloadScriptRecording(const DownloadScriptRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadScriptRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadScriptRecordingOutcome(DownloadScriptRecordingResult(outcome.result()));
	else
		return DownloadScriptRecordingOutcome(outcome.error());
}

void OutboundBotClient::downloadScriptRecordingAsync(const DownloadScriptRecordingRequest& request, const DownloadScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadScriptRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::DownloadScriptRecordingOutcomeCallable OutboundBotClient::downloadScriptRecordingCallable(const DownloadScriptRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadScriptRecordingOutcome()>>(
			[this, request]()
			{
			return this->downloadScriptRecording(request);
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

OutboundBotClient::GenerateUploadUrlOutcome OutboundBotClient::generateUploadUrl(const GenerateUploadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateUploadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateUploadUrlOutcome(GenerateUploadUrlResult(outcome.result()));
	else
		return GenerateUploadUrlOutcome(outcome.error());
}

void OutboundBotClient::generateUploadUrlAsync(const GenerateUploadUrlRequest& request, const GenerateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUploadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GenerateUploadUrlOutcomeCallable OutboundBotClient::generateUploadUrlCallable(const GenerateUploadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUploadUrlOutcome()>>(
			[this, request]()
			{
			return this->generateUploadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetAfterAnswerDelayPlaybackOutcome OutboundBotClient::getAfterAnswerDelayPlayback(const GetAfterAnswerDelayPlaybackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAfterAnswerDelayPlaybackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAfterAnswerDelayPlaybackOutcome(GetAfterAnswerDelayPlaybackResult(outcome.result()));
	else
		return GetAfterAnswerDelayPlaybackOutcome(outcome.error());
}

void OutboundBotClient::getAfterAnswerDelayPlaybackAsync(const GetAfterAnswerDelayPlaybackRequest& request, const GetAfterAnswerDelayPlaybackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAfterAnswerDelayPlayback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetAfterAnswerDelayPlaybackOutcomeCallable OutboundBotClient::getAfterAnswerDelayPlaybackCallable(const GetAfterAnswerDelayPlaybackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAfterAnswerDelayPlaybackOutcome()>>(
			[this, request]()
			{
			return this->getAfterAnswerDelayPlayback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetAsrServerInfoOutcome OutboundBotClient::getAsrServerInfo(const GetAsrServerInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsrServerInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsrServerInfoOutcome(GetAsrServerInfoResult(outcome.result()));
	else
		return GetAsrServerInfoOutcome(outcome.error());
}

void OutboundBotClient::getAsrServerInfoAsync(const GetAsrServerInfoRequest& request, const GetAsrServerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsrServerInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetAsrServerInfoOutcomeCallable OutboundBotClient::getAsrServerInfoCallable(const GetAsrServerInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsrServerInfoOutcome()>>(
			[this, request]()
			{
			return this->getAsrServerInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetBaseStrategyPeriodOutcome OutboundBotClient::getBaseStrategyPeriod(const GetBaseStrategyPeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetBaseStrategyPeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetBaseStrategyPeriodOutcome(GetBaseStrategyPeriodResult(outcome.result()));
	else
		return GetBaseStrategyPeriodOutcome(outcome.error());
}

void OutboundBotClient::getBaseStrategyPeriodAsync(const GetBaseStrategyPeriodRequest& request, const GetBaseStrategyPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getBaseStrategyPeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetBaseStrategyPeriodOutcomeCallable OutboundBotClient::getBaseStrategyPeriodCallable(const GetBaseStrategyPeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetBaseStrategyPeriodOutcome()>>(
			[this, request]()
			{
			return this->getBaseStrategyPeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetConcurrentConversationQuotaOutcome OutboundBotClient::getConcurrentConversationQuota(const GetConcurrentConversationQuotaRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConcurrentConversationQuotaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConcurrentConversationQuotaOutcome(GetConcurrentConversationQuotaResult(outcome.result()));
	else
		return GetConcurrentConversationQuotaOutcome(outcome.error());
}

void OutboundBotClient::getConcurrentConversationQuotaAsync(const GetConcurrentConversationQuotaRequest& request, const GetConcurrentConversationQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConcurrentConversationQuota(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetConcurrentConversationQuotaOutcomeCallable OutboundBotClient::getConcurrentConversationQuotaCallable(const GetConcurrentConversationQuotaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConcurrentConversationQuotaOutcome()>>(
			[this, request]()
			{
			return this->getConcurrentConversationQuota(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetContactBlockListOutcome OutboundBotClient::getContactBlockList(const GetContactBlockListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContactBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContactBlockListOutcome(GetContactBlockListResult(outcome.result()));
	else
		return GetContactBlockListOutcome(outcome.error());
}

void OutboundBotClient::getContactBlockListAsync(const GetContactBlockListRequest& request, const GetContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContactBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetContactBlockListOutcomeCallable OutboundBotClient::getContactBlockListCallable(const GetContactBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContactBlockListOutcome()>>(
			[this, request]()
			{
			return this->getContactBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetContactWhiteListOutcome OutboundBotClient::getContactWhiteList(const GetContactWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetContactWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetContactWhiteListOutcome(GetContactWhiteListResult(outcome.result()));
	else
		return GetContactWhiteListOutcome(outcome.error());
}

void OutboundBotClient::getContactWhiteListAsync(const GetContactWhiteListRequest& request, const GetContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getContactWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetContactWhiteListOutcomeCallable OutboundBotClient::getContactWhiteListCallable(const GetContactWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetContactWhiteListOutcome()>>(
			[this, request]()
			{
			return this->getContactWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetCurrentConcurrencyOutcome OutboundBotClient::getCurrentConcurrency(const GetCurrentConcurrencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCurrentConcurrencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCurrentConcurrencyOutcome(GetCurrentConcurrencyResult(outcome.result()));
	else
		return GetCurrentConcurrencyOutcome(outcome.error());
}

void OutboundBotClient::getCurrentConcurrencyAsync(const GetCurrentConcurrencyRequest& request, const GetCurrentConcurrencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCurrentConcurrency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetCurrentConcurrencyOutcomeCallable OutboundBotClient::getCurrentConcurrencyCallable(const GetCurrentConcurrencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCurrentConcurrencyOutcome()>>(
			[this, request]()
			{
			return this->getCurrentConcurrency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetEffectiveDaysOutcome OutboundBotClient::getEffectiveDays(const GetEffectiveDaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEffectiveDaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEffectiveDaysOutcome(GetEffectiveDaysResult(outcome.result()));
	else
		return GetEffectiveDaysOutcome(outcome.error());
}

void OutboundBotClient::getEffectiveDaysAsync(const GetEffectiveDaysRequest& request, const GetEffectiveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEffectiveDays(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetEffectiveDaysOutcomeCallable OutboundBotClient::getEffectiveDaysCallable(const GetEffectiveDaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEffectiveDaysOutcome()>>(
			[this, request]()
			{
			return this->getEffectiveDays(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetEmptyNumberNoMoreCallsInfoOutcome OutboundBotClient::getEmptyNumberNoMoreCallsInfo(const GetEmptyNumberNoMoreCallsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEmptyNumberNoMoreCallsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEmptyNumberNoMoreCallsInfoOutcome(GetEmptyNumberNoMoreCallsInfoResult(outcome.result()));
	else
		return GetEmptyNumberNoMoreCallsInfoOutcome(outcome.error());
}

void OutboundBotClient::getEmptyNumberNoMoreCallsInfoAsync(const GetEmptyNumberNoMoreCallsInfoRequest& request, const GetEmptyNumberNoMoreCallsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEmptyNumberNoMoreCallsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetEmptyNumberNoMoreCallsInfoOutcomeCallable OutboundBotClient::getEmptyNumberNoMoreCallsInfoCallable(const GetEmptyNumberNoMoreCallsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEmptyNumberNoMoreCallsInfoOutcome()>>(
			[this, request]()
			{
			return this->getEmptyNumberNoMoreCallsInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetMaxAttemptsPerDayOutcome OutboundBotClient::getMaxAttemptsPerDay(const GetMaxAttemptsPerDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMaxAttemptsPerDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMaxAttemptsPerDayOutcome(GetMaxAttemptsPerDayResult(outcome.result()));
	else
		return GetMaxAttemptsPerDayOutcome(outcome.error());
}

void OutboundBotClient::getMaxAttemptsPerDayAsync(const GetMaxAttemptsPerDayRequest& request, const GetMaxAttemptsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMaxAttemptsPerDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetMaxAttemptsPerDayOutcomeCallable OutboundBotClient::getMaxAttemptsPerDayCallable(const GetMaxAttemptsPerDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMaxAttemptsPerDayOutcome()>>(
			[this, request]()
			{
			return this->getMaxAttemptsPerDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetNumberDistrictInfoTemplateDownloadUrlOutcome OutboundBotClient::getNumberDistrictInfoTemplateDownloadUrl(const GetNumberDistrictInfoTemplateDownloadUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetNumberDistrictInfoTemplateDownloadUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetNumberDistrictInfoTemplateDownloadUrlOutcome(GetNumberDistrictInfoTemplateDownloadUrlResult(outcome.result()));
	else
		return GetNumberDistrictInfoTemplateDownloadUrlOutcome(outcome.error());
}

void OutboundBotClient::getNumberDistrictInfoTemplateDownloadUrlAsync(const GetNumberDistrictInfoTemplateDownloadUrlRequest& request, const GetNumberDistrictInfoTemplateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getNumberDistrictInfoTemplateDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetNumberDistrictInfoTemplateDownloadUrlOutcomeCallable OutboundBotClient::getNumberDistrictInfoTemplateDownloadUrlCallable(const GetNumberDistrictInfoTemplateDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetNumberDistrictInfoTemplateDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->getNumberDistrictInfoTemplateDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetSummaryInfoOutcome OutboundBotClient::getSummaryInfo(const GetSummaryInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSummaryInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSummaryInfoOutcome(GetSummaryInfoResult(outcome.result()));
	else
		return GetSummaryInfoOutcome(outcome.error());
}

void OutboundBotClient::getSummaryInfoAsync(const GetSummaryInfoRequest& request, const GetSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSummaryInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetSummaryInfoOutcomeCallable OutboundBotClient::getSummaryInfoCallable(const GetSummaryInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSummaryInfoOutcome()>>(
			[this, request]()
			{
			return this->getSummaryInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetTaskByUuidOutcome OutboundBotClient::getTaskByUuid(const GetTaskByUuidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskByUuidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskByUuidOutcome(GetTaskByUuidResult(outcome.result()));
	else
		return GetTaskByUuidOutcome(outcome.error());
}

void OutboundBotClient::getTaskByUuidAsync(const GetTaskByUuidRequest& request, const GetTaskByUuidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskByUuid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetTaskByUuidOutcomeCallable OutboundBotClient::getTaskByUuidCallable(const GetTaskByUuidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskByUuidOutcome()>>(
			[this, request]()
			{
			return this->getTaskByUuid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::GetVersionOutcome OutboundBotClient::getVersion(const GetVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetVersionOutcome(GetVersionResult(outcome.result()));
	else
		return GetVersionOutcome(outcome.error());
}

void OutboundBotClient::getVersionAsync(const GetVersionRequest& request, const GetVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::GetVersionOutcomeCallable OutboundBotClient::getVersionCallable(const GetVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetVersionOutcome()>>(
			[this, request]()
			{
			return this->getVersion(request);
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

OutboundBotClient::InflightTaskTimeoutOutcome OutboundBotClient::inflightTaskTimeout(const InflightTaskTimeoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InflightTaskTimeoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InflightTaskTimeoutOutcome(InflightTaskTimeoutResult(outcome.result()));
	else
		return InflightTaskTimeoutOutcome(outcome.error());
}

void OutboundBotClient::inflightTaskTimeoutAsync(const InflightTaskTimeoutRequest& request, const InflightTaskTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, inflightTaskTimeout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::InflightTaskTimeoutOutcomeCallable OutboundBotClient::inflightTaskTimeoutCallable(const InflightTaskTimeoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InflightTaskTimeoutOutcome()>>(
			[this, request]()
			{
			return this->inflightTaskTimeout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListAllTenantBindNumberBindingOutcome OutboundBotClient::listAllTenantBindNumberBinding(const ListAllTenantBindNumberBindingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAllTenantBindNumberBindingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAllTenantBindNumberBindingOutcome(ListAllTenantBindNumberBindingResult(outcome.result()));
	else
		return ListAllTenantBindNumberBindingOutcome(outcome.error());
}

void OutboundBotClient::listAllTenantBindNumberBindingAsync(const ListAllTenantBindNumberBindingRequest& request, const ListAllTenantBindNumberBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAllTenantBindNumberBinding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListAllTenantBindNumberBindingOutcomeCallable OutboundBotClient::listAllTenantBindNumberBindingCallable(const ListAllTenantBindNumberBindingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAllTenantBindNumberBindingOutcome()>>(
			[this, request]()
			{
			return this->listAllTenantBindNumberBinding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListChatbotInstancesOutcome OutboundBotClient::listChatbotInstances(const ListChatbotInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListChatbotInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListChatbotInstancesOutcome(ListChatbotInstancesResult(outcome.result()));
	else
		return ListChatbotInstancesOutcome(outcome.error());
}

void OutboundBotClient::listChatbotInstancesAsync(const ListChatbotInstancesRequest& request, const ListChatbotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChatbotInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListChatbotInstancesOutcomeCallable OutboundBotClient::listChatbotInstancesCallable(const ListChatbotInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChatbotInstancesOutcome()>>(
			[this, request]()
			{
			return this->listChatbotInstances(request);
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

OutboundBotClient::ListDownloadTasksOutcome OutboundBotClient::listDownloadTasks(const ListDownloadTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListDownloadTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListDownloadTasksOutcome(ListDownloadTasksResult(outcome.result()));
	else
		return ListDownloadTasksOutcome(outcome.error());
}

void OutboundBotClient::listDownloadTasksAsync(const ListDownloadTasksRequest& request, const ListDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDownloadTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListDownloadTasksOutcomeCallable OutboundBotClient::listDownloadTasksCallable(const ListDownloadTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDownloadTasksOutcome()>>(
			[this, request]()
			{
			return this->listDownloadTasks(request);
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

OutboundBotClient::ListJobGroupsAsyncOutcome OutboundBotClient::listJobGroupsAsync(const ListJobGroupsAsyncRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobGroupsAsyncOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobGroupsAsyncOutcome(ListJobGroupsAsyncResult(outcome.result()));
	else
		return ListJobGroupsAsyncOutcome(outcome.error());
}

void OutboundBotClient::listJobGroupsAsyncAsync(const ListJobGroupsAsyncRequest& request, const ListJobGroupsAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobGroupsAsync(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListJobGroupsAsyncOutcomeCallable OutboundBotClient::listJobGroupsAsyncCallable(const ListJobGroupsAsyncRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobGroupsAsyncOutcome()>>(
			[this, request]()
			{
			return this->listJobGroupsAsync(request);
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

OutboundBotClient::ListResourceTagsOutcome OutboundBotClient::listResourceTags(const ListResourceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTagsOutcome(ListResourceTagsResult(outcome.result()));
	else
		return ListResourceTagsOutcome(outcome.error());
}

void OutboundBotClient::listResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListResourceTagsOutcomeCallable OutboundBotClient::listResourceTagsCallable(const ListResourceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTagsOutcome()>>(
			[this, request]()
			{
			return this->listResourceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::ListSchedulerInstancesOutcome OutboundBotClient::listSchedulerInstances(const ListSchedulerInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSchedulerInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSchedulerInstancesOutcome(ListSchedulerInstancesResult(outcome.result()));
	else
		return ListSchedulerInstancesOutcome(outcome.error());
}

void OutboundBotClient::listSchedulerInstancesAsync(const ListSchedulerInstancesRequest& request, const ListSchedulerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSchedulerInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListSchedulerInstancesOutcomeCallable OutboundBotClient::listSchedulerInstancesCallable(const ListSchedulerInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSchedulerInstancesOutcome()>>(
			[this, request]()
			{
			return this->listSchedulerInstances(request);
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

OutboundBotClient::ListScriptRecordingOutcome OutboundBotClient::listScriptRecording(const ListScriptRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListScriptRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListScriptRecordingOutcome(ListScriptRecordingResult(outcome.result()));
	else
		return ListScriptRecordingOutcome(outcome.error());
}

void OutboundBotClient::listScriptRecordingAsync(const ListScriptRecordingRequest& request, const ListScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listScriptRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListScriptRecordingOutcomeCallable OutboundBotClient::listScriptRecordingCallable(const ListScriptRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListScriptRecordingOutcome()>>(
			[this, request]()
			{
			return this->listScriptRecording(request);
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

OutboundBotClient::ListTagResourcesOutcome OutboundBotClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void OutboundBotClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ListTagResourcesOutcomeCallable OutboundBotClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
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

OutboundBotClient::ModifyEmptyNumberNoMoreCallsInfoOutcome OutboundBotClient::modifyEmptyNumberNoMoreCallsInfo(const ModifyEmptyNumberNoMoreCallsInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEmptyNumberNoMoreCallsInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEmptyNumberNoMoreCallsInfoOutcome(ModifyEmptyNumberNoMoreCallsInfoResult(outcome.result()));
	else
		return ModifyEmptyNumberNoMoreCallsInfoOutcome(outcome.error());
}

void OutboundBotClient::modifyEmptyNumberNoMoreCallsInfoAsync(const ModifyEmptyNumberNoMoreCallsInfoRequest& request, const ModifyEmptyNumberNoMoreCallsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEmptyNumberNoMoreCallsInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::ModifyEmptyNumberNoMoreCallsInfoOutcomeCallable OutboundBotClient::modifyEmptyNumberNoMoreCallsInfoCallable(const ModifyEmptyNumberNoMoreCallsInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEmptyNumberNoMoreCallsInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyEmptyNumberNoMoreCallsInfo(request);
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

OutboundBotClient::QueryJobsWithResultOutcome OutboundBotClient::queryJobsWithResult(const QueryJobsWithResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryJobsWithResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryJobsWithResultOutcome(QueryJobsWithResultResult(outcome.result()));
	else
		return QueryJobsWithResultOutcome(outcome.error());
}

void OutboundBotClient::queryJobsWithResultAsync(const QueryJobsWithResultRequest& request, const QueryJobsWithResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryJobsWithResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::QueryJobsWithResultOutcomeCallable OutboundBotClient::queryJobsWithResultCallable(const QueryJobsWithResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryJobsWithResultOutcome()>>(
			[this, request]()
			{
			return this->queryJobsWithResult(request);
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

OutboundBotClient::SaveAfterAnswerDelayPlaybackOutcome OutboundBotClient::saveAfterAnswerDelayPlayback(const SaveAfterAnswerDelayPlaybackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveAfterAnswerDelayPlaybackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveAfterAnswerDelayPlaybackOutcome(SaveAfterAnswerDelayPlaybackResult(outcome.result()));
	else
		return SaveAfterAnswerDelayPlaybackOutcome(outcome.error());
}

void OutboundBotClient::saveAfterAnswerDelayPlaybackAsync(const SaveAfterAnswerDelayPlaybackRequest& request, const SaveAfterAnswerDelayPlaybackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveAfterAnswerDelayPlayback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveAfterAnswerDelayPlaybackOutcomeCallable OutboundBotClient::saveAfterAnswerDelayPlaybackCallable(const SaveAfterAnswerDelayPlaybackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveAfterAnswerDelayPlaybackOutcome()>>(
			[this, request]()
			{
			return this->saveAfterAnswerDelayPlayback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SaveBaseStrategyPeriodOutcome OutboundBotClient::saveBaseStrategyPeriod(const SaveBaseStrategyPeriodRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveBaseStrategyPeriodOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveBaseStrategyPeriodOutcome(SaveBaseStrategyPeriodResult(outcome.result()));
	else
		return SaveBaseStrategyPeriodOutcome(outcome.error());
}

void OutboundBotClient::saveBaseStrategyPeriodAsync(const SaveBaseStrategyPeriodRequest& request, const SaveBaseStrategyPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveBaseStrategyPeriod(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveBaseStrategyPeriodOutcomeCallable OutboundBotClient::saveBaseStrategyPeriodCallable(const SaveBaseStrategyPeriodRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveBaseStrategyPeriodOutcome()>>(
			[this, request]()
			{
			return this->saveBaseStrategyPeriod(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SaveContactBlockListOutcome OutboundBotClient::saveContactBlockList(const SaveContactBlockListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveContactBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveContactBlockListOutcome(SaveContactBlockListResult(outcome.result()));
	else
		return SaveContactBlockListOutcome(outcome.error());
}

void OutboundBotClient::saveContactBlockListAsync(const SaveContactBlockListRequest& request, const SaveContactBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveContactBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveContactBlockListOutcomeCallable OutboundBotClient::saveContactBlockListCallable(const SaveContactBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveContactBlockListOutcome()>>(
			[this, request]()
			{
			return this->saveContactBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SaveContactWhiteListOutcome OutboundBotClient::saveContactWhiteList(const SaveContactWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveContactWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveContactWhiteListOutcome(SaveContactWhiteListResult(outcome.result()));
	else
		return SaveContactWhiteListOutcome(outcome.error());
}

void OutboundBotClient::saveContactWhiteListAsync(const SaveContactWhiteListRequest& request, const SaveContactWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveContactWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveContactWhiteListOutcomeCallable OutboundBotClient::saveContactWhiteListCallable(const SaveContactWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveContactWhiteListOutcome()>>(
			[this, request]()
			{
			return this->saveContactWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SaveEffectiveDaysOutcome OutboundBotClient::saveEffectiveDays(const SaveEffectiveDaysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveEffectiveDaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveEffectiveDaysOutcome(SaveEffectiveDaysResult(outcome.result()));
	else
		return SaveEffectiveDaysOutcome(outcome.error());
}

void OutboundBotClient::saveEffectiveDaysAsync(const SaveEffectiveDaysRequest& request, const SaveEffectiveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveEffectiveDays(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveEffectiveDaysOutcomeCallable OutboundBotClient::saveEffectiveDaysCallable(const SaveEffectiveDaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveEffectiveDaysOutcome()>>(
			[this, request]()
			{
			return this->saveEffectiveDays(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SaveMaxAttemptsPerDayOutcome OutboundBotClient::saveMaxAttemptsPerDay(const SaveMaxAttemptsPerDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveMaxAttemptsPerDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveMaxAttemptsPerDayOutcome(SaveMaxAttemptsPerDayResult(outcome.result()));
	else
		return SaveMaxAttemptsPerDayOutcome(outcome.error());
}

void OutboundBotClient::saveMaxAttemptsPerDayAsync(const SaveMaxAttemptsPerDayRequest& request, const SaveMaxAttemptsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveMaxAttemptsPerDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SaveMaxAttemptsPerDayOutcomeCallable OutboundBotClient::saveMaxAttemptsPerDayCallable(const SaveMaxAttemptsPerDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveMaxAttemptsPerDayOutcome()>>(
			[this, request]()
			{
			return this->saveMaxAttemptsPerDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SearchTaskOutcome OutboundBotClient::searchTask(const SearchTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchTaskOutcome(SearchTaskResult(outcome.result()));
	else
		return SearchTaskOutcome(outcome.error());
}

void OutboundBotClient::searchTaskAsync(const SearchTaskRequest& request, const SearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, searchTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SearchTaskOutcomeCallable OutboundBotClient::searchTaskCallable(const SearchTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchTaskOutcome()>>(
			[this, request]()
			{
			return this->searchTask(request);
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

OutboundBotClient::SuspendCallOutcome OutboundBotClient::suspendCall(const SuspendCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendCallOutcome(SuspendCallResult(outcome.result()));
	else
		return SuspendCallOutcome(outcome.error());
}

void OutboundBotClient::suspendCallAsync(const SuspendCallRequest& request, const SuspendCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SuspendCallOutcomeCallable OutboundBotClient::suspendCallCallable(const SuspendCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendCallOutcome()>>(
			[this, request]()
			{
			return this->suspendCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::SuspendCallWithFileOutcome OutboundBotClient::suspendCallWithFile(const SuspendCallWithFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SuspendCallWithFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SuspendCallWithFileOutcome(SuspendCallWithFileResult(outcome.result()));
	else
		return SuspendCallWithFileOutcome(outcome.error());
}

void OutboundBotClient::suspendCallWithFileAsync(const SuspendCallWithFileRequest& request, const SuspendCallWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, suspendCallWithFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::SuspendCallWithFileOutcomeCallable OutboundBotClient::suspendCallWithFileCallable(const SuspendCallWithFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SuspendCallWithFileOutcome()>>(
			[this, request]()
			{
			return this->suspendCallWithFile(request);
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

OutboundBotClient::TagResourcesOutcome OutboundBotClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void OutboundBotClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::TagResourcesOutcomeCallable OutboundBotClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::TaskPreparingOutcome OutboundBotClient::taskPreparing(const TaskPreparingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TaskPreparingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TaskPreparingOutcome(TaskPreparingResult(outcome.result()));
	else
		return TaskPreparingOutcome(outcome.error());
}

void OutboundBotClient::taskPreparingAsync(const TaskPreparingRequest& request, const TaskPreparingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, taskPreparing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::TaskPreparingOutcomeCallable OutboundBotClient::taskPreparingCallable(const TaskPreparingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TaskPreparingOutcome()>>(
			[this, request]()
			{
			return this->taskPreparing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::TerminateCallOutcome OutboundBotClient::terminateCall(const TerminateCallRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateCallOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateCallOutcome(TerminateCallResult(outcome.result()));
	else
		return TerminateCallOutcome(outcome.error());
}

void OutboundBotClient::terminateCallAsync(const TerminateCallRequest& request, const TerminateCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateCall(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::TerminateCallOutcomeCallable OutboundBotClient::terminateCallCallable(const TerminateCallRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateCallOutcome()>>(
			[this, request]()
			{
			return this->terminateCall(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::UntagResourcesOutcome OutboundBotClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void OutboundBotClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::UntagResourcesOutcomeCallable OutboundBotClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OutboundBotClient::UploadScriptRecordingOutcome OutboundBotClient::uploadScriptRecording(const UploadScriptRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadScriptRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadScriptRecordingOutcome(UploadScriptRecordingResult(outcome.result()));
	else
		return UploadScriptRecordingOutcome(outcome.error());
}

void OutboundBotClient::uploadScriptRecordingAsync(const UploadScriptRecordingRequest& request, const UploadScriptRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadScriptRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OutboundBotClient::UploadScriptRecordingOutcomeCallable OutboundBotClient::uploadScriptRecordingCallable(const UploadScriptRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadScriptRecordingOutcome()>>(
			[this, request]()
			{
			return this->uploadScriptRecording(request);
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

