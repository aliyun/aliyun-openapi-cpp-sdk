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

#include <alibabacloud/rtc/RtcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

namespace
{
	const std::string SERVICE_NAME = "rtc";
}

RtcClient::RtcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rtc");
}

RtcClient::RtcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rtc");
}

RtcClient::RtcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "rtc");
}

RtcClient::~RtcClient()
{}

RtcClient::DescribeAppsOutcome RtcClient::describeApps(const DescribeAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppsOutcome(DescribeAppsResult(outcome.result()));
	else
		return DescribeAppsOutcome(outcome.error());
}

void RtcClient::describeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeAppsOutcomeCallable RtcClient::describeAppsCallable(const DescribeAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppsOutcome()>>(
			[this, request]()
			{
			return this->describeApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::ModifyConferenceOutcome RtcClient::modifyConference(const ModifyConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyConferenceOutcome(ModifyConferenceResult(outcome.result()));
	else
		return ModifyConferenceOutcome(outcome.error());
}

void RtcClient::modifyConferenceAsync(const ModifyConferenceRequest& request, const ModifyConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::ModifyConferenceOutcomeCallable RtcClient::modifyConferenceCallable(const ModifyConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyConferenceOutcome()>>(
			[this, request]()
			{
			return this->modifyConference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeConferenceAuthInfoOutcome RtcClient::describeConferenceAuthInfo(const DescribeConferenceAuthInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConferenceAuthInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConferenceAuthInfoOutcome(DescribeConferenceAuthInfoResult(outcome.result()));
	else
		return DescribeConferenceAuthInfoOutcome(outcome.error());
}

void RtcClient::describeConferenceAuthInfoAsync(const DescribeConferenceAuthInfoRequest& request, const DescribeConferenceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConferenceAuthInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeConferenceAuthInfoOutcomeCallable RtcClient::describeConferenceAuthInfoCallable(const DescribeConferenceAuthInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConferenceAuthInfoOutcome()>>(
			[this, request]()
			{
			return this->describeConferenceAuthInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRecordListOutcome RtcClient::describeRecordList(const DescribeRecordListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordListOutcome(DescribeRecordListResult(outcome.result()));
	else
		return DescribeRecordListOutcome(outcome.error());
}

void RtcClient::describeRecordListAsync(const DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRecordListOutcomeCallable RtcClient::describeRecordListCallable(const DescribeRecordListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordListOutcome()>>(
			[this, request]()
			{
			return this->describeRecordList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::MuteAudioAllOutcome RtcClient::muteAudioAll(const MuteAudioAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MuteAudioAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MuteAudioAllOutcome(MuteAudioAllResult(outcome.result()));
	else
		return MuteAudioAllOutcome(outcome.error());
}

void RtcClient::muteAudioAllAsync(const MuteAudioAllRequest& request, const MuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, muteAudioAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::MuteAudioAllOutcomeCallable RtcClient::muteAudioAllCallable(const MuteAudioAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MuteAudioAllOutcome()>>(
			[this, request]()
			{
			return this->muteAudioAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UnmuteAudioOutcome RtcClient::unmuteAudio(const UnmuteAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnmuteAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnmuteAudioOutcome(UnmuteAudioResult(outcome.result()));
	else
		return UnmuteAudioOutcome(outcome.error());
}

void RtcClient::unmuteAudioAsync(const UnmuteAudioRequest& request, const UnmuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unmuteAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UnmuteAudioOutcomeCallable RtcClient::unmuteAudioCallable(const UnmuteAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnmuteAudioOutcome()>>(
			[this, request]()
			{
			return this->unmuteAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::MuteAudioOutcome RtcClient::muteAudio(const MuteAudioRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MuteAudioOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MuteAudioOutcome(MuteAudioResult(outcome.result()));
	else
		return MuteAudioOutcome(outcome.error());
}

void RtcClient::muteAudioAsync(const MuteAudioRequest& request, const MuteAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, muteAudio(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::MuteAudioOutcomeCallable RtcClient::muteAudioCallable(const MuteAudioRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MuteAudioOutcome()>>(
			[this, request]()
			{
			return this->muteAudio(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::StartAppOutcome RtcClient::startApp(const StartAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartAppOutcome(StartAppResult(outcome.result()));
	else
		return StartAppOutcome(outcome.error());
}

void RtcClient::startAppAsync(const StartAppRequest& request, const StartAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StartAppOutcomeCallable RtcClient::startAppCallable(const StartAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartAppOutcome()>>(
			[this, request]()
			{
			return this->startApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateConferenceOutcome RtcClient::createConference(const CreateConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConferenceOutcome(CreateConferenceResult(outcome.result()));
	else
		return CreateConferenceOutcome(outcome.error());
}

void RtcClient::createConferenceAsync(const CreateConferenceRequest& request, const CreateConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateConferenceOutcomeCallable RtcClient::createConferenceCallable(const CreateConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConferenceOutcome()>>(
			[this, request]()
			{
			return this->createConference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteChannelOutcome RtcClient::deleteChannel(const DeleteChannelRequest &request) const
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

void RtcClient::deleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteChannelOutcomeCallable RtcClient::deleteChannelCallable(const DeleteChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteChannelOutcome()>>(
			[this, request]()
			{
			return this->deleteChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::ModifyAppOutcome RtcClient::modifyApp(const ModifyAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyAppOutcome(ModifyAppResult(outcome.result()));
	else
		return ModifyAppOutcome(outcome.error());
}

void RtcClient::modifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::ModifyAppOutcomeCallable RtcClient::modifyAppCallable(const ModifyAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
			[this, request]()
			{
			return this->modifyApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRealTimeRecordDetailOutcome RtcClient::describeRealTimeRecordDetail(const DescribeRealTimeRecordDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRealTimeRecordDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRealTimeRecordDetailOutcome(DescribeRealTimeRecordDetailResult(outcome.result()));
	else
		return DescribeRealTimeRecordDetailOutcome(outcome.error());
}

void RtcClient::describeRealTimeRecordDetailAsync(const DescribeRealTimeRecordDetailRequest& request, const DescribeRealTimeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRealTimeRecordDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRealTimeRecordDetailOutcomeCallable RtcClient::describeRealTimeRecordDetailCallable(const DescribeRealTimeRecordDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRealTimeRecordDetailOutcome()>>(
			[this, request]()
			{
			return this->describeRealTimeRecordDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::RemoveParticipantsOutcome RtcClient::removeParticipants(const RemoveParticipantsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveParticipantsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveParticipantsOutcome(RemoveParticipantsResult(outcome.result()));
	else
		return RemoveParticipantsOutcome(outcome.error());
}

void RtcClient::removeParticipantsAsync(const RemoveParticipantsRequest& request, const RemoveParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeParticipants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::RemoveParticipantsOutcomeCallable RtcClient::removeParticipantsCallable(const RemoveParticipantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveParticipantsOutcome()>>(
			[this, request]()
			{
			return this->removeParticipants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeStatisOutcome RtcClient::describeStatis(const DescribeStatisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStatisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStatisOutcome(DescribeStatisResult(outcome.result()));
	else
		return DescribeStatisOutcome(outcome.error());
}

void RtcClient::describeStatisAsync(const DescribeStatisRequest& request, const DescribeStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStatis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeStatisOutcomeCallable RtcClient::describeStatisCallable(const DescribeStatisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStatisOutcome()>>(
			[this, request]()
			{
			return this->describeStatis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateChannelOutcome RtcClient::createChannel(const CreateChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateChannelOutcome(CreateChannelResult(outcome.result()));
	else
		return CreateChannelOutcome(outcome.error());
}

void RtcClient::createChannelAsync(const CreateChannelRequest& request, const CreateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateChannelOutcomeCallable RtcClient::createChannelCallable(const CreateChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateChannelOutcome()>>(
			[this, request]()
			{
			return this->createChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRealTimeRecordListOutcome RtcClient::describeRealTimeRecordList(const DescribeRealTimeRecordListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRealTimeRecordListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRealTimeRecordListOutcome(DescribeRealTimeRecordListResult(outcome.result()));
	else
		return DescribeRealTimeRecordListOutcome(outcome.error());
}

void RtcClient::describeRealTimeRecordListAsync(const DescribeRealTimeRecordListRequest& request, const DescribeRealTimeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRealTimeRecordList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRealTimeRecordListOutcomeCallable RtcClient::describeRealTimeRecordListCallable(const DescribeRealTimeRecordListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRealTimeRecordListOutcome()>>(
			[this, request]()
			{
			return this->describeRealTimeRecordList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::StopAppOutcome RtcClient::stopApp(const StopAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopAppOutcome(StopAppResult(outcome.result()));
	else
		return StopAppOutcome(outcome.error());
}

void RtcClient::stopAppAsync(const StopAppRequest& request, const StopAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StopAppOutcomeCallable RtcClient::stopAppCallable(const StopAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopAppOutcome()>>(
			[this, request]()
			{
			return this->stopApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::RemoveTerminalsOutcome RtcClient::removeTerminals(const RemoveTerminalsRequest &request) const
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

void RtcClient::removeTerminalsAsync(const RemoveTerminalsRequest& request, const RemoveTerminalsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTerminals(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::RemoveTerminalsOutcomeCallable RtcClient::removeTerminalsCallable(const RemoveTerminalsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTerminalsOutcome()>>(
			[this, request]()
			{
			return this->removeTerminals(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteConferenceOutcome RtcClient::deleteConference(const DeleteConferenceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConferenceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConferenceOutcome(DeleteConferenceResult(outcome.result()));
	else
		return DeleteConferenceOutcome(outcome.error());
}

void RtcClient::deleteConferenceAsync(const DeleteConferenceRequest& request, const DeleteConferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConference(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteConferenceOutcomeCallable RtcClient::deleteConferenceCallable(const DeleteConferenceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConferenceOutcome()>>(
			[this, request]()
			{
			return this->deleteConference(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UpdateChannelOutcome RtcClient::updateChannel(const UpdateChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateChannelOutcome(UpdateChannelResult(outcome.result()));
	else
		return UpdateChannelOutcome(outcome.error());
}

void RtcClient::updateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateChannelOutcomeCallable RtcClient::updateChannelCallable(const UpdateChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateChannelOutcome()>>(
			[this, request]()
			{
			return this->updateChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UnmuteAudioAllOutcome RtcClient::unmuteAudioAll(const UnmuteAudioAllRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnmuteAudioAllOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnmuteAudioAllOutcome(UnmuteAudioAllResult(outcome.result()));
	else
		return UnmuteAudioAllOutcome(outcome.error());
}

void RtcClient::unmuteAudioAllAsync(const UnmuteAudioAllRequest& request, const UnmuteAudioAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unmuteAudioAll(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UnmuteAudioAllOutcomeCallable RtcClient::unmuteAudioAllCallable(const UnmuteAudioAllRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnmuteAudioAllOutcome()>>(
			[this, request]()
			{
			return this->unmuteAudioAll(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRecordDetailOutcome RtcClient::describeRecordDetail(const DescribeRecordDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordDetailOutcome(DescribeRecordDetailResult(outcome.result()));
	else
		return DescribeRecordDetailOutcome(outcome.error());
}

void RtcClient::describeRecordDetailAsync(const DescribeRecordDetailRequest& request, const DescribeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRecordDetailOutcomeCallable RtcClient::describeRecordDetailCallable(const DescribeRecordDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordDetailOutcome()>>(
			[this, request]()
			{
			return this->describeRecordDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateChannelTokenOutcome RtcClient::createChannelToken(const CreateChannelTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateChannelTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateChannelTokenOutcome(CreateChannelTokenResult(outcome.result()));
	else
		return CreateChannelTokenOutcome(outcome.error());
}

void RtcClient::createChannelTokenAsync(const CreateChannelTokenRequest& request, const CreateChannelTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createChannelToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateChannelTokenOutcomeCallable RtcClient::createChannelTokenCallable(const CreateChannelTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateChannelTokenOutcome()>>(
			[this, request]()
			{
			return this->createChannelToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

