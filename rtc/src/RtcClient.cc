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
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RtcClient::RtcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RtcClient::RtcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

RtcClient::~RtcClient()
{}

RtcClient::AddRecordTemplateOutcome RtcClient::addRecordTemplate(const AddRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddRecordTemplateOutcome(AddRecordTemplateResult(outcome.result()));
	else
		return AddRecordTemplateOutcome(outcome.error());
}

void RtcClient::addRecordTemplateAsync(const AddRecordTemplateRequest& request, const AddRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::AddRecordTemplateOutcomeCallable RtcClient::addRecordTemplateCallable(const AddRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->addRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateAutoLiveStreamRuleOutcome RtcClient::createAutoLiveStreamRule(const CreateAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAutoLiveStreamRuleOutcome(CreateAutoLiveStreamRuleResult(outcome.result()));
	else
		return CreateAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::createAutoLiveStreamRuleAsync(const CreateAutoLiveStreamRuleRequest& request, const CreateAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateAutoLiveStreamRuleOutcomeCallable RtcClient::createAutoLiveStreamRuleCallable(const CreateAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->createAutoLiveStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateEventSubscribeOutcome RtcClient::createEventSubscribe(const CreateEventSubscribeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateEventSubscribeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateEventSubscribeOutcome(CreateEventSubscribeResult(outcome.result()));
	else
		return CreateEventSubscribeOutcome(outcome.error());
}

void RtcClient::createEventSubscribeAsync(const CreateEventSubscribeRequest& request, const CreateEventSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createEventSubscribe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateEventSubscribeOutcomeCallable RtcClient::createEventSubscribeCallable(const CreateEventSubscribeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateEventSubscribeOutcome()>>(
			[this, request]()
			{
			return this->createEventSubscribe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateMPULayoutOutcome RtcClient::createMPULayout(const CreateMPULayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMPULayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMPULayoutOutcome(CreateMPULayoutResult(outcome.result()));
	else
		return CreateMPULayoutOutcome(outcome.error());
}

void RtcClient::createMPULayoutAsync(const CreateMPULayoutRequest& request, const CreateMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMPULayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateMPULayoutOutcomeCallable RtcClient::createMPULayoutCallable(const CreateMPULayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMPULayoutOutcome()>>(
			[this, request]()
			{
			return this->createMPULayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteAutoLiveStreamRuleOutcome RtcClient::deleteAutoLiveStreamRule(const DeleteAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAutoLiveStreamRuleOutcome(DeleteAutoLiveStreamRuleResult(outcome.result()));
	else
		return DeleteAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::deleteAutoLiveStreamRuleAsync(const DeleteAutoLiveStreamRuleRequest& request, const DeleteAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteAutoLiveStreamRuleOutcomeCallable RtcClient::deleteAutoLiveStreamRuleCallable(const DeleteAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteAutoLiveStreamRule(request);
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

RtcClient::DeleteEventSubscribeOutcome RtcClient::deleteEventSubscribe(const DeleteEventSubscribeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteEventSubscribeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteEventSubscribeOutcome(DeleteEventSubscribeResult(outcome.result()));
	else
		return DeleteEventSubscribeOutcome(outcome.error());
}

void RtcClient::deleteEventSubscribeAsync(const DeleteEventSubscribeRequest& request, const DeleteEventSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteEventSubscribe(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteEventSubscribeOutcomeCallable RtcClient::deleteEventSubscribeCallable(const DeleteEventSubscribeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteEventSubscribeOutcome()>>(
			[this, request]()
			{
			return this->deleteEventSubscribe(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteMPULayoutOutcome RtcClient::deleteMPULayout(const DeleteMPULayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMPULayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMPULayoutOutcome(DeleteMPULayoutResult(outcome.result()));
	else
		return DeleteMPULayoutOutcome(outcome.error());
}

void RtcClient::deleteMPULayoutAsync(const DeleteMPULayoutRequest& request, const DeleteMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMPULayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteMPULayoutOutcomeCallable RtcClient::deleteMPULayoutCallable(const DeleteMPULayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMPULayoutOutcome()>>(
			[this, request]()
			{
			return this->deleteMPULayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteRecordTemplateOutcome RtcClient::deleteRecordTemplate(const DeleteRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRecordTemplateOutcome(DeleteRecordTemplateResult(outcome.result()));
	else
		return DeleteRecordTemplateOutcome(outcome.error());
}

void RtcClient::deleteRecordTemplateAsync(const DeleteRecordTemplateRequest& request, const DeleteRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteRecordTemplateOutcomeCallable RtcClient::deleteRecordTemplateCallable(const DeleteRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeAppKeyOutcome RtcClient::describeAppKey(const DescribeAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAppKeyOutcome(DescribeAppKeyResult(outcome.result()));
	else
		return DescribeAppKeyOutcome(outcome.error());
}

void RtcClient::describeAppKeyAsync(const DescribeAppKeyRequest& request, const DescribeAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeAppKeyOutcomeCallable RtcClient::describeAppKeyCallable(const DescribeAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAppKeyOutcome()>>(
			[this, request]()
			{
			return this->describeAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

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

RtcClient::DescribeAutoLiveStreamRuleOutcome RtcClient::describeAutoLiveStreamRule(const DescribeAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAutoLiveStreamRuleOutcome(DescribeAutoLiveStreamRuleResult(outcome.result()));
	else
		return DescribeAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::describeAutoLiveStreamRuleAsync(const DescribeAutoLiveStreamRuleRequest& request, const DescribeAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeAutoLiveStreamRuleOutcomeCallable RtcClient::describeAutoLiveStreamRuleCallable(const DescribeAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->describeAutoLiveStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeChannelParticipantsOutcome RtcClient::describeChannelParticipants(const DescribeChannelParticipantsRequest &request) const
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

void RtcClient::describeChannelParticipantsAsync(const DescribeChannelParticipantsRequest& request, const DescribeChannelParticipantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChannelParticipants(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeChannelParticipantsOutcomeCallable RtcClient::describeChannelParticipantsCallable(const DescribeChannelParticipantsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChannelParticipantsOutcome()>>(
			[this, request]()
			{
			return this->describeChannelParticipants(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeChannelUsersOutcome RtcClient::describeChannelUsers(const DescribeChannelUsersRequest &request) const
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

void RtcClient::describeChannelUsersAsync(const DescribeChannelUsersRequest& request, const DescribeChannelUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeChannelUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeChannelUsersOutcomeCallable RtcClient::describeChannelUsersCallable(const DescribeChannelUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeChannelUsersOutcome()>>(
			[this, request]()
			{
			return this->describeChannelUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeMPULayoutInfoListOutcome RtcClient::describeMPULayoutInfoList(const DescribeMPULayoutInfoListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMPULayoutInfoListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMPULayoutInfoListOutcome(DescribeMPULayoutInfoListResult(outcome.result()));
	else
		return DescribeMPULayoutInfoListOutcome(outcome.error());
}

void RtcClient::describeMPULayoutInfoListAsync(const DescribeMPULayoutInfoListRequest& request, const DescribeMPULayoutInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMPULayoutInfoList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeMPULayoutInfoListOutcomeCallable RtcClient::describeMPULayoutInfoListCallable(const DescribeMPULayoutInfoListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMPULayoutInfoListOutcome()>>(
			[this, request]()
			{
			return this->describeMPULayoutInfoList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRecordFilesOutcome RtcClient::describeRecordFiles(const DescribeRecordFilesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordFilesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordFilesOutcome(DescribeRecordFilesResult(outcome.result()));
	else
		return DescribeRecordFilesOutcome(outcome.error());
}

void RtcClient::describeRecordFilesAsync(const DescribeRecordFilesRequest& request, const DescribeRecordFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordFiles(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRecordFilesOutcomeCallable RtcClient::describeRecordFilesCallable(const DescribeRecordFilesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordFilesOutcome()>>(
			[this, request]()
			{
			return this->describeRecordFiles(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRecordTemplatesOutcome RtcClient::describeRecordTemplates(const DescribeRecordTemplatesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRecordTemplatesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRecordTemplatesOutcome(DescribeRecordTemplatesResult(outcome.result()));
	else
		return DescribeRecordTemplatesOutcome(outcome.error());
}

void RtcClient::describeRecordTemplatesAsync(const DescribeRecordTemplatesRequest& request, const DescribeRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRecordTemplates(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRecordTemplatesOutcomeCallable RtcClient::describeRecordTemplatesCallable(const DescribeRecordTemplatesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRecordTemplatesOutcome()>>(
			[this, request]()
			{
			return this->describeRecordTemplates(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeUserInfoInChannelOutcome RtcClient::describeUserInfoInChannel(const DescribeUserInfoInChannelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserInfoInChannelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserInfoInChannelOutcome(DescribeUserInfoInChannelResult(outcome.result()));
	else
		return DescribeUserInfoInChannelOutcome(outcome.error());
}

void RtcClient::describeUserInfoInChannelAsync(const DescribeUserInfoInChannelRequest& request, const DescribeUserInfoInChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserInfoInChannel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeUserInfoInChannelOutcomeCallable RtcClient::describeUserInfoInChannelCallable(const DescribeUserInfoInChannelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserInfoInChannelOutcome()>>(
			[this, request]()
			{
			return this->describeUserInfoInChannel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DisableAutoLiveStreamRuleOutcome RtcClient::disableAutoLiveStreamRule(const DisableAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableAutoLiveStreamRuleOutcome(DisableAutoLiveStreamRuleResult(outcome.result()));
	else
		return DisableAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::disableAutoLiveStreamRuleAsync(const DisableAutoLiveStreamRuleRequest& request, const DisableAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DisableAutoLiveStreamRuleOutcomeCallable RtcClient::disableAutoLiveStreamRuleCallable(const DisableAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->disableAutoLiveStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::EnableAutoLiveStreamRuleOutcome RtcClient::enableAutoLiveStreamRule(const EnableAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableAutoLiveStreamRuleOutcome(EnableAutoLiveStreamRuleResult(outcome.result()));
	else
		return EnableAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::enableAutoLiveStreamRuleAsync(const EnableAutoLiveStreamRuleRequest& request, const EnableAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::EnableAutoLiveStreamRuleOutcomeCallable RtcClient::enableAutoLiveStreamRuleCallable(const EnableAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->enableAutoLiveStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::GetMPUTaskStatusOutcome RtcClient::getMPUTaskStatus(const GetMPUTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMPUTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMPUTaskStatusOutcome(GetMPUTaskStatusResult(outcome.result()));
	else
		return GetMPUTaskStatusOutcome(outcome.error());
}

void RtcClient::getMPUTaskStatusAsync(const GetMPUTaskStatusRequest& request, const GetMPUTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMPUTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::GetMPUTaskStatusOutcomeCallable RtcClient::getMPUTaskStatusCallable(const GetMPUTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMPUTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->getMPUTaskStatus(request);
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

RtcClient::ModifyMPULayoutOutcome RtcClient::modifyMPULayout(const ModifyMPULayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyMPULayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyMPULayoutOutcome(ModifyMPULayoutResult(outcome.result()));
	else
		return ModifyMPULayoutOutcome(outcome.error());
}

void RtcClient::modifyMPULayoutAsync(const ModifyMPULayoutRequest& request, const ModifyMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyMPULayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::ModifyMPULayoutOutcomeCallable RtcClient::modifyMPULayoutCallable(const ModifyMPULayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyMPULayoutOutcome()>>(
			[this, request]()
			{
			return this->modifyMPULayout(request);
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

RtcClient::StartMPUTaskOutcome RtcClient::startMPUTask(const StartMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartMPUTaskOutcome(StartMPUTaskResult(outcome.result()));
	else
		return StartMPUTaskOutcome(outcome.error());
}

void RtcClient::startMPUTaskAsync(const StartMPUTaskRequest& request, const StartMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StartMPUTaskOutcomeCallable RtcClient::startMPUTaskCallable(const StartMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->startMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::StartRecordTaskOutcome RtcClient::startRecordTask(const StartRecordTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartRecordTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartRecordTaskOutcome(StartRecordTaskResult(outcome.result()));
	else
		return StartRecordTaskOutcome(outcome.error());
}

void RtcClient::startRecordTaskAsync(const StartRecordTaskRequest& request, const StartRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startRecordTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StartRecordTaskOutcomeCallable RtcClient::startRecordTaskCallable(const StartRecordTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartRecordTaskOutcome()>>(
			[this, request]()
			{
			return this->startRecordTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::StopMPUTaskOutcome RtcClient::stopMPUTask(const StopMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopMPUTaskOutcome(StopMPUTaskResult(outcome.result()));
	else
		return StopMPUTaskOutcome(outcome.error());
}

void RtcClient::stopMPUTaskAsync(const StopMPUTaskRequest& request, const StopMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StopMPUTaskOutcomeCallable RtcClient::stopMPUTaskCallable(const StopMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->stopMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::StopRecordTaskOutcome RtcClient::stopRecordTask(const StopRecordTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopRecordTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopRecordTaskOutcome(StopRecordTaskResult(outcome.result()));
	else
		return StopRecordTaskOutcome(outcome.error());
}

void RtcClient::stopRecordTaskAsync(const StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopRecordTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StopRecordTaskOutcomeCallable RtcClient::stopRecordTaskCallable(const StopRecordTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopRecordTaskOutcome()>>(
			[this, request]()
			{
			return this->stopRecordTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UpdateAutoLiveStreamRuleOutcome RtcClient::updateAutoLiveStreamRule(const UpdateAutoLiveStreamRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAutoLiveStreamRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAutoLiveStreamRuleOutcome(UpdateAutoLiveStreamRuleResult(outcome.result()));
	else
		return UpdateAutoLiveStreamRuleOutcome(outcome.error());
}

void RtcClient::updateAutoLiveStreamRuleAsync(const UpdateAutoLiveStreamRuleRequest& request, const UpdateAutoLiveStreamRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAutoLiveStreamRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateAutoLiveStreamRuleOutcomeCallable RtcClient::updateAutoLiveStreamRuleCallable(const UpdateAutoLiveStreamRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAutoLiveStreamRuleOutcome()>>(
			[this, request]()
			{
			return this->updateAutoLiveStreamRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UpdateMPUTaskOutcome RtcClient::updateMPUTask(const UpdateMPUTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMPUTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMPUTaskOutcome(UpdateMPUTaskResult(outcome.result()));
	else
		return UpdateMPUTaskOutcome(outcome.error());
}

void RtcClient::updateMPUTaskAsync(const UpdateMPUTaskRequest& request, const UpdateMPUTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMPUTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateMPUTaskOutcomeCallable RtcClient::updateMPUTaskCallable(const UpdateMPUTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMPUTaskOutcome()>>(
			[this, request]()
			{
			return this->updateMPUTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UpdateRecordTaskOutcome RtcClient::updateRecordTask(const UpdateRecordTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRecordTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRecordTaskOutcome(UpdateRecordTaskResult(outcome.result()));
	else
		return UpdateRecordTaskOutcome(outcome.error());
}

void RtcClient::updateRecordTaskAsync(const UpdateRecordTaskRequest& request, const UpdateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRecordTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateRecordTaskOutcomeCallable RtcClient::updateRecordTaskCallable(const UpdateRecordTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRecordTaskOutcome()>>(
			[this, request]()
			{
			return this->updateRecordTask(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::UpdateRecordTemplateOutcome RtcClient::updateRecordTemplate(const UpdateRecordTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRecordTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRecordTemplateOutcome(UpdateRecordTemplateResult(outcome.result()));
	else
		return UpdateRecordTemplateOutcome(outcome.error());
}

void RtcClient::updateRecordTemplateAsync(const UpdateRecordTemplateRequest& request, const UpdateRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRecordTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateRecordTemplateOutcomeCallable RtcClient::updateRecordTemplateCallable(const UpdateRecordTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRecordTemplateOutcome()>>(
			[this, request]()
			{
			return this->updateRecordTemplate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

