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

RtcClient::CreateMAURuleOutcome RtcClient::createMAURule(const CreateMAURuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateMAURuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateMAURuleOutcome(CreateMAURuleResult(outcome.result()));
	else
		return CreateMAURuleOutcome(outcome.error());
}

void RtcClient::createMAURuleAsync(const CreateMAURuleRequest& request, const CreateMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createMAURule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateMAURuleOutcomeCallable RtcClient::createMAURuleCallable(const CreateMAURuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateMAURuleOutcome()>>(
			[this, request]()
			{
			return this->createMAURule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::CreateTemplateOutcome RtcClient::createTemplate(const CreateTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTemplateOutcome(CreateTemplateResult(outcome.result()));
	else
		return CreateTemplateOutcome(outcome.error());
}

void RtcClient::createTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::CreateTemplateOutcomeCallable RtcClient::createTemplateCallable(const CreateTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTemplateOutcome()>>(
			[this, request]()
			{
			return this->createTemplate(request);
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

RtcClient::DeleteMAURuleOutcome RtcClient::deleteMAURule(const DeleteMAURuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteMAURuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteMAURuleOutcome(DeleteMAURuleResult(outcome.result()));
	else
		return DeleteMAURuleOutcome(outcome.error());
}

void RtcClient::deleteMAURuleAsync(const DeleteMAURuleRequest& request, const DeleteMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteMAURule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteMAURuleOutcomeCallable RtcClient::deleteMAURuleCallable(const DeleteMAURuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteMAURuleOutcome()>>(
			[this, request]()
			{
			return this->deleteMAURule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DeleteTemplateOutcome RtcClient::deleteTemplate(const DeleteTemplateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteTemplateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteTemplateOutcome(DeleteTemplateResult(outcome.result()));
	else
		return DeleteTemplateOutcome(outcome.error());
}

void RtcClient::deleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteTemplate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DeleteTemplateOutcomeCallable RtcClient::deleteTemplateCallable(const DeleteTemplateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
			[this, request]()
			{
			return this->deleteTemplate(request);
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

RtcClient::DescribeMAURuleOutcome RtcClient::describeMAURule(const DescribeMAURuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeMAURuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeMAURuleOutcome(DescribeMAURuleResult(outcome.result()));
	else
		return DescribeMAURuleOutcome(outcome.error());
}

void RtcClient::describeMAURuleAsync(const DescribeMAURuleRequest& request, const DescribeMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeMAURule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeMAURuleOutcomeCallable RtcClient::describeMAURuleCallable(const DescribeMAURuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeMAURuleOutcome()>>(
			[this, request]()
			{
			return this->describeMAURule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRTCAppKeyOutcome RtcClient::describeRTCAppKey(const DescribeRTCAppKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRTCAppKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRTCAppKeyOutcome(DescribeRTCAppKeyResult(outcome.result()));
	else
		return DescribeRTCAppKeyOutcome(outcome.error());
}

void RtcClient::describeRTCAppKeyAsync(const DescribeRTCAppKeyRequest& request, const DescribeRTCAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRTCAppKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRTCAppKeyOutcomeCallable RtcClient::describeRTCAppKeyCallable(const DescribeRTCAppKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRTCAppKeyOutcome()>>(
			[this, request]()
			{
			return this->describeRTCAppKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcChannelCntDataOutcome RtcClient::describeRtcChannelCntData(const DescribeRtcChannelCntDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcChannelCntDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcChannelCntDataOutcome(DescribeRtcChannelCntDataResult(outcome.result()));
	else
		return DescribeRtcChannelCntDataOutcome(outcome.error());
}

void RtcClient::describeRtcChannelCntDataAsync(const DescribeRtcChannelCntDataRequest& request, const DescribeRtcChannelCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcChannelCntData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcChannelCntDataOutcomeCallable RtcClient::describeRtcChannelCntDataCallable(const DescribeRtcChannelCntDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcChannelCntDataOutcome()>>(
			[this, request]()
			{
			return this->describeRtcChannelCntData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcChannelListOutcome RtcClient::describeRtcChannelList(const DescribeRtcChannelListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcChannelListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcChannelListOutcome(DescribeRtcChannelListResult(outcome.result()));
	else
		return DescribeRtcChannelListOutcome(outcome.error());
}

void RtcClient::describeRtcChannelListAsync(const DescribeRtcChannelListRequest& request, const DescribeRtcChannelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcChannelList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcChannelListOutcomeCallable RtcClient::describeRtcChannelListCallable(const DescribeRtcChannelListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcChannelListOutcome()>>(
			[this, request]()
			{
			return this->describeRtcChannelList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcChannelMetricOutcome RtcClient::describeRtcChannelMetric(const DescribeRtcChannelMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcChannelMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcChannelMetricOutcome(DescribeRtcChannelMetricResult(outcome.result()));
	else
		return DescribeRtcChannelMetricOutcome(outcome.error());
}

void RtcClient::describeRtcChannelMetricAsync(const DescribeRtcChannelMetricRequest& request, const DescribeRtcChannelMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcChannelMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcChannelMetricOutcomeCallable RtcClient::describeRtcChannelMetricCallable(const DescribeRtcChannelMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcChannelMetricOutcome()>>(
			[this, request]()
			{
			return this->describeRtcChannelMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcChannelUserListOutcome RtcClient::describeRtcChannelUserList(const DescribeRtcChannelUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcChannelUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcChannelUserListOutcome(DescribeRtcChannelUserListResult(outcome.result()));
	else
		return DescribeRtcChannelUserListOutcome(outcome.error());
}

void RtcClient::describeRtcChannelUserListAsync(const DescribeRtcChannelUserListRequest& request, const DescribeRtcChannelUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcChannelUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcChannelUserListOutcomeCallable RtcClient::describeRtcChannelUserListCallable(const DescribeRtcChannelUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcChannelUserListOutcome()>>(
			[this, request]()
			{
			return this->describeRtcChannelUserList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcDurationDataOutcome RtcClient::describeRtcDurationData(const DescribeRtcDurationDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcDurationDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcDurationDataOutcome(DescribeRtcDurationDataResult(outcome.result()));
	else
		return DescribeRtcDurationDataOutcome(outcome.error());
}

void RtcClient::describeRtcDurationDataAsync(const DescribeRtcDurationDataRequest& request, const DescribeRtcDurationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcDurationData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcDurationDataOutcomeCallable RtcClient::describeRtcDurationDataCallable(const DescribeRtcDurationDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcDurationDataOutcome()>>(
			[this, request]()
			{
			return this->describeRtcDurationData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcPeakChannelCntDataOutcome RtcClient::describeRtcPeakChannelCntData(const DescribeRtcPeakChannelCntDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcPeakChannelCntDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcPeakChannelCntDataOutcome(DescribeRtcPeakChannelCntDataResult(outcome.result()));
	else
		return DescribeRtcPeakChannelCntDataOutcome(outcome.error());
}

void RtcClient::describeRtcPeakChannelCntDataAsync(const DescribeRtcPeakChannelCntDataRequest& request, const DescribeRtcPeakChannelCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcPeakChannelCntData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcPeakChannelCntDataOutcomeCallable RtcClient::describeRtcPeakChannelCntDataCallable(const DescribeRtcPeakChannelCntDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcPeakChannelCntDataOutcome()>>(
			[this, request]()
			{
			return this->describeRtcPeakChannelCntData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcPeakUserCntDataOutcome RtcClient::describeRtcPeakUserCntData(const DescribeRtcPeakUserCntDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcPeakUserCntDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcPeakUserCntDataOutcome(DescribeRtcPeakUserCntDataResult(outcome.result()));
	else
		return DescribeRtcPeakUserCntDataOutcome(outcome.error());
}

void RtcClient::describeRtcPeakUserCntDataAsync(const DescribeRtcPeakUserCntDataRequest& request, const DescribeRtcPeakUserCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcPeakUserCntData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcPeakUserCntDataOutcomeCallable RtcClient::describeRtcPeakUserCntDataCallable(const DescribeRtcPeakUserCntDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcPeakUserCntDataOutcome()>>(
			[this, request]()
			{
			return this->describeRtcPeakUserCntData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcQualityMetricOutcome RtcClient::describeRtcQualityMetric(const DescribeRtcQualityMetricRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcQualityMetricOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcQualityMetricOutcome(DescribeRtcQualityMetricResult(outcome.result()));
	else
		return DescribeRtcQualityMetricOutcome(outcome.error());
}

void RtcClient::describeRtcQualityMetricAsync(const DescribeRtcQualityMetricRequest& request, const DescribeRtcQualityMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcQualityMetric(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcQualityMetricOutcomeCallable RtcClient::describeRtcQualityMetricCallable(const DescribeRtcQualityMetricRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcQualityMetricOutcome()>>(
			[this, request]()
			{
			return this->describeRtcQualityMetric(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcUserCntDataOutcome RtcClient::describeRtcUserCntData(const DescribeRtcUserCntDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcUserCntDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcUserCntDataOutcome(DescribeRtcUserCntDataResult(outcome.result()));
	else
		return DescribeRtcUserCntDataOutcome(outcome.error());
}

void RtcClient::describeRtcUserCntDataAsync(const DescribeRtcUserCntDataRequest& request, const DescribeRtcUserCntDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcUserCntData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcUserCntDataOutcomeCallable RtcClient::describeRtcUserCntDataCallable(const DescribeRtcUserCntDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcUserCntDataOutcome()>>(
			[this, request]()
			{
			return this->describeRtcUserCntData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::DescribeRtcUserListOutcome RtcClient::describeRtcUserList(const DescribeRtcUserListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRtcUserListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRtcUserListOutcome(DescribeRtcUserListResult(outcome.result()));
	else
		return DescribeRtcUserListOutcome(outcome.error());
}

void RtcClient::describeRtcUserListAsync(const DescribeRtcUserListRequest& request, const DescribeRtcUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRtcUserList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DescribeRtcUserListOutcomeCallable RtcClient::describeRtcUserListCallable(const DescribeRtcUserListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRtcUserListOutcome()>>(
			[this, request]()
			{
			return this->describeRtcUserList(request);
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

RtcClient::DisableMAURuleOutcome RtcClient::disableMAURule(const DisableMAURuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableMAURuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableMAURuleOutcome(DisableMAURuleResult(outcome.result()));
	else
		return DisableMAURuleOutcome(outcome.error());
}

void RtcClient::disableMAURuleAsync(const DisableMAURuleRequest& request, const DisableMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableMAURule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::DisableMAURuleOutcomeCallable RtcClient::disableMAURuleCallable(const DisableMAURuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableMAURuleOutcome()>>(
			[this, request]()
			{
			return this->disableMAURule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

RtcClient::EnableMAURuleOutcome RtcClient::enableMAURule(const EnableMAURuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableMAURuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableMAURuleOutcome(EnableMAURuleResult(outcome.result()));
	else
		return EnableMAURuleOutcome(outcome.error());
}

void RtcClient::enableMAURuleAsync(const EnableMAURuleRequest& request, const EnableMAURuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableMAURule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::EnableMAURuleOutcomeCallable RtcClient::enableMAURuleCallable(const EnableMAURuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableMAURuleOutcome()>>(
			[this, request]()
			{
			return this->enableMAURule(request);
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

RtcClient::GetTaskStatusOutcome RtcClient::getTaskStatus(const GetTaskStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTaskStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTaskStatusOutcome(GetTaskStatusResult(outcome.result()));
	else
		return GetTaskStatusOutcome(outcome.error());
}

void RtcClient::getTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTaskStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::GetTaskStatusOutcomeCallable RtcClient::getTaskStatusCallable(const GetTaskStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTaskStatusOutcome()>>(
			[this, request]()
			{
			return this->getTaskStatus(request);
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

RtcClient::ReceiveNotifyOutcome RtcClient::receiveNotify(const ReceiveNotifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReceiveNotifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReceiveNotifyOutcome(ReceiveNotifyResult(outcome.result()));
	else
		return ReceiveNotifyOutcome(outcome.error());
}

void RtcClient::receiveNotifyAsync(const ReceiveNotifyRequest& request, const ReceiveNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, receiveNotify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::ReceiveNotifyOutcomeCallable RtcClient::receiveNotifyCallable(const ReceiveNotifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReceiveNotifyOutcome()>>(
			[this, request]()
			{
			return this->receiveNotify(request);
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

RtcClient::SetChannelPropertyOutcome RtcClient::setChannelProperty(const SetChannelPropertyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetChannelPropertyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetChannelPropertyOutcome(SetChannelPropertyResult(outcome.result()));
	else
		return SetChannelPropertyOutcome(outcome.error());
}

void RtcClient::setChannelPropertyAsync(const SetChannelPropertyRequest& request, const SetChannelPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setChannelProperty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::SetChannelPropertyOutcomeCallable RtcClient::setChannelPropertyCallable(const SetChannelPropertyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetChannelPropertyOutcome()>>(
			[this, request]()
			{
			return this->setChannelProperty(request);
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

RtcClient::StartTaskOutcome RtcClient::startTask(const StartTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartTaskOutcome(StartTaskResult(outcome.result()));
	else
		return StartTaskOutcome(outcome.error());
}

void RtcClient::startTaskAsync(const StartTaskRequest& request, const StartTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StartTaskOutcomeCallable RtcClient::startTaskCallable(const StartTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartTaskOutcome()>>(
			[this, request]()
			{
			return this->startTask(request);
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

RtcClient::StopTaskOutcome RtcClient::stopTask(const StopTaskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopTaskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopTaskOutcome(StopTaskResult(outcome.result()));
	else
		return StopTaskOutcome(outcome.error());
}

void RtcClient::stopTaskAsync(const StopTaskRequest& request, const StopTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopTask(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::StopTaskOutcomeCallable RtcClient::stopTaskCallable(const StopTaskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopTaskOutcome()>>(
			[this, request]()
			{
			return this->stopTask(request);
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

RtcClient::UpdateMPULayoutOutcome RtcClient::updateMPULayout(const UpdateMPULayoutRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateMPULayoutOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateMPULayoutOutcome(UpdateMPULayoutResult(outcome.result()));
	else
		return UpdateMPULayoutOutcome(outcome.error());
}

void RtcClient::updateMPULayoutAsync(const UpdateMPULayoutRequest& request, const UpdateMPULayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateMPULayout(request), context);
	};

	asyncExecute(new Runnable(fn));
}

RtcClient::UpdateMPULayoutOutcomeCallable RtcClient::updateMPULayoutCallable(const UpdateMPULayoutRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateMPULayoutOutcome()>>(
			[this, request]()
			{
			return this->updateMPULayout(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

