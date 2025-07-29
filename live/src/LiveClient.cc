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

#include <alibabacloud/live/LiveClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

namespace
{
	const std::string SERVICE_NAME = "live";
}

LiveClient::LiveClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "live");
}

LiveClient::LiveClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "live");
}

LiveClient::LiveClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "live");
}

LiveClient::~LiveClient()
{}

LiveClient::AddCasterComponentOutcome LiveClient::addCasterComponent(const AddCasterComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterComponentOutcome(AddCasterComponentResult(outcome.result()));
	else
		return AddCasterComponentOutcome(outcome.error());
}

void LiveClient::addCasterComponentAsync(const AddCasterComponentRequest& request, const AddCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterComponentOutcomeCallable LiveClient::addCasterComponentCallable(const AddCasterComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterComponentOutcome()>>(
			[this, request]()
			{
			return this->addCasterComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterEpisodeOutcome LiveClient::addCasterEpisode(const AddCasterEpisodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterEpisodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterEpisodeOutcome(AddCasterEpisodeResult(outcome.result()));
	else
		return AddCasterEpisodeOutcome(outcome.error());
}

void LiveClient::addCasterEpisodeAsync(const AddCasterEpisodeRequest& request, const AddCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterEpisode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterEpisodeOutcomeCallable LiveClient::addCasterEpisodeCallable(const AddCasterEpisodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterEpisodeOutcome()>>(
			[this, request]()
			{
			return this->addCasterEpisode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterEpisodeGroupOutcome LiveClient::addCasterEpisodeGroup(const AddCasterEpisodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterEpisodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterEpisodeGroupOutcome(AddCasterEpisodeGroupResult(outcome.result()));
	else
		return AddCasterEpisodeGroupOutcome(outcome.error());
}

void LiveClient::addCasterEpisodeGroupAsync(const AddCasterEpisodeGroupRequest& request, const AddCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterEpisodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterEpisodeGroupOutcomeCallable LiveClient::addCasterEpisodeGroupCallable(const AddCasterEpisodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterEpisodeGroupOutcome()>>(
			[this, request]()
			{
			return this->addCasterEpisodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterEpisodeGroupContentOutcome LiveClient::addCasterEpisodeGroupContent(const AddCasterEpisodeGroupContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterEpisodeGroupContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterEpisodeGroupContentOutcome(AddCasterEpisodeGroupContentResult(outcome.result()));
	else
		return AddCasterEpisodeGroupContentOutcome(outcome.error());
}

void LiveClient::addCasterEpisodeGroupContentAsync(const AddCasterEpisodeGroupContentRequest& request, const AddCasterEpisodeGroupContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterEpisodeGroupContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterEpisodeGroupContentOutcomeCallable LiveClient::addCasterEpisodeGroupContentCallable(const AddCasterEpisodeGroupContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterEpisodeGroupContentOutcome()>>(
			[this, request]()
			{
			return this->addCasterEpisodeGroupContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterLayoutOutcome LiveClient::addCasterLayout(const AddCasterLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterLayoutOutcome(AddCasterLayoutResult(outcome.result()));
	else
		return AddCasterLayoutOutcome(outcome.error());
}

void LiveClient::addCasterLayoutAsync(const AddCasterLayoutRequest& request, const AddCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterLayoutOutcomeCallable LiveClient::addCasterLayoutCallable(const AddCasterLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterLayoutOutcome()>>(
			[this, request]()
			{
			return this->addCasterLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterProgramOutcome LiveClient::addCasterProgram(const AddCasterProgramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterProgramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterProgramOutcome(AddCasterProgramResult(outcome.result()));
	else
		return AddCasterProgramOutcome(outcome.error());
}

void LiveClient::addCasterProgramAsync(const AddCasterProgramRequest& request, const AddCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterProgramOutcomeCallable LiveClient::addCasterProgramCallable(const AddCasterProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterProgramOutcome()>>(
			[this, request]()
			{
			return this->addCasterProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCasterVideoResourceOutcome LiveClient::addCasterVideoResource(const AddCasterVideoResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCasterVideoResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCasterVideoResourceOutcome(AddCasterVideoResourceResult(outcome.result()));
	else
		return AddCasterVideoResourceOutcome(outcome.error());
}

void LiveClient::addCasterVideoResourceAsync(const AddCasterVideoResourceRequest& request, const AddCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCasterVideoResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCasterVideoResourceOutcomeCallable LiveClient::addCasterVideoResourceCallable(const AddCasterVideoResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCasterVideoResourceOutcome()>>(
			[this, request]()
			{
			return this->addCasterVideoResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddCustomLiveStreamTranscodeOutcome LiveClient::addCustomLiveStreamTranscode(const AddCustomLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddCustomLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCustomLiveStreamTranscodeOutcome(AddCustomLiveStreamTranscodeResult(outcome.result()));
	else
		return AddCustomLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::addCustomLiveStreamTranscodeAsync(const AddCustomLiveStreamTranscodeRequest& request, const AddCustomLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCustomLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddCustomLiveStreamTranscodeOutcomeCallable LiveClient::addCustomLiveStreamTranscodeCallable(const AddCustomLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCustomLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->addCustomLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAIProduceRulesOutcome LiveClient::addLiveAIProduceRules(const AddLiveAIProduceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAIProduceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAIProduceRulesOutcome(AddLiveAIProduceRulesResult(outcome.result()));
	else
		return AddLiveAIProduceRulesOutcome(outcome.error());
}

void LiveClient::addLiveAIProduceRulesAsync(const AddLiveAIProduceRulesRequest& request, const AddLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAIProduceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAIProduceRulesOutcomeCallable LiveClient::addLiveAIProduceRulesCallable(const AddLiveAIProduceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAIProduceRulesOutcome()>>(
			[this, request]()
			{
			return this->addLiveAIProduceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAISubtitleOutcome LiveClient::addLiveAISubtitle(const AddLiveAISubtitleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAISubtitleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAISubtitleOutcome(AddLiveAISubtitleResult(outcome.result()));
	else
		return AddLiveAISubtitleOutcome(outcome.error());
}

void LiveClient::addLiveAISubtitleAsync(const AddLiveAISubtitleRequest& request, const AddLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAISubtitle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAISubtitleOutcomeCallable LiveClient::addLiveAISubtitleCallable(const AddLiveAISubtitleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAISubtitleOutcome()>>(
			[this, request]()
			{
			return this->addLiveAISubtitle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAppRecordConfigOutcome LiveClient::addLiveAppRecordConfig(const AddLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppRecordConfigOutcome(AddLiveAppRecordConfigResult(outcome.result()));
	else
		return AddLiveAppRecordConfigOutcome(outcome.error());
}

void LiveClient::addLiveAppRecordConfigAsync(const AddLiveAppRecordConfigRequest& request, const AddLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAppRecordConfigOutcomeCallable LiveClient::addLiveAppRecordConfigCallable(const AddLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAppSnapshotConfigOutcome LiveClient::addLiveAppSnapshotConfig(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAppSnapshotConfigOutcome(AddLiveAppSnapshotConfigResult(outcome.result()));
	else
		return AddLiveAppSnapshotConfigOutcome(outcome.error());
}

void LiveClient::addLiveAppSnapshotConfigAsync(const AddLiveAppSnapshotConfigRequest& request, const AddLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAppSnapshotConfigOutcomeCallable LiveClient::addLiveAppSnapshotConfigCallable(const AddLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAudioAuditConfigOutcome LiveClient::addLiveAudioAuditConfig(const AddLiveAudioAuditConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAudioAuditConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAudioAuditConfigOutcome(AddLiveAudioAuditConfigResult(outcome.result()));
	else
		return AddLiveAudioAuditConfigOutcome(outcome.error());
}

void LiveClient::addLiveAudioAuditConfigAsync(const AddLiveAudioAuditConfigRequest& request, const AddLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAudioAuditConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAudioAuditConfigOutcomeCallable LiveClient::addLiveAudioAuditConfigCallable(const AddLiveAudioAuditConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAudioAuditConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAudioAuditConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveAudioAuditNotifyConfigOutcome LiveClient::addLiveAudioAuditNotifyConfig(const AddLiveAudioAuditNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveAudioAuditNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveAudioAuditNotifyConfigOutcome(AddLiveAudioAuditNotifyConfigResult(outcome.result()));
	else
		return AddLiveAudioAuditNotifyConfigOutcome(outcome.error());
}

void LiveClient::addLiveAudioAuditNotifyConfigAsync(const AddLiveAudioAuditNotifyConfigRequest& request, const AddLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveAudioAuditNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveAudioAuditNotifyConfigOutcomeCallable LiveClient::addLiveAudioAuditNotifyConfigCallable(const AddLiveAudioAuditNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveAudioAuditNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveAudioAuditNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveCenterTransferOutcome LiveClient::addLiveCenterTransfer(const AddLiveCenterTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveCenterTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveCenterTransferOutcome(AddLiveCenterTransferResult(outcome.result()));
	else
		return AddLiveCenterTransferOutcome(outcome.error());
}

void LiveClient::addLiveCenterTransferAsync(const AddLiveCenterTransferRequest& request, const AddLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveCenterTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveCenterTransferOutcomeCallable LiveClient::addLiveCenterTransferCallable(const AddLiveCenterTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveCenterTransferOutcome()>>(
			[this, request]()
			{
			return this->addLiveCenterTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveDetectNotifyConfigOutcome LiveClient::addLiveDetectNotifyConfig(const AddLiveDetectNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDetectNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDetectNotifyConfigOutcome(AddLiveDetectNotifyConfigResult(outcome.result()));
	else
		return AddLiveDetectNotifyConfigOutcome(outcome.error());
}

void LiveClient::addLiveDetectNotifyConfigAsync(const AddLiveDetectNotifyConfigRequest& request, const AddLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDetectNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveDetectNotifyConfigOutcomeCallable LiveClient::addLiveDetectNotifyConfigCallable(const AddLiveDetectNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDetectNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveDetectNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveDomainOutcome LiveClient::addLiveDomain(const AddLiveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDomainOutcome(AddLiveDomainResult(outcome.result()));
	else
		return AddLiveDomainOutcome(outcome.error());
}

void LiveClient::addLiveDomainAsync(const AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveDomainOutcomeCallable LiveClient::addLiveDomainCallable(const AddLiveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDomainOutcome()>>(
			[this, request]()
			{
			return this->addLiveDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveDomainMappingOutcome LiveClient::addLiveDomainMapping(const AddLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDomainMappingOutcome(AddLiveDomainMappingResult(outcome.result()));
	else
		return AddLiveDomainMappingOutcome(outcome.error());
}

void LiveClient::addLiveDomainMappingAsync(const AddLiveDomainMappingRequest& request, const AddLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveDomainMappingOutcomeCallable LiveClient::addLiveDomainMappingCallable(const AddLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->addLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveDomainPlayMappingOutcome LiveClient::addLiveDomainPlayMapping(const AddLiveDomainPlayMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveDomainPlayMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveDomainPlayMappingOutcome(AddLiveDomainPlayMappingResult(outcome.result()));
	else
		return AddLiveDomainPlayMappingOutcome(outcome.error());
}

void LiveClient::addLiveDomainPlayMappingAsync(const AddLiveDomainPlayMappingRequest& request, const AddLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveDomainPlayMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveDomainPlayMappingOutcomeCallable LiveClient::addLiveDomainPlayMappingCallable(const AddLiveDomainPlayMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveDomainPlayMappingOutcome()>>(
			[this, request]()
			{
			return this->addLiveDomainPlayMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveMessageGroupBandOutcome LiveClient::addLiveMessageGroupBand(const AddLiveMessageGroupBandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveMessageGroupBandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveMessageGroupBandOutcome(AddLiveMessageGroupBandResult(outcome.result()));
	else
		return AddLiveMessageGroupBandOutcome(outcome.error());
}

void LiveClient::addLiveMessageGroupBandAsync(const AddLiveMessageGroupBandRequest& request, const AddLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveMessageGroupBand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveMessageGroupBandOutcomeCallable LiveClient::addLiveMessageGroupBandCallable(const AddLiveMessageGroupBandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveMessageGroupBandOutcome()>>(
			[this, request]()
			{
			return this->addLiveMessageGroupBand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLivePackageConfigOutcome LiveClient::addLivePackageConfig(const AddLivePackageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLivePackageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLivePackageConfigOutcome(AddLivePackageConfigResult(outcome.result()));
	else
		return AddLivePackageConfigOutcome(outcome.error());
}

void LiveClient::addLivePackageConfigAsync(const AddLivePackageConfigRequest& request, const AddLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLivePackageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLivePackageConfigOutcomeCallable LiveClient::addLivePackageConfigCallable(const AddLivePackageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLivePackageConfigOutcome()>>(
			[this, request]()
			{
			return this->addLivePackageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLivePullStreamInfoConfigOutcome LiveClient::addLivePullStreamInfoConfig(const AddLivePullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLivePullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLivePullStreamInfoConfigOutcome(AddLivePullStreamInfoConfigResult(outcome.result()));
	else
		return AddLivePullStreamInfoConfigOutcome(outcome.error());
}

void LiveClient::addLivePullStreamInfoConfigAsync(const AddLivePullStreamInfoConfigRequest& request, const AddLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLivePullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLivePullStreamInfoConfigOutcomeCallable LiveClient::addLivePullStreamInfoConfigCallable(const AddLivePullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLivePullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->addLivePullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveRecordNotifyConfigOutcome LiveClient::addLiveRecordNotifyConfig(const AddLiveRecordNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveRecordNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveRecordNotifyConfigOutcome(AddLiveRecordNotifyConfigResult(outcome.result()));
	else
		return AddLiveRecordNotifyConfigOutcome(outcome.error());
}

void LiveClient::addLiveRecordNotifyConfigAsync(const AddLiveRecordNotifyConfigRequest& request, const AddLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveRecordNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveRecordNotifyConfigOutcomeCallable LiveClient::addLiveRecordNotifyConfigCallable(const AddLiveRecordNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveRecordNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveRecordNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveRecordVodConfigOutcome LiveClient::addLiveRecordVodConfig(const AddLiveRecordVodConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveRecordVodConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveRecordVodConfigOutcome(AddLiveRecordVodConfigResult(outcome.result()));
	else
		return AddLiveRecordVodConfigOutcome(outcome.error());
}

void LiveClient::addLiveRecordVodConfigAsync(const AddLiveRecordVodConfigRequest& request, const AddLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveRecordVodConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveRecordVodConfigOutcomeCallable LiveClient::addLiveRecordVodConfigCallable(const AddLiveRecordVodConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveRecordVodConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveRecordVodConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveSnapshotDetectPornConfigOutcome LiveClient::addLiveSnapshotDetectPornConfig(const AddLiveSnapshotDetectPornConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveSnapshotDetectPornConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveSnapshotDetectPornConfigOutcome(AddLiveSnapshotDetectPornConfigResult(outcome.result()));
	else
		return AddLiveSnapshotDetectPornConfigOutcome(outcome.error());
}

void LiveClient::addLiveSnapshotDetectPornConfigAsync(const AddLiveSnapshotDetectPornConfigRequest& request, const AddLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveSnapshotDetectPornConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveSnapshotDetectPornConfigOutcomeCallable LiveClient::addLiveSnapshotDetectPornConfigCallable(const AddLiveSnapshotDetectPornConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveSnapshotDetectPornConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveSnapshotDetectPornConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveSnapshotNotifyConfigOutcome LiveClient::addLiveSnapshotNotifyConfig(const AddLiveSnapshotNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveSnapshotNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveSnapshotNotifyConfigOutcome(AddLiveSnapshotNotifyConfigResult(outcome.result()));
	else
		return AddLiveSnapshotNotifyConfigOutcome(outcome.error());
}

void LiveClient::addLiveSnapshotNotifyConfigAsync(const AddLiveSnapshotNotifyConfigRequest& request, const AddLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveSnapshotNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveSnapshotNotifyConfigOutcomeCallable LiveClient::addLiveSnapshotNotifyConfigCallable(const AddLiveSnapshotNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveSnapshotNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->addLiveSnapshotNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveStreamMergeOutcome LiveClient::addLiveStreamMerge(const AddLiveStreamMergeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamMergeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamMergeOutcome(AddLiveStreamMergeResult(outcome.result()));
	else
		return AddLiveStreamMergeOutcome(outcome.error());
}

void LiveClient::addLiveStreamMergeAsync(const AddLiveStreamMergeRequest& request, const AddLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamMerge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveStreamMergeOutcomeCallable LiveClient::addLiveStreamMergeCallable(const AddLiveStreamMergeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamMergeOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamMerge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveStreamTranscodeOutcome LiveClient::addLiveStreamTranscode(const AddLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamTranscodeOutcome(AddLiveStreamTranscodeResult(outcome.result()));
	else
		return AddLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::addLiveStreamTranscodeAsync(const AddLiveStreamTranscodeRequest& request, const AddLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveStreamTranscodeOutcomeCallable LiveClient::addLiveStreamTranscodeCallable(const AddLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveStreamWatermarkOutcome LiveClient::addLiveStreamWatermark(const AddLiveStreamWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamWatermarkOutcome(AddLiveStreamWatermarkResult(outcome.result()));
	else
		return AddLiveStreamWatermarkOutcome(outcome.error());
}

void LiveClient::addLiveStreamWatermarkAsync(const AddLiveStreamWatermarkRequest& request, const AddLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveStreamWatermarkOutcomeCallable LiveClient::addLiveStreamWatermarkCallable(const AddLiveStreamWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamWatermarkOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddLiveStreamWatermarkRuleOutcome LiveClient::addLiveStreamWatermarkRule(const AddLiveStreamWatermarkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddLiveStreamWatermarkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddLiveStreamWatermarkRuleOutcome(AddLiveStreamWatermarkRuleResult(outcome.result()));
	else
		return AddLiveStreamWatermarkRuleOutcome(outcome.error());
}

void LiveClient::addLiveStreamWatermarkRuleAsync(const AddLiveStreamWatermarkRuleRequest& request, const AddLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addLiveStreamWatermarkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddLiveStreamWatermarkRuleOutcomeCallable LiveClient::addLiveStreamWatermarkRuleCallable(const AddLiveStreamWatermarkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddLiveStreamWatermarkRuleOutcome()>>(
			[this, request]()
			{
			return this->addLiveStreamWatermarkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddPlaylistItemsOutcome LiveClient::addPlaylistItems(const AddPlaylistItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPlaylistItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPlaylistItemsOutcome(AddPlaylistItemsResult(outcome.result()));
	else
		return AddPlaylistItemsOutcome(outcome.error());
}

void LiveClient::addPlaylistItemsAsync(const AddPlaylistItemsRequest& request, const AddPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPlaylistItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddPlaylistItemsOutcomeCallable LiveClient::addPlaylistItemsCallable(const AddPlaylistItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPlaylistItemsOutcome()>>(
			[this, request]()
			{
			return this->addPlaylistItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddRtsLiveStreamTranscodeOutcome LiveClient::addRtsLiveStreamTranscode(const AddRtsLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRtsLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRtsLiveStreamTranscodeOutcome(AddRtsLiveStreamTranscodeResult(outcome.result()));
	else
		return AddRtsLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::addRtsLiveStreamTranscodeAsync(const AddRtsLiveStreamTranscodeRequest& request, const AddRtsLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRtsLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddRtsLiveStreamTranscodeOutcomeCallable LiveClient::addRtsLiveStreamTranscodeCallable(const AddRtsLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRtsLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->addRtsLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddShowIntoShowListOutcome LiveClient::addShowIntoShowList(const AddShowIntoShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddShowIntoShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddShowIntoShowListOutcome(AddShowIntoShowListResult(outcome.result()));
	else
		return AddShowIntoShowListOutcome(outcome.error());
}

void LiveClient::addShowIntoShowListAsync(const AddShowIntoShowListRequest& request, const AddShowIntoShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addShowIntoShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddShowIntoShowListOutcomeCallable LiveClient::addShowIntoShowListCallable(const AddShowIntoShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddShowIntoShowListOutcome()>>(
			[this, request]()
			{
			return this->addShowIntoShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddStudioLayoutOutcome LiveClient::addStudioLayout(const AddStudioLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddStudioLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddStudioLayoutOutcome(AddStudioLayoutResult(outcome.result()));
	else
		return AddStudioLayoutOutcome(outcome.error());
}

void LiveClient::addStudioLayoutAsync(const AddStudioLayoutRequest& request, const AddStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addStudioLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddStudioLayoutOutcomeCallable LiveClient::addStudioLayoutCallable(const AddStudioLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddStudioLayoutOutcome()>>(
			[this, request]()
			{
			return this->addStudioLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::AddTrancodeSEIOutcome LiveClient::addTrancodeSEI(const AddTrancodeSEIRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddTrancodeSEIOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddTrancodeSEIOutcome(AddTrancodeSEIResult(outcome.result()));
	else
		return AddTrancodeSEIOutcome(outcome.error());
}

void LiveClient::addTrancodeSEIAsync(const AddTrancodeSEIRequest& request, const AddTrancodeSEIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addTrancodeSEI(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::AddTrancodeSEIOutcomeCallable LiveClient::addTrancodeSEICallable(const AddTrancodeSEIRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddTrancodeSEIOutcome()>>(
			[this, request]()
			{
			return this->addTrancodeSEI(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::BanLiveMessageGroupOutcome LiveClient::banLiveMessageGroup(const BanLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BanLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BanLiveMessageGroupOutcome(BanLiveMessageGroupResult(outcome.result()));
	else
		return BanLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::banLiveMessageGroupAsync(const BanLiveMessageGroupRequest& request, const BanLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, banLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::BanLiveMessageGroupOutcomeCallable LiveClient::banLiveMessageGroupCallable(const BanLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BanLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->banLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::BatchDeleteLiveDomainConfigsOutcome LiveClient::batchDeleteLiveDomainConfigs(const BatchDeleteLiveDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteLiveDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteLiveDomainConfigsOutcome(BatchDeleteLiveDomainConfigsResult(outcome.result()));
	else
		return BatchDeleteLiveDomainConfigsOutcome(outcome.error());
}

void LiveClient::batchDeleteLiveDomainConfigsAsync(const BatchDeleteLiveDomainConfigsRequest& request, const BatchDeleteLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteLiveDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::BatchDeleteLiveDomainConfigsOutcomeCallable LiveClient::batchDeleteLiveDomainConfigsCallable(const BatchDeleteLiveDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteLiveDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteLiveDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::BatchGetOnlineUsersOutcome LiveClient::batchGetOnlineUsers(const BatchGetOnlineUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchGetOnlineUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchGetOnlineUsersOutcome(BatchGetOnlineUsersResult(outcome.result()));
	else
		return BatchGetOnlineUsersOutcome(outcome.error());
}

void LiveClient::batchGetOnlineUsersAsync(const BatchGetOnlineUsersRequest& request, const BatchGetOnlineUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchGetOnlineUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::BatchGetOnlineUsersOutcomeCallable LiveClient::batchGetOnlineUsersCallable(const BatchGetOnlineUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchGetOnlineUsersOutcome()>>(
			[this, request]()
			{
			return this->batchGetOnlineUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::BatchSetLiveDomainConfigsOutcome LiveClient::batchSetLiveDomainConfigs(const BatchSetLiveDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchSetLiveDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchSetLiveDomainConfigsOutcome(BatchSetLiveDomainConfigsResult(outcome.result()));
	else
		return BatchSetLiveDomainConfigsOutcome(outcome.error());
}

void LiveClient::batchSetLiveDomainConfigsAsync(const BatchSetLiveDomainConfigsRequest& request, const BatchSetLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchSetLiveDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::BatchSetLiveDomainConfigsOutcomeCallable LiveClient::batchSetLiveDomainConfigsCallable(const BatchSetLiveDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchSetLiveDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->batchSetLiveDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CancelMuteAllGroupUserOutcome LiveClient::cancelMuteAllGroupUser(const CancelMuteAllGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelMuteAllGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelMuteAllGroupUserOutcome(CancelMuteAllGroupUserResult(outcome.result()));
	else
		return CancelMuteAllGroupUserOutcome(outcome.error());
}

void LiveClient::cancelMuteAllGroupUserAsync(const CancelMuteAllGroupUserRequest& request, const CancelMuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelMuteAllGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CancelMuteAllGroupUserOutcomeCallable LiveClient::cancelMuteAllGroupUserCallable(const CancelMuteAllGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelMuteAllGroupUserOutcome()>>(
			[this, request]()
			{
			return this->cancelMuteAllGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CancelMuteGroupUserOutcome LiveClient::cancelMuteGroupUser(const CancelMuteGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelMuteGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelMuteGroupUserOutcome(CancelMuteGroupUserResult(outcome.result()));
	else
		return CancelMuteGroupUserOutcome(outcome.error());
}

void LiveClient::cancelMuteGroupUserAsync(const CancelMuteGroupUserRequest& request, const CancelMuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelMuteGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CancelMuteGroupUserOutcomeCallable LiveClient::cancelMuteGroupUserCallable(const CancelMuteGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelMuteGroupUserOutcome()>>(
			[this, request]()
			{
			return this->cancelMuteGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ChangeLiveDomainResourceGroupOutcome LiveClient::changeLiveDomainResourceGroup(const ChangeLiveDomainResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ChangeLiveDomainResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ChangeLiveDomainResourceGroupOutcome(ChangeLiveDomainResourceGroupResult(outcome.result()));
	else
		return ChangeLiveDomainResourceGroupOutcome(outcome.error());
}

void LiveClient::changeLiveDomainResourceGroupAsync(const ChangeLiveDomainResourceGroupRequest& request, const ChangeLiveDomainResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, changeLiveDomainResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ChangeLiveDomainResourceGroupOutcomeCallable LiveClient::changeLiveDomainResourceGroupCallable(const ChangeLiveDomainResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ChangeLiveDomainResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->changeLiveDomainResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CheckLiveMessageUsersInGroupOutcome LiveClient::checkLiveMessageUsersInGroup(const CheckLiveMessageUsersInGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckLiveMessageUsersInGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckLiveMessageUsersInGroupOutcome(CheckLiveMessageUsersInGroupResult(outcome.result()));
	else
		return CheckLiveMessageUsersInGroupOutcome(outcome.error());
}

void LiveClient::checkLiveMessageUsersInGroupAsync(const CheckLiveMessageUsersInGroupRequest& request, const CheckLiveMessageUsersInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkLiveMessageUsersInGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CheckLiveMessageUsersInGroupOutcomeCallable LiveClient::checkLiveMessageUsersInGroupCallable(const CheckLiveMessageUsersInGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckLiveMessageUsersInGroupOutcome()>>(
			[this, request]()
			{
			return this->checkLiveMessageUsersInGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CheckLiveMessageUsersOnlineOutcome LiveClient::checkLiveMessageUsersOnline(const CheckLiveMessageUsersOnlineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckLiveMessageUsersOnlineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckLiveMessageUsersOnlineOutcome(CheckLiveMessageUsersOnlineResult(outcome.result()));
	else
		return CheckLiveMessageUsersOnlineOutcome(outcome.error());
}

void LiveClient::checkLiveMessageUsersOnlineAsync(const CheckLiveMessageUsersOnlineRequest& request, const CheckLiveMessageUsersOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkLiveMessageUsersOnline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CheckLiveMessageUsersOnlineOutcomeCallable LiveClient::checkLiveMessageUsersOnlineCallable(const CheckLiveMessageUsersOnlineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckLiveMessageUsersOnlineOutcome()>>(
			[this, request]()
			{
			return this->checkLiveMessageUsersOnline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CloseLiveShiftOutcome LiveClient::closeLiveShift(const CloseLiveShiftRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CloseLiveShiftOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CloseLiveShiftOutcome(CloseLiveShiftResult(outcome.result()));
	else
		return CloseLiveShiftOutcome(outcome.error());
}

void LiveClient::closeLiveShiftAsync(const CloseLiveShiftRequest& request, const CloseLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, closeLiveShift(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CloseLiveShiftOutcomeCallable LiveClient::closeLiveShiftCallable(const CloseLiveShiftRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CloseLiveShiftOutcome()>>(
			[this, request]()
			{
			return this->closeLiveShift(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CopyCasterOutcome LiveClient::copyCaster(const CopyCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyCasterOutcome(CopyCasterResult(outcome.result()));
	else
		return CopyCasterOutcome(outcome.error());
}

void LiveClient::copyCasterAsync(const CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CopyCasterOutcomeCallable LiveClient::copyCasterCallable(const CopyCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyCasterOutcome()>>(
			[this, request]()
			{
			return this->copyCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CopyCasterSceneConfigOutcome LiveClient::copyCasterSceneConfig(const CopyCasterSceneConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CopyCasterSceneConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CopyCasterSceneConfigOutcome(CopyCasterSceneConfigResult(outcome.result()));
	else
		return CopyCasterSceneConfigOutcome(outcome.error());
}

void LiveClient::copyCasterSceneConfigAsync(const CopyCasterSceneConfigRequest& request, const CopyCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, copyCasterSceneConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CopyCasterSceneConfigOutcomeCallable LiveClient::copyCasterSceneConfigCallable(const CopyCasterSceneConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CopyCasterSceneConfigOutcome()>>(
			[this, request]()
			{
			return this->copyCasterSceneConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateCasterOutcome LiveClient::createCaster(const CreateCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCasterOutcome(CreateCasterResult(outcome.result()));
	else
		return CreateCasterOutcome(outcome.error());
}

void LiveClient::createCasterAsync(const CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateCasterOutcomeCallable LiveClient::createCasterCallable(const CreateCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCasterOutcome()>>(
			[this, request]()
			{
			return this->createCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateCustomTemplateOutcome LiveClient::createCustomTemplate(const CreateCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomTemplateOutcome(CreateCustomTemplateResult(outcome.result()));
	else
		return CreateCustomTemplateOutcome(outcome.error());
}

void LiveClient::createCustomTemplateAsync(const CreateCustomTemplateRequest& request, const CreateCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateCustomTemplateOutcomeCallable LiveClient::createCustomTemplateCallable(const CreateCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->createCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateEdgeTranscodeJobOutcome LiveClient::createEdgeTranscodeJob(const CreateEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEdgeTranscodeJobOutcome(CreateEdgeTranscodeJobResult(outcome.result()));
	else
		return CreateEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::createEdgeTranscodeJobAsync(const CreateEdgeTranscodeJobRequest& request, const CreateEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateEdgeTranscodeJobOutcomeCallable LiveClient::createEdgeTranscodeJobCallable(const CreateEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->createEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateEventSubOutcome LiveClient::createEventSub(const CreateEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventSubOutcome(CreateEventSubResult(outcome.result()));
	else
		return CreateEventSubOutcome(outcome.error());
}

void LiveClient::createEventSubAsync(const CreateEventSubRequest& request, const CreateEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateEventSubOutcomeCallable LiveClient::createEventSubCallable(const CreateEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventSubOutcome()>>(
			[this, request]()
			{
			return this->createEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveAIStudioOutcome LiveClient::createLiveAIStudio(const CreateLiveAIStudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveAIStudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveAIStudioOutcome(CreateLiveAIStudioResult(outcome.result()));
	else
		return CreateLiveAIStudioOutcome(outcome.error());
}

void LiveClient::createLiveAIStudioAsync(const CreateLiveAIStudioRequest& request, const CreateLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveAIStudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveAIStudioOutcomeCallable LiveClient::createLiveAIStudioCallable(const CreateLiveAIStudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveAIStudioOutcome()>>(
			[this, request]()
			{
			return this->createLiveAIStudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveDelayConfigOutcome LiveClient::createLiveDelayConfig(const CreateLiveDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveDelayConfigOutcome(CreateLiveDelayConfigResult(outcome.result()));
	else
		return CreateLiveDelayConfigOutcome(outcome.error());
}

void LiveClient::createLiveDelayConfigAsync(const CreateLiveDelayConfigRequest& request, const CreateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveDelayConfigOutcomeCallable LiveClient::createLiveDelayConfigCallable(const CreateLiveDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->createLiveDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveMessageAppOutcome LiveClient::createLiveMessageApp(const CreateLiveMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveMessageAppOutcome(CreateLiveMessageAppResult(outcome.result()));
	else
		return CreateLiveMessageAppOutcome(outcome.error());
}

void LiveClient::createLiveMessageAppAsync(const CreateLiveMessageAppRequest& request, const CreateLiveMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveMessageAppOutcomeCallable LiveClient::createLiveMessageAppCallable(const CreateLiveMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveMessageAppOutcome()>>(
			[this, request]()
			{
			return this->createLiveMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveMessageGroupOutcome LiveClient::createLiveMessageGroup(const CreateLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveMessageGroupOutcome(CreateLiveMessageGroupResult(outcome.result()));
	else
		return CreateLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::createLiveMessageGroupAsync(const CreateLiveMessageGroupRequest& request, const CreateLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveMessageGroupOutcomeCallable LiveClient::createLiveMessageGroupCallable(const CreateLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->createLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLivePrivateLineOutcome LiveClient::createLivePrivateLine(const CreateLivePrivateLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLivePrivateLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLivePrivateLineOutcome(CreateLivePrivateLineResult(outcome.result()));
	else
		return CreateLivePrivateLineOutcome(outcome.error());
}

void LiveClient::createLivePrivateLineAsync(const CreateLivePrivateLineRequest& request, const CreateLivePrivateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLivePrivateLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLivePrivateLineOutcomeCallable LiveClient::createLivePrivateLineCallable(const CreateLivePrivateLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLivePrivateLineOutcome()>>(
			[this, request]()
			{
			return this->createLivePrivateLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLivePullToPushOutcome LiveClient::createLivePullToPush(const CreateLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLivePullToPushOutcome(CreateLivePullToPushResult(outcome.result()));
	else
		return CreateLivePullToPushOutcome(outcome.error());
}

void LiveClient::createLivePullToPushAsync(const CreateLivePullToPushRequest& request, const CreateLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLivePullToPushOutcomeCallable LiveClient::createLivePullToPushCallable(const CreateLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->createLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveRealTimeLogDeliveryOutcome LiveClient::createLiveRealTimeLogDelivery(const CreateLiveRealTimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveRealTimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveRealTimeLogDeliveryOutcome(CreateLiveRealTimeLogDeliveryResult(outcome.result()));
	else
		return CreateLiveRealTimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::createLiveRealTimeLogDeliveryAsync(const CreateLiveRealTimeLogDeliveryRequest& request, const CreateLiveRealTimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveRealTimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveRealTimeLogDeliveryOutcomeCallable LiveClient::createLiveRealTimeLogDeliveryCallable(const CreateLiveRealTimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveRealTimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->createLiveRealTimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveStreamMonitorOutcome LiveClient::createLiveStreamMonitor(const CreateLiveStreamMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveStreamMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveStreamMonitorOutcome(CreateLiveStreamMonitorResult(outcome.result()));
	else
		return CreateLiveStreamMonitorOutcome(outcome.error());
}

void LiveClient::createLiveStreamMonitorAsync(const CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveStreamMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveStreamMonitorOutcomeCallable LiveClient::createLiveStreamMonitorCallable(const CreateLiveStreamMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveStreamMonitorOutcome()>>(
			[this, request]()
			{
			return this->createLiveStreamMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateLiveStreamRecordIndexFilesOutcome LiveClient::createLiveStreamRecordIndexFiles(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLiveStreamRecordIndexFilesOutcome(CreateLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return CreateLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void LiveClient::createLiveStreamRecordIndexFilesAsync(const CreateLiveStreamRecordIndexFilesRequest& request, const CreateLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateLiveStreamRecordIndexFilesOutcomeCallable LiveClient::createLiveStreamRecordIndexFilesCallable(const CreateLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->createLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateMessageAppOutcome LiveClient::createMessageApp(const CreateMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMessageAppOutcome(CreateMessageAppResult(outcome.result()));
	else
		return CreateMessageAppOutcome(outcome.error());
}

void LiveClient::createMessageAppAsync(const CreateMessageAppRequest& request, const CreateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateMessageAppOutcomeCallable LiveClient::createMessageAppCallable(const CreateMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMessageAppOutcome()>>(
			[this, request]()
			{
			return this->createMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateMessageGroupOutcome LiveClient::createMessageGroup(const CreateMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMessageGroupOutcome(CreateMessageGroupResult(outcome.result()));
	else
		return CreateMessageGroupOutcome(outcome.error());
}

void LiveClient::createMessageGroupAsync(const CreateMessageGroupRequest& request, const CreateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateMessageGroupOutcomeCallable LiveClient::createMessageGroupCallable(const CreateMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->createMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateMixStreamOutcome LiveClient::createMixStream(const CreateMixStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMixStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMixStreamOutcome(CreateMixStreamResult(outcome.result()));
	else
		return CreateMixStreamOutcome(outcome.error());
}

void LiveClient::createMixStreamAsync(const CreateMixStreamRequest& request, const CreateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMixStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateMixStreamOutcomeCallable LiveClient::createMixStreamCallable(const CreateMixStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMixStreamOutcome()>>(
			[this, request]()
			{
			return this->createMixStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateRTCWhipStreamAddressOutcome LiveClient::createRTCWhipStreamAddress(const CreateRTCWhipStreamAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRTCWhipStreamAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRTCWhipStreamAddressOutcome(CreateRTCWhipStreamAddressResult(outcome.result()));
	else
		return CreateRTCWhipStreamAddressOutcome(outcome.error());
}

void LiveClient::createRTCWhipStreamAddressAsync(const CreateRTCWhipStreamAddressRequest& request, const CreateRTCWhipStreamAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRTCWhipStreamAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateRTCWhipStreamAddressOutcomeCallable LiveClient::createRTCWhipStreamAddressCallable(const CreateRTCWhipStreamAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRTCWhipStreamAddressOutcome()>>(
			[this, request]()
			{
			return this->createRTCWhipStreamAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateRoomRealTimeStreamAddressOutcome LiveClient::createRoomRealTimeStreamAddress(const CreateRoomRealTimeStreamAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRoomRealTimeStreamAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRoomRealTimeStreamAddressOutcome(CreateRoomRealTimeStreamAddressResult(outcome.result()));
	else
		return CreateRoomRealTimeStreamAddressOutcome(outcome.error());
}

void LiveClient::createRoomRealTimeStreamAddressAsync(const CreateRoomRealTimeStreamAddressRequest& request, const CreateRoomRealTimeStreamAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRoomRealTimeStreamAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateRoomRealTimeStreamAddressOutcomeCallable LiveClient::createRoomRealTimeStreamAddressCallable(const CreateRoomRealTimeStreamAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRoomRealTimeStreamAddressOutcome()>>(
			[this, request]()
			{
			return this->createRoomRealTimeStreamAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateRtcAsrTaskOutcome LiveClient::createRtcAsrTask(const CreateRtcAsrTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRtcAsrTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRtcAsrTaskOutcome(CreateRtcAsrTaskResult(outcome.result()));
	else
		return CreateRtcAsrTaskOutcome(outcome.error());
}

void LiveClient::createRtcAsrTaskAsync(const CreateRtcAsrTaskRequest& request, const CreateRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRtcAsrTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateRtcAsrTaskOutcomeCallable LiveClient::createRtcAsrTaskCallable(const CreateRtcAsrTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRtcAsrTaskOutcome()>>(
			[this, request]()
			{
			return this->createRtcAsrTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::CreateRtcMPUEventSubOutcome LiveClient::createRtcMPUEventSub(const CreateRtcMPUEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRtcMPUEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRtcMPUEventSubOutcome(CreateRtcMPUEventSubResult(outcome.result()));
	else
		return CreateRtcMPUEventSubOutcome(outcome.error());
}

void LiveClient::createRtcMPUEventSubAsync(const CreateRtcMPUEventSubRequest& request, const CreateRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRtcMPUEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::CreateRtcMPUEventSubOutcomeCallable LiveClient::createRtcMPUEventSubCallable(const CreateRtcMPUEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRtcMPUEventSubOutcome()>>(
			[this, request]()
			{
			return this->createRtcMPUEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterOutcome LiveClient::deleteCaster(const DeleteCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterOutcome(DeleteCasterResult(outcome.result()));
	else
		return DeleteCasterOutcome(outcome.error());
}

void LiveClient::deleteCasterAsync(const DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterOutcomeCallable LiveClient::deleteCasterCallable(const DeleteCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterOutcome()>>(
			[this, request]()
			{
			return this->deleteCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterComponentOutcome LiveClient::deleteCasterComponent(const DeleteCasterComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterComponentOutcome(DeleteCasterComponentResult(outcome.result()));
	else
		return DeleteCasterComponentOutcome(outcome.error());
}

void LiveClient::deleteCasterComponentAsync(const DeleteCasterComponentRequest& request, const DeleteCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterComponentOutcomeCallable LiveClient::deleteCasterComponentCallable(const DeleteCasterComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterComponentOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterEpisodeOutcome LiveClient::deleteCasterEpisode(const DeleteCasterEpisodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterEpisodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterEpisodeOutcome(DeleteCasterEpisodeResult(outcome.result()));
	else
		return DeleteCasterEpisodeOutcome(outcome.error());
}

void LiveClient::deleteCasterEpisodeAsync(const DeleteCasterEpisodeRequest& request, const DeleteCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterEpisode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterEpisodeOutcomeCallable LiveClient::deleteCasterEpisodeCallable(const DeleteCasterEpisodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterEpisodeOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterEpisode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterEpisodeGroupOutcome LiveClient::deleteCasterEpisodeGroup(const DeleteCasterEpisodeGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterEpisodeGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterEpisodeGroupOutcome(DeleteCasterEpisodeGroupResult(outcome.result()));
	else
		return DeleteCasterEpisodeGroupOutcome(outcome.error());
}

void LiveClient::deleteCasterEpisodeGroupAsync(const DeleteCasterEpisodeGroupRequest& request, const DeleteCasterEpisodeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterEpisodeGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterEpisodeGroupOutcomeCallable LiveClient::deleteCasterEpisodeGroupCallable(const DeleteCasterEpisodeGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterEpisodeGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterEpisodeGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterLayoutOutcome LiveClient::deleteCasterLayout(const DeleteCasterLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterLayoutOutcome(DeleteCasterLayoutResult(outcome.result()));
	else
		return DeleteCasterLayoutOutcome(outcome.error());
}

void LiveClient::deleteCasterLayoutAsync(const DeleteCasterLayoutRequest& request, const DeleteCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterLayoutOutcomeCallable LiveClient::deleteCasterLayoutCallable(const DeleteCasterLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterLayoutOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterProgramOutcome LiveClient::deleteCasterProgram(const DeleteCasterProgramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterProgramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterProgramOutcome(DeleteCasterProgramResult(outcome.result()));
	else
		return DeleteCasterProgramOutcome(outcome.error());
}

void LiveClient::deleteCasterProgramAsync(const DeleteCasterProgramRequest& request, const DeleteCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterProgramOutcomeCallable LiveClient::deleteCasterProgramCallable(const DeleteCasterProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterProgramOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterSceneConfigOutcome LiveClient::deleteCasterSceneConfig(const DeleteCasterSceneConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterSceneConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterSceneConfigOutcome(DeleteCasterSceneConfigResult(outcome.result()));
	else
		return DeleteCasterSceneConfigOutcome(outcome.error());
}

void LiveClient::deleteCasterSceneConfigAsync(const DeleteCasterSceneConfigRequest& request, const DeleteCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterSceneConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterSceneConfigOutcomeCallable LiveClient::deleteCasterSceneConfigCallable(const DeleteCasterSceneConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterSceneConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterSceneConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCasterVideoResourceOutcome LiveClient::deleteCasterVideoResource(const DeleteCasterVideoResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCasterVideoResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCasterVideoResourceOutcome(DeleteCasterVideoResourceResult(outcome.result()));
	else
		return DeleteCasterVideoResourceOutcome(outcome.error());
}

void LiveClient::deleteCasterVideoResourceAsync(const DeleteCasterVideoResourceRequest& request, const DeleteCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCasterVideoResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCasterVideoResourceOutcomeCallable LiveClient::deleteCasterVideoResourceCallable(const DeleteCasterVideoResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCasterVideoResourceOutcome()>>(
			[this, request]()
			{
			return this->deleteCasterVideoResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteChannelOutcome LiveClient::deleteChannel(const DeleteChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteChannelOutcome(DeleteChannelResult(outcome.result()));
	else
		return DeleteChannelOutcome(outcome.error());
}

void LiveClient::deleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteChannelOutcomeCallable LiveClient::deleteChannelCallable(const DeleteChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteChannelOutcome()>>(
			[this, request]()
			{
			return this->deleteChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteCustomTemplateOutcome LiveClient::deleteCustomTemplate(const DeleteCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomTemplateOutcome(DeleteCustomTemplateResult(outcome.result()));
	else
		return DeleteCustomTemplateOutcome(outcome.error());
}

void LiveClient::deleteCustomTemplateAsync(const DeleteCustomTemplateRequest& request, const DeleteCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteCustomTemplateOutcomeCallable LiveClient::deleteCustomTemplateCallable(const DeleteCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteEdgeTranscodeJobOutcome LiveClient::deleteEdgeTranscodeJob(const DeleteEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEdgeTranscodeJobOutcome(DeleteEdgeTranscodeJobResult(outcome.result()));
	else
		return DeleteEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::deleteEdgeTranscodeJobAsync(const DeleteEdgeTranscodeJobRequest& request, const DeleteEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteEdgeTranscodeJobOutcomeCallable LiveClient::deleteEdgeTranscodeJobCallable(const DeleteEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->deleteEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteEventSubOutcome LiveClient::deleteEventSub(const DeleteEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventSubOutcome(DeleteEventSubResult(outcome.result()));
	else
		return DeleteEventSubOutcome(outcome.error());
}

void LiveClient::deleteEventSubAsync(const DeleteEventSubRequest& request, const DeleteEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteEventSubOutcomeCallable LiveClient::deleteEventSubCallable(const DeleteEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventSubOutcome()>>(
			[this, request]()
			{
			return this->deleteEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAIProduceRulesOutcome LiveClient::deleteLiveAIProduceRules(const DeleteLiveAIProduceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAIProduceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAIProduceRulesOutcome(DeleteLiveAIProduceRulesResult(outcome.result()));
	else
		return DeleteLiveAIProduceRulesOutcome(outcome.error());
}

void LiveClient::deleteLiveAIProduceRulesAsync(const DeleteLiveAIProduceRulesRequest& request, const DeleteLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAIProduceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAIProduceRulesOutcomeCallable LiveClient::deleteLiveAIProduceRulesCallable(const DeleteLiveAIProduceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAIProduceRulesOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAIProduceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAIStudioOutcome LiveClient::deleteLiveAIStudio(const DeleteLiveAIStudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAIStudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAIStudioOutcome(DeleteLiveAIStudioResult(outcome.result()));
	else
		return DeleteLiveAIStudioOutcome(outcome.error());
}

void LiveClient::deleteLiveAIStudioAsync(const DeleteLiveAIStudioRequest& request, const DeleteLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAIStudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAIStudioOutcomeCallable LiveClient::deleteLiveAIStudioCallable(const DeleteLiveAIStudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAIStudioOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAIStudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAISubtitleOutcome LiveClient::deleteLiveAISubtitle(const DeleteLiveAISubtitleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAISubtitleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAISubtitleOutcome(DeleteLiveAISubtitleResult(outcome.result()));
	else
		return DeleteLiveAISubtitleOutcome(outcome.error());
}

void LiveClient::deleteLiveAISubtitleAsync(const DeleteLiveAISubtitleRequest& request, const DeleteLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAISubtitle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAISubtitleOutcomeCallable LiveClient::deleteLiveAISubtitleCallable(const DeleteLiveAISubtitleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAISubtitleOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAISubtitle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAppRecordConfigOutcome LiveClient::deleteLiveAppRecordConfig(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppRecordConfigOutcome(DeleteLiveAppRecordConfigResult(outcome.result()));
	else
		return DeleteLiveAppRecordConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveAppRecordConfigAsync(const DeleteLiveAppRecordConfigRequest& request, const DeleteLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAppRecordConfigOutcomeCallable LiveClient::deleteLiveAppRecordConfigCallable(const DeleteLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAppSnapshotConfigOutcome LiveClient::deleteLiveAppSnapshotConfig(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAppSnapshotConfigOutcome(DeleteLiveAppSnapshotConfigResult(outcome.result()));
	else
		return DeleteLiveAppSnapshotConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveAppSnapshotConfigAsync(const DeleteLiveAppSnapshotConfigRequest& request, const DeleteLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAppSnapshotConfigOutcomeCallable LiveClient::deleteLiveAppSnapshotConfigCallable(const DeleteLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAudioAuditConfigOutcome LiveClient::deleteLiveAudioAuditConfig(const DeleteLiveAudioAuditConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAudioAuditConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAudioAuditConfigOutcome(DeleteLiveAudioAuditConfigResult(outcome.result()));
	else
		return DeleteLiveAudioAuditConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveAudioAuditConfigAsync(const DeleteLiveAudioAuditConfigRequest& request, const DeleteLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAudioAuditConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAudioAuditConfigOutcomeCallable LiveClient::deleteLiveAudioAuditConfigCallable(const DeleteLiveAudioAuditConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAudioAuditConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAudioAuditConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveAudioAuditNotifyConfigOutcome LiveClient::deleteLiveAudioAuditNotifyConfig(const DeleteLiveAudioAuditNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveAudioAuditNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveAudioAuditNotifyConfigOutcome(DeleteLiveAudioAuditNotifyConfigResult(outcome.result()));
	else
		return DeleteLiveAudioAuditNotifyConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveAudioAuditNotifyConfigAsync(const DeleteLiveAudioAuditNotifyConfigRequest& request, const DeleteLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveAudioAuditNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveAudioAuditNotifyConfigOutcomeCallable LiveClient::deleteLiveAudioAuditNotifyConfigCallable(const DeleteLiveAudioAuditNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveAudioAuditNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveAudioAuditNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveCenterTransferOutcome LiveClient::deleteLiveCenterTransfer(const DeleteLiveCenterTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveCenterTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveCenterTransferOutcome(DeleteLiveCenterTransferResult(outcome.result()));
	else
		return DeleteLiveCenterTransferOutcome(outcome.error());
}

void LiveClient::deleteLiveCenterTransferAsync(const DeleteLiveCenterTransferRequest& request, const DeleteLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveCenterTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveCenterTransferOutcomeCallable LiveClient::deleteLiveCenterTransferCallable(const DeleteLiveCenterTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveCenterTransferOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveCenterTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveDelayConfigOutcome LiveClient::deleteLiveDelayConfig(const DeleteLiveDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDelayConfigOutcome(DeleteLiveDelayConfigResult(outcome.result()));
	else
		return DeleteLiveDelayConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveDelayConfigAsync(const DeleteLiveDelayConfigRequest& request, const DeleteLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveDelayConfigOutcomeCallable LiveClient::deleteLiveDelayConfigCallable(const DeleteLiveDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveDetectNotifyConfigOutcome LiveClient::deleteLiveDetectNotifyConfig(const DeleteLiveDetectNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDetectNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDetectNotifyConfigOutcome(DeleteLiveDetectNotifyConfigResult(outcome.result()));
	else
		return DeleteLiveDetectNotifyConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveDetectNotifyConfigAsync(const DeleteLiveDetectNotifyConfigRequest& request, const DeleteLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDetectNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveDetectNotifyConfigOutcomeCallable LiveClient::deleteLiveDetectNotifyConfigCallable(const DeleteLiveDetectNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDetectNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDetectNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveDomainOutcome LiveClient::deleteLiveDomain(const DeleteLiveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDomainOutcome(DeleteLiveDomainResult(outcome.result()));
	else
		return DeleteLiveDomainOutcome(outcome.error());
}

void LiveClient::deleteLiveDomainAsync(const DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveDomainOutcomeCallable LiveClient::deleteLiveDomainCallable(const DeleteLiveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDomainOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveDomainMappingOutcome LiveClient::deleteLiveDomainMapping(const DeleteLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDomainMappingOutcome(DeleteLiveDomainMappingResult(outcome.result()));
	else
		return DeleteLiveDomainMappingOutcome(outcome.error());
}

void LiveClient::deleteLiveDomainMappingAsync(const DeleteLiveDomainMappingRequest& request, const DeleteLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveDomainMappingOutcomeCallable LiveClient::deleteLiveDomainMappingCallable(const DeleteLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveDomainPlayMappingOutcome LiveClient::deleteLiveDomainPlayMapping(const DeleteLiveDomainPlayMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveDomainPlayMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveDomainPlayMappingOutcome(DeleteLiveDomainPlayMappingResult(outcome.result()));
	else
		return DeleteLiveDomainPlayMappingOutcome(outcome.error());
}

void LiveClient::deleteLiveDomainPlayMappingAsync(const DeleteLiveDomainPlayMappingRequest& request, const DeleteLiveDomainPlayMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveDomainPlayMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveDomainPlayMappingOutcomeCallable LiveClient::deleteLiveDomainPlayMappingCallable(const DeleteLiveDomainPlayMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveDomainPlayMappingOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveDomainPlayMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveEdgeTransferOutcome LiveClient::deleteLiveEdgeTransfer(const DeleteLiveEdgeTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveEdgeTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveEdgeTransferOutcome(DeleteLiveEdgeTransferResult(outcome.result()));
	else
		return DeleteLiveEdgeTransferOutcome(outcome.error());
}

void LiveClient::deleteLiveEdgeTransferAsync(const DeleteLiveEdgeTransferRequest& request, const DeleteLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveEdgeTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveEdgeTransferOutcomeCallable LiveClient::deleteLiveEdgeTransferCallable(const DeleteLiveEdgeTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveEdgeTransferOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveEdgeTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveLazyPullStreamInfoConfigOutcome LiveClient::deleteLiveLazyPullStreamInfoConfig(const DeleteLiveLazyPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveLazyPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveLazyPullStreamInfoConfigOutcome(DeleteLiveLazyPullStreamInfoConfigResult(outcome.result()));
	else
		return DeleteLiveLazyPullStreamInfoConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveLazyPullStreamInfoConfigAsync(const DeleteLiveLazyPullStreamInfoConfigRequest& request, const DeleteLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveLazyPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveLazyPullStreamInfoConfigOutcomeCallable LiveClient::deleteLiveLazyPullStreamInfoConfigCallable(const DeleteLiveLazyPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveLazyPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveLazyPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveMessageGroupOutcome LiveClient::deleteLiveMessageGroup(const DeleteLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveMessageGroupOutcome(DeleteLiveMessageGroupResult(outcome.result()));
	else
		return DeleteLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::deleteLiveMessageGroupAsync(const DeleteLiveMessageGroupRequest& request, const DeleteLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveMessageGroupOutcomeCallable LiveClient::deleteLiveMessageGroupCallable(const DeleteLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveMessageGroupMessageOutcome LiveClient::deleteLiveMessageGroupMessage(const DeleteLiveMessageGroupMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveMessageGroupMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveMessageGroupMessageOutcome(DeleteLiveMessageGroupMessageResult(outcome.result()));
	else
		return DeleteLiveMessageGroupMessageOutcome(outcome.error());
}

void LiveClient::deleteLiveMessageGroupMessageAsync(const DeleteLiveMessageGroupMessageRequest& request, const DeleteLiveMessageGroupMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveMessageGroupMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveMessageGroupMessageOutcomeCallable LiveClient::deleteLiveMessageGroupMessageCallable(const DeleteLiveMessageGroupMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveMessageGroupMessageOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveMessageGroupMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveMessageUserMessageOutcome LiveClient::deleteLiveMessageUserMessage(const DeleteLiveMessageUserMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveMessageUserMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveMessageUserMessageOutcome(DeleteLiveMessageUserMessageResult(outcome.result()));
	else
		return DeleteLiveMessageUserMessageOutcome(outcome.error());
}

void LiveClient::deleteLiveMessageUserMessageAsync(const DeleteLiveMessageUserMessageRequest& request, const DeleteLiveMessageUserMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveMessageUserMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveMessageUserMessageOutcomeCallable LiveClient::deleteLiveMessageUserMessageCallable(const DeleteLiveMessageUserMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveMessageUserMessageOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveMessageUserMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLivePackageConfigOutcome LiveClient::deleteLivePackageConfig(const DeleteLivePackageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLivePackageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLivePackageConfigOutcome(DeleteLivePackageConfigResult(outcome.result()));
	else
		return DeleteLivePackageConfigOutcome(outcome.error());
}

void LiveClient::deleteLivePackageConfigAsync(const DeleteLivePackageConfigRequest& request, const DeleteLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLivePackageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLivePackageConfigOutcomeCallable LiveClient::deleteLivePackageConfigCallable(const DeleteLivePackageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLivePackageConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLivePackageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLivePrivateLineOutcome LiveClient::deleteLivePrivateLine(const DeleteLivePrivateLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLivePrivateLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLivePrivateLineOutcome(DeleteLivePrivateLineResult(outcome.result()));
	else
		return DeleteLivePrivateLineOutcome(outcome.error());
}

void LiveClient::deleteLivePrivateLineAsync(const DeleteLivePrivateLineRequest& request, const DeleteLivePrivateLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLivePrivateLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLivePrivateLineOutcomeCallable LiveClient::deleteLivePrivateLineCallable(const DeleteLivePrivateLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLivePrivateLineOutcome()>>(
			[this, request]()
			{
			return this->deleteLivePrivateLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLivePullStreamInfoConfigOutcome LiveClient::deleteLivePullStreamInfoConfig(const DeleteLivePullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLivePullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLivePullStreamInfoConfigOutcome(DeleteLivePullStreamInfoConfigResult(outcome.result()));
	else
		return DeleteLivePullStreamInfoConfigOutcome(outcome.error());
}

void LiveClient::deleteLivePullStreamInfoConfigAsync(const DeleteLivePullStreamInfoConfigRequest& request, const DeleteLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLivePullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLivePullStreamInfoConfigOutcomeCallable LiveClient::deleteLivePullStreamInfoConfigCallable(const DeleteLivePullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLivePullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLivePullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLivePullToPushOutcome LiveClient::deleteLivePullToPush(const DeleteLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLivePullToPushOutcome(DeleteLivePullToPushResult(outcome.result()));
	else
		return DeleteLivePullToPushOutcome(outcome.error());
}

void LiveClient::deleteLivePullToPushAsync(const DeleteLivePullToPushRequest& request, const DeleteLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLivePullToPushOutcomeCallable LiveClient::deleteLivePullToPushCallable(const DeleteLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->deleteLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveRealTimeLogLogstoreOutcome LiveClient::deleteLiveRealTimeLogLogstore(const DeleteLiveRealTimeLogLogstoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRealTimeLogLogstoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRealTimeLogLogstoreOutcome(DeleteLiveRealTimeLogLogstoreResult(outcome.result()));
	else
		return DeleteLiveRealTimeLogLogstoreOutcome(outcome.error());
}

void LiveClient::deleteLiveRealTimeLogLogstoreAsync(const DeleteLiveRealTimeLogLogstoreRequest& request, const DeleteLiveRealTimeLogLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRealTimeLogLogstore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveRealTimeLogLogstoreOutcomeCallable LiveClient::deleteLiveRealTimeLogLogstoreCallable(const DeleteLiveRealTimeLogLogstoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRealTimeLogLogstoreOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRealTimeLogLogstore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveRealtimeLogDeliveryOutcome LiveClient::deleteLiveRealtimeLogDelivery(const DeleteLiveRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRealtimeLogDeliveryOutcome(DeleteLiveRealtimeLogDeliveryResult(outcome.result()));
	else
		return DeleteLiveRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::deleteLiveRealtimeLogDeliveryAsync(const DeleteLiveRealtimeLogDeliveryRequest& request, const DeleteLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveRealtimeLogDeliveryOutcomeCallable LiveClient::deleteLiveRealtimeLogDeliveryCallable(const DeleteLiveRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveRecordNotifyConfigOutcome LiveClient::deleteLiveRecordNotifyConfig(const DeleteLiveRecordNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRecordNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRecordNotifyConfigOutcome(DeleteLiveRecordNotifyConfigResult(outcome.result()));
	else
		return DeleteLiveRecordNotifyConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveRecordNotifyConfigAsync(const DeleteLiveRecordNotifyConfigRequest& request, const DeleteLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRecordNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveRecordNotifyConfigOutcomeCallable LiveClient::deleteLiveRecordNotifyConfigCallable(const DeleteLiveRecordNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRecordNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRecordNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveRecordVodConfigOutcome LiveClient::deleteLiveRecordVodConfig(const DeleteLiveRecordVodConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveRecordVodConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveRecordVodConfigOutcome(DeleteLiveRecordVodConfigResult(outcome.result()));
	else
		return DeleteLiveRecordVodConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveRecordVodConfigAsync(const DeleteLiveRecordVodConfigRequest& request, const DeleteLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveRecordVodConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveRecordVodConfigOutcomeCallable LiveClient::deleteLiveRecordVodConfigCallable(const DeleteLiveRecordVodConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveRecordVodConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveRecordVodConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveSnapshotDetectPornConfigOutcome LiveClient::deleteLiveSnapshotDetectPornConfig(const DeleteLiveSnapshotDetectPornConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveSnapshotDetectPornConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveSnapshotDetectPornConfigOutcome(DeleteLiveSnapshotDetectPornConfigResult(outcome.result()));
	else
		return DeleteLiveSnapshotDetectPornConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveSnapshotDetectPornConfigAsync(const DeleteLiveSnapshotDetectPornConfigRequest& request, const DeleteLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveSnapshotDetectPornConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotDetectPornConfigOutcomeCallable LiveClient::deleteLiveSnapshotDetectPornConfigCallable(const DeleteLiveSnapshotDetectPornConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotDetectPornConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveSnapshotDetectPornConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveSnapshotNotifyConfigOutcome LiveClient::deleteLiveSnapshotNotifyConfig(const DeleteLiveSnapshotNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveSnapshotNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveSnapshotNotifyConfigOutcome(DeleteLiveSnapshotNotifyConfigResult(outcome.result()));
	else
		return DeleteLiveSnapshotNotifyConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveSnapshotNotifyConfigAsync(const DeleteLiveSnapshotNotifyConfigRequest& request, const DeleteLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveSnapshotNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotNotifyConfigOutcomeCallable LiveClient::deleteLiveSnapshotNotifyConfigCallable(const DeleteLiveSnapshotNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveSnapshotNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveSpecificStagingConfigOutcome LiveClient::deleteLiveSpecificStagingConfig(const DeleteLiveSpecificStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveSpecificStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveSpecificStagingConfigOutcome(DeleteLiveSpecificStagingConfigResult(outcome.result()));
	else
		return DeleteLiveSpecificStagingConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveSpecificStagingConfigAsync(const DeleteLiveSpecificStagingConfigRequest& request, const DeleteLiveSpecificStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveSpecificStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveSpecificStagingConfigOutcomeCallable LiveClient::deleteLiveSpecificStagingConfigCallable(const DeleteLiveSpecificStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveSpecificStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveSpecificStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamBlockOutcome LiveClient::deleteLiveStreamBlock(const DeleteLiveStreamBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamBlockOutcome(DeleteLiveStreamBlockResult(outcome.result()));
	else
		return DeleteLiveStreamBlockOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamBlockAsync(const DeleteLiveStreamBlockRequest& request, const DeleteLiveStreamBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamBlockOutcomeCallable LiveClient::deleteLiveStreamBlockCallable(const DeleteLiveStreamBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamBlockOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamMergeOutcome LiveClient::deleteLiveStreamMerge(const DeleteLiveStreamMergeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamMergeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamMergeOutcome(DeleteLiveStreamMergeResult(outcome.result()));
	else
		return DeleteLiveStreamMergeOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamMergeAsync(const DeleteLiveStreamMergeRequest& request, const DeleteLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamMerge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamMergeOutcomeCallable LiveClient::deleteLiveStreamMergeCallable(const DeleteLiveStreamMergeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamMergeOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamMerge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamMonitorOutcome LiveClient::deleteLiveStreamMonitor(const DeleteLiveStreamMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamMonitorOutcome(DeleteLiveStreamMonitorResult(outcome.result()));
	else
		return DeleteLiveStreamMonitorOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamMonitorAsync(const DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamMonitorOutcomeCallable LiveClient::deleteLiveStreamMonitorCallable(const DeleteLiveStreamMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamMonitorOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamRecordIndexFilesOutcome LiveClient::deleteLiveStreamRecordIndexFiles(const DeleteLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamRecordIndexFilesOutcome(DeleteLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return DeleteLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamRecordIndexFilesAsync(const DeleteLiveStreamRecordIndexFilesRequest& request, const DeleteLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamRecordIndexFilesOutcomeCallable LiveClient::deleteLiveStreamRecordIndexFilesCallable(const DeleteLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamTranscodeOutcome LiveClient::deleteLiveStreamTranscode(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamTranscodeOutcome(DeleteLiveStreamTranscodeResult(outcome.result()));
	else
		return DeleteLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamTranscodeAsync(const DeleteLiveStreamTranscodeRequest& request, const DeleteLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamTranscodeOutcomeCallable LiveClient::deleteLiveStreamTranscodeCallable(const DeleteLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamWatermarkOutcome LiveClient::deleteLiveStreamWatermark(const DeleteLiveStreamWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamWatermarkOutcome(DeleteLiveStreamWatermarkResult(outcome.result()));
	else
		return DeleteLiveStreamWatermarkOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamWatermarkAsync(const DeleteLiveStreamWatermarkRequest& request, const DeleteLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamWatermarkOutcomeCallable LiveClient::deleteLiveStreamWatermarkCallable(const DeleteLiveStreamWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamWatermarkOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamWatermarkRuleOutcome LiveClient::deleteLiveStreamWatermarkRule(const DeleteLiveStreamWatermarkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamWatermarkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamWatermarkRuleOutcome(DeleteLiveStreamWatermarkRuleResult(outcome.result()));
	else
		return DeleteLiveStreamWatermarkRuleOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamWatermarkRuleAsync(const DeleteLiveStreamWatermarkRuleRequest& request, const DeleteLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamWatermarkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamWatermarkRuleOutcomeCallable LiveClient::deleteLiveStreamWatermarkRuleCallable(const DeleteLiveStreamWatermarkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamWatermarkRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamWatermarkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteLiveStreamsNotifyUrlConfigOutcome LiveClient::deleteLiveStreamsNotifyUrlConfig(const DeleteLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteLiveStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteLiveStreamsNotifyUrlConfigOutcome(DeleteLiveStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return DeleteLiveStreamsNotifyUrlConfigOutcome(outcome.error());
}

void LiveClient::deleteLiveStreamsNotifyUrlConfigAsync(const DeleteLiveStreamsNotifyUrlConfigRequest& request, const DeleteLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteLiveStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteLiveStreamsNotifyUrlConfigOutcomeCallable LiveClient::deleteLiveStreamsNotifyUrlConfigCallable(const DeleteLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteLiveStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteLiveStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteMessageAppOutcome LiveClient::deleteMessageApp(const DeleteMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMessageAppOutcome(DeleteMessageAppResult(outcome.result()));
	else
		return DeleteMessageAppOutcome(outcome.error());
}

void LiveClient::deleteMessageAppAsync(const DeleteMessageAppRequest& request, const DeleteMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteMessageAppOutcomeCallable LiveClient::deleteMessageAppCallable(const DeleteMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMessageAppOutcome()>>(
			[this, request]()
			{
			return this->deleteMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteMixStreamOutcome LiveClient::deleteMixStream(const DeleteMixStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMixStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMixStreamOutcome(DeleteMixStreamResult(outcome.result()));
	else
		return DeleteMixStreamOutcome(outcome.error());
}

void LiveClient::deleteMixStreamAsync(const DeleteMixStreamRequest& request, const DeleteMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMixStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteMixStreamOutcomeCallable LiveClient::deleteMixStreamCallable(const DeleteMixStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMixStreamOutcome()>>(
			[this, request]()
			{
			return this->deleteMixStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeletePlaylistOutcome LiveClient::deletePlaylist(const DeletePlaylistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePlaylistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePlaylistOutcome(DeletePlaylistResult(outcome.result()));
	else
		return DeletePlaylistOutcome(outcome.error());
}

void LiveClient::deletePlaylistAsync(const DeletePlaylistRequest& request, const DeletePlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePlaylist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeletePlaylistOutcomeCallable LiveClient::deletePlaylistCallable(const DeletePlaylistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePlaylistOutcome()>>(
			[this, request]()
			{
			return this->deletePlaylist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeletePlaylistItemsOutcome LiveClient::deletePlaylistItems(const DeletePlaylistItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePlaylistItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePlaylistItemsOutcome(DeletePlaylistItemsResult(outcome.result()));
	else
		return DeletePlaylistItemsOutcome(outcome.error());
}

void LiveClient::deletePlaylistItemsAsync(const DeletePlaylistItemsRequest& request, const DeletePlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePlaylistItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeletePlaylistItemsOutcomeCallable LiveClient::deletePlaylistItemsCallable(const DeletePlaylistItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePlaylistItemsOutcome()>>(
			[this, request]()
			{
			return this->deletePlaylistItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteRtcAsrTaskOutcome LiveClient::deleteRtcAsrTask(const DeleteRtcAsrTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRtcAsrTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRtcAsrTaskOutcome(DeleteRtcAsrTaskResult(outcome.result()));
	else
		return DeleteRtcAsrTaskOutcome(outcome.error());
}

void LiveClient::deleteRtcAsrTaskAsync(const DeleteRtcAsrTaskRequest& request, const DeleteRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRtcAsrTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteRtcAsrTaskOutcomeCallable LiveClient::deleteRtcAsrTaskCallable(const DeleteRtcAsrTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRtcAsrTaskOutcome()>>(
			[this, request]()
			{
			return this->deleteRtcAsrTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteRtcMPUEventSubOutcome LiveClient::deleteRtcMPUEventSub(const DeleteRtcMPUEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRtcMPUEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRtcMPUEventSubOutcome(DeleteRtcMPUEventSubResult(outcome.result()));
	else
		return DeleteRtcMPUEventSubOutcome(outcome.error());
}

void LiveClient::deleteRtcMPUEventSubAsync(const DeleteRtcMPUEventSubRequest& request, const DeleteRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRtcMPUEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteRtcMPUEventSubOutcomeCallable LiveClient::deleteRtcMPUEventSubCallable(const DeleteRtcMPUEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRtcMPUEventSubOutcome()>>(
			[this, request]()
			{
			return this->deleteRtcMPUEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteSnapshotCallbackAuthOutcome LiveClient::deleteSnapshotCallbackAuth(const DeleteSnapshotCallbackAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotCallbackAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotCallbackAuthOutcome(DeleteSnapshotCallbackAuthResult(outcome.result()));
	else
		return DeleteSnapshotCallbackAuthOutcome(outcome.error());
}

void LiveClient::deleteSnapshotCallbackAuthAsync(const DeleteSnapshotCallbackAuthRequest& request, const DeleteSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshotCallbackAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteSnapshotCallbackAuthOutcomeCallable LiveClient::deleteSnapshotCallbackAuthCallable(const DeleteSnapshotCallbackAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotCallbackAuthOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshotCallbackAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteSnapshotFilesOutcome LiveClient::deleteSnapshotFiles(const DeleteSnapshotFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnapshotFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnapshotFilesOutcome(DeleteSnapshotFilesResult(outcome.result()));
	else
		return DeleteSnapshotFilesOutcome(outcome.error());
}

void LiveClient::deleteSnapshotFilesAsync(const DeleteSnapshotFilesRequest& request, const DeleteSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnapshotFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteSnapshotFilesOutcomeCallable LiveClient::deleteSnapshotFilesCallable(const DeleteSnapshotFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnapshotFilesOutcome()>>(
			[this, request]()
			{
			return this->deleteSnapshotFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DeleteStudioLayoutOutcome LiveClient::deleteStudioLayout(const DeleteStudioLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStudioLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStudioLayoutOutcome(DeleteStudioLayoutResult(outcome.result()));
	else
		return DeleteStudioLayoutOutcome(outcome.error());
}

void LiveClient::deleteStudioLayoutAsync(const DeleteStudioLayoutRequest& request, const DeleteStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStudioLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DeleteStudioLayoutOutcomeCallable LiveClient::deleteStudioLayoutCallable(const DeleteStudioLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStudioLayoutOutcome()>>(
			[this, request]()
			{
			return this->deleteStudioLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeAutoShowListTasksOutcome LiveClient::describeAutoShowListTasks(const DescribeAutoShowListTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoShowListTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoShowListTasksOutcome(DescribeAutoShowListTasksResult(outcome.result()));
	else
		return DescribeAutoShowListTasksOutcome(outcome.error());
}

void LiveClient::describeAutoShowListTasksAsync(const DescribeAutoShowListTasksRequest& request, const DescribeAutoShowListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoShowListTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeAutoShowListTasksOutcomeCallable LiveClient::describeAutoShowListTasksCallable(const DescribeAutoShowListTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoShowListTasksOutcome()>>(
			[this, request]()
			{
			return this->describeAutoShowListTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterChannelsOutcome LiveClient::describeCasterChannels(const DescribeCasterChannelsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterChannelsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterChannelsOutcome(DescribeCasterChannelsResult(outcome.result()));
	else
		return DescribeCasterChannelsOutcome(outcome.error());
}

void LiveClient::describeCasterChannelsAsync(const DescribeCasterChannelsRequest& request, const DescribeCasterChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterChannels(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterChannelsOutcomeCallable LiveClient::describeCasterChannelsCallable(const DescribeCasterChannelsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterChannelsOutcome()>>(
			[this, request]()
			{
			return this->describeCasterChannels(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterComponentsOutcome LiveClient::describeCasterComponents(const DescribeCasterComponentsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterComponentsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterComponentsOutcome(DescribeCasterComponentsResult(outcome.result()));
	else
		return DescribeCasterComponentsOutcome(outcome.error());
}

void LiveClient::describeCasterComponentsAsync(const DescribeCasterComponentsRequest& request, const DescribeCasterComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterComponents(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterComponentsOutcomeCallable LiveClient::describeCasterComponentsCallable(const DescribeCasterComponentsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterComponentsOutcome()>>(
			[this, request]()
			{
			return this->describeCasterComponents(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterConfigOutcome LiveClient::describeCasterConfig(const DescribeCasterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterConfigOutcome(DescribeCasterConfigResult(outcome.result()));
	else
		return DescribeCasterConfigOutcome(outcome.error());
}

void LiveClient::describeCasterConfigAsync(const DescribeCasterConfigRequest& request, const DescribeCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterConfigOutcomeCallable LiveClient::describeCasterConfigCallable(const DescribeCasterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterConfigOutcome()>>(
			[this, request]()
			{
			return this->describeCasterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterLayoutsOutcome LiveClient::describeCasterLayouts(const DescribeCasterLayoutsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterLayoutsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterLayoutsOutcome(DescribeCasterLayoutsResult(outcome.result()));
	else
		return DescribeCasterLayoutsOutcome(outcome.error());
}

void LiveClient::describeCasterLayoutsAsync(const DescribeCasterLayoutsRequest& request, const DescribeCasterLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterLayouts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterLayoutsOutcomeCallable LiveClient::describeCasterLayoutsCallable(const DescribeCasterLayoutsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterLayoutsOutcome()>>(
			[this, request]()
			{
			return this->describeCasterLayouts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterProgramOutcome LiveClient::describeCasterProgram(const DescribeCasterProgramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterProgramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterProgramOutcome(DescribeCasterProgramResult(outcome.result()));
	else
		return DescribeCasterProgramOutcome(outcome.error());
}

void LiveClient::describeCasterProgramAsync(const DescribeCasterProgramRequest& request, const DescribeCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterProgramOutcomeCallable LiveClient::describeCasterProgramCallable(const DescribeCasterProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterProgramOutcome()>>(
			[this, request]()
			{
			return this->describeCasterProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterSceneAudioOutcome LiveClient::describeCasterSceneAudio(const DescribeCasterSceneAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterSceneAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterSceneAudioOutcome(DescribeCasterSceneAudioResult(outcome.result()));
	else
		return DescribeCasterSceneAudioOutcome(outcome.error());
}

void LiveClient::describeCasterSceneAudioAsync(const DescribeCasterSceneAudioRequest& request, const DescribeCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterSceneAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterSceneAudioOutcomeCallable LiveClient::describeCasterSceneAudioCallable(const DescribeCasterSceneAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterSceneAudioOutcome()>>(
			[this, request]()
			{
			return this->describeCasterSceneAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterScenesOutcome LiveClient::describeCasterScenes(const DescribeCasterScenesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterScenesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterScenesOutcome(DescribeCasterScenesResult(outcome.result()));
	else
		return DescribeCasterScenesOutcome(outcome.error());
}

void LiveClient::describeCasterScenesAsync(const DescribeCasterScenesRequest& request, const DescribeCasterScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterScenes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterScenesOutcomeCallable LiveClient::describeCasterScenesCallable(const DescribeCasterScenesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterScenesOutcome()>>(
			[this, request]()
			{
			return this->describeCasterScenes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterStreamUrlOutcome LiveClient::describeCasterStreamUrl(const DescribeCasterStreamUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterStreamUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterStreamUrlOutcome(DescribeCasterStreamUrlResult(outcome.result()));
	else
		return DescribeCasterStreamUrlOutcome(outcome.error());
}

void LiveClient::describeCasterStreamUrlAsync(const DescribeCasterStreamUrlRequest& request, const DescribeCasterStreamUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterStreamUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterStreamUrlOutcomeCallable LiveClient::describeCasterStreamUrlCallable(const DescribeCasterStreamUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterStreamUrlOutcome()>>(
			[this, request]()
			{
			return this->describeCasterStreamUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCasterVideoResourcesOutcome LiveClient::describeCasterVideoResources(const DescribeCasterVideoResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCasterVideoResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCasterVideoResourcesOutcome(DescribeCasterVideoResourcesResult(outcome.result()));
	else
		return DescribeCasterVideoResourcesOutcome(outcome.error());
}

void LiveClient::describeCasterVideoResourcesAsync(const DescribeCasterVideoResourcesRequest& request, const DescribeCasterVideoResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasterVideoResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCasterVideoResourcesOutcomeCallable LiveClient::describeCasterVideoResourcesCallable(const DescribeCasterVideoResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCasterVideoResourcesOutcome()>>(
			[this, request]()
			{
			return this->describeCasterVideoResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeCastersOutcome LiveClient::describeCasters(const DescribeCastersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCastersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCastersOutcome(DescribeCastersResult(outcome.result()));
	else
		return DescribeCastersOutcome(outcome.error());
}

void LiveClient::describeCastersAsync(const DescribeCastersRequest& request, const DescribeCastersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCasters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeCastersOutcomeCallable LiveClient::describeCastersCallable(const DescribeCastersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCastersOutcome()>>(
			[this, request]()
			{
			return this->describeCasters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeChannelParticipantsOutcome LiveClient::describeChannelParticipants(const DescribeChannelParticipantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChannelParticipantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChannelParticipantsOutcome(DescribeChannelParticipantsResult(outcome.result()));
	else
		return DescribeChannelParticipantsOutcome(outcome.error());
}

void LiveClient::describeChannelParticipantsAsync(const DescribeChannelParticipantsRequest& request, const DescribeChannelParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChannelParticipants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeChannelParticipantsOutcomeCallable LiveClient::describeChannelParticipantsCallable(const DescribeChannelParticipantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChannelParticipantsOutcome()>>(
			[this, request]()
			{
			return this->describeChannelParticipants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeChannelUsersOutcome LiveClient::describeChannelUsers(const DescribeChannelUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeChannelUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeChannelUsersOutcome(DescribeChannelUsersResult(outcome.result()));
	else
		return DescribeChannelUsersOutcome(outcome.error());
}

void LiveClient::describeChannelUsersAsync(const DescribeChannelUsersRequest& request, const DescribeChannelUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChannelUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeChannelUsersOutcomeCallable LiveClient::describeChannelUsersCallable(const DescribeChannelUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChannelUsersOutcome()>>(
			[this, request]()
			{
			return this->describeChannelUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeDomainUsageDataOutcome LiveClient::describeDomainUsageData(const DescribeDomainUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainUsageDataOutcome(DescribeDomainUsageDataResult(outcome.result()));
	else
		return DescribeDomainUsageDataOutcome(outcome.error());
}

void LiveClient::describeDomainUsageDataAsync(const DescribeDomainUsageDataRequest& request, const DescribeDomainUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeDomainUsageDataOutcomeCallable LiveClient::describeDomainUsageDataCallable(const DescribeDomainUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeDomainUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeDomainWithIntegrityOutcome LiveClient::describeDomainWithIntegrity(const DescribeDomainWithIntegrityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDomainWithIntegrityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDomainWithIntegrityOutcome(DescribeDomainWithIntegrityResult(outcome.result()));
	else
		return DescribeDomainWithIntegrityOutcome(outcome.error());
}

void LiveClient::describeDomainWithIntegrityAsync(const DescribeDomainWithIntegrityRequest& request, const DescribeDomainWithIntegrityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDomainWithIntegrity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeDomainWithIntegrityOutcomeCallable LiveClient::describeDomainWithIntegrityCallable(const DescribeDomainWithIntegrityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDomainWithIntegrityOutcome()>>(
			[this, request]()
			{
			return this->describeDomainWithIntegrity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeHlsLiveStreamRealTimeBpsDataOutcome LiveClient::describeHlsLiveStreamRealTimeBpsData(const DescribeHlsLiveStreamRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHlsLiveStreamRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHlsLiveStreamRealTimeBpsDataOutcome(DescribeHlsLiveStreamRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeHlsLiveStreamRealTimeBpsDataOutcome(outcome.error());
}

void LiveClient::describeHlsLiveStreamRealTimeBpsDataAsync(const DescribeHlsLiveStreamRealTimeBpsDataRequest& request, const DescribeHlsLiveStreamRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHlsLiveStreamRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeHlsLiveStreamRealTimeBpsDataOutcomeCallable LiveClient::describeHlsLiveStreamRealTimeBpsDataCallable(const DescribeHlsLiveStreamRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHlsLiveStreamRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeHlsLiveStreamRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveAIProduceRulesOutcome LiveClient::describeLiveAIProduceRules(const DescribeLiveAIProduceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAIProduceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAIProduceRulesOutcome(DescribeLiveAIProduceRulesResult(outcome.result()));
	else
		return DescribeLiveAIProduceRulesOutcome(outcome.error());
}

void LiveClient::describeLiveAIProduceRulesAsync(const DescribeLiveAIProduceRulesRequest& request, const DescribeLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAIProduceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveAIProduceRulesOutcomeCallable LiveClient::describeLiveAIProduceRulesCallable(const DescribeLiveAIProduceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAIProduceRulesOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAIProduceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveAIStudioOutcome LiveClient::describeLiveAIStudio(const DescribeLiveAIStudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAIStudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAIStudioOutcome(DescribeLiveAIStudioResult(outcome.result()));
	else
		return DescribeLiveAIStudioOutcome(outcome.error());
}

void LiveClient::describeLiveAIStudioAsync(const DescribeLiveAIStudioRequest& request, const DescribeLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAIStudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveAIStudioOutcomeCallable LiveClient::describeLiveAIStudioCallable(const DescribeLiveAIStudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAIStudioOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAIStudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveAISubtitleOutcome LiveClient::describeLiveAISubtitle(const DescribeLiveAISubtitleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAISubtitleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAISubtitleOutcome(DescribeLiveAISubtitleResult(outcome.result()));
	else
		return DescribeLiveAISubtitleOutcome(outcome.error());
}

void LiveClient::describeLiveAISubtitleAsync(const DescribeLiveAISubtitleRequest& request, const DescribeLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAISubtitle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveAISubtitleOutcomeCallable LiveClient::describeLiveAISubtitleCallable(const DescribeLiveAISubtitleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAISubtitleOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAISubtitle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveAudioAuditConfigOutcome LiveClient::describeLiveAudioAuditConfig(const DescribeLiveAudioAuditConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAudioAuditConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAudioAuditConfigOutcome(DescribeLiveAudioAuditConfigResult(outcome.result()));
	else
		return DescribeLiveAudioAuditConfigOutcome(outcome.error());
}

void LiveClient::describeLiveAudioAuditConfigAsync(const DescribeLiveAudioAuditConfigRequest& request, const DescribeLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAudioAuditConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveAudioAuditConfigOutcomeCallable LiveClient::describeLiveAudioAuditConfigCallable(const DescribeLiveAudioAuditConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAudioAuditConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAudioAuditConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveAudioAuditNotifyConfigOutcome LiveClient::describeLiveAudioAuditNotifyConfig(const DescribeLiveAudioAuditNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveAudioAuditNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveAudioAuditNotifyConfigOutcome(DescribeLiveAudioAuditNotifyConfigResult(outcome.result()));
	else
		return DescribeLiveAudioAuditNotifyConfigOutcome(outcome.error());
}

void LiveClient::describeLiveAudioAuditNotifyConfigAsync(const DescribeLiveAudioAuditNotifyConfigRequest& request, const DescribeLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveAudioAuditNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveAudioAuditNotifyConfigOutcomeCallable LiveClient::describeLiveAudioAuditNotifyConfigCallable(const DescribeLiveAudioAuditNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveAudioAuditNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveAudioAuditNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveCdnDiagnoseInfoOutcome LiveClient::describeLiveCdnDiagnoseInfo(const DescribeLiveCdnDiagnoseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveCdnDiagnoseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveCdnDiagnoseInfoOutcome(DescribeLiveCdnDiagnoseInfoResult(outcome.result()));
	else
		return DescribeLiveCdnDiagnoseInfoOutcome(outcome.error());
}

void LiveClient::describeLiveCdnDiagnoseInfoAsync(const DescribeLiveCdnDiagnoseInfoRequest& request, const DescribeLiveCdnDiagnoseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveCdnDiagnoseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveCdnDiagnoseInfoOutcomeCallable LiveClient::describeLiveCdnDiagnoseInfoCallable(const DescribeLiveCdnDiagnoseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveCdnDiagnoseInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveCdnDiagnoseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveCenterStreamRateDataOutcome LiveClient::describeLiveCenterStreamRateData(const DescribeLiveCenterStreamRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveCenterStreamRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveCenterStreamRateDataOutcome(DescribeLiveCenterStreamRateDataResult(outcome.result()));
	else
		return DescribeLiveCenterStreamRateDataOutcome(outcome.error());
}

void LiveClient::describeLiveCenterStreamRateDataAsync(const DescribeLiveCenterStreamRateDataRequest& request, const DescribeLiveCenterStreamRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveCenterStreamRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveCenterStreamRateDataOutcomeCallable LiveClient::describeLiveCenterStreamRateDataCallable(const DescribeLiveCenterStreamRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveCenterStreamRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveCenterStreamRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveCenterTransferOutcome LiveClient::describeLiveCenterTransfer(const DescribeLiveCenterTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveCenterTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveCenterTransferOutcome(DescribeLiveCenterTransferResult(outcome.result()));
	else
		return DescribeLiveCenterTransferOutcome(outcome.error());
}

void LiveClient::describeLiveCenterTransferAsync(const DescribeLiveCenterTransferRequest& request, const DescribeLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveCenterTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveCenterTransferOutcomeCallable LiveClient::describeLiveCenterTransferCallable(const DescribeLiveCenterTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveCenterTransferOutcome()>>(
			[this, request]()
			{
			return this->describeLiveCenterTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveCertificateDetailOutcome LiveClient::describeLiveCertificateDetail(const DescribeLiveCertificateDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveCertificateDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveCertificateDetailOutcome(DescribeLiveCertificateDetailResult(outcome.result()));
	else
		return DescribeLiveCertificateDetailOutcome(outcome.error());
}

void LiveClient::describeLiveCertificateDetailAsync(const DescribeLiveCertificateDetailRequest& request, const DescribeLiveCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveCertificateDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveCertificateDetailOutcomeCallable LiveClient::describeLiveCertificateDetailCallable(const DescribeLiveCertificateDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveCertificateDetailOutcome()>>(
			[this, request]()
			{
			return this->describeLiveCertificateDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveCertificateListOutcome LiveClient::describeLiveCertificateList(const DescribeLiveCertificateListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveCertificateListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveCertificateListOutcome(DescribeLiveCertificateListResult(outcome.result()));
	else
		return DescribeLiveCertificateListOutcome(outcome.error());
}

void LiveClient::describeLiveCertificateListAsync(const DescribeLiveCertificateListRequest& request, const DescribeLiveCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveCertificateList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveCertificateListOutcomeCallable LiveClient::describeLiveCertificateListCallable(const DescribeLiveCertificateListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveCertificateListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveCertificateList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDelayConfigOutcome LiveClient::describeLiveDelayConfig(const DescribeLiveDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDelayConfigOutcome(DescribeLiveDelayConfigResult(outcome.result()));
	else
		return DescribeLiveDelayConfigOutcome(outcome.error());
}

void LiveClient::describeLiveDelayConfigAsync(const DescribeLiveDelayConfigRequest& request, const DescribeLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDelayConfigOutcomeCallable LiveClient::describeLiveDelayConfigCallable(const DescribeLiveDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDelayedStreamingUsageOutcome LiveClient::describeLiveDelayedStreamingUsage(const DescribeLiveDelayedStreamingUsageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDelayedStreamingUsageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDelayedStreamingUsageOutcome(DescribeLiveDelayedStreamingUsageResult(outcome.result()));
	else
		return DescribeLiveDelayedStreamingUsageOutcome(outcome.error());
}

void LiveClient::describeLiveDelayedStreamingUsageAsync(const DescribeLiveDelayedStreamingUsageRequest& request, const DescribeLiveDelayedStreamingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDelayedStreamingUsage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDelayedStreamingUsageOutcomeCallable LiveClient::describeLiveDelayedStreamingUsageCallable(const DescribeLiveDelayedStreamingUsageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDelayedStreamingUsageOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDelayedStreamingUsage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDetectNotifyConfigOutcome LiveClient::describeLiveDetectNotifyConfig(const DescribeLiveDetectNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDetectNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDetectNotifyConfigOutcome(DescribeLiveDetectNotifyConfigResult(outcome.result()));
	else
		return DescribeLiveDetectNotifyConfigOutcome(outcome.error());
}

void LiveClient::describeLiveDetectNotifyConfigAsync(const DescribeLiveDetectNotifyConfigRequest& request, const DescribeLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDetectNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDetectNotifyConfigOutcomeCallable LiveClient::describeLiveDetectNotifyConfigCallable(const DescribeLiveDetectNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDetectNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDetectNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDetectPornDataOutcome LiveClient::describeLiveDetectPornData(const DescribeLiveDetectPornDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDetectPornDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDetectPornDataOutcome(DescribeLiveDetectPornDataResult(outcome.result()));
	else
		return DescribeLiveDetectPornDataOutcome(outcome.error());
}

void LiveClient::describeLiveDetectPornDataAsync(const DescribeLiveDetectPornDataRequest& request, const DescribeLiveDetectPornDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDetectPornData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDetectPornDataOutcomeCallable LiveClient::describeLiveDetectPornDataCallable(const DescribeLiveDetectPornDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDetectPornDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDetectPornData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainBpsDataOutcome LiveClient::describeLiveDomainBpsData(const DescribeLiveDomainBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainBpsDataOutcome(DescribeLiveDomainBpsDataResult(outcome.result()));
	else
		return DescribeLiveDomainBpsDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainBpsDataAsync(const DescribeLiveDomainBpsDataRequest& request, const DescribeLiveDomainBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainBpsDataOutcomeCallable LiveClient::describeLiveDomainBpsDataCallable(const DescribeLiveDomainBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainBpsDataByLayerOutcome LiveClient::describeLiveDomainBpsDataByLayer(const DescribeLiveDomainBpsDataByLayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainBpsDataByLayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainBpsDataByLayerOutcome(DescribeLiveDomainBpsDataByLayerResult(outcome.result()));
	else
		return DescribeLiveDomainBpsDataByLayerOutcome(outcome.error());
}

void LiveClient::describeLiveDomainBpsDataByLayerAsync(const DescribeLiveDomainBpsDataByLayerRequest& request, const DescribeLiveDomainBpsDataByLayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainBpsDataByLayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainBpsDataByLayerOutcomeCallable LiveClient::describeLiveDomainBpsDataByLayerCallable(const DescribeLiveDomainBpsDataByLayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainBpsDataByLayerOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainBpsDataByLayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainByCertificateOutcome LiveClient::describeLiveDomainByCertificate(const DescribeLiveDomainByCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainByCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainByCertificateOutcome(DescribeLiveDomainByCertificateResult(outcome.result()));
	else
		return DescribeLiveDomainByCertificateOutcome(outcome.error());
}

void LiveClient::describeLiveDomainByCertificateAsync(const DescribeLiveDomainByCertificateRequest& request, const DescribeLiveDomainByCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainByCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainByCertificateOutcomeCallable LiveClient::describeLiveDomainByCertificateCallable(const DescribeLiveDomainByCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainByCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainByCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainCertificateInfoOutcome LiveClient::describeLiveDomainCertificateInfo(const DescribeLiveDomainCertificateInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainCertificateInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainCertificateInfoOutcome(DescribeLiveDomainCertificateInfoResult(outcome.result()));
	else
		return DescribeLiveDomainCertificateInfoOutcome(outcome.error());
}

void LiveClient::describeLiveDomainCertificateInfoAsync(const DescribeLiveDomainCertificateInfoRequest& request, const DescribeLiveDomainCertificateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainCertificateInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainCertificateInfoOutcomeCallable LiveClient::describeLiveDomainCertificateInfoCallable(const DescribeLiveDomainCertificateInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainCertificateInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainCertificateInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainConfigsOutcome LiveClient::describeLiveDomainConfigs(const DescribeLiveDomainConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainConfigsOutcome(DescribeLiveDomainConfigsResult(outcome.result()));
	else
		return DescribeLiveDomainConfigsOutcome(outcome.error());
}

void LiveClient::describeLiveDomainConfigsAsync(const DescribeLiveDomainConfigsRequest& request, const DescribeLiveDomainConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainConfigsOutcomeCallable LiveClient::describeLiveDomainConfigsCallable(const DescribeLiveDomainConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainDetailOutcome LiveClient::describeLiveDomainDetail(const DescribeLiveDomainDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainDetailOutcome(DescribeLiveDomainDetailResult(outcome.result()));
	else
		return DescribeLiveDomainDetailOutcome(outcome.error());
}

void LiveClient::describeLiveDomainDetailAsync(const DescribeLiveDomainDetailRequest& request, const DescribeLiveDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainDetailOutcomeCallable LiveClient::describeLiveDomainDetailCallable(const DescribeLiveDomainDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainDetailOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainEdgeLogOutcome LiveClient::describeLiveDomainEdgeLog(const DescribeLiveDomainEdgeLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainEdgeLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainEdgeLogOutcome(DescribeLiveDomainEdgeLogResult(outcome.result()));
	else
		return DescribeLiveDomainEdgeLogOutcome(outcome.error());
}

void LiveClient::describeLiveDomainEdgeLogAsync(const DescribeLiveDomainEdgeLogRequest& request, const DescribeLiveDomainEdgeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainEdgeLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainEdgeLogOutcomeCallable LiveClient::describeLiveDomainEdgeLogCallable(const DescribeLiveDomainEdgeLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainEdgeLogOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainEdgeLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainFrameRateAndBitRateDataOutcome LiveClient::describeLiveDomainFrameRateAndBitRateData(const DescribeLiveDomainFrameRateAndBitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainFrameRateAndBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainFrameRateAndBitRateDataOutcome(DescribeLiveDomainFrameRateAndBitRateDataResult(outcome.result()));
	else
		return DescribeLiveDomainFrameRateAndBitRateDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainFrameRateAndBitRateDataAsync(const DescribeLiveDomainFrameRateAndBitRateDataRequest& request, const DescribeLiveDomainFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainFrameRateAndBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainFrameRateAndBitRateDataOutcomeCallable LiveClient::describeLiveDomainFrameRateAndBitRateDataCallable(const DescribeLiveDomainFrameRateAndBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainFrameRateAndBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainFrameRateAndBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainLimitOutcome LiveClient::describeLiveDomainLimit(const DescribeLiveDomainLimitRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainLimitOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainLimitOutcome(DescribeLiveDomainLimitResult(outcome.result()));
	else
		return DescribeLiveDomainLimitOutcome(outcome.error());
}

void LiveClient::describeLiveDomainLimitAsync(const DescribeLiveDomainLimitRequest& request, const DescribeLiveDomainLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainLimit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainLimitOutcomeCallable LiveClient::describeLiveDomainLimitCallable(const DescribeLiveDomainLimitRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainLimitOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainLimit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainLogOutcome LiveClient::describeLiveDomainLog(const DescribeLiveDomainLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainLogOutcome(DescribeLiveDomainLogResult(outcome.result()));
	else
		return DescribeLiveDomainLogOutcome(outcome.error());
}

void LiveClient::describeLiveDomainLogAsync(const DescribeLiveDomainLogRequest& request, const DescribeLiveDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainLogOutcomeCallable LiveClient::describeLiveDomainLogCallable(const DescribeLiveDomainLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainLogOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainLogExTtlOutcome LiveClient::describeLiveDomainLogExTtl(const DescribeLiveDomainLogExTtlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainLogExTtlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainLogExTtlOutcome(DescribeLiveDomainLogExTtlResult(outcome.result()));
	else
		return DescribeLiveDomainLogExTtlOutcome(outcome.error());
}

void LiveClient::describeLiveDomainLogExTtlAsync(const DescribeLiveDomainLogExTtlRequest& request, const DescribeLiveDomainLogExTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainLogExTtl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainLogExTtlOutcomeCallable LiveClient::describeLiveDomainLogExTtlCallable(const DescribeLiveDomainLogExTtlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainLogExTtlOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainLogExTtl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainMappingOutcome LiveClient::describeLiveDomainMapping(const DescribeLiveDomainMappingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainMappingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainMappingOutcome(DescribeLiveDomainMappingResult(outcome.result()));
	else
		return DescribeLiveDomainMappingOutcome(outcome.error());
}

void LiveClient::describeLiveDomainMappingAsync(const DescribeLiveDomainMappingRequest& request, const DescribeLiveDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainMapping(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainMappingOutcomeCallable LiveClient::describeLiveDomainMappingCallable(const DescribeLiveDomainMappingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainMappingOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainMapping(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainMonitoringUsageDataOutcome LiveClient::describeLiveDomainMonitoringUsageData(const DescribeLiveDomainMonitoringUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainMonitoringUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainMonitoringUsageDataOutcome(DescribeLiveDomainMonitoringUsageDataResult(outcome.result()));
	else
		return DescribeLiveDomainMonitoringUsageDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainMonitoringUsageDataAsync(const DescribeLiveDomainMonitoringUsageDataRequest& request, const DescribeLiveDomainMonitoringUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainMonitoringUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainMonitoringUsageDataOutcomeCallable LiveClient::describeLiveDomainMonitoringUsageDataCallable(const DescribeLiveDomainMonitoringUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainMonitoringUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainMonitoringUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainMultiStreamConfigOutcome LiveClient::describeLiveDomainMultiStreamConfig(const DescribeLiveDomainMultiStreamConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainMultiStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainMultiStreamConfigOutcome(DescribeLiveDomainMultiStreamConfigResult(outcome.result()));
	else
		return DescribeLiveDomainMultiStreamConfigOutcome(outcome.error());
}

void LiveClient::describeLiveDomainMultiStreamConfigAsync(const DescribeLiveDomainMultiStreamConfigRequest& request, const DescribeLiveDomainMultiStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainMultiStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainMultiStreamConfigOutcomeCallable LiveClient::describeLiveDomainMultiStreamConfigCallable(const DescribeLiveDomainMultiStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainMultiStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainMultiStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainOnlineUserNumOutcome LiveClient::describeLiveDomainOnlineUserNum(const DescribeLiveDomainOnlineUserNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainOnlineUserNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainOnlineUserNumOutcome(DescribeLiveDomainOnlineUserNumResult(outcome.result()));
	else
		return DescribeLiveDomainOnlineUserNumOutcome(outcome.error());
}

void LiveClient::describeLiveDomainOnlineUserNumAsync(const DescribeLiveDomainOnlineUserNumRequest& request, const DescribeLiveDomainOnlineUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainOnlineUserNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainOnlineUserNumOutcomeCallable LiveClient::describeLiveDomainOnlineUserNumCallable(const DescribeLiveDomainOnlineUserNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainOnlineUserNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainOnlineUserNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainPublishErrorCodeOutcome LiveClient::describeLiveDomainPublishErrorCode(const DescribeLiveDomainPublishErrorCodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainPublishErrorCodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainPublishErrorCodeOutcome(DescribeLiveDomainPublishErrorCodeResult(outcome.result()));
	else
		return DescribeLiveDomainPublishErrorCodeOutcome(outcome.error());
}

void LiveClient::describeLiveDomainPublishErrorCodeAsync(const DescribeLiveDomainPublishErrorCodeRequest& request, const DescribeLiveDomainPublishErrorCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainPublishErrorCode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainPublishErrorCodeOutcomeCallable LiveClient::describeLiveDomainPublishErrorCodeCallable(const DescribeLiveDomainPublishErrorCodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainPublishErrorCodeOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainPublishErrorCode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainPushBpsDataOutcome LiveClient::describeLiveDomainPushBpsData(const DescribeLiveDomainPushBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainPushBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainPushBpsDataOutcome(DescribeLiveDomainPushBpsDataResult(outcome.result()));
	else
		return DescribeLiveDomainPushBpsDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainPushBpsDataAsync(const DescribeLiveDomainPushBpsDataRequest& request, const DescribeLiveDomainPushBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainPushBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainPushBpsDataOutcomeCallable LiveClient::describeLiveDomainPushBpsDataCallable(const DescribeLiveDomainPushBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainPushBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainPushBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainPushTrafficDataOutcome LiveClient::describeLiveDomainPushTrafficData(const DescribeLiveDomainPushTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainPushTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainPushTrafficDataOutcome(DescribeLiveDomainPushTrafficDataResult(outcome.result()));
	else
		return DescribeLiveDomainPushTrafficDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainPushTrafficDataAsync(const DescribeLiveDomainPushTrafficDataRequest& request, const DescribeLiveDomainPushTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainPushTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainPushTrafficDataOutcomeCallable LiveClient::describeLiveDomainPushTrafficDataCallable(const DescribeLiveDomainPushTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainPushTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainPushTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainPvUvDataOutcome LiveClient::describeLiveDomainPvUvData(const DescribeLiveDomainPvUvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainPvUvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainPvUvDataOutcome(DescribeLiveDomainPvUvDataResult(outcome.result()));
	else
		return DescribeLiveDomainPvUvDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainPvUvDataAsync(const DescribeLiveDomainPvUvDataRequest& request, const DescribeLiveDomainPvUvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainPvUvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainPvUvDataOutcomeCallable LiveClient::describeLiveDomainPvUvDataCallable(const DescribeLiveDomainPvUvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainPvUvDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainPvUvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainRealTimeBpsDataOutcome LiveClient::describeLiveDomainRealTimeBpsData(const DescribeLiveDomainRealTimeBpsDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainRealTimeBpsDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainRealTimeBpsDataOutcome(DescribeLiveDomainRealTimeBpsDataResult(outcome.result()));
	else
		return DescribeLiveDomainRealTimeBpsDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainRealTimeBpsDataAsync(const DescribeLiveDomainRealTimeBpsDataRequest& request, const DescribeLiveDomainRealTimeBpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainRealTimeBpsData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRealTimeBpsDataOutcomeCallable LiveClient::describeLiveDomainRealTimeBpsDataCallable(const DescribeLiveDomainRealTimeBpsDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRealTimeBpsDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainRealTimeBpsData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainRealTimeHttpCodeDataOutcome LiveClient::describeLiveDomainRealTimeHttpCodeData(const DescribeLiveDomainRealTimeHttpCodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainRealTimeHttpCodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainRealTimeHttpCodeDataOutcome(DescribeLiveDomainRealTimeHttpCodeDataResult(outcome.result()));
	else
		return DescribeLiveDomainRealTimeHttpCodeDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainRealTimeHttpCodeDataAsync(const DescribeLiveDomainRealTimeHttpCodeDataRequest& request, const DescribeLiveDomainRealTimeHttpCodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainRealTimeHttpCodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRealTimeHttpCodeDataOutcomeCallable LiveClient::describeLiveDomainRealTimeHttpCodeDataCallable(const DescribeLiveDomainRealTimeHttpCodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRealTimeHttpCodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainRealTimeHttpCodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainRealTimeTrafficDataOutcome LiveClient::describeLiveDomainRealTimeTrafficData(const DescribeLiveDomainRealTimeTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainRealTimeTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainRealTimeTrafficDataOutcome(DescribeLiveDomainRealTimeTrafficDataResult(outcome.result()));
	else
		return DescribeLiveDomainRealTimeTrafficDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainRealTimeTrafficDataAsync(const DescribeLiveDomainRealTimeTrafficDataRequest& request, const DescribeLiveDomainRealTimeTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainRealTimeTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRealTimeTrafficDataOutcomeCallable LiveClient::describeLiveDomainRealTimeTrafficDataCallable(const DescribeLiveDomainRealTimeTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRealTimeTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainRealTimeTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainRealtimeLogDeliveryOutcome LiveClient::describeLiveDomainRealtimeLogDelivery(const DescribeLiveDomainRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainRealtimeLogDeliveryOutcome(DescribeLiveDomainRealtimeLogDeliveryResult(outcome.result()));
	else
		return DescribeLiveDomainRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::describeLiveDomainRealtimeLogDeliveryAsync(const DescribeLiveDomainRealtimeLogDeliveryRequest& request, const DescribeLiveDomainRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRealtimeLogDeliveryOutcomeCallable LiveClient::describeLiveDomainRealtimeLogDeliveryCallable(const DescribeLiveDomainRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainRecordUsageDataOutcome LiveClient::describeLiveDomainRecordUsageData(const DescribeLiveDomainRecordUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainRecordUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainRecordUsageDataOutcome(DescribeLiveDomainRecordUsageDataResult(outcome.result()));
	else
		return DescribeLiveDomainRecordUsageDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainRecordUsageDataAsync(const DescribeLiveDomainRecordUsageDataRequest& request, const DescribeLiveDomainRecordUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainRecordUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRecordUsageDataOutcomeCallable LiveClient::describeLiveDomainRecordUsageDataCallable(const DescribeLiveDomainRecordUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRecordUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainRecordUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainSnapshotDataOutcome LiveClient::describeLiveDomainSnapshotData(const DescribeLiveDomainSnapshotDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainSnapshotDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainSnapshotDataOutcome(DescribeLiveDomainSnapshotDataResult(outcome.result()));
	else
		return DescribeLiveDomainSnapshotDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainSnapshotDataAsync(const DescribeLiveDomainSnapshotDataRequest& request, const DescribeLiveDomainSnapshotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainSnapshotData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainSnapshotDataOutcomeCallable LiveClient::describeLiveDomainSnapshotDataCallable(const DescribeLiveDomainSnapshotDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainSnapshotDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainSnapshotData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainStagingConfigOutcome LiveClient::describeLiveDomainStagingConfig(const DescribeLiveDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainStagingConfigOutcome(DescribeLiveDomainStagingConfigResult(outcome.result()));
	else
		return DescribeLiveDomainStagingConfigOutcome(outcome.error());
}

void LiveClient::describeLiveDomainStagingConfigAsync(const DescribeLiveDomainStagingConfigRequest& request, const DescribeLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainStagingConfigOutcomeCallable LiveClient::describeLiveDomainStagingConfigCallable(const DescribeLiveDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainStreamTranscodeDataOutcome LiveClient::describeLiveDomainStreamTranscodeData(const DescribeLiveDomainStreamTranscodeDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainStreamTranscodeDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainStreamTranscodeDataOutcome(DescribeLiveDomainStreamTranscodeDataResult(outcome.result()));
	else
		return DescribeLiveDomainStreamTranscodeDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainStreamTranscodeDataAsync(const DescribeLiveDomainStreamTranscodeDataRequest& request, const DescribeLiveDomainStreamTranscodeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainStreamTranscodeData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainStreamTranscodeDataOutcomeCallable LiveClient::describeLiveDomainStreamTranscodeDataCallable(const DescribeLiveDomainStreamTranscodeDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainStreamTranscodeDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainStreamTranscodeData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainTimeShiftDataOutcome LiveClient::describeLiveDomainTimeShiftData(const DescribeLiveDomainTimeShiftDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainTimeShiftDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainTimeShiftDataOutcome(DescribeLiveDomainTimeShiftDataResult(outcome.result()));
	else
		return DescribeLiveDomainTimeShiftDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainTimeShiftDataAsync(const DescribeLiveDomainTimeShiftDataRequest& request, const DescribeLiveDomainTimeShiftDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainTimeShiftData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainTimeShiftDataOutcomeCallable LiveClient::describeLiveDomainTimeShiftDataCallable(const DescribeLiveDomainTimeShiftDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainTimeShiftDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainTimeShiftData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainTrafficDataOutcome LiveClient::describeLiveDomainTrafficData(const DescribeLiveDomainTrafficDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainTrafficDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainTrafficDataOutcome(DescribeLiveDomainTrafficDataResult(outcome.result()));
	else
		return DescribeLiveDomainTrafficDataOutcome(outcome.error());
}

void LiveClient::describeLiveDomainTrafficDataAsync(const DescribeLiveDomainTrafficDataRequest& request, const DescribeLiveDomainTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainTrafficData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainTrafficDataOutcomeCallable LiveClient::describeLiveDomainTrafficDataCallable(const DescribeLiveDomainTrafficDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainTrafficDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainTrafficData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDomainTranscodeParamsOutcome LiveClient::describeLiveDomainTranscodeParams(const DescribeLiveDomainTranscodeParamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDomainTranscodeParamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDomainTranscodeParamsOutcome(DescribeLiveDomainTranscodeParamsResult(outcome.result()));
	else
		return DescribeLiveDomainTranscodeParamsOutcome(outcome.error());
}

void LiveClient::describeLiveDomainTranscodeParamsAsync(const DescribeLiveDomainTranscodeParamsRequest& request, const DescribeLiveDomainTranscodeParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDomainTranscodeParams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDomainTranscodeParamsOutcomeCallable LiveClient::describeLiveDomainTranscodeParamsCallable(const DescribeLiveDomainTranscodeParamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDomainTranscodeParamsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDomainTranscodeParams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveDrmUsageDataOutcome LiveClient::describeLiveDrmUsageData(const DescribeLiveDrmUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveDrmUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveDrmUsageDataOutcome(DescribeLiveDrmUsageDataResult(outcome.result()));
	else
		return DescribeLiveDrmUsageDataOutcome(outcome.error());
}

void LiveClient::describeLiveDrmUsageDataAsync(const DescribeLiveDrmUsageDataRequest& request, const DescribeLiveDrmUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveDrmUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveDrmUsageDataOutcomeCallable LiveClient::describeLiveDrmUsageDataCallable(const DescribeLiveDrmUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveDrmUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveDrmUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveEdgeTransferOutcome LiveClient::describeLiveEdgeTransfer(const DescribeLiveEdgeTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveEdgeTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveEdgeTransferOutcome(DescribeLiveEdgeTransferResult(outcome.result()));
	else
		return DescribeLiveEdgeTransferOutcome(outcome.error());
}

void LiveClient::describeLiveEdgeTransferAsync(const DescribeLiveEdgeTransferRequest& request, const DescribeLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveEdgeTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveEdgeTransferOutcomeCallable LiveClient::describeLiveEdgeTransferCallable(const DescribeLiveEdgeTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveEdgeTransferOutcome()>>(
			[this, request]()
			{
			return this->describeLiveEdgeTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveGrtnDurationOutcome LiveClient::describeLiveGrtnDuration(const DescribeLiveGrtnDurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveGrtnDurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveGrtnDurationOutcome(DescribeLiveGrtnDurationResult(outcome.result()));
	else
		return DescribeLiveGrtnDurationOutcome(outcome.error());
}

void LiveClient::describeLiveGrtnDurationAsync(const DescribeLiveGrtnDurationRequest& request, const DescribeLiveGrtnDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveGrtnDuration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveGrtnDurationOutcomeCallable LiveClient::describeLiveGrtnDurationCallable(const DescribeLiveGrtnDurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveGrtnDurationOutcome()>>(
			[this, request]()
			{
			return this->describeLiveGrtnDuration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveHttpsDomainListOutcome LiveClient::describeLiveHttpsDomainList(const DescribeLiveHttpsDomainListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveHttpsDomainListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveHttpsDomainListOutcome(DescribeLiveHttpsDomainListResult(outcome.result()));
	else
		return DescribeLiveHttpsDomainListOutcome(outcome.error());
}

void LiveClient::describeLiveHttpsDomainListAsync(const DescribeLiveHttpsDomainListRequest& request, const DescribeLiveHttpsDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveHttpsDomainList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveHttpsDomainListOutcomeCallable LiveClient::describeLiveHttpsDomainListCallable(const DescribeLiveHttpsDomainListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveHttpsDomainListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveHttpsDomainList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveInteractionMetricDataOutcome LiveClient::describeLiveInteractionMetricData(const DescribeLiveInteractionMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveInteractionMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveInteractionMetricDataOutcome(DescribeLiveInteractionMetricDataResult(outcome.result()));
	else
		return DescribeLiveInteractionMetricDataOutcome(outcome.error());
}

void LiveClient::describeLiveInteractionMetricDataAsync(const DescribeLiveInteractionMetricDataRequest& request, const DescribeLiveInteractionMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveInteractionMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveInteractionMetricDataOutcomeCallable LiveClient::describeLiveInteractionMetricDataCallable(const DescribeLiveInteractionMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveInteractionMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveInteractionMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveIpInfoOutcome LiveClient::describeLiveIpInfo(const DescribeLiveIpInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveIpInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveIpInfoOutcome(DescribeLiveIpInfoResult(outcome.result()));
	else
		return DescribeLiveIpInfoOutcome(outcome.error());
}

void LiveClient::describeLiveIpInfoAsync(const DescribeLiveIpInfoRequest& request, const DescribeLiveIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveIpInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveIpInfoOutcomeCallable LiveClient::describeLiveIpInfoCallable(const DescribeLiveIpInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveIpInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveIpInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveLazyPullStreamConfigOutcome LiveClient::describeLiveLazyPullStreamConfig(const DescribeLiveLazyPullStreamConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveLazyPullStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveLazyPullStreamConfigOutcome(DescribeLiveLazyPullStreamConfigResult(outcome.result()));
	else
		return DescribeLiveLazyPullStreamConfigOutcome(outcome.error());
}

void LiveClient::describeLiveLazyPullStreamConfigAsync(const DescribeLiveLazyPullStreamConfigRequest& request, const DescribeLiveLazyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveLazyPullStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveLazyPullStreamConfigOutcomeCallable LiveClient::describeLiveLazyPullStreamConfigCallable(const DescribeLiveLazyPullStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveLazyPullStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveLazyPullStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveMessageAppOutcome LiveClient::describeLiveMessageApp(const DescribeLiveMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveMessageAppOutcome(DescribeLiveMessageAppResult(outcome.result()));
	else
		return DescribeLiveMessageAppOutcome(outcome.error());
}

void LiveClient::describeLiveMessageAppAsync(const DescribeLiveMessageAppRequest& request, const DescribeLiveMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveMessageAppOutcomeCallable LiveClient::describeLiveMessageAppCallable(const DescribeLiveMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveMessageAppOutcome()>>(
			[this, request]()
			{
			return this->describeLiveMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveMessageGroupOutcome LiveClient::describeLiveMessageGroup(const DescribeLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveMessageGroupOutcome(DescribeLiveMessageGroupResult(outcome.result()));
	else
		return DescribeLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::describeLiveMessageGroupAsync(const DescribeLiveMessageGroupRequest& request, const DescribeLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveMessageGroupOutcomeCallable LiveClient::describeLiveMessageGroupCallable(const DescribeLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->describeLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveMessageGroupBandOutcome LiveClient::describeLiveMessageGroupBand(const DescribeLiveMessageGroupBandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveMessageGroupBandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveMessageGroupBandOutcome(DescribeLiveMessageGroupBandResult(outcome.result()));
	else
		return DescribeLiveMessageGroupBandOutcome(outcome.error());
}

void LiveClient::describeLiveMessageGroupBandAsync(const DescribeLiveMessageGroupBandRequest& request, const DescribeLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveMessageGroupBand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveMessageGroupBandOutcomeCallable LiveClient::describeLiveMessageGroupBandCallable(const DescribeLiveMessageGroupBandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveMessageGroupBandOutcome()>>(
			[this, request]()
			{
			return this->describeLiveMessageGroupBand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePackageConfigOutcome LiveClient::describeLivePackageConfig(const DescribeLivePackageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePackageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePackageConfigOutcome(DescribeLivePackageConfigResult(outcome.result()));
	else
		return DescribeLivePackageConfigOutcome(outcome.error());
}

void LiveClient::describeLivePackageConfigAsync(const DescribeLivePackageConfigRequest& request, const DescribeLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePackageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePackageConfigOutcomeCallable LiveClient::describeLivePackageConfigCallable(const DescribeLivePackageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePackageConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLivePackageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePrivateLineAreasOutcome LiveClient::describeLivePrivateLineAreas(const DescribeLivePrivateLineAreasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePrivateLineAreasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePrivateLineAreasOutcome(DescribeLivePrivateLineAreasResult(outcome.result()));
	else
		return DescribeLivePrivateLineAreasOutcome(outcome.error());
}

void LiveClient::describeLivePrivateLineAreasAsync(const DescribeLivePrivateLineAreasRequest& request, const DescribeLivePrivateLineAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePrivateLineAreas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePrivateLineAreasOutcomeCallable LiveClient::describeLivePrivateLineAreasCallable(const DescribeLivePrivateLineAreasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePrivateLineAreasOutcome()>>(
			[this, request]()
			{
			return this->describeLivePrivateLineAreas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePrivateLineAvailGAOutcome LiveClient::describeLivePrivateLineAvailGA(const DescribeLivePrivateLineAvailGARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePrivateLineAvailGAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePrivateLineAvailGAOutcome(DescribeLivePrivateLineAvailGAResult(outcome.result()));
	else
		return DescribeLivePrivateLineAvailGAOutcome(outcome.error());
}

void LiveClient::describeLivePrivateLineAvailGAAsync(const DescribeLivePrivateLineAvailGARequest& request, const DescribeLivePrivateLineAvailGAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePrivateLineAvailGA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePrivateLineAvailGAOutcomeCallable LiveClient::describeLivePrivateLineAvailGACallable(const DescribeLivePrivateLineAvailGARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePrivateLineAvailGAOutcome()>>(
			[this, request]()
			{
			return this->describeLivePrivateLineAvailGA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveProducerUsageDataOutcome LiveClient::describeLiveProducerUsageData(const DescribeLiveProducerUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveProducerUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveProducerUsageDataOutcome(DescribeLiveProducerUsageDataResult(outcome.result()));
	else
		return DescribeLiveProducerUsageDataOutcome(outcome.error());
}

void LiveClient::describeLiveProducerUsageDataAsync(const DescribeLiveProducerUsageDataRequest& request, const DescribeLiveProducerUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveProducerUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveProducerUsageDataOutcomeCallable LiveClient::describeLiveProducerUsageDataCallable(const DescribeLiveProducerUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveProducerUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveProducerUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePullStreamConfigOutcome LiveClient::describeLivePullStreamConfig(const DescribeLivePullStreamConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePullStreamConfigOutcome(DescribeLivePullStreamConfigResult(outcome.result()));
	else
		return DescribeLivePullStreamConfigOutcome(outcome.error());
}

void LiveClient::describeLivePullStreamConfigAsync(const DescribeLivePullStreamConfigRequest& request, const DescribeLivePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePullStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePullStreamConfigOutcomeCallable LiveClient::describeLivePullStreamConfigCallable(const DescribeLivePullStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePullStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLivePullStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePullToPushOutcome LiveClient::describeLivePullToPush(const DescribeLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePullToPushOutcome(DescribeLivePullToPushResult(outcome.result()));
	else
		return DescribeLivePullToPushOutcome(outcome.error());
}

void LiveClient::describeLivePullToPushAsync(const DescribeLivePullToPushRequest& request, const DescribeLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePullToPushOutcomeCallable LiveClient::describeLivePullToPushCallable(const DescribeLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->describeLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePullToPushListOutcome LiveClient::describeLivePullToPushList(const DescribeLivePullToPushListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePullToPushListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePullToPushListOutcome(DescribeLivePullToPushListResult(outcome.result()));
	else
		return DescribeLivePullToPushListOutcome(outcome.error());
}

void LiveClient::describeLivePullToPushListAsync(const DescribeLivePullToPushListRequest& request, const DescribeLivePullToPushListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePullToPushList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePullToPushListOutcomeCallable LiveClient::describeLivePullToPushListCallable(const DescribeLivePullToPushListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePullToPushListOutcome()>>(
			[this, request]()
			{
			return this->describeLivePullToPushList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePushProxyLogOutcome LiveClient::describeLivePushProxyLog(const DescribeLivePushProxyLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePushProxyLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePushProxyLogOutcome(DescribeLivePushProxyLogResult(outcome.result()));
	else
		return DescribeLivePushProxyLogOutcome(outcome.error());
}

void LiveClient::describeLivePushProxyLogAsync(const DescribeLivePushProxyLogRequest& request, const DescribeLivePushProxyLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePushProxyLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePushProxyLogOutcomeCallable LiveClient::describeLivePushProxyLogCallable(const DescribeLivePushProxyLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePushProxyLogOutcome()>>(
			[this, request]()
			{
			return this->describeLivePushProxyLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLivePushProxyUsageDataOutcome LiveClient::describeLivePushProxyUsageData(const DescribeLivePushProxyUsageDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLivePushProxyUsageDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLivePushProxyUsageDataOutcome(DescribeLivePushProxyUsageDataResult(outcome.result()));
	else
		return DescribeLivePushProxyUsageDataOutcome(outcome.error());
}

void LiveClient::describeLivePushProxyUsageDataAsync(const DescribeLivePushProxyUsageDataRequest& request, const DescribeLivePushProxyUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLivePushProxyUsageData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLivePushProxyUsageDataOutcomeCallable LiveClient::describeLivePushProxyUsageDataCallable(const DescribeLivePushProxyUsageDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLivePushProxyUsageDataOutcome()>>(
			[this, request]()
			{
			return this->describeLivePushProxyUsageData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRealtimeDeliveryAccOutcome LiveClient::describeLiveRealtimeDeliveryAcc(const DescribeLiveRealtimeDeliveryAccRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRealtimeDeliveryAccOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRealtimeDeliveryAccOutcome(DescribeLiveRealtimeDeliveryAccResult(outcome.result()));
	else
		return DescribeLiveRealtimeDeliveryAccOutcome(outcome.error());
}

void LiveClient::describeLiveRealtimeDeliveryAccAsync(const DescribeLiveRealtimeDeliveryAccRequest& request, const DescribeLiveRealtimeDeliveryAccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRealtimeDeliveryAcc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRealtimeDeliveryAccOutcomeCallable LiveClient::describeLiveRealtimeDeliveryAccCallable(const DescribeLiveRealtimeDeliveryAccRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRealtimeDeliveryAccOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRealtimeDeliveryAcc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRealtimeLogAuthorizedOutcome LiveClient::describeLiveRealtimeLogAuthorized(const DescribeLiveRealtimeLogAuthorizedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRealtimeLogAuthorizedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRealtimeLogAuthorizedOutcome(DescribeLiveRealtimeLogAuthorizedResult(outcome.result()));
	else
		return DescribeLiveRealtimeLogAuthorizedOutcome(outcome.error());
}

void LiveClient::describeLiveRealtimeLogAuthorizedAsync(const DescribeLiveRealtimeLogAuthorizedRequest& request, const DescribeLiveRealtimeLogAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRealtimeLogAuthorized(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRealtimeLogAuthorizedOutcomeCallable LiveClient::describeLiveRealtimeLogAuthorizedCallable(const DescribeLiveRealtimeLogAuthorizedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRealtimeLogAuthorizedOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRealtimeLogAuthorized(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRecordConfigOutcome LiveClient::describeLiveRecordConfig(const DescribeLiveRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordConfigOutcome(DescribeLiveRecordConfigResult(outcome.result()));
	else
		return DescribeLiveRecordConfigOutcome(outcome.error());
}

void LiveClient::describeLiveRecordConfigAsync(const DescribeLiveRecordConfigRequest& request, const DescribeLiveRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRecordConfigOutcomeCallable LiveClient::describeLiveRecordConfigCallable(const DescribeLiveRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRecordNotifyConfigOutcome LiveClient::describeLiveRecordNotifyConfig(const DescribeLiveRecordNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordNotifyConfigOutcome(DescribeLiveRecordNotifyConfigResult(outcome.result()));
	else
		return DescribeLiveRecordNotifyConfigOutcome(outcome.error());
}

void LiveClient::describeLiveRecordNotifyConfigAsync(const DescribeLiveRecordNotifyConfigRequest& request, const DescribeLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRecordNotifyConfigOutcomeCallable LiveClient::describeLiveRecordNotifyConfigCallable(const DescribeLiveRecordNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRecordNotifyRecordsOutcome LiveClient::describeLiveRecordNotifyRecords(const DescribeLiveRecordNotifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordNotifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordNotifyRecordsOutcome(DescribeLiveRecordNotifyRecordsResult(outcome.result()));
	else
		return DescribeLiveRecordNotifyRecordsOutcome(outcome.error());
}

void LiveClient::describeLiveRecordNotifyRecordsAsync(const DescribeLiveRecordNotifyRecordsRequest& request, const DescribeLiveRecordNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordNotifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRecordNotifyRecordsOutcomeCallable LiveClient::describeLiveRecordNotifyRecordsCallable(const DescribeLiveRecordNotifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordNotifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordNotifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveRecordVodConfigsOutcome LiveClient::describeLiveRecordVodConfigs(const DescribeLiveRecordVodConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveRecordVodConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveRecordVodConfigsOutcome(DescribeLiveRecordVodConfigsResult(outcome.result()));
	else
		return DescribeLiveRecordVodConfigsOutcome(outcome.error());
}

void LiveClient::describeLiveRecordVodConfigsAsync(const DescribeLiveRecordVodConfigsRequest& request, const DescribeLiveRecordVodConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveRecordVodConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveRecordVodConfigsOutcomeCallable LiveClient::describeLiveRecordVodConfigsCallable(const DescribeLiveRecordVodConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveRecordVodConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveRecordVodConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveShiftConfigsOutcome LiveClient::describeLiveShiftConfigs(const DescribeLiveShiftConfigsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveShiftConfigsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveShiftConfigsOutcome(DescribeLiveShiftConfigsResult(outcome.result()));
	else
		return DescribeLiveShiftConfigsOutcome(outcome.error());
}

void LiveClient::describeLiveShiftConfigsAsync(const DescribeLiveShiftConfigsRequest& request, const DescribeLiveShiftConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveShiftConfigs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveShiftConfigsOutcomeCallable LiveClient::describeLiveShiftConfigsCallable(const DescribeLiveShiftConfigsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveShiftConfigsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveShiftConfigs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveSnapshotConfigOutcome LiveClient::describeLiveSnapshotConfig(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSnapshotConfigOutcome(DescribeLiveSnapshotConfigResult(outcome.result()));
	else
		return DescribeLiveSnapshotConfigOutcome(outcome.error());
}

void LiveClient::describeLiveSnapshotConfigAsync(const DescribeLiveSnapshotConfigRequest& request, const DescribeLiveSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotConfigOutcomeCallable LiveClient::describeLiveSnapshotConfigCallable(const DescribeLiveSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveSnapshotDetectPornConfigOutcome LiveClient::describeLiveSnapshotDetectPornConfig(const DescribeLiveSnapshotDetectPornConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSnapshotDetectPornConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSnapshotDetectPornConfigOutcome(DescribeLiveSnapshotDetectPornConfigResult(outcome.result()));
	else
		return DescribeLiveSnapshotDetectPornConfigOutcome(outcome.error());
}

void LiveClient::describeLiveSnapshotDetectPornConfigAsync(const DescribeLiveSnapshotDetectPornConfigRequest& request, const DescribeLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSnapshotDetectPornConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotDetectPornConfigOutcomeCallable LiveClient::describeLiveSnapshotDetectPornConfigCallable(const DescribeLiveSnapshotDetectPornConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotDetectPornConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSnapshotDetectPornConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveSnapshotNotifyConfigOutcome LiveClient::describeLiveSnapshotNotifyConfig(const DescribeLiveSnapshotNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveSnapshotNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveSnapshotNotifyConfigOutcome(DescribeLiveSnapshotNotifyConfigResult(outcome.result()));
	else
		return DescribeLiveSnapshotNotifyConfigOutcome(outcome.error());
}

void LiveClient::describeLiveSnapshotNotifyConfigAsync(const DescribeLiveSnapshotNotifyConfigRequest& request, const DescribeLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveSnapshotNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotNotifyConfigOutcomeCallable LiveClient::describeLiveSnapshotNotifyConfigCallable(const DescribeLiveSnapshotNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveSnapshotNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamAuthCheckingOutcome LiveClient::describeLiveStreamAuthChecking(const DescribeLiveStreamAuthCheckingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamAuthCheckingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamAuthCheckingOutcome(DescribeLiveStreamAuthCheckingResult(outcome.result()));
	else
		return DescribeLiveStreamAuthCheckingOutcome(outcome.error());
}

void LiveClient::describeLiveStreamAuthCheckingAsync(const DescribeLiveStreamAuthCheckingRequest& request, const DescribeLiveStreamAuthCheckingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamAuthChecking(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamAuthCheckingOutcomeCallable LiveClient::describeLiveStreamAuthCheckingCallable(const DescribeLiveStreamAuthCheckingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamAuthCheckingOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamAuthChecking(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamBitRateDataOutcome LiveClient::describeLiveStreamBitRateData(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamBitRateDataOutcome(DescribeLiveStreamBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamBitRateDataOutcome(outcome.error());
}

void LiveClient::describeLiveStreamBitRateDataAsync(const DescribeLiveStreamBitRateDataRequest& request, const DescribeLiveStreamBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamBitRateDataOutcomeCallable LiveClient::describeLiveStreamBitRateDataCallable(const DescribeLiveStreamBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamCountOutcome LiveClient::describeLiveStreamCount(const DescribeLiveStreamCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamCountOutcome(DescribeLiveStreamCountResult(outcome.result()));
	else
		return DescribeLiveStreamCountOutcome(outcome.error());
}

void LiveClient::describeLiveStreamCountAsync(const DescribeLiveStreamCountRequest& request, const DescribeLiveStreamCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamCountOutcomeCallable LiveClient::describeLiveStreamCountCallable(const DescribeLiveStreamCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamCountOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamDelayConfigOutcome LiveClient::describeLiveStreamDelayConfig(const DescribeLiveStreamDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamDelayConfigOutcome(DescribeLiveStreamDelayConfigResult(outcome.result()));
	else
		return DescribeLiveStreamDelayConfigOutcome(outcome.error());
}

void LiveClient::describeLiveStreamDelayConfigAsync(const DescribeLiveStreamDelayConfigRequest& request, const DescribeLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamDelayConfigOutcomeCallable LiveClient::describeLiveStreamDelayConfigCallable(const DescribeLiveStreamDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome LiveClient::describeLiveStreamDetailFrameRateAndBitRateData(const DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome(DescribeLiveStreamDetailFrameRateAndBitRateDataResult(outcome.result()));
	else
		return DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome(outcome.error());
}

void LiveClient::describeLiveStreamDetailFrameRateAndBitRateDataAsync(const DescribeLiveStreamDetailFrameRateAndBitRateDataRequest& request, const DescribeLiveStreamDetailFrameRateAndBitRateDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamDetailFrameRateAndBitRateData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamDetailFrameRateAndBitRateDataOutcomeCallable LiveClient::describeLiveStreamDetailFrameRateAndBitRateDataCallable(const DescribeLiveStreamDetailFrameRateAndBitRateDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamDetailFrameRateAndBitRateDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamDetailFrameRateAndBitRateData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamHistoryUserNumOutcome LiveClient::describeLiveStreamHistoryUserNum(const DescribeLiveStreamHistoryUserNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamHistoryUserNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamHistoryUserNumOutcome(DescribeLiveStreamHistoryUserNumResult(outcome.result()));
	else
		return DescribeLiveStreamHistoryUserNumOutcome(outcome.error());
}

void LiveClient::describeLiveStreamHistoryUserNumAsync(const DescribeLiveStreamHistoryUserNumRequest& request, const DescribeLiveStreamHistoryUserNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamHistoryUserNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamHistoryUserNumOutcomeCallable LiveClient::describeLiveStreamHistoryUserNumCallable(const DescribeLiveStreamHistoryUserNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamHistoryUserNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamHistoryUserNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamMergeOutcome LiveClient::describeLiveStreamMerge(const DescribeLiveStreamMergeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamMergeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamMergeOutcome(DescribeLiveStreamMergeResult(outcome.result()));
	else
		return DescribeLiveStreamMergeOutcome(outcome.error());
}

void LiveClient::describeLiveStreamMergeAsync(const DescribeLiveStreamMergeRequest& request, const DescribeLiveStreamMergeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamMerge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamMergeOutcomeCallable LiveClient::describeLiveStreamMergeCallable(const DescribeLiveStreamMergeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamMergeOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamMerge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamMetricDetailDataOutcome LiveClient::describeLiveStreamMetricDetailData(const DescribeLiveStreamMetricDetailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamMetricDetailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamMetricDetailDataOutcome(DescribeLiveStreamMetricDetailDataResult(outcome.result()));
	else
		return DescribeLiveStreamMetricDetailDataOutcome(outcome.error());
}

void LiveClient::describeLiveStreamMetricDetailDataAsync(const DescribeLiveStreamMetricDetailDataRequest& request, const DescribeLiveStreamMetricDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamMetricDetailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamMetricDetailDataOutcomeCallable LiveClient::describeLiveStreamMetricDetailDataCallable(const DescribeLiveStreamMetricDetailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamMetricDetailDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamMetricDetailData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamMonitorListOutcome LiveClient::describeLiveStreamMonitorList(const DescribeLiveStreamMonitorListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamMonitorListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamMonitorListOutcome(DescribeLiveStreamMonitorListResult(outcome.result()));
	else
		return DescribeLiveStreamMonitorListOutcome(outcome.error());
}

void LiveClient::describeLiveStreamMonitorListAsync(const DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamMonitorList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamMonitorListOutcomeCallable LiveClient::describeLiveStreamMonitorListCallable(const DescribeLiveStreamMonitorListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamMonitorListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamMonitorList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamPreloadTasksOutcome LiveClient::describeLiveStreamPreloadTasks(const DescribeLiveStreamPreloadTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamPreloadTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamPreloadTasksOutcome(DescribeLiveStreamPreloadTasksResult(outcome.result()));
	else
		return DescribeLiveStreamPreloadTasksOutcome(outcome.error());
}

void LiveClient::describeLiveStreamPreloadTasksAsync(const DescribeLiveStreamPreloadTasksRequest& request, const DescribeLiveStreamPreloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamPreloadTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPreloadTasksOutcomeCallable LiveClient::describeLiveStreamPreloadTasksCallable(const DescribeLiveStreamPreloadTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPreloadTasksOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamPreloadTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamPushMetricDetailDataOutcome LiveClient::describeLiveStreamPushMetricDetailData(const DescribeLiveStreamPushMetricDetailDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamPushMetricDetailDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamPushMetricDetailDataOutcome(DescribeLiveStreamPushMetricDetailDataResult(outcome.result()));
	else
		return DescribeLiveStreamPushMetricDetailDataOutcome(outcome.error());
}

void LiveClient::describeLiveStreamPushMetricDetailDataAsync(const DescribeLiveStreamPushMetricDetailDataRequest& request, const DescribeLiveStreamPushMetricDetailDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamPushMetricDetailData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPushMetricDetailDataOutcomeCallable LiveClient::describeLiveStreamPushMetricDetailDataCallable(const DescribeLiveStreamPushMetricDetailDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPushMetricDetailDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamPushMetricDetailData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamRecordContentOutcome LiveClient::describeLiveStreamRecordContent(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordContentOutcome(DescribeLiveStreamRecordContentResult(outcome.result()));
	else
		return DescribeLiveStreamRecordContentOutcome(outcome.error());
}

void LiveClient::describeLiveStreamRecordContentAsync(const DescribeLiveStreamRecordContentRequest& request, const DescribeLiveStreamRecordContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamRecordContentOutcomeCallable LiveClient::describeLiveStreamRecordContentCallable(const DescribeLiveStreamRecordContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordContentOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamRecordIndexFileOutcome LiveClient::describeLiveStreamRecordIndexFile(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFileOutcome(DescribeLiveStreamRecordIndexFileResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFileOutcome(outcome.error());
}

void LiveClient::describeLiveStreamRecordIndexFileAsync(const DescribeLiveStreamRecordIndexFileRequest& request, const DescribeLiveStreamRecordIndexFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFile(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamRecordIndexFileOutcomeCallable LiveClient::describeLiveStreamRecordIndexFileCallable(const DescribeLiveStreamRecordIndexFileRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFileOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFile(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamRecordIndexFilesOutcome LiveClient::describeLiveStreamRecordIndexFiles(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamRecordIndexFilesOutcome(DescribeLiveStreamRecordIndexFilesResult(outcome.result()));
	else
		return DescribeLiveStreamRecordIndexFilesOutcome(outcome.error());
}

void LiveClient::describeLiveStreamRecordIndexFilesAsync(const DescribeLiveStreamRecordIndexFilesRequest& request, const DescribeLiveStreamRecordIndexFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamRecordIndexFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamRecordIndexFilesOutcomeCallable LiveClient::describeLiveStreamRecordIndexFilesCallable(const DescribeLiveStreamRecordIndexFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamRecordIndexFilesOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamRecordIndexFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamSnapshotInfoOutcome LiveClient::describeLiveStreamSnapshotInfo(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamSnapshotInfoOutcome(DescribeLiveStreamSnapshotInfoResult(outcome.result()));
	else
		return DescribeLiveStreamSnapshotInfoOutcome(outcome.error());
}

void LiveClient::describeLiveStreamSnapshotInfoAsync(const DescribeLiveStreamSnapshotInfoRequest& request, const DescribeLiveStreamSnapshotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamSnapshotInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamSnapshotInfoOutcomeCallable LiveClient::describeLiveStreamSnapshotInfoCallable(const DescribeLiveStreamSnapshotInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamSnapshotInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamSnapshotInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamStateOutcome LiveClient::describeLiveStreamState(const DescribeLiveStreamStateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamStateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamStateOutcome(DescribeLiveStreamStateResult(outcome.result()));
	else
		return DescribeLiveStreamStateOutcome(outcome.error());
}

void LiveClient::describeLiveStreamStateAsync(const DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamState(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamStateOutcomeCallable LiveClient::describeLiveStreamStateCallable(const DescribeLiveStreamStateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamStateOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamState(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamTranscodeInfoOutcome LiveClient::describeLiveStreamTranscodeInfo(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeInfoOutcome(DescribeLiveStreamTranscodeInfoResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeInfoOutcome(outcome.error());
}

void LiveClient::describeLiveStreamTranscodeInfoAsync(const DescribeLiveStreamTranscodeInfoRequest& request, const DescribeLiveStreamTranscodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamTranscodeInfoOutcomeCallable LiveClient::describeLiveStreamTranscodeInfoCallable(const DescribeLiveStreamTranscodeInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamTranscodeMetricDataOutcome LiveClient::describeLiveStreamTranscodeMetricData(const DescribeLiveStreamTranscodeMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeMetricDataOutcome(DescribeLiveStreamTranscodeMetricDataResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeMetricDataOutcome(outcome.error());
}

void LiveClient::describeLiveStreamTranscodeMetricDataAsync(const DescribeLiveStreamTranscodeMetricDataRequest& request, const DescribeLiveStreamTranscodeMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamTranscodeMetricDataOutcomeCallable LiveClient::describeLiveStreamTranscodeMetricDataCallable(const DescribeLiveStreamTranscodeMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamTranscodeStreamNumOutcome LiveClient::describeLiveStreamTranscodeStreamNum(const DescribeLiveStreamTranscodeStreamNumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamTranscodeStreamNumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamTranscodeStreamNumOutcome(DescribeLiveStreamTranscodeStreamNumResult(outcome.result()));
	else
		return DescribeLiveStreamTranscodeStreamNumOutcome(outcome.error());
}

void LiveClient::describeLiveStreamTranscodeStreamNumAsync(const DescribeLiveStreamTranscodeStreamNumRequest& request, const DescribeLiveStreamTranscodeStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamTranscodeStreamNum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamTranscodeStreamNumOutcomeCallable LiveClient::describeLiveStreamTranscodeStreamNumCallable(const DescribeLiveStreamTranscodeStreamNumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamTranscodeStreamNumOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamTranscodeStreamNum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamWatermarkRulesOutcome LiveClient::describeLiveStreamWatermarkRules(const DescribeLiveStreamWatermarkRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamWatermarkRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamWatermarkRulesOutcome(DescribeLiveStreamWatermarkRulesResult(outcome.result()));
	else
		return DescribeLiveStreamWatermarkRulesOutcome(outcome.error());
}

void LiveClient::describeLiveStreamWatermarkRulesAsync(const DescribeLiveStreamWatermarkRulesRequest& request, const DescribeLiveStreamWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamWatermarkRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamWatermarkRulesOutcomeCallable LiveClient::describeLiveStreamWatermarkRulesCallable(const DescribeLiveStreamWatermarkRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamWatermarkRulesOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamWatermarkRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamWatermarksOutcome LiveClient::describeLiveStreamWatermarks(const DescribeLiveStreamWatermarksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamWatermarksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamWatermarksOutcome(DescribeLiveStreamWatermarksResult(outcome.result()));
	else
		return DescribeLiveStreamWatermarksOutcome(outcome.error());
}

void LiveClient::describeLiveStreamWatermarksAsync(const DescribeLiveStreamWatermarksRequest& request, const DescribeLiveStreamWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamWatermarks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamWatermarksOutcomeCallable LiveClient::describeLiveStreamWatermarksCallable(const DescribeLiveStreamWatermarksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamWatermarksOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamWatermarks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsBlockListOutcome LiveClient::describeLiveStreamsBlockList(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsBlockListOutcome(DescribeLiveStreamsBlockListResult(outcome.result()));
	else
		return DescribeLiveStreamsBlockListOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsBlockListAsync(const DescribeLiveStreamsBlockListRequest& request, const DescribeLiveStreamsBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsBlockList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsBlockListOutcomeCallable LiveClient::describeLiveStreamsBlockListCallable(const DescribeLiveStreamsBlockListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsBlockListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsBlockList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsControlHistoryOutcome LiveClient::describeLiveStreamsControlHistory(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsControlHistoryOutcome(DescribeLiveStreamsControlHistoryResult(outcome.result()));
	else
		return DescribeLiveStreamsControlHistoryOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsControlHistoryAsync(const DescribeLiveStreamsControlHistoryRequest& request, const DescribeLiveStreamsControlHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsControlHistory(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsControlHistoryOutcomeCallable LiveClient::describeLiveStreamsControlHistoryCallable(const DescribeLiveStreamsControlHistoryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsControlHistoryOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsControlHistory(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsNotifyRecordsOutcome LiveClient::describeLiveStreamsNotifyRecords(const DescribeLiveStreamsNotifyRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsNotifyRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsNotifyRecordsOutcome(DescribeLiveStreamsNotifyRecordsResult(outcome.result()));
	else
		return DescribeLiveStreamsNotifyRecordsOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsNotifyRecordsAsync(const DescribeLiveStreamsNotifyRecordsRequest& request, const DescribeLiveStreamsNotifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsNotifyRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsNotifyRecordsOutcomeCallable LiveClient::describeLiveStreamsNotifyRecordsCallable(const DescribeLiveStreamsNotifyRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsNotifyRecordsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsNotifyRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsNotifyUrlConfigOutcome LiveClient::describeLiveStreamsNotifyUrlConfig(const DescribeLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsNotifyUrlConfigOutcome(DescribeLiveStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return DescribeLiveStreamsNotifyUrlConfigOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsNotifyUrlConfigAsync(const DescribeLiveStreamsNotifyUrlConfigRequest& request, const DescribeLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsNotifyUrlConfigOutcomeCallable LiveClient::describeLiveStreamsNotifyUrlConfigCallable(const DescribeLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsOnlineListOutcome LiveClient::describeLiveStreamsOnlineList(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsOnlineListOutcome(DescribeLiveStreamsOnlineListResult(outcome.result()));
	else
		return DescribeLiveStreamsOnlineListOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsOnlineListAsync(const DescribeLiveStreamsOnlineListRequest& request, const DescribeLiveStreamsOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsOnlineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsOnlineListOutcomeCallable LiveClient::describeLiveStreamsOnlineListCallable(const DescribeLiveStreamsOnlineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsOnlineListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsOnlineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsPublishListOutcome LiveClient::describeLiveStreamsPublishList(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsPublishListOutcome(DescribeLiveStreamsPublishListResult(outcome.result()));
	else
		return DescribeLiveStreamsPublishListOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsPublishListAsync(const DescribeLiveStreamsPublishListRequest& request, const DescribeLiveStreamsPublishListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsPublishList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsPublishListOutcomeCallable LiveClient::describeLiveStreamsPublishListCallable(const DescribeLiveStreamsPublishListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsPublishListOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsPublishList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveStreamsTotalCountOutcome LiveClient::describeLiveStreamsTotalCount(const DescribeLiveStreamsTotalCountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveStreamsTotalCountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveStreamsTotalCountOutcome(DescribeLiveStreamsTotalCountResult(outcome.result()));
	else
		return DescribeLiveStreamsTotalCountOutcome(outcome.error());
}

void LiveClient::describeLiveStreamsTotalCountAsync(const DescribeLiveStreamsTotalCountRequest& request, const DescribeLiveStreamsTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveStreamsTotalCount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveStreamsTotalCountOutcomeCallable LiveClient::describeLiveStreamsTotalCountCallable(const DescribeLiveStreamsTotalCountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveStreamsTotalCountOutcome()>>(
			[this, request]()
			{
			return this->describeLiveStreamsTotalCount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveTopDomainsByFlowOutcome LiveClient::describeLiveTopDomainsByFlow(const DescribeLiveTopDomainsByFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveTopDomainsByFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveTopDomainsByFlowOutcome(DescribeLiveTopDomainsByFlowResult(outcome.result()));
	else
		return DescribeLiveTopDomainsByFlowOutcome(outcome.error());
}

void LiveClient::describeLiveTopDomainsByFlowAsync(const DescribeLiveTopDomainsByFlowRequest& request, const DescribeLiveTopDomainsByFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveTopDomainsByFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveTopDomainsByFlowOutcomeCallable LiveClient::describeLiveTopDomainsByFlowCallable(const DescribeLiveTopDomainsByFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveTopDomainsByFlowOutcome()>>(
			[this, request]()
			{
			return this->describeLiveTopDomainsByFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveTrafficDomainLogOutcome LiveClient::describeLiveTrafficDomainLog(const DescribeLiveTrafficDomainLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveTrafficDomainLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveTrafficDomainLogOutcome(DescribeLiveTrafficDomainLogResult(outcome.result()));
	else
		return DescribeLiveTrafficDomainLogOutcome(outcome.error());
}

void LiveClient::describeLiveTrafficDomainLogAsync(const DescribeLiveTrafficDomainLogRequest& request, const DescribeLiveTrafficDomainLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveTrafficDomainLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveTrafficDomainLogOutcomeCallable LiveClient::describeLiveTrafficDomainLogCallable(const DescribeLiveTrafficDomainLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveTrafficDomainLogOutcome()>>(
			[this, request]()
			{
			return this->describeLiveTrafficDomainLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUpVideoAudioInfoOutcome LiveClient::describeLiveUpVideoAudioInfo(const DescribeLiveUpVideoAudioInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUpVideoAudioInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUpVideoAudioInfoOutcome(DescribeLiveUpVideoAudioInfoResult(outcome.result()));
	else
		return DescribeLiveUpVideoAudioInfoOutcome(outcome.error());
}

void LiveClient::describeLiveUpVideoAudioInfoAsync(const DescribeLiveUpVideoAudioInfoRequest& request, const DescribeLiveUpVideoAudioInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUpVideoAudioInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUpVideoAudioInfoOutcomeCallable LiveClient::describeLiveUpVideoAudioInfoCallable(const DescribeLiveUpVideoAudioInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUpVideoAudioInfoOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUpVideoAudioInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUserBillPredictionOutcome LiveClient::describeLiveUserBillPrediction(const DescribeLiveUserBillPredictionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUserBillPredictionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUserBillPredictionOutcome(DescribeLiveUserBillPredictionResult(outcome.result()));
	else
		return DescribeLiveUserBillPredictionOutcome(outcome.error());
}

void LiveClient::describeLiveUserBillPredictionAsync(const DescribeLiveUserBillPredictionRequest& request, const DescribeLiveUserBillPredictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUserBillPrediction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUserBillPredictionOutcomeCallable LiveClient::describeLiveUserBillPredictionCallable(const DescribeLiveUserBillPredictionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUserBillPredictionOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUserBillPrediction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUserDomainsOutcome LiveClient::describeLiveUserDomains(const DescribeLiveUserDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUserDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUserDomainsOutcome(DescribeLiveUserDomainsResult(outcome.result()));
	else
		return DescribeLiveUserDomainsOutcome(outcome.error());
}

void LiveClient::describeLiveUserDomainsAsync(const DescribeLiveUserDomainsRequest& request, const DescribeLiveUserDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUserDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUserDomainsOutcomeCallable LiveClient::describeLiveUserDomainsCallable(const DescribeLiveUserDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUserDomainsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUserDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUserStreamMetricDataOutcome LiveClient::describeLiveUserStreamMetricData(const DescribeLiveUserStreamMetricDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUserStreamMetricDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUserStreamMetricDataOutcome(DescribeLiveUserStreamMetricDataResult(outcome.result()));
	else
		return DescribeLiveUserStreamMetricDataOutcome(outcome.error());
}

void LiveClient::describeLiveUserStreamMetricDataAsync(const DescribeLiveUserStreamMetricDataRequest& request, const DescribeLiveUserStreamMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUserStreamMetricData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUserStreamMetricDataOutcomeCallable LiveClient::describeLiveUserStreamMetricDataCallable(const DescribeLiveUserStreamMetricDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUserStreamMetricDataOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUserStreamMetricData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUserTagsOutcome LiveClient::describeLiveUserTags(const DescribeLiveUserTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUserTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUserTagsOutcome(DescribeLiveUserTagsResult(outcome.result()));
	else
		return DescribeLiveUserTagsOutcome(outcome.error());
}

void LiveClient::describeLiveUserTagsAsync(const DescribeLiveUserTagsRequest& request, const DescribeLiveUserTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUserTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUserTagsOutcomeCallable LiveClient::describeLiveUserTagsCallable(const DescribeLiveUserTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUserTagsOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUserTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveUserTrafficLogOutcome LiveClient::describeLiveUserTrafficLog(const DescribeLiveUserTrafficLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveUserTrafficLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveUserTrafficLogOutcome(DescribeLiveUserTrafficLogResult(outcome.result()));
	else
		return DescribeLiveUserTrafficLogOutcome(outcome.error());
}

void LiveClient::describeLiveUserTrafficLogAsync(const DescribeLiveUserTrafficLogRequest& request, const DescribeLiveUserTrafficLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveUserTrafficLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveUserTrafficLogOutcomeCallable LiveClient::describeLiveUserTrafficLogCallable(const DescribeLiveUserTrafficLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveUserTrafficLogOutcome()>>(
			[this, request]()
			{
			return this->describeLiveUserTrafficLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeLiveVerifyContentOutcome LiveClient::describeLiveVerifyContent(const DescribeLiveVerifyContentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeLiveVerifyContentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeLiveVerifyContentOutcome(DescribeLiveVerifyContentResult(outcome.result()));
	else
		return DescribeLiveVerifyContentOutcome(outcome.error());
}

void LiveClient::describeLiveVerifyContentAsync(const DescribeLiveVerifyContentRequest& request, const DescribeLiveVerifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeLiveVerifyContent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeLiveVerifyContentOutcomeCallable LiveClient::describeLiveVerifyContentCallable(const DescribeLiveVerifyContentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeLiveVerifyContentOutcome()>>(
			[this, request]()
			{
			return this->describeLiveVerifyContent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeMeterLiveBypassDurationOutcome LiveClient::describeMeterLiveBypassDuration(const DescribeMeterLiveBypassDurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMeterLiveBypassDurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMeterLiveBypassDurationOutcome(DescribeMeterLiveBypassDurationResult(outcome.result()));
	else
		return DescribeMeterLiveBypassDurationOutcome(outcome.error());
}

void LiveClient::describeMeterLiveBypassDurationAsync(const DescribeMeterLiveBypassDurationRequest& request, const DescribeMeterLiveBypassDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMeterLiveBypassDuration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeMeterLiveBypassDurationOutcomeCallable LiveClient::describeMeterLiveBypassDurationCallable(const DescribeMeterLiveBypassDurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMeterLiveBypassDurationOutcome()>>(
			[this, request]()
			{
			return this->describeMeterLiveBypassDuration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeMixStreamListOutcome LiveClient::describeMixStreamList(const DescribeMixStreamListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMixStreamListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMixStreamListOutcome(DescribeMixStreamListResult(outcome.result()));
	else
		return DescribeMixStreamListOutcome(outcome.error());
}

void LiveClient::describeMixStreamListAsync(const DescribeMixStreamListRequest& request, const DescribeMixStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMixStreamList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeMixStreamListOutcomeCallable LiveClient::describeMixStreamListCallable(const DescribeMixStreamListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMixStreamListOutcome()>>(
			[this, request]()
			{
			return this->describeMixStreamList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRTSNativeSDKFirstFrameCostOutcome LiveClient::describeRTSNativeSDKFirstFrameCost(const DescribeRTSNativeSDKFirstFrameCostRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTSNativeSDKFirstFrameCostOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTSNativeSDKFirstFrameCostOutcome(DescribeRTSNativeSDKFirstFrameCostResult(outcome.result()));
	else
		return DescribeRTSNativeSDKFirstFrameCostOutcome(outcome.error());
}

void LiveClient::describeRTSNativeSDKFirstFrameCostAsync(const DescribeRTSNativeSDKFirstFrameCostRequest& request, const DescribeRTSNativeSDKFirstFrameCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTSNativeSDKFirstFrameCost(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRTSNativeSDKFirstFrameCostOutcomeCallable LiveClient::describeRTSNativeSDKFirstFrameCostCallable(const DescribeRTSNativeSDKFirstFrameCostRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTSNativeSDKFirstFrameCostOutcome()>>(
			[this, request]()
			{
			return this->describeRTSNativeSDKFirstFrameCost(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRTSNativeSDKFirstFrameDelayOutcome LiveClient::describeRTSNativeSDKFirstFrameDelay(const DescribeRTSNativeSDKFirstFrameDelayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTSNativeSDKFirstFrameDelayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTSNativeSDKFirstFrameDelayOutcome(DescribeRTSNativeSDKFirstFrameDelayResult(outcome.result()));
	else
		return DescribeRTSNativeSDKFirstFrameDelayOutcome(outcome.error());
}

void LiveClient::describeRTSNativeSDKFirstFrameDelayAsync(const DescribeRTSNativeSDKFirstFrameDelayRequest& request, const DescribeRTSNativeSDKFirstFrameDelayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTSNativeSDKFirstFrameDelay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRTSNativeSDKFirstFrameDelayOutcomeCallable LiveClient::describeRTSNativeSDKFirstFrameDelayCallable(const DescribeRTSNativeSDKFirstFrameDelayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTSNativeSDKFirstFrameDelayOutcome()>>(
			[this, request]()
			{
			return this->describeRTSNativeSDKFirstFrameDelay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRTSNativeSDKPlayFailStatusOutcome LiveClient::describeRTSNativeSDKPlayFailStatus(const DescribeRTSNativeSDKPlayFailStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTSNativeSDKPlayFailStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTSNativeSDKPlayFailStatusOutcome(DescribeRTSNativeSDKPlayFailStatusResult(outcome.result()));
	else
		return DescribeRTSNativeSDKPlayFailStatusOutcome(outcome.error());
}

void LiveClient::describeRTSNativeSDKPlayFailStatusAsync(const DescribeRTSNativeSDKPlayFailStatusRequest& request, const DescribeRTSNativeSDKPlayFailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTSNativeSDKPlayFailStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRTSNativeSDKPlayFailStatusOutcomeCallable LiveClient::describeRTSNativeSDKPlayFailStatusCallable(const DescribeRTSNativeSDKPlayFailStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTSNativeSDKPlayFailStatusOutcome()>>(
			[this, request]()
			{
			return this->describeRTSNativeSDKPlayFailStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRTSNativeSDKPlayTimeOutcome LiveClient::describeRTSNativeSDKPlayTime(const DescribeRTSNativeSDKPlayTimeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTSNativeSDKPlayTimeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTSNativeSDKPlayTimeOutcome(DescribeRTSNativeSDKPlayTimeResult(outcome.result()));
	else
		return DescribeRTSNativeSDKPlayTimeOutcome(outcome.error());
}

void LiveClient::describeRTSNativeSDKPlayTimeAsync(const DescribeRTSNativeSDKPlayTimeRequest& request, const DescribeRTSNativeSDKPlayTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTSNativeSDKPlayTime(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRTSNativeSDKPlayTimeOutcomeCallable LiveClient::describeRTSNativeSDKPlayTimeCallable(const DescribeRTSNativeSDKPlayTimeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTSNativeSDKPlayTimeOutcome()>>(
			[this, request]()
			{
			return this->describeRTSNativeSDKPlayTime(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRTSNativeSDKVvDataOutcome LiveClient::describeRTSNativeSDKVvData(const DescribeRTSNativeSDKVvDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTSNativeSDKVvDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTSNativeSDKVvDataOutcome(DescribeRTSNativeSDKVvDataResult(outcome.result()));
	else
		return DescribeRTSNativeSDKVvDataOutcome(outcome.error());
}

void LiveClient::describeRTSNativeSDKVvDataAsync(const DescribeRTSNativeSDKVvDataRequest& request, const DescribeRTSNativeSDKVvDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTSNativeSDKVvData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRTSNativeSDKVvDataOutcomeCallable LiveClient::describeRTSNativeSDKVvDataCallable(const DescribeRTSNativeSDKVvDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTSNativeSDKVvDataOutcome()>>(
			[this, request]()
			{
			return this->describeRTSNativeSDKVvData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRtcCloudRecordingFilesOutcome LiveClient::describeRtcCloudRecordingFiles(const DescribeRtcCloudRecordingFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcCloudRecordingFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcCloudRecordingFilesOutcome(DescribeRtcCloudRecordingFilesResult(outcome.result()));
	else
		return DescribeRtcCloudRecordingFilesOutcome(outcome.error());
}

void LiveClient::describeRtcCloudRecordingFilesAsync(const DescribeRtcCloudRecordingFilesRequest& request, const DescribeRtcCloudRecordingFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcCloudRecordingFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRtcCloudRecordingFilesOutcomeCallable LiveClient::describeRtcCloudRecordingFilesCallable(const DescribeRtcCloudRecordingFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcCloudRecordingFilesOutcome()>>(
			[this, request]()
			{
			return this->describeRtcCloudRecordingFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeRtcMPUEventSubOutcome LiveClient::describeRtcMPUEventSub(const DescribeRtcMPUEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcMPUEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcMPUEventSubOutcome(DescribeRtcMPUEventSubResult(outcome.result()));
	else
		return DescribeRtcMPUEventSubOutcome(outcome.error());
}

void LiveClient::describeRtcMPUEventSubAsync(const DescribeRtcMPUEventSubRequest& request, const DescribeRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcMPUEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeRtcMPUEventSubOutcomeCallable LiveClient::describeRtcMPUEventSubCallable(const DescribeRtcMPUEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcMPUEventSubOutcome()>>(
			[this, request]()
			{
			return this->describeRtcMPUEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeShowListOutcome LiveClient::describeShowList(const DescribeShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeShowListOutcome(DescribeShowListResult(outcome.result()));
	else
		return DescribeShowListOutcome(outcome.error());
}

void LiveClient::describeShowListAsync(const DescribeShowListRequest& request, const DescribeShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeShowListOutcomeCallable LiveClient::describeShowListCallable(const DescribeShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeShowListOutcome()>>(
			[this, request]()
			{
			return this->describeShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeStreamLocationBlockOutcome LiveClient::describeStreamLocationBlock(const DescribeStreamLocationBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStreamLocationBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStreamLocationBlockOutcome(DescribeStreamLocationBlockResult(outcome.result()));
	else
		return DescribeStreamLocationBlockOutcome(outcome.error());
}

void LiveClient::describeStreamLocationBlockAsync(const DescribeStreamLocationBlockRequest& request, const DescribeStreamLocationBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStreamLocationBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeStreamLocationBlockOutcomeCallable LiveClient::describeStreamLocationBlockCallable(const DescribeStreamLocationBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStreamLocationBlockOutcome()>>(
			[this, request]()
			{
			return this->describeStreamLocationBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeStudioLayoutsOutcome LiveClient::describeStudioLayouts(const DescribeStudioLayoutsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStudioLayoutsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStudioLayoutsOutcome(DescribeStudioLayoutsResult(outcome.result()));
	else
		return DescribeStudioLayoutsOutcome(outcome.error());
}

void LiveClient::describeStudioLayoutsAsync(const DescribeStudioLayoutsRequest& request, const DescribeStudioLayoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStudioLayouts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeStudioLayoutsOutcomeCallable LiveClient::describeStudioLayoutsCallable(const DescribeStudioLayoutsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStudioLayoutsOutcome()>>(
			[this, request]()
			{
			return this->describeStudioLayouts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeToutiaoLivePlayOutcome LiveClient::describeToutiaoLivePlay(const DescribeToutiaoLivePlayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeToutiaoLivePlayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeToutiaoLivePlayOutcome(DescribeToutiaoLivePlayResult(outcome.result()));
	else
		return DescribeToutiaoLivePlayOutcome(outcome.error());
}

void LiveClient::describeToutiaoLivePlayAsync(const DescribeToutiaoLivePlayRequest& request, const DescribeToutiaoLivePlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeToutiaoLivePlay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeToutiaoLivePlayOutcomeCallable LiveClient::describeToutiaoLivePlayCallable(const DescribeToutiaoLivePlayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeToutiaoLivePlayOutcome()>>(
			[this, request]()
			{
			return this->describeToutiaoLivePlay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeToutiaoLivePublishOutcome LiveClient::describeToutiaoLivePublish(const DescribeToutiaoLivePublishRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeToutiaoLivePublishOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeToutiaoLivePublishOutcome(DescribeToutiaoLivePublishResult(outcome.result()));
	else
		return DescribeToutiaoLivePublishOutcome(outcome.error());
}

void LiveClient::describeToutiaoLivePublishAsync(const DescribeToutiaoLivePublishRequest& request, const DescribeToutiaoLivePublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeToutiaoLivePublish(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeToutiaoLivePublishOutcomeCallable LiveClient::describeToutiaoLivePublishCallable(const DescribeToutiaoLivePublishRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeToutiaoLivePublishOutcome()>>(
			[this, request]()
			{
			return this->describeToutiaoLivePublish(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeUidOnlineStreamsOutcome LiveClient::describeUidOnlineStreams(const DescribeUidOnlineStreamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUidOnlineStreamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUidOnlineStreamsOutcome(DescribeUidOnlineStreamsResult(outcome.result()));
	else
		return DescribeUidOnlineStreamsOutcome(outcome.error());
}

void LiveClient::describeUidOnlineStreamsAsync(const DescribeUidOnlineStreamsRequest& request, const DescribeUidOnlineStreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUidOnlineStreams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeUidOnlineStreamsOutcomeCallable LiveClient::describeUidOnlineStreamsCallable(const DescribeUidOnlineStreamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUidOnlineStreamsOutcome()>>(
			[this, request]()
			{
			return this->describeUidOnlineStreams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeUpBpsPeakDataOutcome LiveClient::describeUpBpsPeakData(const DescribeUpBpsPeakDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpBpsPeakDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpBpsPeakDataOutcome(DescribeUpBpsPeakDataResult(outcome.result()));
	else
		return DescribeUpBpsPeakDataOutcome(outcome.error());
}

void LiveClient::describeUpBpsPeakDataAsync(const DescribeUpBpsPeakDataRequest& request, const DescribeUpBpsPeakDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpBpsPeakData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeUpBpsPeakDataOutcomeCallable LiveClient::describeUpBpsPeakDataCallable(const DescribeUpBpsPeakDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpBpsPeakDataOutcome()>>(
			[this, request]()
			{
			return this->describeUpBpsPeakData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeUpBpsPeakOfLineOutcome LiveClient::describeUpBpsPeakOfLine(const DescribeUpBpsPeakOfLineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpBpsPeakOfLineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpBpsPeakOfLineOutcome(DescribeUpBpsPeakOfLineResult(outcome.result()));
	else
		return DescribeUpBpsPeakOfLineOutcome(outcome.error());
}

void LiveClient::describeUpBpsPeakOfLineAsync(const DescribeUpBpsPeakOfLineRequest& request, const DescribeUpBpsPeakOfLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpBpsPeakOfLine(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeUpBpsPeakOfLineOutcomeCallable LiveClient::describeUpBpsPeakOfLineCallable(const DescribeUpBpsPeakOfLineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpBpsPeakOfLineOutcome()>>(
			[this, request]()
			{
			return this->describeUpBpsPeakOfLine(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DescribeUpPeakPublishStreamDataOutcome LiveClient::describeUpPeakPublishStreamData(const DescribeUpPeakPublishStreamDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUpPeakPublishStreamDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUpPeakPublishStreamDataOutcome(DescribeUpPeakPublishStreamDataResult(outcome.result()));
	else
		return DescribeUpPeakPublishStreamDataOutcome(outcome.error());
}

void LiveClient::describeUpPeakPublishStreamDataAsync(const DescribeUpPeakPublishStreamDataRequest& request, const DescribeUpPeakPublishStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUpPeakPublishStreamData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DescribeUpPeakPublishStreamDataOutcomeCallable LiveClient::describeUpPeakPublishStreamDataCallable(const DescribeUpPeakPublishStreamDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUpPeakPublishStreamDataOutcome()>>(
			[this, request]()
			{
			return this->describeUpPeakPublishStreamData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DisableLiveRealtimeLogDeliveryOutcome LiveClient::disableLiveRealtimeLogDelivery(const DisableLiveRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableLiveRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableLiveRealtimeLogDeliveryOutcome(DisableLiveRealtimeLogDeliveryResult(outcome.result()));
	else
		return DisableLiveRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::disableLiveRealtimeLogDeliveryAsync(const DisableLiveRealtimeLogDeliveryRequest& request, const DisableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableLiveRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DisableLiveRealtimeLogDeliveryOutcomeCallable LiveClient::disableLiveRealtimeLogDeliveryCallable(const DisableLiveRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableLiveRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->disableLiveRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::DynamicUpdateWaterMarkStreamRuleOutcome LiveClient::dynamicUpdateWaterMarkStreamRule(const DynamicUpdateWaterMarkStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DynamicUpdateWaterMarkStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DynamicUpdateWaterMarkStreamRuleOutcome(DynamicUpdateWaterMarkStreamRuleResult(outcome.result()));
	else
		return DynamicUpdateWaterMarkStreamRuleOutcome(outcome.error());
}

void LiveClient::dynamicUpdateWaterMarkStreamRuleAsync(const DynamicUpdateWaterMarkStreamRuleRequest& request, const DynamicUpdateWaterMarkStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dynamicUpdateWaterMarkStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::DynamicUpdateWaterMarkStreamRuleOutcomeCallable LiveClient::dynamicUpdateWaterMarkStreamRuleCallable(const DynamicUpdateWaterMarkStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DynamicUpdateWaterMarkStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->dynamicUpdateWaterMarkStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::EditPlaylistOutcome LiveClient::editPlaylist(const EditPlaylistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditPlaylistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditPlaylistOutcome(EditPlaylistResult(outcome.result()));
	else
		return EditPlaylistOutcome(outcome.error());
}

void LiveClient::editPlaylistAsync(const EditPlaylistRequest& request, const EditPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editPlaylist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::EditPlaylistOutcomeCallable LiveClient::editPlaylistCallable(const EditPlaylistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditPlaylistOutcome()>>(
			[this, request]()
			{
			return this->editPlaylist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::EditShowAndReplaceOutcome LiveClient::editShowAndReplace(const EditShowAndReplaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EditShowAndReplaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EditShowAndReplaceOutcome(EditShowAndReplaceResult(outcome.result()));
	else
		return EditShowAndReplaceOutcome(outcome.error());
}

void LiveClient::editShowAndReplaceAsync(const EditShowAndReplaceRequest& request, const EditShowAndReplaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, editShowAndReplace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::EditShowAndReplaceOutcomeCallable LiveClient::editShowAndReplaceCallable(const EditShowAndReplaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EditShowAndReplaceOutcome()>>(
			[this, request]()
			{
			return this->editShowAndReplace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::EffectCasterUrgentOutcome LiveClient::effectCasterUrgent(const EffectCasterUrgentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EffectCasterUrgentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EffectCasterUrgentOutcome(EffectCasterUrgentResult(outcome.result()));
	else
		return EffectCasterUrgentOutcome(outcome.error());
}

void LiveClient::effectCasterUrgentAsync(const EffectCasterUrgentRequest& request, const EffectCasterUrgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, effectCasterUrgent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::EffectCasterUrgentOutcomeCallable LiveClient::effectCasterUrgentCallable(const EffectCasterUrgentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EffectCasterUrgentOutcome()>>(
			[this, request]()
			{
			return this->effectCasterUrgent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::EffectCasterVideoResourceOutcome LiveClient::effectCasterVideoResource(const EffectCasterVideoResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EffectCasterVideoResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EffectCasterVideoResourceOutcome(EffectCasterVideoResourceResult(outcome.result()));
	else
		return EffectCasterVideoResourceOutcome(outcome.error());
}

void LiveClient::effectCasterVideoResourceAsync(const EffectCasterVideoResourceRequest& request, const EffectCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, effectCasterVideoResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::EffectCasterVideoResourceOutcomeCallable LiveClient::effectCasterVideoResourceCallable(const EffectCasterVideoResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EffectCasterVideoResourceOutcome()>>(
			[this, request]()
			{
			return this->effectCasterVideoResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::EnableLiveRealtimeLogDeliveryOutcome LiveClient::enableLiveRealtimeLogDelivery(const EnableLiveRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableLiveRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableLiveRealtimeLogDeliveryOutcome(EnableLiveRealtimeLogDeliveryResult(outcome.result()));
	else
		return EnableLiveRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::enableLiveRealtimeLogDeliveryAsync(const EnableLiveRealtimeLogDeliveryRequest& request, const EnableLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableLiveRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::EnableLiveRealtimeLogDeliveryOutcomeCallable LiveClient::enableLiveRealtimeLogDeliveryCallable(const EnableLiveRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableLiveRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->enableLiveRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ForbidLiveStreamOutcome LiveClient::forbidLiveStream(const ForbidLiveStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForbidLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForbidLiveStreamOutcome(ForbidLiveStreamResult(outcome.result()));
	else
		return ForbidLiveStreamOutcome(outcome.error());
}

void LiveClient::forbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forbidLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ForbidLiveStreamOutcomeCallable LiveClient::forbidLiveStreamCallable(const ForbidLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->forbidLiveStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetAllCustomTemplatesOutcome LiveClient::getAllCustomTemplates(const GetAllCustomTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllCustomTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllCustomTemplatesOutcome(GetAllCustomTemplatesResult(outcome.result()));
	else
		return GetAllCustomTemplatesOutcome(outcome.error());
}

void LiveClient::getAllCustomTemplatesAsync(const GetAllCustomTemplatesRequest& request, const GetAllCustomTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllCustomTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetAllCustomTemplatesOutcomeCallable LiveClient::getAllCustomTemplatesCallable(const GetAllCustomTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllCustomTemplatesOutcome()>>(
			[this, request]()
			{
			return this->getAllCustomTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetCustomTemplateOutcome LiveClient::getCustomTemplate(const GetCustomTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCustomTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCustomTemplateOutcome(GetCustomTemplateResult(outcome.result()));
	else
		return GetCustomTemplateOutcome(outcome.error());
}

void LiveClient::getCustomTemplateAsync(const GetCustomTemplateRequest& request, const GetCustomTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCustomTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetCustomTemplateOutcomeCallable LiveClient::getCustomTemplateCallable(const GetCustomTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCustomTemplateOutcome()>>(
			[this, request]()
			{
			return this->getCustomTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetEdgeTranscodeJobOutcome LiveClient::getEdgeTranscodeJob(const GetEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeTranscodeJobOutcome(GetEdgeTranscodeJobResult(outcome.result()));
	else
		return GetEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::getEdgeTranscodeJobAsync(const GetEdgeTranscodeJobRequest& request, const GetEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetEdgeTranscodeJobOutcomeCallable LiveClient::getEdgeTranscodeJobCallable(const GetEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->getEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetEdgeTranscodeTemplateOutcome LiveClient::getEdgeTranscodeTemplate(const GetEdgeTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEdgeTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEdgeTranscodeTemplateOutcome(GetEdgeTranscodeTemplateResult(outcome.result()));
	else
		return GetEdgeTranscodeTemplateOutcome(outcome.error());
}

void LiveClient::getEdgeTranscodeTemplateAsync(const GetEdgeTranscodeTemplateRequest& request, const GetEdgeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEdgeTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetEdgeTranscodeTemplateOutcomeCallable LiveClient::getEdgeTranscodeTemplateCallable(const GetEdgeTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEdgeTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->getEdgeTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetEditingJobInfoOutcome LiveClient::getEditingJobInfo(const GetEditingJobInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEditingJobInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEditingJobInfoOutcome(GetEditingJobInfoResult(outcome.result()));
	else
		return GetEditingJobInfoOutcome(outcome.error());
}

void LiveClient::getEditingJobInfoAsync(const GetEditingJobInfoRequest& request, const GetEditingJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEditingJobInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetEditingJobInfoOutcomeCallable LiveClient::getEditingJobInfoCallable(const GetEditingJobInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEditingJobInfoOutcome()>>(
			[this, request]()
			{
			return this->getEditingJobInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetMessageAppOutcome LiveClient::getMessageApp(const GetMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMessageAppOutcome(GetMessageAppResult(outcome.result()));
	else
		return GetMessageAppOutcome(outcome.error());
}

void LiveClient::getMessageAppAsync(const GetMessageAppRequest& request, const GetMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetMessageAppOutcomeCallable LiveClient::getMessageAppCallable(const GetMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMessageAppOutcome()>>(
			[this, request]()
			{
			return this->getMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetMessageGroupOutcome LiveClient::getMessageGroup(const GetMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMessageGroupOutcome(GetMessageGroupResult(outcome.result()));
	else
		return GetMessageGroupOutcome(outcome.error());
}

void LiveClient::getMessageGroupAsync(const GetMessageGroupRequest& request, const GetMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetMessageGroupOutcomeCallable LiveClient::getMessageGroupCallable(const GetMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->getMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetMessageTokenOutcome LiveClient::getMessageToken(const GetMessageTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMessageTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMessageTokenOutcome(GetMessageTokenResult(outcome.result()));
	else
		return GetMessageTokenOutcome(outcome.error());
}

void LiveClient::getMessageTokenAsync(const GetMessageTokenRequest& request, const GetMessageTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMessageToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetMessageTokenOutcomeCallable LiveClient::getMessageTokenCallable(const GetMessageTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMessageTokenOutcome()>>(
			[this, request]()
			{
			return this->getMessageToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::GetTranscodeTaskStatusOutcome LiveClient::getTranscodeTaskStatus(const GetTranscodeTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTranscodeTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTranscodeTaskStatusOutcome(GetTranscodeTaskStatusResult(outcome.result()));
	else
		return GetTranscodeTaskStatusOutcome(outcome.error());
}

void LiveClient::getTranscodeTaskStatusAsync(const GetTranscodeTaskStatusRequest& request, const GetTranscodeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTranscodeTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::GetTranscodeTaskStatusOutcomeCallable LiveClient::getTranscodeTaskStatusCallable(const GetTranscodeTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTranscodeTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->getTranscodeTaskStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::HotLiveRtcStreamOutcome LiveClient::hotLiveRtcStream(const HotLiveRtcStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return HotLiveRtcStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return HotLiveRtcStreamOutcome(HotLiveRtcStreamResult(outcome.result()));
	else
		return HotLiveRtcStreamOutcome(outcome.error());
}

void LiveClient::hotLiveRtcStreamAsync(const HotLiveRtcStreamRequest& request, const HotLiveRtcStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, hotLiveRtcStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::HotLiveRtcStreamOutcomeCallable LiveClient::hotLiveRtcStreamCallable(const HotLiveRtcStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<HotLiveRtcStreamOutcome()>>(
			[this, request]()
			{
			return this->hotLiveRtcStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::InitializeAutoShowListTaskOutcome LiveClient::initializeAutoShowListTask(const InitializeAutoShowListTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeAutoShowListTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeAutoShowListTaskOutcome(InitializeAutoShowListTaskResult(outcome.result()));
	else
		return InitializeAutoShowListTaskOutcome(outcome.error());
}

void LiveClient::initializeAutoShowListTaskAsync(const InitializeAutoShowListTaskRequest& request, const InitializeAutoShowListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeAutoShowListTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::InitializeAutoShowListTaskOutcomeCallable LiveClient::initializeAutoShowListTaskCallable(const InitializeAutoShowListTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeAutoShowListTaskOutcome()>>(
			[this, request]()
			{
			return this->initializeAutoShowListTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::JoinMessageGroupOutcome LiveClient::joinMessageGroup(const JoinMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return JoinMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return JoinMessageGroupOutcome(JoinMessageGroupResult(outcome.result()));
	else
		return JoinMessageGroupOutcome(outcome.error());
}

void LiveClient::joinMessageGroupAsync(const JoinMessageGroupRequest& request, const JoinMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, joinMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::JoinMessageGroupOutcomeCallable LiveClient::joinMessageGroupCallable(const JoinMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<JoinMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->joinMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::KickLiveMessageGroupUserOutcome LiveClient::kickLiveMessageGroupUser(const KickLiveMessageGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KickLiveMessageGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KickLiveMessageGroupUserOutcome(KickLiveMessageGroupUserResult(outcome.result()));
	else
		return KickLiveMessageGroupUserOutcome(outcome.error());
}

void LiveClient::kickLiveMessageGroupUserAsync(const KickLiveMessageGroupUserRequest& request, const KickLiveMessageGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, kickLiveMessageGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::KickLiveMessageGroupUserOutcomeCallable LiveClient::kickLiveMessageGroupUserCallable(const KickLiveMessageGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KickLiveMessageGroupUserOutcome()>>(
			[this, request]()
			{
			return this->kickLiveMessageGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::LeaveMessageGroupOutcome LiveClient::leaveMessageGroup(const LeaveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LeaveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LeaveMessageGroupOutcome(LeaveMessageGroupResult(outcome.result()));
	else
		return LeaveMessageGroupOutcome(outcome.error());
}

void LiveClient::leaveMessageGroupAsync(const LeaveMessageGroupRequest& request, const LeaveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, leaveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::LeaveMessageGroupOutcomeCallable LiveClient::leaveMessageGroupCallable(const LeaveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LeaveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->leaveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListEdgeTranscodeJobOutcome LiveClient::listEdgeTranscodeJob(const ListEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEdgeTranscodeJobOutcome(ListEdgeTranscodeJobResult(outcome.result()));
	else
		return ListEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::listEdgeTranscodeJobAsync(const ListEdgeTranscodeJobRequest& request, const ListEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListEdgeTranscodeJobOutcomeCallable LiveClient::listEdgeTranscodeJobCallable(const ListEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->listEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListEdgeTranscodeTemplateOutcome LiveClient::listEdgeTranscodeTemplate(const ListEdgeTranscodeTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEdgeTranscodeTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEdgeTranscodeTemplateOutcome(ListEdgeTranscodeTemplateResult(outcome.result()));
	else
		return ListEdgeTranscodeTemplateOutcome(outcome.error());
}

void LiveClient::listEdgeTranscodeTemplateAsync(const ListEdgeTranscodeTemplateRequest& request, const ListEdgeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEdgeTranscodeTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListEdgeTranscodeTemplateOutcomeCallable LiveClient::listEdgeTranscodeTemplateCallable(const ListEdgeTranscodeTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEdgeTranscodeTemplateOutcome()>>(
			[this, request]()
			{
			return this->listEdgeTranscodeTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListEventSubOutcome LiveClient::listEventSub(const ListEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventSubOutcome(ListEventSubResult(outcome.result()));
	else
		return ListEventSubOutcome(outcome.error());
}

void LiveClient::listEventSubAsync(const ListEventSubRequest& request, const ListEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListEventSubOutcomeCallable LiveClient::listEventSubCallable(const ListEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventSubOutcome()>>(
			[this, request]()
			{
			return this->listEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListEventSubEventOutcome LiveClient::listEventSubEvent(const ListEventSubEventRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListEventSubEventOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListEventSubEventOutcome(ListEventSubEventResult(outcome.result()));
	else
		return ListEventSubEventOutcome(outcome.error());
}

void LiveClient::listEventSubEventAsync(const ListEventSubEventRequest& request, const ListEventSubEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listEventSubEvent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListEventSubEventOutcomeCallable LiveClient::listEventSubEventCallable(const ListEventSubEventRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListEventSubEventOutcome()>>(
			[this, request]()
			{
			return this->listEventSubEvent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveDelayConfigOutcome LiveClient::listLiveDelayConfig(const ListLiveDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveDelayConfigOutcome(ListLiveDelayConfigResult(outcome.result()));
	else
		return ListLiveDelayConfigOutcome(outcome.error());
}

void LiveClient::listLiveDelayConfigAsync(const ListLiveDelayConfigRequest& request, const ListLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveDelayConfigOutcomeCallable LiveClient::listLiveDelayConfigCallable(const ListLiveDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->listLiveDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveMessageAppsOutcome LiveClient::listLiveMessageApps(const ListLiveMessageAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveMessageAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveMessageAppsOutcome(ListLiveMessageAppsResult(outcome.result()));
	else
		return ListLiveMessageAppsOutcome(outcome.error());
}

void LiveClient::listLiveMessageAppsAsync(const ListLiveMessageAppsRequest& request, const ListLiveMessageAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveMessageApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveMessageAppsOutcomeCallable LiveClient::listLiveMessageAppsCallable(const ListLiveMessageAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveMessageAppsOutcome()>>(
			[this, request]()
			{
			return this->listLiveMessageApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveMessageGroupByPageOutcome LiveClient::listLiveMessageGroupByPage(const ListLiveMessageGroupByPageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveMessageGroupByPageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveMessageGroupByPageOutcome(ListLiveMessageGroupByPageResult(outcome.result()));
	else
		return ListLiveMessageGroupByPageOutcome(outcome.error());
}

void LiveClient::listLiveMessageGroupByPageAsync(const ListLiveMessageGroupByPageRequest& request, const ListLiveMessageGroupByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveMessageGroupByPage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveMessageGroupByPageOutcomeCallable LiveClient::listLiveMessageGroupByPageCallable(const ListLiveMessageGroupByPageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveMessageGroupByPageOutcome()>>(
			[this, request]()
			{
			return this->listLiveMessageGroupByPage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveMessageGroupMessagesOutcome LiveClient::listLiveMessageGroupMessages(const ListLiveMessageGroupMessagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveMessageGroupMessagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveMessageGroupMessagesOutcome(ListLiveMessageGroupMessagesResult(outcome.result()));
	else
		return ListLiveMessageGroupMessagesOutcome(outcome.error());
}

void LiveClient::listLiveMessageGroupMessagesAsync(const ListLiveMessageGroupMessagesRequest& request, const ListLiveMessageGroupMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveMessageGroupMessages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveMessageGroupMessagesOutcomeCallable LiveClient::listLiveMessageGroupMessagesCallable(const ListLiveMessageGroupMessagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveMessageGroupMessagesOutcome()>>(
			[this, request]()
			{
			return this->listLiveMessageGroupMessages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveMessageGroupUsersOutcome LiveClient::listLiveMessageGroupUsers(const ListLiveMessageGroupUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveMessageGroupUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveMessageGroupUsersOutcome(ListLiveMessageGroupUsersResult(outcome.result()));
	else
		return ListLiveMessageGroupUsersOutcome(outcome.error());
}

void LiveClient::listLiveMessageGroupUsersAsync(const ListLiveMessageGroupUsersRequest& request, const ListLiveMessageGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveMessageGroupUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveMessageGroupUsersOutcomeCallable LiveClient::listLiveMessageGroupUsersCallable(const ListLiveMessageGroupUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveMessageGroupUsersOutcome()>>(
			[this, request]()
			{
			return this->listLiveMessageGroupUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveMessageGroupsOutcome LiveClient::listLiveMessageGroups(const ListLiveMessageGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveMessageGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveMessageGroupsOutcome(ListLiveMessageGroupsResult(outcome.result()));
	else
		return ListLiveMessageGroupsOutcome(outcome.error());
}

void LiveClient::listLiveMessageGroupsAsync(const ListLiveMessageGroupsRequest& request, const ListLiveMessageGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveMessageGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveMessageGroupsOutcomeCallable LiveClient::listLiveMessageGroupsCallable(const ListLiveMessageGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveMessageGroupsOutcome()>>(
			[this, request]()
			{
			return this->listLiveMessageGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveRealtimeLogDeliveryOutcome LiveClient::listLiveRealtimeLogDelivery(const ListLiveRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRealtimeLogDeliveryOutcome(ListLiveRealtimeLogDeliveryResult(outcome.result()));
	else
		return ListLiveRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::listLiveRealtimeLogDeliveryAsync(const ListLiveRealtimeLogDeliveryRequest& request, const ListLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveRealtimeLogDeliveryOutcomeCallable LiveClient::listLiveRealtimeLogDeliveryCallable(const ListLiveRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->listLiveRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveRealtimeLogDeliveryDomainsOutcome LiveClient::listLiveRealtimeLogDeliveryDomains(const ListLiveRealtimeLogDeliveryDomainsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRealtimeLogDeliveryDomainsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRealtimeLogDeliveryDomainsOutcome(ListLiveRealtimeLogDeliveryDomainsResult(outcome.result()));
	else
		return ListLiveRealtimeLogDeliveryDomainsOutcome(outcome.error());
}

void LiveClient::listLiveRealtimeLogDeliveryDomainsAsync(const ListLiveRealtimeLogDeliveryDomainsRequest& request, const ListLiveRealtimeLogDeliveryDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRealtimeLogDeliveryDomains(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveRealtimeLogDeliveryDomainsOutcomeCallable LiveClient::listLiveRealtimeLogDeliveryDomainsCallable(const ListLiveRealtimeLogDeliveryDomainsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRealtimeLogDeliveryDomainsOutcome()>>(
			[this, request]()
			{
			return this->listLiveRealtimeLogDeliveryDomains(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListLiveRealtimeLogDeliveryInfosOutcome LiveClient::listLiveRealtimeLogDeliveryInfos(const ListLiveRealtimeLogDeliveryInfosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListLiveRealtimeLogDeliveryInfosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListLiveRealtimeLogDeliveryInfosOutcome(ListLiveRealtimeLogDeliveryInfosResult(outcome.result()));
	else
		return ListLiveRealtimeLogDeliveryInfosOutcome(outcome.error());
}

void LiveClient::listLiveRealtimeLogDeliveryInfosAsync(const ListLiveRealtimeLogDeliveryInfosRequest& request, const ListLiveRealtimeLogDeliveryInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listLiveRealtimeLogDeliveryInfos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListLiveRealtimeLogDeliveryInfosOutcomeCallable LiveClient::listLiveRealtimeLogDeliveryInfosCallable(const ListLiveRealtimeLogDeliveryInfosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListLiveRealtimeLogDeliveryInfosOutcome()>>(
			[this, request]()
			{
			return this->listLiveRealtimeLogDeliveryInfos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMessageOutcome LiveClient::listMessage(const ListMessageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMessageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMessageOutcome(ListMessageResult(outcome.result()));
	else
		return ListMessageOutcome(outcome.error());
}

void LiveClient::listMessageAsync(const ListMessageRequest& request, const ListMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMessage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMessageOutcomeCallable LiveClient::listMessageCallable(const ListMessageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMessageOutcome()>>(
			[this, request]()
			{
			return this->listMessage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMessageAppOutcome LiveClient::listMessageApp(const ListMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMessageAppOutcome(ListMessageAppResult(outcome.result()));
	else
		return ListMessageAppOutcome(outcome.error());
}

void LiveClient::listMessageAppAsync(const ListMessageAppRequest& request, const ListMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMessageAppOutcomeCallable LiveClient::listMessageAppCallable(const ListMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMessageAppOutcome()>>(
			[this, request]()
			{
			return this->listMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMessageGroupOutcome LiveClient::listMessageGroup(const ListMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMessageGroupOutcome(ListMessageGroupResult(outcome.result()));
	else
		return ListMessageGroupOutcome(outcome.error());
}

void LiveClient::listMessageGroupAsync(const ListMessageGroupRequest& request, const ListMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMessageGroupOutcomeCallable LiveClient::listMessageGroupCallable(const ListMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->listMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMessageGroupUserOutcome LiveClient::listMessageGroupUser(const ListMessageGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMessageGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMessageGroupUserOutcome(ListMessageGroupUserResult(outcome.result()));
	else
		return ListMessageGroupUserOutcome(outcome.error());
}

void LiveClient::listMessageGroupUserAsync(const ListMessageGroupUserRequest& request, const ListMessageGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMessageGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMessageGroupUserOutcomeCallable LiveClient::listMessageGroupUserCallable(const ListMessageGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMessageGroupUserOutcome()>>(
			[this, request]()
			{
			return this->listMessageGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMessageGroupUserByIdOutcome LiveClient::listMessageGroupUserById(const ListMessageGroupUserByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMessageGroupUserByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMessageGroupUserByIdOutcome(ListMessageGroupUserByIdResult(outcome.result()));
	else
		return ListMessageGroupUserByIdOutcome(outcome.error());
}

void LiveClient::listMessageGroupUserByIdAsync(const ListMessageGroupUserByIdRequest& request, const ListMessageGroupUserByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMessageGroupUserById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMessageGroupUserByIdOutcomeCallable LiveClient::listMessageGroupUserByIdCallable(const ListMessageGroupUserByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMessageGroupUserByIdOutcome()>>(
			[this, request]()
			{
			return this->listMessageGroupUserById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListMuteGroupUserOutcome LiveClient::listMuteGroupUser(const ListMuteGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListMuteGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListMuteGroupUserOutcome(ListMuteGroupUserResult(outcome.result()));
	else
		return ListMuteGroupUserOutcome(outcome.error());
}

void LiveClient::listMuteGroupUserAsync(const ListMuteGroupUserRequest& request, const ListMuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listMuteGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListMuteGroupUserOutcomeCallable LiveClient::listMuteGroupUserCallable(const ListMuteGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListMuteGroupUserOutcome()>>(
			[this, request]()
			{
			return this->listMuteGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListPlaylistOutcome LiveClient::listPlaylist(const ListPlaylistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPlaylistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPlaylistOutcome(ListPlaylistResult(outcome.result()));
	else
		return ListPlaylistOutcome(outcome.error());
}

void LiveClient::listPlaylistAsync(const ListPlaylistRequest& request, const ListPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlaylist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListPlaylistOutcomeCallable LiveClient::listPlaylistCallable(const ListPlaylistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPlaylistOutcome()>>(
			[this, request]()
			{
			return this->listPlaylist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListPlaylistItemsOutcome LiveClient::listPlaylistItems(const ListPlaylistItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPlaylistItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPlaylistItemsOutcome(ListPlaylistItemsResult(outcome.result()));
	else
		return ListPlaylistItemsOutcome(outcome.error());
}

void LiveClient::listPlaylistItemsAsync(const ListPlaylistItemsRequest& request, const ListPlaylistItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPlaylistItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListPlaylistItemsOutcomeCallable LiveClient::listPlaylistItemsCallable(const ListPlaylistItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPlaylistItemsOutcome()>>(
			[this, request]()
			{
			return this->listPlaylistItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListRtcMPUEventSubRecordOutcome LiveClient::listRtcMPUEventSubRecord(const ListRtcMPUEventSubRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRtcMPUEventSubRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRtcMPUEventSubRecordOutcome(ListRtcMPUEventSubRecordResult(outcome.result()));
	else
		return ListRtcMPUEventSubRecordOutcome(outcome.error());
}

void LiveClient::listRtcMPUEventSubRecordAsync(const ListRtcMPUEventSubRecordRequest& request, const ListRtcMPUEventSubRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRtcMPUEventSubRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListRtcMPUEventSubRecordOutcomeCallable LiveClient::listRtcMPUEventSubRecordCallable(const ListRtcMPUEventSubRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRtcMPUEventSubRecordOutcome()>>(
			[this, request]()
			{
			return this->listRtcMPUEventSubRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ListRtcMPUTaskDetailOutcome LiveClient::listRtcMPUTaskDetail(const ListRtcMPUTaskDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListRtcMPUTaskDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListRtcMPUTaskDetailOutcome(ListRtcMPUTaskDetailResult(outcome.result()));
	else
		return ListRtcMPUTaskDetailOutcome(outcome.error());
}

void LiveClient::listRtcMPUTaskDetailAsync(const ListRtcMPUTaskDetailRequest& request, const ListRtcMPUTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listRtcMPUTaskDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ListRtcMPUTaskDetailOutcomeCallable LiveClient::listRtcMPUTaskDetailCallable(const ListRtcMPUTaskDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListRtcMPUTaskDetailOutcome()>>(
			[this, request]()
			{
			return this->listRtcMPUTaskDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::LiveUpstreamQosDataOutcome LiveClient::liveUpstreamQosData(const LiveUpstreamQosDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return LiveUpstreamQosDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return LiveUpstreamQosDataOutcome(LiveUpstreamQosDataResult(outcome.result()));
	else
		return LiveUpstreamQosDataOutcome(outcome.error());
}

void LiveClient::liveUpstreamQosDataAsync(const LiveUpstreamQosDataRequest& request, const LiveUpstreamQosDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, liveUpstreamQosData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::LiveUpstreamQosDataOutcomeCallable LiveClient::liveUpstreamQosDataCallable(const LiveUpstreamQosDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<LiveUpstreamQosDataOutcome()>>(
			[this, request]()
			{
			return this->liveUpstreamQosData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::MiguLivePullToPushStartOutcome LiveClient::miguLivePullToPushStart(const MiguLivePullToPushStartRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MiguLivePullToPushStartOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MiguLivePullToPushStartOutcome(MiguLivePullToPushStartResult(outcome.result()));
	else
		return MiguLivePullToPushStartOutcome(outcome.error());
}

void LiveClient::miguLivePullToPushStartAsync(const MiguLivePullToPushStartRequest& request, const MiguLivePullToPushStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, miguLivePullToPushStart(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::MiguLivePullToPushStartOutcomeCallable LiveClient::miguLivePullToPushStartCallable(const MiguLivePullToPushStartRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MiguLivePullToPushStartOutcome()>>(
			[this, request]()
			{
			return this->miguLivePullToPushStart(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::MiguLivePullToPushStatusOutcome LiveClient::miguLivePullToPushStatus(const MiguLivePullToPushStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MiguLivePullToPushStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MiguLivePullToPushStatusOutcome(MiguLivePullToPushStatusResult(outcome.result()));
	else
		return MiguLivePullToPushStatusOutcome(outcome.error());
}

void LiveClient::miguLivePullToPushStatusAsync(const MiguLivePullToPushStatusRequest& request, const MiguLivePullToPushStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, miguLivePullToPushStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::MiguLivePullToPushStatusOutcomeCallable LiveClient::miguLivePullToPushStatusCallable(const MiguLivePullToPushStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MiguLivePullToPushStatusOutcome()>>(
			[this, request]()
			{
			return this->miguLivePullToPushStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyCasterComponentOutcome LiveClient::modifyCasterComponent(const ModifyCasterComponentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCasterComponentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCasterComponentOutcome(ModifyCasterComponentResult(outcome.result()));
	else
		return ModifyCasterComponentOutcome(outcome.error());
}

void LiveClient::modifyCasterComponentAsync(const ModifyCasterComponentRequest& request, const ModifyCasterComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCasterComponent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyCasterComponentOutcomeCallable LiveClient::modifyCasterComponentCallable(const ModifyCasterComponentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCasterComponentOutcome()>>(
			[this, request]()
			{
			return this->modifyCasterComponent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyCasterEpisodeOutcome LiveClient::modifyCasterEpisode(const ModifyCasterEpisodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCasterEpisodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCasterEpisodeOutcome(ModifyCasterEpisodeResult(outcome.result()));
	else
		return ModifyCasterEpisodeOutcome(outcome.error());
}

void LiveClient::modifyCasterEpisodeAsync(const ModifyCasterEpisodeRequest& request, const ModifyCasterEpisodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCasterEpisode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyCasterEpisodeOutcomeCallable LiveClient::modifyCasterEpisodeCallable(const ModifyCasterEpisodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCasterEpisodeOutcome()>>(
			[this, request]()
			{
			return this->modifyCasterEpisode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyCasterLayoutOutcome LiveClient::modifyCasterLayout(const ModifyCasterLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCasterLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCasterLayoutOutcome(ModifyCasterLayoutResult(outcome.result()));
	else
		return ModifyCasterLayoutOutcome(outcome.error());
}

void LiveClient::modifyCasterLayoutAsync(const ModifyCasterLayoutRequest& request, const ModifyCasterLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCasterLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyCasterLayoutOutcomeCallable LiveClient::modifyCasterLayoutCallable(const ModifyCasterLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCasterLayoutOutcome()>>(
			[this, request]()
			{
			return this->modifyCasterLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyCasterProgramOutcome LiveClient::modifyCasterProgram(const ModifyCasterProgramRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCasterProgramOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCasterProgramOutcome(ModifyCasterProgramResult(outcome.result()));
	else
		return ModifyCasterProgramOutcome(outcome.error());
}

void LiveClient::modifyCasterProgramAsync(const ModifyCasterProgramRequest& request, const ModifyCasterProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCasterProgram(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyCasterProgramOutcomeCallable LiveClient::modifyCasterProgramCallable(const ModifyCasterProgramRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCasterProgramOutcome()>>(
			[this, request]()
			{
			return this->modifyCasterProgram(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyCasterVideoResourceOutcome LiveClient::modifyCasterVideoResource(const ModifyCasterVideoResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCasterVideoResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCasterVideoResourceOutcome(ModifyCasterVideoResourceResult(outcome.result()));
	else
		return ModifyCasterVideoResourceOutcome(outcome.error());
}

void LiveClient::modifyCasterVideoResourceAsync(const ModifyCasterVideoResourceRequest& request, const ModifyCasterVideoResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCasterVideoResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyCasterVideoResourceOutcomeCallable LiveClient::modifyCasterVideoResourceCallable(const ModifyCasterVideoResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCasterVideoResourceOutcome()>>(
			[this, request]()
			{
			return this->modifyCasterVideoResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveAIStudioOutcome LiveClient::modifyLiveAIStudio(const ModifyLiveAIStudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveAIStudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveAIStudioOutcome(ModifyLiveAIStudioResult(outcome.result()));
	else
		return ModifyLiveAIStudioOutcome(outcome.error());
}

void LiveClient::modifyLiveAIStudioAsync(const ModifyLiveAIStudioRequest& request, const ModifyLiveAIStudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveAIStudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveAIStudioOutcomeCallable LiveClient::modifyLiveAIStudioCallable(const ModifyLiveAIStudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveAIStudioOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveAIStudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveDomainSchdmByPropertyOutcome LiveClient::modifyLiveDomainSchdmByProperty(const ModifyLiveDomainSchdmByPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveDomainSchdmByPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveDomainSchdmByPropertyOutcome(ModifyLiveDomainSchdmByPropertyResult(outcome.result()));
	else
		return ModifyLiveDomainSchdmByPropertyOutcome(outcome.error());
}

void LiveClient::modifyLiveDomainSchdmByPropertyAsync(const ModifyLiveDomainSchdmByPropertyRequest& request, const ModifyLiveDomainSchdmByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveDomainSchdmByProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveDomainSchdmByPropertyOutcomeCallable LiveClient::modifyLiveDomainSchdmByPropertyCallable(const ModifyLiveDomainSchdmByPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveDomainSchdmByPropertyOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveDomainSchdmByProperty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageAppAuditOutcome LiveClient::modifyLiveMessageAppAudit(const ModifyLiveMessageAppAuditRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageAppAuditOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageAppAuditOutcome(ModifyLiveMessageAppAuditResult(outcome.result()));
	else
		return ModifyLiveMessageAppAuditOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageAppAuditAsync(const ModifyLiveMessageAppAuditRequest& request, const ModifyLiveMessageAppAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageAppAudit(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageAppAuditOutcomeCallable LiveClient::modifyLiveMessageAppAuditCallable(const ModifyLiveMessageAppAuditRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageAppAuditOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageAppAudit(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageAppCallbackOutcome LiveClient::modifyLiveMessageAppCallback(const ModifyLiveMessageAppCallbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageAppCallbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageAppCallbackOutcome(ModifyLiveMessageAppCallbackResult(outcome.result()));
	else
		return ModifyLiveMessageAppCallbackOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageAppCallbackAsync(const ModifyLiveMessageAppCallbackRequest& request, const ModifyLiveMessageAppCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageAppCallback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageAppCallbackOutcomeCallable LiveClient::modifyLiveMessageAppCallbackCallable(const ModifyLiveMessageAppCallbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageAppCallbackOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageAppCallback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageAppDisableOutcome LiveClient::modifyLiveMessageAppDisable(const ModifyLiveMessageAppDisableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageAppDisableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageAppDisableOutcome(ModifyLiveMessageAppDisableResult(outcome.result()));
	else
		return ModifyLiveMessageAppDisableOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageAppDisableAsync(const ModifyLiveMessageAppDisableRequest& request, const ModifyLiveMessageAppDisableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageAppDisable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageAppDisableOutcomeCallable LiveClient::modifyLiveMessageAppDisableCallable(const ModifyLiveMessageAppDisableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageAppDisableOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageAppDisable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageGroupOutcome LiveClient::modifyLiveMessageGroup(const ModifyLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageGroupOutcome(ModifyLiveMessageGroupResult(outcome.result()));
	else
		return ModifyLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageGroupAsync(const ModifyLiveMessageGroupRequest& request, const ModifyLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageGroupOutcomeCallable LiveClient::modifyLiveMessageGroupCallable(const ModifyLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageGroupBandOutcome LiveClient::modifyLiveMessageGroupBand(const ModifyLiveMessageGroupBandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageGroupBandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageGroupBandOutcome(ModifyLiveMessageGroupBandResult(outcome.result()));
	else
		return ModifyLiveMessageGroupBandOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageGroupBandAsync(const ModifyLiveMessageGroupBandRequest& request, const ModifyLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageGroupBand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageGroupBandOutcomeCallable LiveClient::modifyLiveMessageGroupBandCallable(const ModifyLiveMessageGroupBandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageGroupBandOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageGroupBand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveMessageUserInfoOutcome LiveClient::modifyLiveMessageUserInfo(const ModifyLiveMessageUserInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveMessageUserInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveMessageUserInfoOutcome(ModifyLiveMessageUserInfoResult(outcome.result()));
	else
		return ModifyLiveMessageUserInfoOutcome(outcome.error());
}

void LiveClient::modifyLiveMessageUserInfoAsync(const ModifyLiveMessageUserInfoRequest& request, const ModifyLiveMessageUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveMessageUserInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveMessageUserInfoOutcomeCallable LiveClient::modifyLiveMessageUserInfoCallable(const ModifyLiveMessageUserInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveMessageUserInfoOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveMessageUserInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyLiveRealtimeLogDeliveryOutcome LiveClient::modifyLiveRealtimeLogDelivery(const ModifyLiveRealtimeLogDeliveryRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyLiveRealtimeLogDeliveryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyLiveRealtimeLogDeliveryOutcome(ModifyLiveRealtimeLogDeliveryResult(outcome.result()));
	else
		return ModifyLiveRealtimeLogDeliveryOutcome(outcome.error());
}

void LiveClient::modifyLiveRealtimeLogDeliveryAsync(const ModifyLiveRealtimeLogDeliveryRequest& request, const ModifyLiveRealtimeLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyLiveRealtimeLogDelivery(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyLiveRealtimeLogDeliveryOutcomeCallable LiveClient::modifyLiveRealtimeLogDeliveryCallable(const ModifyLiveRealtimeLogDeliveryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyLiveRealtimeLogDeliveryOutcome()>>(
			[this, request]()
			{
			return this->modifyLiveRealtimeLogDelivery(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyShowListOutcome LiveClient::modifyShowList(const ModifyShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyShowListOutcome(ModifyShowListResult(outcome.result()));
	else
		return ModifyShowListOutcome(outcome.error());
}

void LiveClient::modifyShowListAsync(const ModifyShowListRequest& request, const ModifyShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyShowListOutcomeCallable LiveClient::modifyShowListCallable(const ModifyShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyShowListOutcome()>>(
			[this, request]()
			{
			return this->modifyShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ModifyStudioLayoutOutcome LiveClient::modifyStudioLayout(const ModifyStudioLayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyStudioLayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyStudioLayoutOutcome(ModifyStudioLayoutResult(outcome.result()));
	else
		return ModifyStudioLayoutOutcome(outcome.error());
}

void LiveClient::modifyStudioLayoutAsync(const ModifyStudioLayoutRequest& request, const ModifyStudioLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyStudioLayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ModifyStudioLayoutOutcomeCallable LiveClient::modifyStudioLayoutCallable(const ModifyStudioLayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyStudioLayoutOutcome()>>(
			[this, request]()
			{
			return this->modifyStudioLayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::MuteAllGroupUserOutcome LiveClient::muteAllGroupUser(const MuteAllGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MuteAllGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MuteAllGroupUserOutcome(MuteAllGroupUserResult(outcome.result()));
	else
		return MuteAllGroupUserOutcome(outcome.error());
}

void LiveClient::muteAllGroupUserAsync(const MuteAllGroupUserRequest& request, const MuteAllGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, muteAllGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::MuteAllGroupUserOutcomeCallable LiveClient::muteAllGroupUserCallable(const MuteAllGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MuteAllGroupUserOutcome()>>(
			[this, request]()
			{
			return this->muteAllGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::MuteGroupUserOutcome LiveClient::muteGroupUser(const MuteGroupUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MuteGroupUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MuteGroupUserOutcome(MuteGroupUserResult(outcome.result()));
	else
		return MuteGroupUserOutcome(outcome.error());
}

void LiveClient::muteGroupUserAsync(const MuteGroupUserRequest& request, const MuteGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, muteGroupUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::MuteGroupUserOutcomeCallable LiveClient::muteGroupUserCallable(const MuteGroupUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MuteGroupUserOutcome()>>(
			[this, request]()
			{
			return this->muteGroupUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::OpenLiveShiftOutcome LiveClient::openLiveShift(const OpenLiveShiftRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenLiveShiftOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenLiveShiftOutcome(OpenLiveShiftResult(outcome.result()));
	else
		return OpenLiveShiftOutcome(outcome.error());
}

void LiveClient::openLiveShiftAsync(const OpenLiveShiftRequest& request, const OpenLiveShiftAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openLiveShift(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::OpenLiveShiftOutcomeCallable LiveClient::openLiveShiftCallable(const OpenLiveShiftRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenLiveShiftOutcome()>>(
			[this, request]()
			{
			return this->openLiveShift(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::PlayChoosenShowOutcome LiveClient::playChoosenShow(const PlayChoosenShowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PlayChoosenShowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PlayChoosenShowOutcome(PlayChoosenShowResult(outcome.result()));
	else
		return PlayChoosenShowOutcome(outcome.error());
}

void LiveClient::playChoosenShowAsync(const PlayChoosenShowRequest& request, const PlayChoosenShowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, playChoosenShow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::PlayChoosenShowOutcomeCallable LiveClient::playChoosenShowCallable(const PlayChoosenShowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PlayChoosenShowOutcome()>>(
			[this, request]()
			{
			return this->playChoosenShow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::PublishLiveStagingConfigToProductionOutcome LiveClient::publishLiveStagingConfigToProduction(const PublishLiveStagingConfigToProductionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PublishLiveStagingConfigToProductionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PublishLiveStagingConfigToProductionOutcome(PublishLiveStagingConfigToProductionResult(outcome.result()));
	else
		return PublishLiveStagingConfigToProductionOutcome(outcome.error());
}

void LiveClient::publishLiveStagingConfigToProductionAsync(const PublishLiveStagingConfigToProductionRequest& request, const PublishLiveStagingConfigToProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, publishLiveStagingConfigToProduction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::PublishLiveStagingConfigToProductionOutcomeCallable LiveClient::publishLiveStagingConfigToProductionCallable(const PublishLiveStagingConfigToProductionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PublishLiveStagingConfigToProductionOutcome()>>(
			[this, request]()
			{
			return this->publishLiveStagingConfigToProduction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::QueryLiveDomainMultiStreamListOutcome LiveClient::queryLiveDomainMultiStreamList(const QueryLiveDomainMultiStreamListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryLiveDomainMultiStreamListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryLiveDomainMultiStreamListOutcome(QueryLiveDomainMultiStreamListResult(outcome.result()));
	else
		return QueryLiveDomainMultiStreamListOutcome(outcome.error());
}

void LiveClient::queryLiveDomainMultiStreamListAsync(const QueryLiveDomainMultiStreamListRequest& request, const QueryLiveDomainMultiStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryLiveDomainMultiStreamList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::QueryLiveDomainMultiStreamListOutcomeCallable LiveClient::queryLiveDomainMultiStreamListCallable(const QueryLiveDomainMultiStreamListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryLiveDomainMultiStreamListOutcome()>>(
			[this, request]()
			{
			return this->queryLiveDomainMultiStreamList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::QueryMessageAppOutcome LiveClient::queryMessageApp(const QueryMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryMessageAppOutcome(QueryMessageAppResult(outcome.result()));
	else
		return QueryMessageAppOutcome(outcome.error());
}

void LiveClient::queryMessageAppAsync(const QueryMessageAppRequest& request, const QueryMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::QueryMessageAppOutcomeCallable LiveClient::queryMessageAppCallable(const QueryMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryMessageAppOutcome()>>(
			[this, request]()
			{
			return this->queryMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::QueryRtcAsrTasksOutcome LiveClient::queryRtcAsrTasks(const QueryRtcAsrTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryRtcAsrTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryRtcAsrTasksOutcome(QueryRtcAsrTasksResult(outcome.result()));
	else
		return QueryRtcAsrTasksOutcome(outcome.error());
}

void LiveClient::queryRtcAsrTasksAsync(const QueryRtcAsrTasksRequest& request, const QueryRtcAsrTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryRtcAsrTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::QueryRtcAsrTasksOutcomeCallable LiveClient::queryRtcAsrTasksCallable(const QueryRtcAsrTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryRtcAsrTasksOutcome()>>(
			[this, request]()
			{
			return this->queryRtcAsrTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::QuerySnapshotCallbackAuthOutcome LiveClient::querySnapshotCallbackAuth(const QuerySnapshotCallbackAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QuerySnapshotCallbackAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QuerySnapshotCallbackAuthOutcome(QuerySnapshotCallbackAuthResult(outcome.result()));
	else
		return QuerySnapshotCallbackAuthOutcome(outcome.error());
}

void LiveClient::querySnapshotCallbackAuthAsync(const QuerySnapshotCallbackAuthRequest& request, const QuerySnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, querySnapshotCallbackAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::QuerySnapshotCallbackAuthOutcomeCallable LiveClient::querySnapshotCallbackAuthCallable(const QuerySnapshotCallbackAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QuerySnapshotCallbackAuthOutcome()>>(
			[this, request]()
			{
			return this->querySnapshotCallbackAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RealTimeRecordCommandOutcome LiveClient::realTimeRecordCommand(const RealTimeRecordCommandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RealTimeRecordCommandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RealTimeRecordCommandOutcome(RealTimeRecordCommandResult(outcome.result()));
	else
		return RealTimeRecordCommandOutcome(outcome.error());
}

void LiveClient::realTimeRecordCommandAsync(const RealTimeRecordCommandRequest& request, const RealTimeRecordCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, realTimeRecordCommand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RealTimeRecordCommandOutcomeCallable LiveClient::realTimeRecordCommandCallable(const RealTimeRecordCommandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RealTimeRecordCommandOutcome()>>(
			[this, request]()
			{
			return this->realTimeRecordCommand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RecoverLiveMessageDeletedGroupOutcome LiveClient::recoverLiveMessageDeletedGroup(const RecoverLiveMessageDeletedGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverLiveMessageDeletedGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverLiveMessageDeletedGroupOutcome(RecoverLiveMessageDeletedGroupResult(outcome.result()));
	else
		return RecoverLiveMessageDeletedGroupOutcome(outcome.error());
}

void LiveClient::recoverLiveMessageDeletedGroupAsync(const RecoverLiveMessageDeletedGroupRequest& request, const RecoverLiveMessageDeletedGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverLiveMessageDeletedGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RecoverLiveMessageDeletedGroupOutcomeCallable LiveClient::recoverLiveMessageDeletedGroupCallable(const RecoverLiveMessageDeletedGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverLiveMessageDeletedGroupOutcome()>>(
			[this, request]()
			{
			return this->recoverLiveMessageDeletedGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RemoveLiveMessageGroupBandOutcome LiveClient::removeLiveMessageGroupBand(const RemoveLiveMessageGroupBandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveLiveMessageGroupBandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveLiveMessageGroupBandOutcome(RemoveLiveMessageGroupBandResult(outcome.result()));
	else
		return RemoveLiveMessageGroupBandOutcome(outcome.error());
}

void LiveClient::removeLiveMessageGroupBandAsync(const RemoveLiveMessageGroupBandRequest& request, const RemoveLiveMessageGroupBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeLiveMessageGroupBand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RemoveLiveMessageGroupBandOutcomeCallable LiveClient::removeLiveMessageGroupBandCallable(const RemoveLiveMessageGroupBandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveLiveMessageGroupBandOutcome()>>(
			[this, request]()
			{
			return this->removeLiveMessageGroupBand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RemoveShowFromShowListOutcome LiveClient::removeShowFromShowList(const RemoveShowFromShowListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveShowFromShowListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveShowFromShowListOutcome(RemoveShowFromShowListResult(outcome.result()));
	else
		return RemoveShowFromShowListOutcome(outcome.error());
}

void LiveClient::removeShowFromShowListAsync(const RemoveShowFromShowListRequest& request, const RemoveShowFromShowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeShowFromShowList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RemoveShowFromShowListOutcomeCallable LiveClient::removeShowFromShowListCallable(const RemoveShowFromShowListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveShowFromShowListOutcome()>>(
			[this, request]()
			{
			return this->removeShowFromShowList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RemoveTerminalsOutcome LiveClient::removeTerminals(const RemoveTerminalsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTerminalsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTerminalsOutcome(RemoveTerminalsResult(outcome.result()));
	else
		return RemoveTerminalsOutcome(outcome.error());
}

void LiveClient::removeTerminalsAsync(const RemoveTerminalsRequest& request, const RemoveTerminalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTerminals(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RemoveTerminalsOutcomeCallable LiveClient::removeTerminalsCallable(const RemoveTerminalsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTerminalsOutcome()>>(
			[this, request]()
			{
			return this->removeTerminals(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RestartCasterOutcome LiveClient::restartCaster(const RestartCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartCasterOutcome(RestartCasterResult(outcome.result()));
	else
		return RestartCasterOutcome(outcome.error());
}

void LiveClient::restartCasterAsync(const RestartCasterRequest& request, const RestartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RestartCasterOutcomeCallable LiveClient::restartCasterCallable(const RestartCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartCasterOutcome()>>(
			[this, request]()
			{
			return this->restartCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RestartLivePullToPushOutcome LiveClient::restartLivePullToPush(const RestartLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartLivePullToPushOutcome(RestartLivePullToPushResult(outcome.result()));
	else
		return RestartLivePullToPushOutcome(outcome.error());
}

void LiveClient::restartLivePullToPushAsync(const RestartLivePullToPushRequest& request, const RestartLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RestartLivePullToPushOutcomeCallable LiveClient::restartLivePullToPushCallable(const RestartLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->restartLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RestartTranscodeTaskOutcome LiveClient::restartTranscodeTask(const RestartTranscodeTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestartTranscodeTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestartTranscodeTaskOutcome(RestartTranscodeTaskResult(outcome.result()));
	else
		return RestartTranscodeTaskOutcome(outcome.error());
}

void LiveClient::restartTranscodeTaskAsync(const RestartTranscodeTaskRequest& request, const RestartTranscodeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restartTranscodeTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RestartTranscodeTaskOutcomeCallable LiveClient::restartTranscodeTaskCallable(const RestartTranscodeTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestartTranscodeTaskOutcome()>>(
			[this, request]()
			{
			return this->restartTranscodeTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::ResumeLiveStreamOutcome LiveClient::resumeLiveStream(const ResumeLiveStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumeLiveStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumeLiveStreamOutcome(ResumeLiveStreamResult(outcome.result()));
	else
		return ResumeLiveStreamOutcome(outcome.error());
}

void LiveClient::resumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumeLiveStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::ResumeLiveStreamOutcomeCallable LiveClient::resumeLiveStreamCallable(const ResumeLiveStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumeLiveStreamOutcome()>>(
			[this, request]()
			{
			return this->resumeLiveStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::RollbackLiveStagingConfigOutcome LiveClient::rollbackLiveStagingConfig(const RollbackLiveStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RollbackLiveStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RollbackLiveStagingConfigOutcome(RollbackLiveStagingConfigResult(outcome.result()));
	else
		return RollbackLiveStagingConfigOutcome(outcome.error());
}

void LiveClient::rollbackLiveStagingConfigAsync(const RollbackLiveStagingConfigRequest& request, const RollbackLiveStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rollbackLiveStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::RollbackLiveStagingConfigOutcomeCallable LiveClient::rollbackLiveStagingConfigCallable(const RollbackLiveStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RollbackLiveStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->rollbackLiveStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SendLikeOutcome LiveClient::sendLike(const SendLikeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendLikeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendLikeOutcome(SendLikeResult(outcome.result()));
	else
		return SendLikeOutcome(outcome.error());
}

void LiveClient::sendLikeAsync(const SendLikeRequest& request, const SendLikeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendLike(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SendLikeOutcomeCallable LiveClient::sendLikeCallable(const SendLikeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendLikeOutcome()>>(
			[this, request]()
			{
			return this->sendLike(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SendLiveMessageGroupOutcome LiveClient::sendLiveMessageGroup(const SendLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendLiveMessageGroupOutcome(SendLiveMessageGroupResult(outcome.result()));
	else
		return SendLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::sendLiveMessageGroupAsync(const SendLiveMessageGroupRequest& request, const SendLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SendLiveMessageGroupOutcomeCallable LiveClient::sendLiveMessageGroupCallable(const SendLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->sendLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SendLiveMessageUserOutcome LiveClient::sendLiveMessageUser(const SendLiveMessageUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendLiveMessageUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendLiveMessageUserOutcome(SendLiveMessageUserResult(outcome.result()));
	else
		return SendLiveMessageUserOutcome(outcome.error());
}

void LiveClient::sendLiveMessageUserAsync(const SendLiveMessageUserRequest& request, const SendLiveMessageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendLiveMessageUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SendLiveMessageUserOutcomeCallable LiveClient::sendLiveMessageUserCallable(const SendLiveMessageUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendLiveMessageUserOutcome()>>(
			[this, request]()
			{
			return this->sendLiveMessageUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SendMessageToGroupOutcome LiveClient::sendMessageToGroup(const SendMessageToGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageToGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageToGroupOutcome(SendMessageToGroupResult(outcome.result()));
	else
		return SendMessageToGroupOutcome(outcome.error());
}

void LiveClient::sendMessageToGroupAsync(const SendMessageToGroupRequest& request, const SendMessageToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessageToGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SendMessageToGroupOutcomeCallable LiveClient::sendMessageToGroupCallable(const SendMessageToGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageToGroupOutcome()>>(
			[this, request]()
			{
			return this->sendMessageToGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SendMessageToGroupUsersOutcome LiveClient::sendMessageToGroupUsers(const SendMessageToGroupUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SendMessageToGroupUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SendMessageToGroupUsersOutcome(SendMessageToGroupUsersResult(outcome.result()));
	else
		return SendMessageToGroupUsersOutcome(outcome.error());
}

void LiveClient::sendMessageToGroupUsersAsync(const SendMessageToGroupUsersRequest& request, const SendMessageToGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, sendMessageToGroupUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SendMessageToGroupUsersOutcomeCallable LiveClient::sendMessageToGroupUsersCallable(const SendMessageToGroupUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SendMessageToGroupUsersOutcome()>>(
			[this, request]()
			{
			return this->sendMessageToGroupUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetCasterChannelOutcome LiveClient::setCasterChannel(const SetCasterChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCasterChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCasterChannelOutcome(SetCasterChannelResult(outcome.result()));
	else
		return SetCasterChannelOutcome(outcome.error());
}

void LiveClient::setCasterChannelAsync(const SetCasterChannelRequest& request, const SetCasterChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCasterChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetCasterChannelOutcomeCallable LiveClient::setCasterChannelCallable(const SetCasterChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCasterChannelOutcome()>>(
			[this, request]()
			{
			return this->setCasterChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetCasterConfigOutcome LiveClient::setCasterConfig(const SetCasterConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCasterConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCasterConfigOutcome(SetCasterConfigResult(outcome.result()));
	else
		return SetCasterConfigOutcome(outcome.error());
}

void LiveClient::setCasterConfigAsync(const SetCasterConfigRequest& request, const SetCasterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCasterConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetCasterConfigOutcomeCallable LiveClient::setCasterConfigCallable(const SetCasterConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCasterConfigOutcome()>>(
			[this, request]()
			{
			return this->setCasterConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetCasterSceneConfigOutcome LiveClient::setCasterSceneConfig(const SetCasterSceneConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCasterSceneConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCasterSceneConfigOutcome(SetCasterSceneConfigResult(outcome.result()));
	else
		return SetCasterSceneConfigOutcome(outcome.error());
}

void LiveClient::setCasterSceneConfigAsync(const SetCasterSceneConfigRequest& request, const SetCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCasterSceneConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetCasterSceneConfigOutcomeCallable LiveClient::setCasterSceneConfigCallable(const SetCasterSceneConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCasterSceneConfigOutcome()>>(
			[this, request]()
			{
			return this->setCasterSceneConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveDomainCertificateOutcome LiveClient::setLiveDomainCertificate(const SetLiveDomainCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveDomainCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveDomainCertificateOutcome(SetLiveDomainCertificateResult(outcome.result()));
	else
		return SetLiveDomainCertificateOutcome(outcome.error());
}

void LiveClient::setLiveDomainCertificateAsync(const SetLiveDomainCertificateRequest& request, const SetLiveDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveDomainCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveDomainCertificateOutcomeCallable LiveClient::setLiveDomainCertificateCallable(const SetLiveDomainCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveDomainCertificateOutcome()>>(
			[this, request]()
			{
			return this->setLiveDomainCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveDomainMultiStreamConfigOutcome LiveClient::setLiveDomainMultiStreamConfig(const SetLiveDomainMultiStreamConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveDomainMultiStreamConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveDomainMultiStreamConfigOutcome(SetLiveDomainMultiStreamConfigResult(outcome.result()));
	else
		return SetLiveDomainMultiStreamConfigOutcome(outcome.error());
}

void LiveClient::setLiveDomainMultiStreamConfigAsync(const SetLiveDomainMultiStreamConfigRequest& request, const SetLiveDomainMultiStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveDomainMultiStreamConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveDomainMultiStreamConfigOutcomeCallable LiveClient::setLiveDomainMultiStreamConfigCallable(const SetLiveDomainMultiStreamConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveDomainMultiStreamConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveDomainMultiStreamConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveDomainMultiStreamMasterOutcome LiveClient::setLiveDomainMultiStreamMaster(const SetLiveDomainMultiStreamMasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveDomainMultiStreamMasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveDomainMultiStreamMasterOutcome(SetLiveDomainMultiStreamMasterResult(outcome.result()));
	else
		return SetLiveDomainMultiStreamMasterOutcome(outcome.error());
}

void LiveClient::setLiveDomainMultiStreamMasterAsync(const SetLiveDomainMultiStreamMasterRequest& request, const SetLiveDomainMultiStreamMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveDomainMultiStreamMaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveDomainMultiStreamMasterOutcomeCallable LiveClient::setLiveDomainMultiStreamMasterCallable(const SetLiveDomainMultiStreamMasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveDomainMultiStreamMasterOutcome()>>(
			[this, request]()
			{
			return this->setLiveDomainMultiStreamMaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveDomainMultiStreamOptimalModeOutcome LiveClient::setLiveDomainMultiStreamOptimalMode(const SetLiveDomainMultiStreamOptimalModeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveDomainMultiStreamOptimalModeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveDomainMultiStreamOptimalModeOutcome(SetLiveDomainMultiStreamOptimalModeResult(outcome.result()));
	else
		return SetLiveDomainMultiStreamOptimalModeOutcome(outcome.error());
}

void LiveClient::setLiveDomainMultiStreamOptimalModeAsync(const SetLiveDomainMultiStreamOptimalModeRequest& request, const SetLiveDomainMultiStreamOptimalModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveDomainMultiStreamOptimalMode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveDomainMultiStreamOptimalModeOutcomeCallable LiveClient::setLiveDomainMultiStreamOptimalModeCallable(const SetLiveDomainMultiStreamOptimalModeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveDomainMultiStreamOptimalModeOutcome()>>(
			[this, request]()
			{
			return this->setLiveDomainMultiStreamOptimalMode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveDomainStagingConfigOutcome LiveClient::setLiveDomainStagingConfig(const SetLiveDomainStagingConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveDomainStagingConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveDomainStagingConfigOutcome(SetLiveDomainStagingConfigResult(outcome.result()));
	else
		return SetLiveDomainStagingConfigOutcome(outcome.error());
}

void LiveClient::setLiveDomainStagingConfigAsync(const SetLiveDomainStagingConfigRequest& request, const SetLiveDomainStagingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveDomainStagingConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveDomainStagingConfigOutcomeCallable LiveClient::setLiveDomainStagingConfigCallable(const SetLiveDomainStagingConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveDomainStagingConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveDomainStagingConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveEdgeTransferOutcome LiveClient::setLiveEdgeTransfer(const SetLiveEdgeTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveEdgeTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveEdgeTransferOutcome(SetLiveEdgeTransferResult(outcome.result()));
	else
		return SetLiveEdgeTransferOutcome(outcome.error());
}

void LiveClient::setLiveEdgeTransferAsync(const SetLiveEdgeTransferRequest& request, const SetLiveEdgeTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveEdgeTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveEdgeTransferOutcomeCallable LiveClient::setLiveEdgeTransferCallable(const SetLiveEdgeTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveEdgeTransferOutcome()>>(
			[this, request]()
			{
			return this->setLiveEdgeTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveLazyPullStreamInfoConfigOutcome LiveClient::setLiveLazyPullStreamInfoConfig(const SetLiveLazyPullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveLazyPullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveLazyPullStreamInfoConfigOutcome(SetLiveLazyPullStreamInfoConfigResult(outcome.result()));
	else
		return SetLiveLazyPullStreamInfoConfigOutcome(outcome.error());
}

void LiveClient::setLiveLazyPullStreamInfoConfigAsync(const SetLiveLazyPullStreamInfoConfigRequest& request, const SetLiveLazyPullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveLazyPullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveLazyPullStreamInfoConfigOutcomeCallable LiveClient::setLiveLazyPullStreamInfoConfigCallable(const SetLiveLazyPullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveLazyPullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveLazyPullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveMpuTaskSeiOutcome LiveClient::setLiveMpuTaskSei(const SetLiveMpuTaskSeiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveMpuTaskSeiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveMpuTaskSeiOutcome(SetLiveMpuTaskSeiResult(outcome.result()));
	else
		return SetLiveMpuTaskSeiOutcome(outcome.error());
}

void LiveClient::setLiveMpuTaskSeiAsync(const SetLiveMpuTaskSeiRequest& request, const SetLiveMpuTaskSeiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveMpuTaskSei(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveMpuTaskSeiOutcomeCallable LiveClient::setLiveMpuTaskSeiCallable(const SetLiveMpuTaskSeiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveMpuTaskSeiOutcome()>>(
			[this, request]()
			{
			return this->setLiveMpuTaskSei(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveStreamBlockOutcome LiveClient::setLiveStreamBlock(const SetLiveStreamBlockRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamBlockOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamBlockOutcome(SetLiveStreamBlockResult(outcome.result()));
	else
		return SetLiveStreamBlockOutcome(outcome.error());
}

void LiveClient::setLiveStreamBlockAsync(const SetLiveStreamBlockRequest& request, const SetLiveStreamBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamBlock(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveStreamBlockOutcomeCallable LiveClient::setLiveStreamBlockCallable(const SetLiveStreamBlockRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamBlockOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamBlock(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveStreamDelayConfigOutcome LiveClient::setLiveStreamDelayConfig(const SetLiveStreamDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamDelayConfigOutcome(SetLiveStreamDelayConfigResult(outcome.result()));
	else
		return SetLiveStreamDelayConfigOutcome(outcome.error());
}

void LiveClient::setLiveStreamDelayConfigAsync(const SetLiveStreamDelayConfigRequest& request, const SetLiveStreamDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveStreamDelayConfigOutcomeCallable LiveClient::setLiveStreamDelayConfigCallable(const SetLiveStreamDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveStreamPreloadTasksOutcome LiveClient::setLiveStreamPreloadTasks(const SetLiveStreamPreloadTasksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamPreloadTasksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamPreloadTasksOutcome(SetLiveStreamPreloadTasksResult(outcome.result()));
	else
		return SetLiveStreamPreloadTasksOutcome(outcome.error());
}

void LiveClient::setLiveStreamPreloadTasksAsync(const SetLiveStreamPreloadTasksRequest& request, const SetLiveStreamPreloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamPreloadTasks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveStreamPreloadTasksOutcomeCallable LiveClient::setLiveStreamPreloadTasksCallable(const SetLiveStreamPreloadTasksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamPreloadTasksOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamPreloadTasks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetLiveStreamsNotifyUrlConfigOutcome LiveClient::setLiveStreamsNotifyUrlConfig(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetLiveStreamsNotifyUrlConfigOutcome(SetLiveStreamsNotifyUrlConfigResult(outcome.result()));
	else
		return SetLiveStreamsNotifyUrlConfigOutcome(outcome.error());
}

void LiveClient::setLiveStreamsNotifyUrlConfigAsync(const SetLiveStreamsNotifyUrlConfigRequest& request, const SetLiveStreamsNotifyUrlConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setLiveStreamsNotifyUrlConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetLiveStreamsNotifyUrlConfigOutcomeCallable LiveClient::setLiveStreamsNotifyUrlConfigCallable(const SetLiveStreamsNotifyUrlConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetLiveStreamsNotifyUrlConfigOutcome()>>(
			[this, request]()
			{
			return this->setLiveStreamsNotifyUrlConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetShowListBackgroundOutcome LiveClient::setShowListBackground(const SetShowListBackgroundRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetShowListBackgroundOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetShowListBackgroundOutcome(SetShowListBackgroundResult(outcome.result()));
	else
		return SetShowListBackgroundOutcome(outcome.error());
}

void LiveClient::setShowListBackgroundAsync(const SetShowListBackgroundRequest& request, const SetShowListBackgroundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setShowListBackground(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetShowListBackgroundOutcomeCallable LiveClient::setShowListBackgroundCallable(const SetShowListBackgroundRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetShowListBackgroundOutcome()>>(
			[this, request]()
			{
			return this->setShowListBackground(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::SetSnapshotCallbackAuthOutcome LiveClient::setSnapshotCallbackAuth(const SetSnapshotCallbackAuthRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSnapshotCallbackAuthOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSnapshotCallbackAuthOutcome(SetSnapshotCallbackAuthResult(outcome.result()));
	else
		return SetSnapshotCallbackAuthOutcome(outcome.error());
}

void LiveClient::setSnapshotCallbackAuthAsync(const SetSnapshotCallbackAuthRequest& request, const SetSnapshotCallbackAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSnapshotCallbackAuth(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::SetSnapshotCallbackAuthOutcomeCallable LiveClient::setSnapshotCallbackAuthCallable(const SetSnapshotCallbackAuthRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSnapshotCallbackAuthOutcome()>>(
			[this, request]()
			{
			return this->setSnapshotCallbackAuth(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartCasterOutcome LiveClient::startCaster(const StartCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCasterOutcome(StartCasterResult(outcome.result()));
	else
		return StartCasterOutcome(outcome.error());
}

void LiveClient::startCasterAsync(const StartCasterRequest& request, const StartCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartCasterOutcomeCallable LiveClient::startCasterCallable(const StartCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCasterOutcome()>>(
			[this, request]()
			{
			return this->startCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartCasterSceneOutcome LiveClient::startCasterScene(const StartCasterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartCasterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartCasterSceneOutcome(StartCasterSceneResult(outcome.result()));
	else
		return StartCasterSceneOutcome(outcome.error());
}

void LiveClient::startCasterSceneAsync(const StartCasterSceneRequest& request, const StartCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startCasterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartCasterSceneOutcomeCallable LiveClient::startCasterSceneCallable(const StartCasterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartCasterSceneOutcome()>>(
			[this, request]()
			{
			return this->startCasterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartEdgeTranscodeJobOutcome LiveClient::startEdgeTranscodeJob(const StartEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartEdgeTranscodeJobOutcome(StartEdgeTranscodeJobResult(outcome.result()));
	else
		return StartEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::startEdgeTranscodeJobAsync(const StartEdgeTranscodeJobRequest& request, const StartEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartEdgeTranscodeJobOutcomeCallable LiveClient::startEdgeTranscodeJobCallable(const StartEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->startEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartLiveDomainOutcome LiveClient::startLiveDomain(const StartLiveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLiveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLiveDomainOutcome(StartLiveDomainResult(outcome.result()));
	else
		return StartLiveDomainOutcome(outcome.error());
}

void LiveClient::startLiveDomainAsync(const StartLiveDomainRequest& request, const StartLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLiveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartLiveDomainOutcomeCallable LiveClient::startLiveDomainCallable(const StartLiveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLiveDomainOutcome()>>(
			[this, request]()
			{
			return this->startLiveDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartLiveMPUTaskOutcome LiveClient::startLiveMPUTask(const StartLiveMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLiveMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLiveMPUTaskOutcome(StartLiveMPUTaskResult(outcome.result()));
	else
		return StartLiveMPUTaskOutcome(outcome.error());
}

void LiveClient::startLiveMPUTaskAsync(const StartLiveMPUTaskRequest& request, const StartLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLiveMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartLiveMPUTaskOutcomeCallable LiveClient::startLiveMPUTaskCallable(const StartLiveMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLiveMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->startLiveMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartLiveStreamMonitorOutcome LiveClient::startLiveStreamMonitor(const StartLiveStreamMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartLiveStreamMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartLiveStreamMonitorOutcome(StartLiveStreamMonitorResult(outcome.result()));
	else
		return StartLiveStreamMonitorOutcome(outcome.error());
}

void LiveClient::startLiveStreamMonitorAsync(const StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startLiveStreamMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartLiveStreamMonitorOutcomeCallable LiveClient::startLiveStreamMonitorCallable(const StartLiveStreamMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartLiveStreamMonitorOutcome()>>(
			[this, request]()
			{
			return this->startLiveStreamMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartPlaylistOutcome LiveClient::startPlaylist(const StartPlaylistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartPlaylistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartPlaylistOutcome(StartPlaylistResult(outcome.result()));
	else
		return StartPlaylistOutcome(outcome.error());
}

void LiveClient::startPlaylistAsync(const StartPlaylistRequest& request, const StartPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startPlaylist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartPlaylistOutcomeCallable LiveClient::startPlaylistCallable(const StartPlaylistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartPlaylistOutcome()>>(
			[this, request]()
			{
			return this->startPlaylist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StartRtcCloudRecordingOutcome LiveClient::startRtcCloudRecording(const StartRtcCloudRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRtcCloudRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRtcCloudRecordingOutcome(StartRtcCloudRecordingResult(outcome.result()));
	else
		return StartRtcCloudRecordingOutcome(outcome.error());
}

void LiveClient::startRtcCloudRecordingAsync(const StartRtcCloudRecordingRequest& request, const StartRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRtcCloudRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StartRtcCloudRecordingOutcomeCallable LiveClient::startRtcCloudRecordingCallable(const StartRtcCloudRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRtcCloudRecordingOutcome()>>(
			[this, request]()
			{
			return this->startRtcCloudRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopCasterOutcome LiveClient::stopCaster(const StopCasterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCasterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCasterOutcome(StopCasterResult(outcome.result()));
	else
		return StopCasterOutcome(outcome.error());
}

void LiveClient::stopCasterAsync(const StopCasterRequest& request, const StopCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCaster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopCasterOutcomeCallable LiveClient::stopCasterCallable(const StopCasterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCasterOutcome()>>(
			[this, request]()
			{
			return this->stopCaster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopCasterSceneOutcome LiveClient::stopCasterScene(const StopCasterSceneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopCasterSceneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopCasterSceneOutcome(StopCasterSceneResult(outcome.result()));
	else
		return StopCasterSceneOutcome(outcome.error());
}

void LiveClient::stopCasterSceneAsync(const StopCasterSceneRequest& request, const StopCasterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopCasterScene(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopCasterSceneOutcomeCallable LiveClient::stopCasterSceneCallable(const StopCasterSceneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopCasterSceneOutcome()>>(
			[this, request]()
			{
			return this->stopCasterScene(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopEdgeTranscodeJobOutcome LiveClient::stopEdgeTranscodeJob(const StopEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopEdgeTranscodeJobOutcome(StopEdgeTranscodeJobResult(outcome.result()));
	else
		return StopEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::stopEdgeTranscodeJobAsync(const StopEdgeTranscodeJobRequest& request, const StopEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopEdgeTranscodeJobOutcomeCallable LiveClient::stopEdgeTranscodeJobCallable(const StopEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->stopEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopLiveDomainOutcome LiveClient::stopLiveDomain(const StopLiveDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLiveDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLiveDomainOutcome(StopLiveDomainResult(outcome.result()));
	else
		return StopLiveDomainOutcome(outcome.error());
}

void LiveClient::stopLiveDomainAsync(const StopLiveDomainRequest& request, const StopLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLiveDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopLiveDomainOutcomeCallable LiveClient::stopLiveDomainCallable(const StopLiveDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLiveDomainOutcome()>>(
			[this, request]()
			{
			return this->stopLiveDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopLiveMPUTaskOutcome LiveClient::stopLiveMPUTask(const StopLiveMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLiveMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLiveMPUTaskOutcome(StopLiveMPUTaskResult(outcome.result()));
	else
		return StopLiveMPUTaskOutcome(outcome.error());
}

void LiveClient::stopLiveMPUTaskAsync(const StopLiveMPUTaskRequest& request, const StopLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLiveMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopLiveMPUTaskOutcomeCallable LiveClient::stopLiveMPUTaskCallable(const StopLiveMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLiveMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->stopLiveMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopLivePullToPushOutcome LiveClient::stopLivePullToPush(const StopLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLivePullToPushOutcome(StopLivePullToPushResult(outcome.result()));
	else
		return StopLivePullToPushOutcome(outcome.error());
}

void LiveClient::stopLivePullToPushAsync(const StopLivePullToPushRequest& request, const StopLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopLivePullToPushOutcomeCallable LiveClient::stopLivePullToPushCallable(const StopLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->stopLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopLiveStreamMonitorOutcome LiveClient::stopLiveStreamMonitor(const StopLiveStreamMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopLiveStreamMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopLiveStreamMonitorOutcome(StopLiveStreamMonitorResult(outcome.result()));
	else
		return StopLiveStreamMonitorOutcome(outcome.error());
}

void LiveClient::stopLiveStreamMonitorAsync(const StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopLiveStreamMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopLiveStreamMonitorOutcomeCallable LiveClient::stopLiveStreamMonitorCallable(const StopLiveStreamMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopLiveStreamMonitorOutcome()>>(
			[this, request]()
			{
			return this->stopLiveStreamMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopPlaylistOutcome LiveClient::stopPlaylist(const StopPlaylistRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPlaylistOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPlaylistOutcome(StopPlaylistResult(outcome.result()));
	else
		return StopPlaylistOutcome(outcome.error());
}

void LiveClient::stopPlaylistAsync(const StopPlaylistRequest& request, const StopPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPlaylist(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopPlaylistOutcomeCallable LiveClient::stopPlaylistCallable(const StopPlaylistRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPlaylistOutcome()>>(
			[this, request]()
			{
			return this->stopPlaylist(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopRtcAsrTaskOutcome LiveClient::stopRtcAsrTask(const StopRtcAsrTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRtcAsrTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRtcAsrTaskOutcome(StopRtcAsrTaskResult(outcome.result()));
	else
		return StopRtcAsrTaskOutcome(outcome.error());
}

void LiveClient::stopRtcAsrTaskAsync(const StopRtcAsrTaskRequest& request, const StopRtcAsrTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRtcAsrTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopRtcAsrTaskOutcomeCallable LiveClient::stopRtcAsrTaskCallable(const StopRtcAsrTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRtcAsrTaskOutcome()>>(
			[this, request]()
			{
			return this->stopRtcAsrTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::StopRtcCloudRecordingOutcome LiveClient::stopRtcCloudRecording(const StopRtcCloudRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRtcCloudRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRtcCloudRecordingOutcome(StopRtcCloudRecordingResult(outcome.result()));
	else
		return StopRtcCloudRecordingOutcome(outcome.error());
}

void LiveClient::stopRtcCloudRecordingAsync(const StopRtcCloudRecordingRequest& request, const StopRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRtcCloudRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::StopRtcCloudRecordingOutcomeCallable LiveClient::stopRtcCloudRecordingCallable(const StopRtcCloudRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRtcCloudRecordingOutcome()>>(
			[this, request]()
			{
			return this->stopRtcCloudRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::TagLiveResourcesOutcome LiveClient::tagLiveResources(const TagLiveResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagLiveResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagLiveResourcesOutcome(TagLiveResourcesResult(outcome.result()));
	else
		return TagLiveResourcesOutcome(outcome.error());
}

void LiveClient::tagLiveResourcesAsync(const TagLiveResourcesRequest& request, const TagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagLiveResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::TagLiveResourcesOutcomeCallable LiveClient::tagLiveResourcesCallable(const TagLiveResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagLiveResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagLiveResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UnTagLiveResourcesOutcome LiveClient::unTagLiveResources(const UnTagLiveResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnTagLiveResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnTagLiveResourcesOutcome(UnTagLiveResourcesResult(outcome.result()));
	else
		return UnTagLiveResourcesOutcome(outcome.error());
}

void LiveClient::unTagLiveResourcesAsync(const UnTagLiveResourcesRequest& request, const UnTagLiveResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unTagLiveResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UnTagLiveResourcesOutcomeCallable LiveClient::unTagLiveResourcesCallable(const UnTagLiveResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnTagLiveResourcesOutcome()>>(
			[this, request]()
			{
			return this->unTagLiveResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UnbanLiveMessageGroupOutcome LiveClient::unbanLiveMessageGroup(const UnbanLiveMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbanLiveMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbanLiveMessageGroupOutcome(UnbanLiveMessageGroupResult(outcome.result()));
	else
		return UnbanLiveMessageGroupOutcome(outcome.error());
}

void LiveClient::unbanLiveMessageGroupAsync(const UnbanLiveMessageGroupRequest& request, const UnbanLiveMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbanLiveMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UnbanLiveMessageGroupOutcomeCallable LiveClient::unbanLiveMessageGroupCallable(const UnbanLiveMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbanLiveMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->unbanLiveMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateCasterResourceGroupOutcome LiveClient::updateCasterResourceGroup(const UpdateCasterResourceGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCasterResourceGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCasterResourceGroupOutcome(UpdateCasterResourceGroupResult(outcome.result()));
	else
		return UpdateCasterResourceGroupOutcome(outcome.error());
}

void LiveClient::updateCasterResourceGroupAsync(const UpdateCasterResourceGroupRequest& request, const UpdateCasterResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCasterResourceGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateCasterResourceGroupOutcomeCallable LiveClient::updateCasterResourceGroupCallable(const UpdateCasterResourceGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCasterResourceGroupOutcome()>>(
			[this, request]()
			{
			return this->updateCasterResourceGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateCasterSceneAudioOutcome LiveClient::updateCasterSceneAudio(const UpdateCasterSceneAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCasterSceneAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCasterSceneAudioOutcome(UpdateCasterSceneAudioResult(outcome.result()));
	else
		return UpdateCasterSceneAudioOutcome(outcome.error());
}

void LiveClient::updateCasterSceneAudioAsync(const UpdateCasterSceneAudioRequest& request, const UpdateCasterSceneAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCasterSceneAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateCasterSceneAudioOutcomeCallable LiveClient::updateCasterSceneAudioCallable(const UpdateCasterSceneAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCasterSceneAudioOutcome()>>(
			[this, request]()
			{
			return this->updateCasterSceneAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateCasterSceneConfigOutcome LiveClient::updateCasterSceneConfig(const UpdateCasterSceneConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCasterSceneConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCasterSceneConfigOutcome(UpdateCasterSceneConfigResult(outcome.result()));
	else
		return UpdateCasterSceneConfigOutcome(outcome.error());
}

void LiveClient::updateCasterSceneConfigAsync(const UpdateCasterSceneConfigRequest& request, const UpdateCasterSceneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCasterSceneConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateCasterSceneConfigOutcomeCallable LiveClient::updateCasterSceneConfigCallable(const UpdateCasterSceneConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCasterSceneConfigOutcome()>>(
			[this, request]()
			{
			return this->updateCasterSceneConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateCustomLiveStreamTranscodeOutcome LiveClient::updateCustomLiveStreamTranscode(const UpdateCustomLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCustomLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCustomLiveStreamTranscodeOutcome(UpdateCustomLiveStreamTranscodeResult(outcome.result()));
	else
		return UpdateCustomLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::updateCustomLiveStreamTranscodeAsync(const UpdateCustomLiveStreamTranscodeRequest& request, const UpdateCustomLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCustomLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateCustomLiveStreamTranscodeOutcomeCallable LiveClient::updateCustomLiveStreamTranscodeCallable(const UpdateCustomLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCustomLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->updateCustomLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateEdgeTranscodeJobOutcome LiveClient::updateEdgeTranscodeJob(const UpdateEdgeTranscodeJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEdgeTranscodeJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEdgeTranscodeJobOutcome(UpdateEdgeTranscodeJobResult(outcome.result()));
	else
		return UpdateEdgeTranscodeJobOutcome(outcome.error());
}

void LiveClient::updateEdgeTranscodeJobAsync(const UpdateEdgeTranscodeJobRequest& request, const UpdateEdgeTranscodeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEdgeTranscodeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateEdgeTranscodeJobOutcomeCallable LiveClient::updateEdgeTranscodeJobCallable(const UpdateEdgeTranscodeJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEdgeTranscodeJobOutcome()>>(
			[this, request]()
			{
			return this->updateEdgeTranscodeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateEventSubOutcome LiveClient::updateEventSub(const UpdateEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEventSubOutcome(UpdateEventSubResult(outcome.result()));
	else
		return UpdateEventSubOutcome(outcome.error());
}

void LiveClient::updateEventSubAsync(const UpdateEventSubRequest& request, const UpdateEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateEventSubOutcomeCallable LiveClient::updateEventSubCallable(const UpdateEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEventSubOutcome()>>(
			[this, request]()
			{
			return this->updateEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAIProduceRulesOutcome LiveClient::updateLiveAIProduceRules(const UpdateLiveAIProduceRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAIProduceRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAIProduceRulesOutcome(UpdateLiveAIProduceRulesResult(outcome.result()));
	else
		return UpdateLiveAIProduceRulesOutcome(outcome.error());
}

void LiveClient::updateLiveAIProduceRulesAsync(const UpdateLiveAIProduceRulesRequest& request, const UpdateLiveAIProduceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAIProduceRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAIProduceRulesOutcomeCallable LiveClient::updateLiveAIProduceRulesCallable(const UpdateLiveAIProduceRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAIProduceRulesOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAIProduceRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAISubtitleOutcome LiveClient::updateLiveAISubtitle(const UpdateLiveAISubtitleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAISubtitleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAISubtitleOutcome(UpdateLiveAISubtitleResult(outcome.result()));
	else
		return UpdateLiveAISubtitleOutcome(outcome.error());
}

void LiveClient::updateLiveAISubtitleAsync(const UpdateLiveAISubtitleRequest& request, const UpdateLiveAISubtitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAISubtitle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAISubtitleOutcomeCallable LiveClient::updateLiveAISubtitleCallable(const UpdateLiveAISubtitleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAISubtitleOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAISubtitle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAppRecordConfigOutcome LiveClient::updateLiveAppRecordConfig(const UpdateLiveAppRecordConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAppRecordConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAppRecordConfigOutcome(UpdateLiveAppRecordConfigResult(outcome.result()));
	else
		return UpdateLiveAppRecordConfigOutcome(outcome.error());
}

void LiveClient::updateLiveAppRecordConfigAsync(const UpdateLiveAppRecordConfigRequest& request, const UpdateLiveAppRecordConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAppRecordConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAppRecordConfigOutcomeCallable LiveClient::updateLiveAppRecordConfigCallable(const UpdateLiveAppRecordConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAppRecordConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAppRecordConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAppSnapshotConfigOutcome LiveClient::updateLiveAppSnapshotConfig(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAppSnapshotConfigOutcome(UpdateLiveAppSnapshotConfigResult(outcome.result()));
	else
		return UpdateLiveAppSnapshotConfigOutcome(outcome.error());
}

void LiveClient::updateLiveAppSnapshotConfigAsync(const UpdateLiveAppSnapshotConfigRequest& request, const UpdateLiveAppSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAppSnapshotConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAppSnapshotConfigOutcomeCallable LiveClient::updateLiveAppSnapshotConfigCallable(const UpdateLiveAppSnapshotConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAppSnapshotConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAppSnapshotConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAudioAuditConfigOutcome LiveClient::updateLiveAudioAuditConfig(const UpdateLiveAudioAuditConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAudioAuditConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAudioAuditConfigOutcome(UpdateLiveAudioAuditConfigResult(outcome.result()));
	else
		return UpdateLiveAudioAuditConfigOutcome(outcome.error());
}

void LiveClient::updateLiveAudioAuditConfigAsync(const UpdateLiveAudioAuditConfigRequest& request, const UpdateLiveAudioAuditConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAudioAuditConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAudioAuditConfigOutcomeCallable LiveClient::updateLiveAudioAuditConfigCallable(const UpdateLiveAudioAuditConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAudioAuditConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAudioAuditConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveAudioAuditNotifyConfigOutcome LiveClient::updateLiveAudioAuditNotifyConfig(const UpdateLiveAudioAuditNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveAudioAuditNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveAudioAuditNotifyConfigOutcome(UpdateLiveAudioAuditNotifyConfigResult(outcome.result()));
	else
		return UpdateLiveAudioAuditNotifyConfigOutcome(outcome.error());
}

void LiveClient::updateLiveAudioAuditNotifyConfigAsync(const UpdateLiveAudioAuditNotifyConfigRequest& request, const UpdateLiveAudioAuditNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveAudioAuditNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveAudioAuditNotifyConfigOutcomeCallable LiveClient::updateLiveAudioAuditNotifyConfigCallable(const UpdateLiveAudioAuditNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveAudioAuditNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveAudioAuditNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveCenterTransferOutcome LiveClient::updateLiveCenterTransfer(const UpdateLiveCenterTransferRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveCenterTransferOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveCenterTransferOutcome(UpdateLiveCenterTransferResult(outcome.result()));
	else
		return UpdateLiveCenterTransferOutcome(outcome.error());
}

void LiveClient::updateLiveCenterTransferAsync(const UpdateLiveCenterTransferRequest& request, const UpdateLiveCenterTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveCenterTransfer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveCenterTransferOutcomeCallable LiveClient::updateLiveCenterTransferCallable(const UpdateLiveCenterTransferRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveCenterTransferOutcome()>>(
			[this, request]()
			{
			return this->updateLiveCenterTransfer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveDelayConfigOutcome LiveClient::updateLiveDelayConfig(const UpdateLiveDelayConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveDelayConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveDelayConfigOutcome(UpdateLiveDelayConfigResult(outcome.result()));
	else
		return UpdateLiveDelayConfigOutcome(outcome.error());
}

void LiveClient::updateLiveDelayConfigAsync(const UpdateLiveDelayConfigRequest& request, const UpdateLiveDelayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveDelayConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveDelayConfigOutcomeCallable LiveClient::updateLiveDelayConfigCallable(const UpdateLiveDelayConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveDelayConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveDelayConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveDetectNotifyConfigOutcome LiveClient::updateLiveDetectNotifyConfig(const UpdateLiveDetectNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveDetectNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveDetectNotifyConfigOutcome(UpdateLiveDetectNotifyConfigResult(outcome.result()));
	else
		return UpdateLiveDetectNotifyConfigOutcome(outcome.error());
}

void LiveClient::updateLiveDetectNotifyConfigAsync(const UpdateLiveDetectNotifyConfigRequest& request, const UpdateLiveDetectNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveDetectNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveDetectNotifyConfigOutcomeCallable LiveClient::updateLiveDetectNotifyConfigCallable(const UpdateLiveDetectNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveDetectNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveDetectNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveMPUTaskOutcome LiveClient::updateLiveMPUTask(const UpdateLiveMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveMPUTaskOutcome(UpdateLiveMPUTaskResult(outcome.result()));
	else
		return UpdateLiveMPUTaskOutcome(outcome.error());
}

void LiveClient::updateLiveMPUTaskAsync(const UpdateLiveMPUTaskRequest& request, const UpdateLiveMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveMPUTaskOutcomeCallable LiveClient::updateLiveMPUTaskCallable(const UpdateLiveMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->updateLiveMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLivePackageConfigOutcome LiveClient::updateLivePackageConfig(const UpdateLivePackageConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLivePackageConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLivePackageConfigOutcome(UpdateLivePackageConfigResult(outcome.result()));
	else
		return UpdateLivePackageConfigOutcome(outcome.error());
}

void LiveClient::updateLivePackageConfigAsync(const UpdateLivePackageConfigRequest& request, const UpdateLivePackageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLivePackageConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLivePackageConfigOutcomeCallable LiveClient::updateLivePackageConfigCallable(const UpdateLivePackageConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLivePackageConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLivePackageConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLivePullStreamInfoConfigOutcome LiveClient::updateLivePullStreamInfoConfig(const UpdateLivePullStreamInfoConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLivePullStreamInfoConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLivePullStreamInfoConfigOutcome(UpdateLivePullStreamInfoConfigResult(outcome.result()));
	else
		return UpdateLivePullStreamInfoConfigOutcome(outcome.error());
}

void LiveClient::updateLivePullStreamInfoConfigAsync(const UpdateLivePullStreamInfoConfigRequest& request, const UpdateLivePullStreamInfoConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLivePullStreamInfoConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLivePullStreamInfoConfigOutcomeCallable LiveClient::updateLivePullStreamInfoConfigCallable(const UpdateLivePullStreamInfoConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLivePullStreamInfoConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLivePullStreamInfoConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLivePullToPushOutcome LiveClient::updateLivePullToPush(const UpdateLivePullToPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLivePullToPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLivePullToPushOutcome(UpdateLivePullToPushResult(outcome.result()));
	else
		return UpdateLivePullToPushOutcome(outcome.error());
}

void LiveClient::updateLivePullToPushAsync(const UpdateLivePullToPushRequest& request, const UpdateLivePullToPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLivePullToPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLivePullToPushOutcomeCallable LiveClient::updateLivePullToPushCallable(const UpdateLivePullToPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLivePullToPushOutcome()>>(
			[this, request]()
			{
			return this->updateLivePullToPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveRecordNotifyConfigOutcome LiveClient::updateLiveRecordNotifyConfig(const UpdateLiveRecordNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveRecordNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveRecordNotifyConfigOutcome(UpdateLiveRecordNotifyConfigResult(outcome.result()));
	else
		return UpdateLiveRecordNotifyConfigOutcome(outcome.error());
}

void LiveClient::updateLiveRecordNotifyConfigAsync(const UpdateLiveRecordNotifyConfigRequest& request, const UpdateLiveRecordNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveRecordNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveRecordNotifyConfigOutcomeCallable LiveClient::updateLiveRecordNotifyConfigCallable(const UpdateLiveRecordNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveRecordNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveRecordNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveRecordVodConfigOutcome LiveClient::updateLiveRecordVodConfig(const UpdateLiveRecordVodConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveRecordVodConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveRecordVodConfigOutcome(UpdateLiveRecordVodConfigResult(outcome.result()));
	else
		return UpdateLiveRecordVodConfigOutcome(outcome.error());
}

void LiveClient::updateLiveRecordVodConfigAsync(const UpdateLiveRecordVodConfigRequest& request, const UpdateLiveRecordVodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveRecordVodConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveRecordVodConfigOutcomeCallable LiveClient::updateLiveRecordVodConfigCallable(const UpdateLiveRecordVodConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveRecordVodConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveRecordVodConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveSnapshotDetectPornConfigOutcome LiveClient::updateLiveSnapshotDetectPornConfig(const UpdateLiveSnapshotDetectPornConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveSnapshotDetectPornConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveSnapshotDetectPornConfigOutcome(UpdateLiveSnapshotDetectPornConfigResult(outcome.result()));
	else
		return UpdateLiveSnapshotDetectPornConfigOutcome(outcome.error());
}

void LiveClient::updateLiveSnapshotDetectPornConfigAsync(const UpdateLiveSnapshotDetectPornConfigRequest& request, const UpdateLiveSnapshotDetectPornConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveSnapshotDetectPornConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveSnapshotDetectPornConfigOutcomeCallable LiveClient::updateLiveSnapshotDetectPornConfigCallable(const UpdateLiveSnapshotDetectPornConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveSnapshotDetectPornConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveSnapshotDetectPornConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveSnapshotNotifyConfigOutcome LiveClient::updateLiveSnapshotNotifyConfig(const UpdateLiveSnapshotNotifyConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveSnapshotNotifyConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveSnapshotNotifyConfigOutcome(UpdateLiveSnapshotNotifyConfigResult(outcome.result()));
	else
		return UpdateLiveSnapshotNotifyConfigOutcome(outcome.error());
}

void LiveClient::updateLiveSnapshotNotifyConfigAsync(const UpdateLiveSnapshotNotifyConfigRequest& request, const UpdateLiveSnapshotNotifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveSnapshotNotifyConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveSnapshotNotifyConfigOutcomeCallable LiveClient::updateLiveSnapshotNotifyConfigCallable(const UpdateLiveSnapshotNotifyConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveSnapshotNotifyConfigOutcome()>>(
			[this, request]()
			{
			return this->updateLiveSnapshotNotifyConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveStreamMonitorOutcome LiveClient::updateLiveStreamMonitor(const UpdateLiveStreamMonitorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveStreamMonitorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveStreamMonitorOutcome(UpdateLiveStreamMonitorResult(outcome.result()));
	else
		return UpdateLiveStreamMonitorOutcome(outcome.error());
}

void LiveClient::updateLiveStreamMonitorAsync(const UpdateLiveStreamMonitorRequest& request, const UpdateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveStreamMonitor(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveStreamMonitorOutcomeCallable LiveClient::updateLiveStreamMonitorCallable(const UpdateLiveStreamMonitorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveStreamMonitorOutcome()>>(
			[this, request]()
			{
			return this->updateLiveStreamMonitor(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveStreamTranscodeOutcome LiveClient::updateLiveStreamTranscode(const UpdateLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveStreamTranscodeOutcome(UpdateLiveStreamTranscodeResult(outcome.result()));
	else
		return UpdateLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::updateLiveStreamTranscodeAsync(const UpdateLiveStreamTranscodeRequest& request, const UpdateLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveStreamTranscodeOutcomeCallable LiveClient::updateLiveStreamTranscodeCallable(const UpdateLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->updateLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveStreamWatermarkOutcome LiveClient::updateLiveStreamWatermark(const UpdateLiveStreamWatermarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveStreamWatermarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveStreamWatermarkOutcome(UpdateLiveStreamWatermarkResult(outcome.result()));
	else
		return UpdateLiveStreamWatermarkOutcome(outcome.error());
}

void LiveClient::updateLiveStreamWatermarkAsync(const UpdateLiveStreamWatermarkRequest& request, const UpdateLiveStreamWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveStreamWatermark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveStreamWatermarkOutcomeCallable LiveClient::updateLiveStreamWatermarkCallable(const UpdateLiveStreamWatermarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveStreamWatermarkOutcome()>>(
			[this, request]()
			{
			return this->updateLiveStreamWatermark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateLiveStreamWatermarkRuleOutcome LiveClient::updateLiveStreamWatermarkRule(const UpdateLiveStreamWatermarkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateLiveStreamWatermarkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateLiveStreamWatermarkRuleOutcome(UpdateLiveStreamWatermarkRuleResult(outcome.result()));
	else
		return UpdateLiveStreamWatermarkRuleOutcome(outcome.error());
}

void LiveClient::updateLiveStreamWatermarkRuleAsync(const UpdateLiveStreamWatermarkRuleRequest& request, const UpdateLiveStreamWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateLiveStreamWatermarkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateLiveStreamWatermarkRuleOutcomeCallable LiveClient::updateLiveStreamWatermarkRuleCallable(const UpdateLiveStreamWatermarkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateLiveStreamWatermarkRuleOutcome()>>(
			[this, request]()
			{
			return this->updateLiveStreamWatermarkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateMessageAppOutcome LiveClient::updateMessageApp(const UpdateMessageAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMessageAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMessageAppOutcome(UpdateMessageAppResult(outcome.result()));
	else
		return UpdateMessageAppOutcome(outcome.error());
}

void LiveClient::updateMessageAppAsync(const UpdateMessageAppRequest& request, const UpdateMessageAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMessageApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateMessageAppOutcomeCallable LiveClient::updateMessageAppCallable(const UpdateMessageAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMessageAppOutcome()>>(
			[this, request]()
			{
			return this->updateMessageApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateMessageGroupOutcome LiveClient::updateMessageGroup(const UpdateMessageGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMessageGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMessageGroupOutcome(UpdateMessageGroupResult(outcome.result()));
	else
		return UpdateMessageGroupOutcome(outcome.error());
}

void LiveClient::updateMessageGroupAsync(const UpdateMessageGroupRequest& request, const UpdateMessageGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMessageGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateMessageGroupOutcomeCallable LiveClient::updateMessageGroupCallable(const UpdateMessageGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMessageGroupOutcome()>>(
			[this, request]()
			{
			return this->updateMessageGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateMixStreamOutcome LiveClient::updateMixStream(const UpdateMixStreamRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMixStreamOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMixStreamOutcome(UpdateMixStreamResult(outcome.result()));
	else
		return UpdateMixStreamOutcome(outcome.error());
}

void LiveClient::updateMixStreamAsync(const UpdateMixStreamRequest& request, const UpdateMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMixStream(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateMixStreamOutcomeCallable LiveClient::updateMixStreamCallable(const UpdateMixStreamRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMixStreamOutcome()>>(
			[this, request]()
			{
			return this->updateMixStream(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateRtcCloudRecordingOutcome LiveClient::updateRtcCloudRecording(const UpdateRtcCloudRecordingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRtcCloudRecordingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRtcCloudRecordingOutcome(UpdateRtcCloudRecordingResult(outcome.result()));
	else
		return UpdateRtcCloudRecordingOutcome(outcome.error());
}

void LiveClient::updateRtcCloudRecordingAsync(const UpdateRtcCloudRecordingRequest& request, const UpdateRtcCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRtcCloudRecording(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateRtcCloudRecordingOutcomeCallable LiveClient::updateRtcCloudRecordingCallable(const UpdateRtcCloudRecordingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRtcCloudRecordingOutcome()>>(
			[this, request]()
			{
			return this->updateRtcCloudRecording(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateRtcMPUEventSubOutcome LiveClient::updateRtcMPUEventSub(const UpdateRtcMPUEventSubRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRtcMPUEventSubOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRtcMPUEventSubOutcome(UpdateRtcMPUEventSubResult(outcome.result()));
	else
		return UpdateRtcMPUEventSubOutcome(outcome.error());
}

void LiveClient::updateRtcMPUEventSubAsync(const UpdateRtcMPUEventSubRequest& request, const UpdateRtcMPUEventSubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRtcMPUEventSub(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateRtcMPUEventSubOutcomeCallable LiveClient::updateRtcMPUEventSubCallable(const UpdateRtcMPUEventSubRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRtcMPUEventSubOutcome()>>(
			[this, request]()
			{
			return this->updateRtcMPUEventSub(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::UpdateRtsLiveStreamTranscodeOutcome LiveClient::updateRtsLiveStreamTranscode(const UpdateRtsLiveStreamTranscodeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRtsLiveStreamTranscodeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRtsLiveStreamTranscodeOutcome(UpdateRtsLiveStreamTranscodeResult(outcome.result()));
	else
		return UpdateRtsLiveStreamTranscodeOutcome(outcome.error());
}

void LiveClient::updateRtsLiveStreamTranscodeAsync(const UpdateRtsLiveStreamTranscodeRequest& request, const UpdateRtsLiveStreamTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRtsLiveStreamTranscode(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::UpdateRtsLiveStreamTranscodeOutcomeCallable LiveClient::updateRtsLiveStreamTranscodeCallable(const UpdateRtsLiveStreamTranscodeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRtsLiveStreamTranscodeOutcome()>>(
			[this, request]()
			{
			return this->updateRtsLiveStreamTranscode(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

LiveClient::VerifyLiveDomainOwnerOutcome LiveClient::verifyLiveDomainOwner(const VerifyLiveDomainOwnerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VerifyLiveDomainOwnerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VerifyLiveDomainOwnerOutcome(VerifyLiveDomainOwnerResult(outcome.result()));
	else
		return VerifyLiveDomainOwnerOutcome(outcome.error());
}

void LiveClient::verifyLiveDomainOwnerAsync(const VerifyLiveDomainOwnerRequest& request, const VerifyLiveDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, verifyLiveDomainOwner(request), context);
	};

	asyncExecute(new Runnable(fn));
}

LiveClient::VerifyLiveDomainOwnerOutcomeCallable LiveClient::verifyLiveDomainOwnerCallable(const VerifyLiveDomainOwnerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VerifyLiveDomainOwnerOutcome()>>(
			[this, request]()
			{
			return this->verifyLiveDomainOwner(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

