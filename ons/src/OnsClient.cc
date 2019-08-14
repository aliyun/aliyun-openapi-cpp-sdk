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

#include <alibabacloud/ons/OnsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

namespace
{
	const std::string SERVICE_NAME = "Ons";
}

OnsClient::OnsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ons");
}

OnsClient::OnsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ons");
}

OnsClient::OnsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ons");
}

OnsClient::~OnsClient()
{}

OnsClient::OnsTopicSubDetailOutcome OnsClient::onsTopicSubDetail(const OnsTopicSubDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicSubDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicSubDetailOutcome(OnsTopicSubDetailResult(outcome.result()));
	else
		return OnsTopicSubDetailOutcome(outcome.error());
}

void OnsClient::onsTopicSubDetailAsync(const OnsTopicSubDetailRequest& request, const OnsTopicSubDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicSubDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicSubDetailOutcomeCallable OnsClient::onsTopicSubDetailCallable(const OnsTopicSubDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicSubDetailOutcome()>>(
			[this, request]()
			{
			return this->onsTopicSubDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttQueryHistoryOnlineOutcome OnsClient::onsMqttQueryHistoryOnline(const OnsMqttQueryHistoryOnlineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttQueryHistoryOnlineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttQueryHistoryOnlineOutcome(OnsMqttQueryHistoryOnlineResult(outcome.result()));
	else
		return OnsMqttQueryHistoryOnlineOutcome(outcome.error());
}

void OnsClient::onsMqttQueryHistoryOnlineAsync(const OnsMqttQueryHistoryOnlineRequest& request, const OnsMqttQueryHistoryOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttQueryHistoryOnline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttQueryHistoryOnlineOutcomeCallable OnsClient::onsMqttQueryHistoryOnlineCallable(const OnsMqttQueryHistoryOnlineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttQueryHistoryOnlineOutcome()>>(
			[this, request]()
			{
			return this->onsMqttQueryHistoryOnline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsInstanceDeleteOutcome OnsClient::onsInstanceDelete(const OnsInstanceDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsInstanceDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsInstanceDeleteOutcome(OnsInstanceDeleteResult(outcome.result()));
	else
		return OnsInstanceDeleteOutcome(outcome.error());
}

void OnsClient::onsInstanceDeleteAsync(const OnsInstanceDeleteRequest& request, const OnsInstanceDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsInstanceDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsInstanceDeleteOutcomeCallable OnsClient::onsInstanceDeleteCallable(const OnsInstanceDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsInstanceDeleteOutcome()>>(
			[this, request]()
			{
			return this->onsInstanceDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTopicDeleteOutcome OnsClient::onsTopicDelete(const OnsTopicDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicDeleteOutcome(OnsTopicDeleteResult(outcome.result()));
	else
		return OnsTopicDeleteOutcome(outcome.error());
}

void OnsClient::onsTopicDeleteAsync(const OnsTopicDeleteRequest& request, const OnsTopicDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicDeleteOutcomeCallable OnsClient::onsTopicDeleteCallable(const OnsTopicDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicDeleteOutcome()>>(
			[this, request]()
			{
			return this->onsTopicDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTopicUpdateOutcome OnsClient::onsTopicUpdate(const OnsTopicUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicUpdateOutcome(OnsTopicUpdateResult(outcome.result()));
	else
		return OnsTopicUpdateOutcome(outcome.error());
}

void OnsClient::onsTopicUpdateAsync(const OnsTopicUpdateRequest& request, const OnsTopicUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicUpdateOutcomeCallable OnsClient::onsTopicUpdateCallable(const OnsTopicUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicUpdateOutcome()>>(
			[this, request]()
			{
			return this->onsTopicUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTraceQueryByMsgKeyOutcome OnsClient::onsTraceQueryByMsgKey(const OnsTraceQueryByMsgKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTraceQueryByMsgKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTraceQueryByMsgKeyOutcome(OnsTraceQueryByMsgKeyResult(outcome.result()));
	else
		return OnsTraceQueryByMsgKeyOutcome(outcome.error());
}

void OnsClient::onsTraceQueryByMsgKeyAsync(const OnsTraceQueryByMsgKeyRequest& request, const OnsTraceQueryByMsgKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTraceQueryByMsgKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTraceQueryByMsgKeyOutcomeCallable OnsClient::onsTraceQueryByMsgKeyCallable(const OnsTraceQueryByMsgKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTraceQueryByMsgKeyOutcome()>>(
			[this, request]()
			{
			return this->onsTraceQueryByMsgKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsConsumerGetConnectionOutcome OnsClient::onsConsumerGetConnection(const OnsConsumerGetConnectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsConsumerGetConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsConsumerGetConnectionOutcome(OnsConsumerGetConnectionResult(outcome.result()));
	else
		return OnsConsumerGetConnectionOutcome(outcome.error());
}

void OnsClient::onsConsumerGetConnectionAsync(const OnsConsumerGetConnectionRequest& request, const OnsConsumerGetConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsConsumerGetConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsConsumerGetConnectionOutcomeCallable OnsClient::onsConsumerGetConnectionCallable(const OnsConsumerGetConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsConsumerGetConnectionOutcome()>>(
			[this, request]()
			{
			return this->onsConsumerGetConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTraceQueryByMsgIdOutcome OnsClient::onsTraceQueryByMsgId(const OnsTraceQueryByMsgIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTraceQueryByMsgIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTraceQueryByMsgIdOutcome(OnsTraceQueryByMsgIdResult(outcome.result()));
	else
		return OnsTraceQueryByMsgIdOutcome(outcome.error());
}

void OnsClient::onsTraceQueryByMsgIdAsync(const OnsTraceQueryByMsgIdRequest& request, const OnsTraceQueryByMsgIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTraceQueryByMsgId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTraceQueryByMsgIdOutcomeCallable OnsClient::onsTraceQueryByMsgIdCallable(const OnsTraceQueryByMsgIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTraceQueryByMsgIdOutcome()>>(
			[this, request]()
			{
			return this->onsTraceQueryByMsgId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsRegionListOutcome OnsClient::onsRegionList(const OnsRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsRegionListOutcome(OnsRegionListResult(outcome.result()));
	else
		return OnsRegionListOutcome(outcome.error());
}

void OnsClient::onsRegionListAsync(const OnsRegionListRequest& request, const OnsRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsRegionListOutcomeCallable OnsClient::onsRegionListCallable(const OnsRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsRegionListOutcome()>>(
			[this, request]()
			{
			return this->onsRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTopicListOutcome OnsClient::onsTopicList(const OnsTopicListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicListOutcome(OnsTopicListResult(outcome.result()));
	else
		return OnsTopicListOutcome(outcome.error());
}

void OnsClient::onsTopicListAsync(const OnsTopicListRequest& request, const OnsTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicListOutcomeCallable OnsClient::onsTopicListCallable(const OnsTopicListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicListOutcome()>>(
			[this, request]()
			{
			return this->onsTopicList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsConsumerAccumulateOutcome OnsClient::onsConsumerAccumulate(const OnsConsumerAccumulateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsConsumerAccumulateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsConsumerAccumulateOutcome(OnsConsumerAccumulateResult(outcome.result()));
	else
		return OnsConsumerAccumulateOutcome(outcome.error());
}

void OnsClient::onsConsumerAccumulateAsync(const OnsConsumerAccumulateRequest& request, const OnsConsumerAccumulateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsConsumerAccumulate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsConsumerAccumulateOutcomeCallable OnsClient::onsConsumerAccumulateCallable(const OnsConsumerAccumulateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsConsumerAccumulateOutcome()>>(
			[this, request]()
			{
			return this->onsConsumerAccumulate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessageSendOutcome OnsClient::onsMessageSend(const OnsMessageSendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessageSendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessageSendOutcome(OnsMessageSendResult(outcome.result()));
	else
		return OnsMessageSendOutcome(outcome.error());
}

void OnsClient::onsMessageSendAsync(const OnsMessageSendRequest& request, const OnsMessageSendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessageSend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessageSendOutcomeCallable OnsClient::onsMessageSendCallable(const OnsMessageSendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessageSendOutcome()>>(
			[this, request]()
			{
			return this->onsMessageSend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttQueryClientByGroupIdOutcome OnsClient::onsMqttQueryClientByGroupId(const OnsMqttQueryClientByGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttQueryClientByGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttQueryClientByGroupIdOutcome(OnsMqttQueryClientByGroupIdResult(outcome.result()));
	else
		return OnsMqttQueryClientByGroupIdOutcome(outcome.error());
}

void OnsClient::onsMqttQueryClientByGroupIdAsync(const OnsMqttQueryClientByGroupIdRequest& request, const OnsMqttQueryClientByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttQueryClientByGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttQueryClientByGroupIdOutcomeCallable OnsClient::onsMqttQueryClientByGroupIdCallable(const OnsMqttQueryClientByGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttQueryClientByGroupIdOutcome()>>(
			[this, request]()
			{
			return this->onsMqttQueryClientByGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsGroupConsumerUpdateOutcome OnsClient::onsGroupConsumerUpdate(const OnsGroupConsumerUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsGroupConsumerUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsGroupConsumerUpdateOutcome(OnsGroupConsumerUpdateResult(outcome.result()));
	else
		return OnsGroupConsumerUpdateOutcome(outcome.error());
}

void OnsClient::onsGroupConsumerUpdateAsync(const OnsGroupConsumerUpdateRequest& request, const OnsGroupConsumerUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsGroupConsumerUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsGroupConsumerUpdateOutcomeCallable OnsClient::onsGroupConsumerUpdateCallable(const OnsGroupConsumerUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsGroupConsumerUpdateOutcome()>>(
			[this, request]()
			{
			return this->onsGroupConsumerUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsGroupListOutcome OnsClient::onsGroupList(const OnsGroupListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsGroupListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsGroupListOutcome(OnsGroupListResult(outcome.result()));
	else
		return OnsGroupListOutcome(outcome.error());
}

void OnsClient::onsGroupListAsync(const OnsGroupListRequest& request, const OnsGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsGroupList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsGroupListOutcomeCallable OnsClient::onsGroupListCallable(const OnsGroupListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsGroupListOutcome()>>(
			[this, request]()
			{
			return this->onsGroupList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessageTraceOutcome OnsClient::onsMessageTrace(const OnsMessageTraceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessageTraceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessageTraceOutcome(OnsMessageTraceResult(outcome.result()));
	else
		return OnsMessageTraceOutcome(outcome.error());
}

void OnsClient::onsMessageTraceAsync(const OnsMessageTraceRequest& request, const OnsMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessageTrace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessageTraceOutcomeCallable OnsClient::onsMessageTraceCallable(const OnsMessageTraceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessageTraceOutcome()>>(
			[this, request]()
			{
			return this->onsMessageTrace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsConsumerTimeSpanOutcome OnsClient::onsConsumerTimeSpan(const OnsConsumerTimeSpanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsConsumerTimeSpanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsConsumerTimeSpanOutcome(OnsConsumerTimeSpanResult(outcome.result()));
	else
		return OnsConsumerTimeSpanOutcome(outcome.error());
}

void OnsClient::onsConsumerTimeSpanAsync(const OnsConsumerTimeSpanRequest& request, const OnsConsumerTimeSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsConsumerTimeSpan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsConsumerTimeSpanOutcomeCallable OnsClient::onsConsumerTimeSpanCallable(const OnsConsumerTimeSpanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsConsumerTimeSpanOutcome()>>(
			[this, request]()
			{
			return this->onsConsumerTimeSpan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsGroupSubDetailOutcome OnsClient::onsGroupSubDetail(const OnsGroupSubDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsGroupSubDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsGroupSubDetailOutcome(OnsGroupSubDetailResult(outcome.result()));
	else
		return OnsGroupSubDetailOutcome(outcome.error());
}

void OnsClient::onsGroupSubDetailAsync(const OnsGroupSubDetailRequest& request, const OnsGroupSubDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsGroupSubDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsGroupSubDetailOutcomeCallable OnsClient::onsGroupSubDetailCallable(const OnsGroupSubDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsGroupSubDetailOutcome()>>(
			[this, request]()
			{
			return this->onsGroupSubDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTraceGetResultOutcome OnsClient::onsTraceGetResult(const OnsTraceGetResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTraceGetResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTraceGetResultOutcome(OnsTraceGetResultResult(outcome.result()));
	else
		return OnsTraceGetResultOutcome(outcome.error());
}

void OnsClient::onsTraceGetResultAsync(const OnsTraceGetResultRequest& request, const OnsTraceGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTraceGetResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTraceGetResultOutcomeCallable OnsClient::onsTraceGetResultCallable(const OnsTraceGetResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTraceGetResultOutcome()>>(
			[this, request]()
			{
			return this->onsTraceGetResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTopicCreateOutcome OnsClient::onsTopicCreate(const OnsTopicCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicCreateOutcome(OnsTopicCreateResult(outcome.result()));
	else
		return OnsTopicCreateOutcome(outcome.error());
}

void OnsClient::onsTopicCreateAsync(const OnsTopicCreateRequest& request, const OnsTopicCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicCreateOutcomeCallable OnsClient::onsTopicCreateCallable(const OnsTopicCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicCreateOutcome()>>(
			[this, request]()
			{
			return this->onsTopicCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsDLQMessagePageQueryByGroupIdOutcome OnsClient::onsDLQMessagePageQueryByGroupId(const OnsDLQMessagePageQueryByGroupIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsDLQMessagePageQueryByGroupIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsDLQMessagePageQueryByGroupIdOutcome(OnsDLQMessagePageQueryByGroupIdResult(outcome.result()));
	else
		return OnsDLQMessagePageQueryByGroupIdOutcome(outcome.error());
}

void OnsClient::onsDLQMessagePageQueryByGroupIdAsync(const OnsDLQMessagePageQueryByGroupIdRequest& request, const OnsDLQMessagePageQueryByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsDLQMessagePageQueryByGroupId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsDLQMessagePageQueryByGroupIdOutcomeCallable OnsClient::onsDLQMessagePageQueryByGroupIdCallable(const OnsDLQMessagePageQueryByGroupIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsDLQMessagePageQueryByGroupIdOutcome()>>(
			[this, request]()
			{
			return this->onsDLQMessagePageQueryByGroupId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsGroupDeleteOutcome OnsClient::onsGroupDelete(const OnsGroupDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsGroupDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsGroupDeleteOutcome(OnsGroupDeleteResult(outcome.result()));
	else
		return OnsGroupDeleteOutcome(outcome.error());
}

void OnsClient::onsGroupDeleteAsync(const OnsGroupDeleteRequest& request, const OnsGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsGroupDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsGroupDeleteOutcomeCallable OnsClient::onsGroupDeleteCallable(const OnsGroupDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsGroupDeleteOutcome()>>(
			[this, request]()
			{
			return this->onsGroupDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessagePageQueryByTopicOutcome OnsClient::onsMessagePageQueryByTopic(const OnsMessagePageQueryByTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessagePageQueryByTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessagePageQueryByTopicOutcome(OnsMessagePageQueryByTopicResult(outcome.result()));
	else
		return OnsMessagePageQueryByTopicOutcome(outcome.error());
}

void OnsClient::onsMessagePageQueryByTopicAsync(const OnsMessagePageQueryByTopicRequest& request, const OnsMessagePageQueryByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessagePageQueryByTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessagePageQueryByTopicOutcomeCallable OnsClient::onsMessagePageQueryByTopicCallable(const OnsMessagePageQueryByTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessagePageQueryByTopicOutcome()>>(
			[this, request]()
			{
			return this->onsMessagePageQueryByTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsInstanceUpdateOutcome OnsClient::onsInstanceUpdate(const OnsInstanceUpdateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsInstanceUpdateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsInstanceUpdateOutcome(OnsInstanceUpdateResult(outcome.result()));
	else
		return OnsInstanceUpdateOutcome(outcome.error());
}

void OnsClient::onsInstanceUpdateAsync(const OnsInstanceUpdateRequest& request, const OnsInstanceUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsInstanceUpdate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsInstanceUpdateOutcomeCallable OnsClient::onsInstanceUpdateCallable(const OnsInstanceUpdateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsInstanceUpdateOutcome()>>(
			[this, request]()
			{
			return this->onsInstanceUpdate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsGroupCreateOutcome OnsClient::onsGroupCreate(const OnsGroupCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsGroupCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsGroupCreateOutcome(OnsGroupCreateResult(outcome.result()));
	else
		return OnsGroupCreateOutcome(outcome.error());
}

void OnsClient::onsGroupCreateAsync(const OnsGroupCreateRequest& request, const OnsGroupCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsGroupCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsGroupCreateOutcomeCallable OnsClient::onsGroupCreateCallable(const OnsGroupCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsGroupCreateOutcome()>>(
			[this, request]()
			{
			return this->onsGroupCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTrendTopicInputTpsOutcome OnsClient::onsTrendTopicInputTps(const OnsTrendTopicInputTpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTrendTopicInputTpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTrendTopicInputTpsOutcome(OnsTrendTopicInputTpsResult(outcome.result()));
	else
		return OnsTrendTopicInputTpsOutcome(outcome.error());
}

void OnsClient::onsTrendTopicInputTpsAsync(const OnsTrendTopicInputTpsRequest& request, const OnsTrendTopicInputTpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTrendTopicInputTps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTrendTopicInputTpsOutcomeCallable OnsClient::onsTrendTopicInputTpsCallable(const OnsTrendTopicInputTpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTrendTopicInputTpsOutcome()>>(
			[this, request]()
			{
			return this->onsTrendTopicInputTps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsDLQMessageResendByIdOutcome OnsClient::onsDLQMessageResendById(const OnsDLQMessageResendByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsDLQMessageResendByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsDLQMessageResendByIdOutcome(OnsDLQMessageResendByIdResult(outcome.result()));
	else
		return OnsDLQMessageResendByIdOutcome(outcome.error());
}

void OnsClient::onsDLQMessageResendByIdAsync(const OnsDLQMessageResendByIdRequest& request, const OnsDLQMessageResendByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsDLQMessageResendById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsDLQMessageResendByIdOutcomeCallable OnsClient::onsDLQMessageResendByIdCallable(const OnsDLQMessageResendByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsDLQMessageResendByIdOutcome()>>(
			[this, request]()
			{
			return this->onsDLQMessageResendById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTrendGroupOutputTpsOutcome OnsClient::onsTrendGroupOutputTps(const OnsTrendGroupOutputTpsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTrendGroupOutputTpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTrendGroupOutputTpsOutcome(OnsTrendGroupOutputTpsResult(outcome.result()));
	else
		return OnsTrendGroupOutputTpsOutcome(outcome.error());
}

void OnsClient::onsTrendGroupOutputTpsAsync(const OnsTrendGroupOutputTpsRequest& request, const OnsTrendGroupOutputTpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTrendGroupOutputTps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTrendGroupOutputTpsOutcomeCallable OnsClient::onsTrendGroupOutputTpsCallable(const OnsTrendGroupOutputTpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTrendGroupOutputTpsOutcome()>>(
			[this, request]()
			{
			return this->onsTrendGroupOutputTps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttQueryClientByClientIdOutcome OnsClient::onsMqttQueryClientByClientId(const OnsMqttQueryClientByClientIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttQueryClientByClientIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttQueryClientByClientIdOutcome(OnsMqttQueryClientByClientIdResult(outcome.result()));
	else
		return OnsMqttQueryClientByClientIdOutcome(outcome.error());
}

void OnsClient::onsMqttQueryClientByClientIdAsync(const OnsMqttQueryClientByClientIdRequest& request, const OnsMqttQueryClientByClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttQueryClientByClientId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttQueryClientByClientIdOutcomeCallable OnsClient::onsMqttQueryClientByClientIdCallable(const OnsMqttQueryClientByClientIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttQueryClientByClientIdOutcome()>>(
			[this, request]()
			{
			return this->onsMqttQueryClientByClientId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessagePushOutcome OnsClient::onsMessagePush(const OnsMessagePushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessagePushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessagePushOutcome(OnsMessagePushResult(outcome.result()));
	else
		return OnsMessagePushOutcome(outcome.error());
}

void OnsClient::onsMessagePushAsync(const OnsMessagePushRequest& request, const OnsMessagePushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessagePush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessagePushOutcomeCallable OnsClient::onsMessagePushCallable(const OnsMessagePushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessagePushOutcome()>>(
			[this, request]()
			{
			return this->onsMessagePush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsConsumerStatusOutcome OnsClient::onsConsumerStatus(const OnsConsumerStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsConsumerStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsConsumerStatusOutcome(OnsConsumerStatusResult(outcome.result()));
	else
		return OnsConsumerStatusOutcome(outcome.error());
}

void OnsClient::onsConsumerStatusAsync(const OnsConsumerStatusRequest& request, const OnsConsumerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsConsumerStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsConsumerStatusOutcomeCallable OnsClient::onsConsumerStatusCallable(const OnsConsumerStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsConsumerStatusOutcome()>>(
			[this, request]()
			{
			return this->onsConsumerStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsWarnDeleteOutcome OnsClient::onsWarnDelete(const OnsWarnDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsWarnDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsWarnDeleteOutcome(OnsWarnDeleteResult(outcome.result()));
	else
		return OnsWarnDeleteOutcome(outcome.error());
}

void OnsClient::onsWarnDeleteAsync(const OnsWarnDeleteRequest& request, const OnsWarnDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsWarnDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsWarnDeleteOutcomeCallable OnsClient::onsWarnDeleteCallable(const OnsWarnDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsWarnDeleteOutcome()>>(
			[this, request]()
			{
			return this->onsWarnDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttQueryMsgTransTrendOutcome OnsClient::onsMqttQueryMsgTransTrend(const OnsMqttQueryMsgTransTrendRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttQueryMsgTransTrendOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttQueryMsgTransTrendOutcome(OnsMqttQueryMsgTransTrendResult(outcome.result()));
	else
		return OnsMqttQueryMsgTransTrendOutcome(outcome.error());
}

void OnsClient::onsMqttQueryMsgTransTrendAsync(const OnsMqttQueryMsgTransTrendRequest& request, const OnsMqttQueryMsgTransTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttQueryMsgTransTrend(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttQueryMsgTransTrendOutcomeCallable OnsClient::onsMqttQueryMsgTransTrendCallable(const OnsMqttQueryMsgTransTrendRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttQueryMsgTransTrendOutcome()>>(
			[this, request]()
			{
			return this->onsMqttQueryMsgTransTrend(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsConsumerResetOffsetOutcome OnsClient::onsConsumerResetOffset(const OnsConsumerResetOffsetRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsConsumerResetOffsetOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsConsumerResetOffsetOutcome(OnsConsumerResetOffsetResult(outcome.result()));
	else
		return OnsConsumerResetOffsetOutcome(outcome.error());
}

void OnsClient::onsConsumerResetOffsetAsync(const OnsConsumerResetOffsetRequest& request, const OnsConsumerResetOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsConsumerResetOffset(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsConsumerResetOffsetOutcomeCallable OnsClient::onsConsumerResetOffsetCallable(const OnsConsumerResetOffsetRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsConsumerResetOffsetOutcome()>>(
			[this, request]()
			{
			return this->onsConsumerResetOffset(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessageGetByMsgIdOutcome OnsClient::onsMessageGetByMsgId(const OnsMessageGetByMsgIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessageGetByMsgIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessageGetByMsgIdOutcome(OnsMessageGetByMsgIdResult(outcome.result()));
	else
		return OnsMessageGetByMsgIdOutcome(outcome.error());
}

void OnsClient::onsMessageGetByMsgIdAsync(const OnsMessageGetByMsgIdRequest& request, const OnsMessageGetByMsgIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessageGetByMsgId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessageGetByMsgIdOutcomeCallable OnsClient::onsMessageGetByMsgIdCallable(const OnsMessageGetByMsgIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessageGetByMsgIdOutcome()>>(
			[this, request]()
			{
			return this->onsMessageGetByMsgId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsInstanceBaseInfoOutcome OnsClient::onsInstanceBaseInfo(const OnsInstanceBaseInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsInstanceBaseInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsInstanceBaseInfoOutcome(OnsInstanceBaseInfoResult(outcome.result()));
	else
		return OnsInstanceBaseInfoOutcome(outcome.error());
}

void OnsClient::onsInstanceBaseInfoAsync(const OnsInstanceBaseInfoRequest& request, const OnsInstanceBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsInstanceBaseInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsInstanceBaseInfoOutcomeCallable OnsClient::onsInstanceBaseInfoCallable(const OnsInstanceBaseInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsInstanceBaseInfoOutcome()>>(
			[this, request]()
			{
			return this->onsInstanceBaseInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttGroupIdDeleteOutcome OnsClient::onsMqttGroupIdDelete(const OnsMqttGroupIdDeleteRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttGroupIdDeleteOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttGroupIdDeleteOutcome(OnsMqttGroupIdDeleteResult(outcome.result()));
	else
		return OnsMqttGroupIdDeleteOutcome(outcome.error());
}

void OnsClient::onsMqttGroupIdDeleteAsync(const OnsMqttGroupIdDeleteRequest& request, const OnsMqttGroupIdDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttGroupIdDelete(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttGroupIdDeleteOutcomeCallable OnsClient::onsMqttGroupIdDeleteCallable(const OnsMqttGroupIdDeleteRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttGroupIdDeleteOutcome()>>(
			[this, request]()
			{
			return this->onsMqttGroupIdDelete(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsInstanceInServiceListOutcome OnsClient::onsInstanceInServiceList(const OnsInstanceInServiceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsInstanceInServiceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsInstanceInServiceListOutcome(OnsInstanceInServiceListResult(outcome.result()));
	else
		return OnsInstanceInServiceListOutcome(outcome.error());
}

void OnsClient::onsInstanceInServiceListAsync(const OnsInstanceInServiceListRequest& request, const OnsInstanceInServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsInstanceInServiceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsInstanceInServiceListOutcomeCallable OnsClient::onsInstanceInServiceListCallable(const OnsInstanceInServiceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsInstanceInServiceListOutcome()>>(
			[this, request]()
			{
			return this->onsInstanceInServiceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttGroupIdListOutcome OnsClient::onsMqttGroupIdList(const OnsMqttGroupIdListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttGroupIdListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttGroupIdListOutcome(OnsMqttGroupIdListResult(outcome.result()));
	else
		return OnsMqttGroupIdListOutcome(outcome.error());
}

void OnsClient::onsMqttGroupIdListAsync(const OnsMqttGroupIdListRequest& request, const OnsMqttGroupIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttGroupIdList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttGroupIdListOutcomeCallable OnsClient::onsMqttGroupIdListCallable(const OnsMqttGroupIdListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttGroupIdListOutcome()>>(
			[this, request]()
			{
			return this->onsMqttGroupIdList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsDLQMessageGetByIdOutcome OnsClient::onsDLQMessageGetById(const OnsDLQMessageGetByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsDLQMessageGetByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsDLQMessageGetByIdOutcome(OnsDLQMessageGetByIdResult(outcome.result()));
	else
		return OnsDLQMessageGetByIdOutcome(outcome.error());
}

void OnsClient::onsDLQMessageGetByIdAsync(const OnsDLQMessageGetByIdRequest& request, const OnsDLQMessageGetByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsDLQMessageGetById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsDLQMessageGetByIdOutcomeCallable OnsClient::onsDLQMessageGetByIdCallable(const OnsDLQMessageGetByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsDLQMessageGetByIdOutcome()>>(
			[this, request]()
			{
			return this->onsDLQMessageGetById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsWarnCreateOutcome OnsClient::onsWarnCreate(const OnsWarnCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsWarnCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsWarnCreateOutcome(OnsWarnCreateResult(outcome.result()));
	else
		return OnsWarnCreateOutcome(outcome.error());
}

void OnsClient::onsWarnCreateAsync(const OnsWarnCreateRequest& request, const OnsWarnCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsWarnCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsWarnCreateOutcomeCallable OnsClient::onsWarnCreateCallable(const OnsWarnCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsWarnCreateOutcome()>>(
			[this, request]()
			{
			return this->onsWarnCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsInstanceCreateOutcome OnsClient::onsInstanceCreate(const OnsInstanceCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsInstanceCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsInstanceCreateOutcome(OnsInstanceCreateResult(outcome.result()));
	else
		return OnsInstanceCreateOutcome(outcome.error());
}

void OnsClient::onsInstanceCreateAsync(const OnsInstanceCreateRequest& request, const OnsInstanceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsInstanceCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsInstanceCreateOutcomeCallable OnsClient::onsInstanceCreateCallable(const OnsInstanceCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsInstanceCreateOutcome()>>(
			[this, request]()
			{
			return this->onsInstanceCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsTopicStatusOutcome OnsClient::onsTopicStatus(const OnsTopicStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsTopicStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsTopicStatusOutcome(OnsTopicStatusResult(outcome.result()));
	else
		return OnsTopicStatusOutcome(outcome.error());
}

void OnsClient::onsTopicStatusAsync(const OnsTopicStatusRequest& request, const OnsTopicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsTopicStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsTopicStatusOutcomeCallable OnsClient::onsTopicStatusCallable(const OnsTopicStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsTopicStatusOutcome()>>(
			[this, request]()
			{
			return this->onsTopicStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttGroupIdCreateOutcome OnsClient::onsMqttGroupIdCreate(const OnsMqttGroupIdCreateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttGroupIdCreateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttGroupIdCreateOutcome(OnsMqttGroupIdCreateResult(outcome.result()));
	else
		return OnsMqttGroupIdCreateOutcome(outcome.error());
}

void OnsClient::onsMqttGroupIdCreateAsync(const OnsMqttGroupIdCreateRequest& request, const OnsMqttGroupIdCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttGroupIdCreate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttGroupIdCreateOutcomeCallable OnsClient::onsMqttGroupIdCreateCallable(const OnsMqttGroupIdCreateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttGroupIdCreateOutcome()>>(
			[this, request]()
			{
			return this->onsMqttGroupIdCreate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMqttQueryClientByTopicOutcome OnsClient::onsMqttQueryClientByTopic(const OnsMqttQueryClientByTopicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMqttQueryClientByTopicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMqttQueryClientByTopicOutcome(OnsMqttQueryClientByTopicResult(outcome.result()));
	else
		return OnsMqttQueryClientByTopicOutcome(outcome.error());
}

void OnsClient::onsMqttQueryClientByTopicAsync(const OnsMqttQueryClientByTopicRequest& request, const OnsMqttQueryClientByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMqttQueryClientByTopic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMqttQueryClientByTopicOutcomeCallable OnsClient::onsMqttQueryClientByTopicCallable(const OnsMqttQueryClientByTopicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMqttQueryClientByTopicOutcome()>>(
			[this, request]()
			{
			return this->onsMqttQueryClientByTopic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

OnsClient::OnsMessageGetByKeyOutcome OnsClient::onsMessageGetByKey(const OnsMessageGetByKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OnsMessageGetByKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OnsMessageGetByKeyOutcome(OnsMessageGetByKeyResult(outcome.result()));
	else
		return OnsMessageGetByKeyOutcome(outcome.error());
}

void OnsClient::onsMessageGetByKeyAsync(const OnsMessageGetByKeyRequest& request, const OnsMessageGetByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, onsMessageGetByKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

OnsClient::OnsMessageGetByKeyOutcomeCallable OnsClient::onsMessageGetByKeyCallable(const OnsMessageGetByKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OnsMessageGetByKeyOutcome()>>(
			[this, request]()
			{
			return this->onsMessageGetByKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

