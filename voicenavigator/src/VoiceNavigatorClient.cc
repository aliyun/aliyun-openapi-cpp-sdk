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

#include <alibabacloud/voicenavigator/VoiceNavigatorClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

namespace
{
	const std::string SERVICE_NAME = "VoiceNavigator";
}

VoiceNavigatorClient::VoiceNavigatorClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::VoiceNavigatorClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::VoiceNavigatorClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "voicebot");
}

VoiceNavigatorClient::~VoiceNavigatorClient()
{}

VoiceNavigatorClient::AssociateChatbotInstanceOutcome VoiceNavigatorClient::associateChatbotInstance(const AssociateChatbotInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateChatbotInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateChatbotInstanceOutcome(AssociateChatbotInstanceResult(outcome.result()));
	else
		return AssociateChatbotInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::associateChatbotInstanceAsync(const AssociateChatbotInstanceRequest& request, const AssociateChatbotInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateChatbotInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::AssociateChatbotInstanceOutcomeCallable VoiceNavigatorClient::associateChatbotInstanceCallable(const AssociateChatbotInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateChatbotInstanceOutcome()>>(
			[this, request]()
			{
			return this->associateChatbotInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::AuditTTSVoiceOutcome VoiceNavigatorClient::auditTTSVoice(const AuditTTSVoiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuditTTSVoiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuditTTSVoiceOutcome(AuditTTSVoiceResult(outcome.result()));
	else
		return AuditTTSVoiceOutcome(outcome.error());
}

void VoiceNavigatorClient::auditTTSVoiceAsync(const AuditTTSVoiceRequest& request, const AuditTTSVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, auditTTSVoice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::AuditTTSVoiceOutcomeCallable VoiceNavigatorClient::auditTTSVoiceCallable(const AuditTTSVoiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuditTTSVoiceOutcome()>>(
			[this, request]()
			{
			return this->auditTTSVoice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::BeginDialogueOutcome VoiceNavigatorClient::beginDialogue(const BeginDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BeginDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BeginDialogueOutcome(BeginDialogueResult(outcome.result()));
	else
		return BeginDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::beginDialogueAsync(const BeginDialogueRequest& request, const BeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, beginDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::BeginDialogueOutcomeCallable VoiceNavigatorClient::beginDialogueCallable(const BeginDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BeginDialogueOutcome()>>(
			[this, request]()
			{
			return this->beginDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CollectedNumberOutcome VoiceNavigatorClient::collectedNumber(const CollectedNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CollectedNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CollectedNumberOutcome(CollectedNumberResult(outcome.result()));
	else
		return CollectedNumberOutcome(outcome.error());
}

void VoiceNavigatorClient::collectedNumberAsync(const CollectedNumberRequest& request, const CollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, collectedNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CollectedNumberOutcomeCallable VoiceNavigatorClient::collectedNumberCallable(const CollectedNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CollectedNumberOutcome()>>(
			[this, request]()
			{
			return this->collectedNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateDownloadUrlOutcome VoiceNavigatorClient::createDownloadUrl(const CreateDownloadUrlRequest &request) const
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

void VoiceNavigatorClient::createDownloadUrlAsync(const CreateDownloadUrlRequest& request, const CreateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDownloadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateDownloadUrlOutcomeCallable VoiceNavigatorClient::createDownloadUrlCallable(const CreateDownloadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDownloadUrlOutcome()>>(
			[this, request]()
			{
			return this->createDownloadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::CreateInstanceOutcome VoiceNavigatorClient::createInstance(const CreateInstanceRequest &request) const
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

void VoiceNavigatorClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::CreateInstanceOutcomeCallable VoiceNavigatorClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugBeginDialogueOutcome VoiceNavigatorClient::debugBeginDialogue(const DebugBeginDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugBeginDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugBeginDialogueOutcome(DebugBeginDialogueResult(outcome.result()));
	else
		return DebugBeginDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::debugBeginDialogueAsync(const DebugBeginDialogueRequest& request, const DebugBeginDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugBeginDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugBeginDialogueOutcomeCallable VoiceNavigatorClient::debugBeginDialogueCallable(const DebugBeginDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugBeginDialogueOutcome()>>(
			[this, request]()
			{
			return this->debugBeginDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugCollectedNumberOutcome VoiceNavigatorClient::debugCollectedNumber(const DebugCollectedNumberRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugCollectedNumberOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugCollectedNumberOutcome(DebugCollectedNumberResult(outcome.result()));
	else
		return DebugCollectedNumberOutcome(outcome.error());
}

void VoiceNavigatorClient::debugCollectedNumberAsync(const DebugCollectedNumberRequest& request, const DebugCollectedNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugCollectedNumber(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugCollectedNumberOutcomeCallable VoiceNavigatorClient::debugCollectedNumberCallable(const DebugCollectedNumberRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugCollectedNumberOutcome()>>(
			[this, request]()
			{
			return this->debugCollectedNumber(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DebugDialogueOutcome VoiceNavigatorClient::debugDialogue(const DebugDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DebugDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DebugDialogueOutcome(DebugDialogueResult(outcome.result()));
	else
		return DebugDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::debugDialogueAsync(const DebugDialogueRequest& request, const DebugDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, debugDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DebugDialogueOutcomeCallable VoiceNavigatorClient::debugDialogueCallable(const DebugDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DebugDialogueOutcome()>>(
			[this, request]()
			{
			return this->debugDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DeleteInstanceOutcome VoiceNavigatorClient::deleteInstance(const DeleteInstanceRequest &request) const
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

void VoiceNavigatorClient::deleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DeleteInstanceOutcomeCallable VoiceNavigatorClient::deleteInstanceCallable(const DeleteInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeConversationOutcome VoiceNavigatorClient::describeConversation(const DescribeConversationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConversationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConversationOutcome(DescribeConversationResult(outcome.result()));
	else
		return DescribeConversationOutcome(outcome.error());
}

void VoiceNavigatorClient::describeConversationAsync(const DescribeConversationRequest& request, const DescribeConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConversation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeConversationOutcomeCallable VoiceNavigatorClient::describeConversationCallable(const DescribeConversationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConversationOutcome()>>(
			[this, request]()
			{
			return this->describeConversation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeConversationContextOutcome VoiceNavigatorClient::describeConversationContext(const DescribeConversationContextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConversationContextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConversationContextOutcome(DescribeConversationContextResult(outcome.result()));
	else
		return DescribeConversationContextOutcome(outcome.error());
}

void VoiceNavigatorClient::describeConversationContextAsync(const DescribeConversationContextRequest& request, const DescribeConversationContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConversationContext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeConversationContextOutcomeCallable VoiceNavigatorClient::describeConversationContextCallable(const DescribeConversationContextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConversationContextOutcome()>>(
			[this, request]()
			{
			return this->describeConversationContext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeExportProgressOutcome VoiceNavigatorClient::describeExportProgress(const DescribeExportProgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeExportProgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeExportProgressOutcome(DescribeExportProgressResult(outcome.result()));
	else
		return DescribeExportProgressOutcome(outcome.error());
}

void VoiceNavigatorClient::describeExportProgressAsync(const DescribeExportProgressRequest& request, const DescribeExportProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeExportProgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeExportProgressOutcomeCallable VoiceNavigatorClient::describeExportProgressCallable(const DescribeExportProgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeExportProgressOutcome()>>(
			[this, request]()
			{
			return this->describeExportProgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeInstanceOutcome VoiceNavigatorClient::describeInstance(const DescribeInstanceRequest &request) const
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

void VoiceNavigatorClient::describeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeInstanceOutcomeCallable VoiceNavigatorClient::describeInstanceCallable(const DescribeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
			[this, request]()
			{
			return this->describeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeNavigationConfigOutcome VoiceNavigatorClient::describeNavigationConfig(const DescribeNavigationConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNavigationConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNavigationConfigOutcome(DescribeNavigationConfigResult(outcome.result()));
	else
		return DescribeNavigationConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::describeNavigationConfigAsync(const DescribeNavigationConfigRequest& request, const DescribeNavigationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNavigationConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeNavigationConfigOutcomeCallable VoiceNavigatorClient::describeNavigationConfigCallable(const DescribeNavigationConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNavigationConfigOutcome()>>(
			[this, request]()
			{
			return this->describeNavigationConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeRecordingOutcome VoiceNavigatorClient::describeRecording(const DescribeRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordingOutcome(DescribeRecordingResult(outcome.result()));
	else
		return DescribeRecordingOutcome(outcome.error());
}

void VoiceNavigatorClient::describeRecordingAsync(const DescribeRecordingRequest& request, const DescribeRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeRecordingOutcomeCallable VoiceNavigatorClient::describeRecordingCallable(const DescribeRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordingOutcome()>>(
			[this, request]()
			{
			return this->describeRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeStatisticalDataOutcome VoiceNavigatorClient::describeStatisticalData(const DescribeStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatisticalDataOutcome(DescribeStatisticalDataResult(outcome.result()));
	else
		return DescribeStatisticalDataOutcome(outcome.error());
}

void VoiceNavigatorClient::describeStatisticalDataAsync(const DescribeStatisticalDataRequest& request, const DescribeStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeStatisticalDataOutcomeCallable VoiceNavigatorClient::describeStatisticalDataCallable(const DescribeStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->describeStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DescribeTTSConfigOutcome VoiceNavigatorClient::describeTTSConfig(const DescribeTTSConfigRequest &request) const
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

void VoiceNavigatorClient::describeTTSConfigAsync(const DescribeTTSConfigRequest& request, const DescribeTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DescribeTTSConfigOutcomeCallable VoiceNavigatorClient::describeTTSConfigCallable(const DescribeTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->describeTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DialogueOutcome VoiceNavigatorClient::dialogue(const DialogueRequest &request) const
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

void VoiceNavigatorClient::dialogueAsync(const DialogueRequest& request, const DialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DialogueOutcomeCallable VoiceNavigatorClient::dialogueCallable(const DialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DialogueOutcome()>>(
			[this, request]()
			{
			return this->dialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::DisableInstanceOutcome VoiceNavigatorClient::disableInstance(const DisableInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableInstanceOutcome(DisableInstanceResult(outcome.result()));
	else
		return DisableInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::disableInstanceAsync(const DisableInstanceRequest& request, const DisableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::DisableInstanceOutcomeCallable VoiceNavigatorClient::disableInstanceCallable(const DisableInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableInstanceOutcome()>>(
			[this, request]()
			{
			return this->disableInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::EnableInstanceOutcome VoiceNavigatorClient::enableInstance(const EnableInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableInstanceOutcome(EnableInstanceResult(outcome.result()));
	else
		return EnableInstanceOutcome(outcome.error());
}

void VoiceNavigatorClient::enableInstanceAsync(const EnableInstanceRequest& request, const EnableInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::EnableInstanceOutcomeCallable VoiceNavigatorClient::enableInstanceCallable(const EnableInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableInstanceOutcome()>>(
			[this, request]()
			{
			return this->enableInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::EndDialogueOutcome VoiceNavigatorClient::endDialogue(const EndDialogueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EndDialogueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EndDialogueOutcome(EndDialogueResult(outcome.result()));
	else
		return EndDialogueOutcome(outcome.error());
}

void VoiceNavigatorClient::endDialogueAsync(const EndDialogueRequest& request, const EndDialogueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, endDialogue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::EndDialogueOutcomeCallable VoiceNavigatorClient::endDialogueCallable(const EndDialogueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EndDialogueOutcome()>>(
			[this, request]()
			{
			return this->endDialogue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ExportConversationDetailsOutcome VoiceNavigatorClient::exportConversationDetails(const ExportConversationDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportConversationDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportConversationDetailsOutcome(ExportConversationDetailsResult(outcome.result()));
	else
		return ExportConversationDetailsOutcome(outcome.error());
}

void VoiceNavigatorClient::exportConversationDetailsAsync(const ExportConversationDetailsRequest& request, const ExportConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportConversationDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ExportConversationDetailsOutcomeCallable VoiceNavigatorClient::exportConversationDetailsCallable(const ExportConversationDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportConversationDetailsOutcome()>>(
			[this, request]()
			{
			return this->exportConversationDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ExportStatisticalDataOutcome VoiceNavigatorClient::exportStatisticalData(const ExportStatisticalDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportStatisticalDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportStatisticalDataOutcome(ExportStatisticalDataResult(outcome.result()));
	else
		return ExportStatisticalDataOutcome(outcome.error());
}

void VoiceNavigatorClient::exportStatisticalDataAsync(const ExportStatisticalDataRequest& request, const ExportStatisticalDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportStatisticalData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ExportStatisticalDataOutcomeCallable VoiceNavigatorClient::exportStatisticalDataCallable(const ExportStatisticalDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportStatisticalDataOutcome()>>(
			[this, request]()
			{
			return this->exportStatisticalData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::GenerateUploadUrlOutcome VoiceNavigatorClient::generateUploadUrl(const GenerateUploadUrlRequest &request) const
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

void VoiceNavigatorClient::generateUploadUrlAsync(const GenerateUploadUrlRequest& request, const GenerateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateUploadUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::GenerateUploadUrlOutcomeCallable VoiceNavigatorClient::generateUploadUrlCallable(const GenerateUploadUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateUploadUrlOutcome()>>(
			[this, request]()
			{
			return this->generateUploadUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::GetAsrConfigOutcome VoiceNavigatorClient::getAsrConfig(const GetAsrConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAsrConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAsrConfigOutcome(GetAsrConfigResult(outcome.result()));
	else
		return GetAsrConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::getAsrConfigAsync(const GetAsrConfigRequest& request, const GetAsrConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAsrConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::GetAsrConfigOutcomeCallable VoiceNavigatorClient::getAsrConfigCallable(const GetAsrConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAsrConfigOutcome()>>(
			[this, request]()
			{
			return this->getAsrConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::GetRealTimeConcurrencyOutcome VoiceNavigatorClient::getRealTimeConcurrency(const GetRealTimeConcurrencyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRealTimeConcurrencyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRealTimeConcurrencyOutcome(GetRealTimeConcurrencyResult(outcome.result()));
	else
		return GetRealTimeConcurrencyOutcome(outcome.error());
}

void VoiceNavigatorClient::getRealTimeConcurrencyAsync(const GetRealTimeConcurrencyRequest& request, const GetRealTimeConcurrencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRealTimeConcurrency(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::GetRealTimeConcurrencyOutcomeCallable VoiceNavigatorClient::getRealTimeConcurrencyCallable(const GetRealTimeConcurrencyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRealTimeConcurrencyOutcome()>>(
			[this, request]()
			{
			return this->getRealTimeConcurrency(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListChatbotInstancesOutcome VoiceNavigatorClient::listChatbotInstances(const ListChatbotInstancesRequest &request) const
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

void VoiceNavigatorClient::listChatbotInstancesAsync(const ListChatbotInstancesRequest& request, const ListChatbotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listChatbotInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListChatbotInstancesOutcomeCallable VoiceNavigatorClient::listChatbotInstancesCallable(const ListChatbotInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListChatbotInstancesOutcome()>>(
			[this, request]()
			{
			return this->listChatbotInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListConversationDetailsOutcome VoiceNavigatorClient::listConversationDetails(const ListConversationDetailsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConversationDetailsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConversationDetailsOutcome(ListConversationDetailsResult(outcome.result()));
	else
		return ListConversationDetailsOutcome(outcome.error());
}

void VoiceNavigatorClient::listConversationDetailsAsync(const ListConversationDetailsRequest& request, const ListConversationDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConversationDetails(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListConversationDetailsOutcomeCallable VoiceNavigatorClient::listConversationDetailsCallable(const ListConversationDetailsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConversationDetailsOutcome()>>(
			[this, request]()
			{
			return this->listConversationDetails(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListConversationsOutcome VoiceNavigatorClient::listConversations(const ListConversationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListConversationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListConversationsOutcome(ListConversationsResult(outcome.result()));
	else
		return ListConversationsOutcome(outcome.error());
}

void VoiceNavigatorClient::listConversationsAsync(const ListConversationsRequest& request, const ListConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listConversations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListConversationsOutcomeCallable VoiceNavigatorClient::listConversationsCallable(const ListConversationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListConversationsOutcome()>>(
			[this, request]()
			{
			return this->listConversations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListDownloadTasksOutcome VoiceNavigatorClient::listDownloadTasks(const ListDownloadTasksRequest &request) const
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

void VoiceNavigatorClient::listDownloadTasksAsync(const ListDownloadTasksRequest& request, const ListDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listDownloadTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListDownloadTasksOutcomeCallable VoiceNavigatorClient::listDownloadTasksCallable(const ListDownloadTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListDownloadTasksOutcome()>>(
			[this, request]()
			{
			return this->listDownloadTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ListInstancesOutcome VoiceNavigatorClient::listInstances(const ListInstancesRequest &request) const
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

void VoiceNavigatorClient::listInstancesAsync(const ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ListInstancesOutcomeCallable VoiceNavigatorClient::listInstancesCallable(const ListInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListInstancesOutcome()>>(
			[this, request]()
			{
			return this->listInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyAsrConfigOutcome VoiceNavigatorClient::modifyAsrConfig(const ModifyAsrConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAsrConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAsrConfigOutcome(ModifyAsrConfigResult(outcome.result()));
	else
		return ModifyAsrConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyAsrConfigAsync(const ModifyAsrConfigRequest& request, const ModifyAsrConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyAsrConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyAsrConfigOutcomeCallable VoiceNavigatorClient::modifyAsrConfigCallable(const ModifyAsrConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAsrConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyAsrConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyGreetingConfigOutcome VoiceNavigatorClient::modifyGreetingConfig(const ModifyGreetingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGreetingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGreetingConfigOutcome(ModifyGreetingConfigResult(outcome.result()));
	else
		return ModifyGreetingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyGreetingConfigAsync(const ModifyGreetingConfigRequest& request, const ModifyGreetingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGreetingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyGreetingConfigOutcomeCallable VoiceNavigatorClient::modifyGreetingConfigCallable(const ModifyGreetingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGreetingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyGreetingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyInstanceOutcome VoiceNavigatorClient::modifyInstance(const ModifyInstanceRequest &request) const
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

void VoiceNavigatorClient::modifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyInstanceOutcomeCallable VoiceNavigatorClient::modifyInstanceCallable(const ModifyInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
			[this, request]()
			{
			return this->modifyInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifySilenceTimeoutConfigOutcome VoiceNavigatorClient::modifySilenceTimeoutConfig(const ModifySilenceTimeoutConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySilenceTimeoutConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySilenceTimeoutConfigOutcome(ModifySilenceTimeoutConfigResult(outcome.result()));
	else
		return ModifySilenceTimeoutConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifySilenceTimeoutConfigAsync(const ModifySilenceTimeoutConfigRequest& request, const ModifySilenceTimeoutConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySilenceTimeoutConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifySilenceTimeoutConfigOutcomeCallable VoiceNavigatorClient::modifySilenceTimeoutConfigCallable(const ModifySilenceTimeoutConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySilenceTimeoutConfigOutcome()>>(
			[this, request]()
			{
			return this->modifySilenceTimeoutConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyTTSConfigOutcome VoiceNavigatorClient::modifyTTSConfig(const ModifyTTSConfigRequest &request) const
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

void VoiceNavigatorClient::modifyTTSConfigAsync(const ModifyTTSConfigRequest& request, const ModifyTTSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyTTSConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyTTSConfigOutcomeCallable VoiceNavigatorClient::modifyTTSConfigCallable(const ModifyTTSConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyTTSConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyTTSConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::ModifyUnrecognizingConfigOutcome VoiceNavigatorClient::modifyUnrecognizingConfig(const ModifyUnrecognizingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyUnrecognizingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyUnrecognizingConfigOutcome(ModifyUnrecognizingConfigResult(outcome.result()));
	else
		return ModifyUnrecognizingConfigOutcome(outcome.error());
}

void VoiceNavigatorClient::modifyUnrecognizingConfigAsync(const ModifyUnrecognizingConfigRequest& request, const ModifyUnrecognizingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyUnrecognizingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::ModifyUnrecognizingConfigOutcomeCallable VoiceNavigatorClient::modifyUnrecognizingConfigCallable(const ModifyUnrecognizingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyUnrecognizingConfigOutcome()>>(
			[this, request]()
			{
			return this->modifyUnrecognizingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::QueryConversationsOutcome VoiceNavigatorClient::queryConversations(const QueryConversationsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryConversationsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryConversationsOutcome(QueryConversationsResult(outcome.result()));
	else
		return QueryConversationsOutcome(outcome.error());
}

void VoiceNavigatorClient::queryConversationsAsync(const QueryConversationsRequest& request, const QueryConversationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryConversations(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::QueryConversationsOutcomeCallable VoiceNavigatorClient::queryConversationsCallable(const QueryConversationsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryConversationsOutcome()>>(
			[this, request]()
			{
			return this->queryConversations(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::SaveRecordingOutcome VoiceNavigatorClient::saveRecording(const SaveRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SaveRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SaveRecordingOutcome(SaveRecordingResult(outcome.result()));
	else
		return SaveRecordingOutcome(outcome.error());
}

void VoiceNavigatorClient::saveRecordingAsync(const SaveRecordingRequest& request, const SaveRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, saveRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::SaveRecordingOutcomeCallable VoiceNavigatorClient::saveRecordingCallable(const SaveRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SaveRecordingOutcome()>>(
			[this, request]()
			{
			return this->saveRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VoiceNavigatorClient::SilenceTimeoutOutcome VoiceNavigatorClient::silenceTimeout(const SilenceTimeoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SilenceTimeoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SilenceTimeoutOutcome(SilenceTimeoutResult(outcome.result()));
	else
		return SilenceTimeoutOutcome(outcome.error());
}

void VoiceNavigatorClient::silenceTimeoutAsync(const SilenceTimeoutRequest& request, const SilenceTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, silenceTimeout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VoiceNavigatorClient::SilenceTimeoutOutcomeCallable VoiceNavigatorClient::silenceTimeoutCallable(const SilenceTimeoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SilenceTimeoutOutcome()>>(
			[this, request]()
			{
			return this->silenceTimeout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

