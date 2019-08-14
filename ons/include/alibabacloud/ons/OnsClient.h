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

#ifndef ALIBABACLOUD_ONS_ONSCLIENT_H_
#define ALIBABACLOUD_ONS_ONSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OnsExport.h"
#include "model/OnsTopicSubDetailRequest.h"
#include "model/OnsTopicSubDetailResult.h"
#include "model/OnsMqttQueryHistoryOnlineRequest.h"
#include "model/OnsMqttQueryHistoryOnlineResult.h"
#include "model/OnsInstanceDeleteRequest.h"
#include "model/OnsInstanceDeleteResult.h"
#include "model/OnsTopicDeleteRequest.h"
#include "model/OnsTopicDeleteResult.h"
#include "model/OnsTopicUpdateRequest.h"
#include "model/OnsTopicUpdateResult.h"
#include "model/OnsTraceQueryByMsgKeyRequest.h"
#include "model/OnsTraceQueryByMsgKeyResult.h"
#include "model/OnsConsumerGetConnectionRequest.h"
#include "model/OnsConsumerGetConnectionResult.h"
#include "model/OnsTraceQueryByMsgIdRequest.h"
#include "model/OnsTraceQueryByMsgIdResult.h"
#include "model/OnsRegionListRequest.h"
#include "model/OnsRegionListResult.h"
#include "model/OnsTopicListRequest.h"
#include "model/OnsTopicListResult.h"
#include "model/OnsConsumerAccumulateRequest.h"
#include "model/OnsConsumerAccumulateResult.h"
#include "model/OnsMessageSendRequest.h"
#include "model/OnsMessageSendResult.h"
#include "model/OnsMqttQueryClientByGroupIdRequest.h"
#include "model/OnsMqttQueryClientByGroupIdResult.h"
#include "model/OnsGroupConsumerUpdateRequest.h"
#include "model/OnsGroupConsumerUpdateResult.h"
#include "model/OnsGroupListRequest.h"
#include "model/OnsGroupListResult.h"
#include "model/OnsMessageTraceRequest.h"
#include "model/OnsMessageTraceResult.h"
#include "model/OnsConsumerTimeSpanRequest.h"
#include "model/OnsConsumerTimeSpanResult.h"
#include "model/OnsGroupSubDetailRequest.h"
#include "model/OnsGroupSubDetailResult.h"
#include "model/OnsTraceGetResultRequest.h"
#include "model/OnsTraceGetResultResult.h"
#include "model/OnsTopicCreateRequest.h"
#include "model/OnsTopicCreateResult.h"
#include "model/OnsDLQMessagePageQueryByGroupIdRequest.h"
#include "model/OnsDLQMessagePageQueryByGroupIdResult.h"
#include "model/OnsGroupDeleteRequest.h"
#include "model/OnsGroupDeleteResult.h"
#include "model/OnsMessagePageQueryByTopicRequest.h"
#include "model/OnsMessagePageQueryByTopicResult.h"
#include "model/OnsInstanceUpdateRequest.h"
#include "model/OnsInstanceUpdateResult.h"
#include "model/OnsGroupCreateRequest.h"
#include "model/OnsGroupCreateResult.h"
#include "model/OnsTrendTopicInputTpsRequest.h"
#include "model/OnsTrendTopicInputTpsResult.h"
#include "model/OnsDLQMessageResendByIdRequest.h"
#include "model/OnsDLQMessageResendByIdResult.h"
#include "model/OnsTrendGroupOutputTpsRequest.h"
#include "model/OnsTrendGroupOutputTpsResult.h"
#include "model/OnsMqttQueryClientByClientIdRequest.h"
#include "model/OnsMqttQueryClientByClientIdResult.h"
#include "model/OnsMessagePushRequest.h"
#include "model/OnsMessagePushResult.h"
#include "model/OnsConsumerStatusRequest.h"
#include "model/OnsConsumerStatusResult.h"
#include "model/OnsWarnDeleteRequest.h"
#include "model/OnsWarnDeleteResult.h"
#include "model/OnsMqttQueryMsgTransTrendRequest.h"
#include "model/OnsMqttQueryMsgTransTrendResult.h"
#include "model/OnsConsumerResetOffsetRequest.h"
#include "model/OnsConsumerResetOffsetResult.h"
#include "model/OnsMessageGetByMsgIdRequest.h"
#include "model/OnsMessageGetByMsgIdResult.h"
#include "model/OnsInstanceBaseInfoRequest.h"
#include "model/OnsInstanceBaseInfoResult.h"
#include "model/OnsMqttGroupIdDeleteRequest.h"
#include "model/OnsMqttGroupIdDeleteResult.h"
#include "model/OnsInstanceInServiceListRequest.h"
#include "model/OnsInstanceInServiceListResult.h"
#include "model/OnsMqttGroupIdListRequest.h"
#include "model/OnsMqttGroupIdListResult.h"
#include "model/OnsDLQMessageGetByIdRequest.h"
#include "model/OnsDLQMessageGetByIdResult.h"
#include "model/OnsWarnCreateRequest.h"
#include "model/OnsWarnCreateResult.h"
#include "model/OnsInstanceCreateRequest.h"
#include "model/OnsInstanceCreateResult.h"
#include "model/OnsTopicStatusRequest.h"
#include "model/OnsTopicStatusResult.h"
#include "model/OnsMqttGroupIdCreateRequest.h"
#include "model/OnsMqttGroupIdCreateResult.h"
#include "model/OnsMqttQueryClientByTopicRequest.h"
#include "model/OnsMqttQueryClientByTopicResult.h"
#include "model/OnsMessageGetByKeyRequest.h"
#include "model/OnsMessageGetByKeyResult.h"


namespace AlibabaCloud
{
	namespace Ons
	{
		class ALIBABACLOUD_ONS_EXPORT OnsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::OnsTopicSubDetailResult> OnsTopicSubDetailOutcome;
			typedef std::future<OnsTopicSubDetailOutcome> OnsTopicSubDetailOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicSubDetailRequest&, const OnsTopicSubDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicSubDetailAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttQueryHistoryOnlineResult> OnsMqttQueryHistoryOnlineOutcome;
			typedef std::future<OnsMqttQueryHistoryOnlineOutcome> OnsMqttQueryHistoryOnlineOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttQueryHistoryOnlineRequest&, const OnsMqttQueryHistoryOnlineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttQueryHistoryOnlineAsyncHandler;
			typedef Outcome<Error, Model::OnsInstanceDeleteResult> OnsInstanceDeleteOutcome;
			typedef std::future<OnsInstanceDeleteOutcome> OnsInstanceDeleteOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsInstanceDeleteRequest&, const OnsInstanceDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsInstanceDeleteAsyncHandler;
			typedef Outcome<Error, Model::OnsTopicDeleteResult> OnsTopicDeleteOutcome;
			typedef std::future<OnsTopicDeleteOutcome> OnsTopicDeleteOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicDeleteRequest&, const OnsTopicDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicDeleteAsyncHandler;
			typedef Outcome<Error, Model::OnsTopicUpdateResult> OnsTopicUpdateOutcome;
			typedef std::future<OnsTopicUpdateOutcome> OnsTopicUpdateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicUpdateRequest&, const OnsTopicUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicUpdateAsyncHandler;
			typedef Outcome<Error, Model::OnsTraceQueryByMsgKeyResult> OnsTraceQueryByMsgKeyOutcome;
			typedef std::future<OnsTraceQueryByMsgKeyOutcome> OnsTraceQueryByMsgKeyOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTraceQueryByMsgKeyRequest&, const OnsTraceQueryByMsgKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTraceQueryByMsgKeyAsyncHandler;
			typedef Outcome<Error, Model::OnsConsumerGetConnectionResult> OnsConsumerGetConnectionOutcome;
			typedef std::future<OnsConsumerGetConnectionOutcome> OnsConsumerGetConnectionOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsConsumerGetConnectionRequest&, const OnsConsumerGetConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsConsumerGetConnectionAsyncHandler;
			typedef Outcome<Error, Model::OnsTraceQueryByMsgIdResult> OnsTraceQueryByMsgIdOutcome;
			typedef std::future<OnsTraceQueryByMsgIdOutcome> OnsTraceQueryByMsgIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTraceQueryByMsgIdRequest&, const OnsTraceQueryByMsgIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTraceQueryByMsgIdAsyncHandler;
			typedef Outcome<Error, Model::OnsRegionListResult> OnsRegionListOutcome;
			typedef std::future<OnsRegionListOutcome> OnsRegionListOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsRegionListRequest&, const OnsRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsRegionListAsyncHandler;
			typedef Outcome<Error, Model::OnsTopicListResult> OnsTopicListOutcome;
			typedef std::future<OnsTopicListOutcome> OnsTopicListOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicListRequest&, const OnsTopicListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicListAsyncHandler;
			typedef Outcome<Error, Model::OnsConsumerAccumulateResult> OnsConsumerAccumulateOutcome;
			typedef std::future<OnsConsumerAccumulateOutcome> OnsConsumerAccumulateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsConsumerAccumulateRequest&, const OnsConsumerAccumulateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsConsumerAccumulateAsyncHandler;
			typedef Outcome<Error, Model::OnsMessageSendResult> OnsMessageSendOutcome;
			typedef std::future<OnsMessageSendOutcome> OnsMessageSendOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessageSendRequest&, const OnsMessageSendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessageSendAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttQueryClientByGroupIdResult> OnsMqttQueryClientByGroupIdOutcome;
			typedef std::future<OnsMqttQueryClientByGroupIdOutcome> OnsMqttQueryClientByGroupIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttQueryClientByGroupIdRequest&, const OnsMqttQueryClientByGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttQueryClientByGroupIdAsyncHandler;
			typedef Outcome<Error, Model::OnsGroupConsumerUpdateResult> OnsGroupConsumerUpdateOutcome;
			typedef std::future<OnsGroupConsumerUpdateOutcome> OnsGroupConsumerUpdateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsGroupConsumerUpdateRequest&, const OnsGroupConsumerUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsGroupConsumerUpdateAsyncHandler;
			typedef Outcome<Error, Model::OnsGroupListResult> OnsGroupListOutcome;
			typedef std::future<OnsGroupListOutcome> OnsGroupListOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsGroupListRequest&, const OnsGroupListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsGroupListAsyncHandler;
			typedef Outcome<Error, Model::OnsMessageTraceResult> OnsMessageTraceOutcome;
			typedef std::future<OnsMessageTraceOutcome> OnsMessageTraceOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessageTraceRequest&, const OnsMessageTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessageTraceAsyncHandler;
			typedef Outcome<Error, Model::OnsConsumerTimeSpanResult> OnsConsumerTimeSpanOutcome;
			typedef std::future<OnsConsumerTimeSpanOutcome> OnsConsumerTimeSpanOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsConsumerTimeSpanRequest&, const OnsConsumerTimeSpanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsConsumerTimeSpanAsyncHandler;
			typedef Outcome<Error, Model::OnsGroupSubDetailResult> OnsGroupSubDetailOutcome;
			typedef std::future<OnsGroupSubDetailOutcome> OnsGroupSubDetailOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsGroupSubDetailRequest&, const OnsGroupSubDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsGroupSubDetailAsyncHandler;
			typedef Outcome<Error, Model::OnsTraceGetResultResult> OnsTraceGetResultOutcome;
			typedef std::future<OnsTraceGetResultOutcome> OnsTraceGetResultOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTraceGetResultRequest&, const OnsTraceGetResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTraceGetResultAsyncHandler;
			typedef Outcome<Error, Model::OnsTopicCreateResult> OnsTopicCreateOutcome;
			typedef std::future<OnsTopicCreateOutcome> OnsTopicCreateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicCreateRequest&, const OnsTopicCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicCreateAsyncHandler;
			typedef Outcome<Error, Model::OnsDLQMessagePageQueryByGroupIdResult> OnsDLQMessagePageQueryByGroupIdOutcome;
			typedef std::future<OnsDLQMessagePageQueryByGroupIdOutcome> OnsDLQMessagePageQueryByGroupIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsDLQMessagePageQueryByGroupIdRequest&, const OnsDLQMessagePageQueryByGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsDLQMessagePageQueryByGroupIdAsyncHandler;
			typedef Outcome<Error, Model::OnsGroupDeleteResult> OnsGroupDeleteOutcome;
			typedef std::future<OnsGroupDeleteOutcome> OnsGroupDeleteOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsGroupDeleteRequest&, const OnsGroupDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsGroupDeleteAsyncHandler;
			typedef Outcome<Error, Model::OnsMessagePageQueryByTopicResult> OnsMessagePageQueryByTopicOutcome;
			typedef std::future<OnsMessagePageQueryByTopicOutcome> OnsMessagePageQueryByTopicOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessagePageQueryByTopicRequest&, const OnsMessagePageQueryByTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessagePageQueryByTopicAsyncHandler;
			typedef Outcome<Error, Model::OnsInstanceUpdateResult> OnsInstanceUpdateOutcome;
			typedef std::future<OnsInstanceUpdateOutcome> OnsInstanceUpdateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsInstanceUpdateRequest&, const OnsInstanceUpdateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsInstanceUpdateAsyncHandler;
			typedef Outcome<Error, Model::OnsGroupCreateResult> OnsGroupCreateOutcome;
			typedef std::future<OnsGroupCreateOutcome> OnsGroupCreateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsGroupCreateRequest&, const OnsGroupCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsGroupCreateAsyncHandler;
			typedef Outcome<Error, Model::OnsTrendTopicInputTpsResult> OnsTrendTopicInputTpsOutcome;
			typedef std::future<OnsTrendTopicInputTpsOutcome> OnsTrendTopicInputTpsOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTrendTopicInputTpsRequest&, const OnsTrendTopicInputTpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTrendTopicInputTpsAsyncHandler;
			typedef Outcome<Error, Model::OnsDLQMessageResendByIdResult> OnsDLQMessageResendByIdOutcome;
			typedef std::future<OnsDLQMessageResendByIdOutcome> OnsDLQMessageResendByIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsDLQMessageResendByIdRequest&, const OnsDLQMessageResendByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsDLQMessageResendByIdAsyncHandler;
			typedef Outcome<Error, Model::OnsTrendGroupOutputTpsResult> OnsTrendGroupOutputTpsOutcome;
			typedef std::future<OnsTrendGroupOutputTpsOutcome> OnsTrendGroupOutputTpsOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTrendGroupOutputTpsRequest&, const OnsTrendGroupOutputTpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTrendGroupOutputTpsAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttQueryClientByClientIdResult> OnsMqttQueryClientByClientIdOutcome;
			typedef std::future<OnsMqttQueryClientByClientIdOutcome> OnsMqttQueryClientByClientIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttQueryClientByClientIdRequest&, const OnsMqttQueryClientByClientIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttQueryClientByClientIdAsyncHandler;
			typedef Outcome<Error, Model::OnsMessagePushResult> OnsMessagePushOutcome;
			typedef std::future<OnsMessagePushOutcome> OnsMessagePushOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessagePushRequest&, const OnsMessagePushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessagePushAsyncHandler;
			typedef Outcome<Error, Model::OnsConsumerStatusResult> OnsConsumerStatusOutcome;
			typedef std::future<OnsConsumerStatusOutcome> OnsConsumerStatusOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsConsumerStatusRequest&, const OnsConsumerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsConsumerStatusAsyncHandler;
			typedef Outcome<Error, Model::OnsWarnDeleteResult> OnsWarnDeleteOutcome;
			typedef std::future<OnsWarnDeleteOutcome> OnsWarnDeleteOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsWarnDeleteRequest&, const OnsWarnDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsWarnDeleteAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttQueryMsgTransTrendResult> OnsMqttQueryMsgTransTrendOutcome;
			typedef std::future<OnsMqttQueryMsgTransTrendOutcome> OnsMqttQueryMsgTransTrendOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttQueryMsgTransTrendRequest&, const OnsMqttQueryMsgTransTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttQueryMsgTransTrendAsyncHandler;
			typedef Outcome<Error, Model::OnsConsumerResetOffsetResult> OnsConsumerResetOffsetOutcome;
			typedef std::future<OnsConsumerResetOffsetOutcome> OnsConsumerResetOffsetOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsConsumerResetOffsetRequest&, const OnsConsumerResetOffsetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsConsumerResetOffsetAsyncHandler;
			typedef Outcome<Error, Model::OnsMessageGetByMsgIdResult> OnsMessageGetByMsgIdOutcome;
			typedef std::future<OnsMessageGetByMsgIdOutcome> OnsMessageGetByMsgIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessageGetByMsgIdRequest&, const OnsMessageGetByMsgIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessageGetByMsgIdAsyncHandler;
			typedef Outcome<Error, Model::OnsInstanceBaseInfoResult> OnsInstanceBaseInfoOutcome;
			typedef std::future<OnsInstanceBaseInfoOutcome> OnsInstanceBaseInfoOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsInstanceBaseInfoRequest&, const OnsInstanceBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsInstanceBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttGroupIdDeleteResult> OnsMqttGroupIdDeleteOutcome;
			typedef std::future<OnsMqttGroupIdDeleteOutcome> OnsMqttGroupIdDeleteOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttGroupIdDeleteRequest&, const OnsMqttGroupIdDeleteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttGroupIdDeleteAsyncHandler;
			typedef Outcome<Error, Model::OnsInstanceInServiceListResult> OnsInstanceInServiceListOutcome;
			typedef std::future<OnsInstanceInServiceListOutcome> OnsInstanceInServiceListOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsInstanceInServiceListRequest&, const OnsInstanceInServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsInstanceInServiceListAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttGroupIdListResult> OnsMqttGroupIdListOutcome;
			typedef std::future<OnsMqttGroupIdListOutcome> OnsMqttGroupIdListOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttGroupIdListRequest&, const OnsMqttGroupIdListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttGroupIdListAsyncHandler;
			typedef Outcome<Error, Model::OnsDLQMessageGetByIdResult> OnsDLQMessageGetByIdOutcome;
			typedef std::future<OnsDLQMessageGetByIdOutcome> OnsDLQMessageGetByIdOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsDLQMessageGetByIdRequest&, const OnsDLQMessageGetByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsDLQMessageGetByIdAsyncHandler;
			typedef Outcome<Error, Model::OnsWarnCreateResult> OnsWarnCreateOutcome;
			typedef std::future<OnsWarnCreateOutcome> OnsWarnCreateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsWarnCreateRequest&, const OnsWarnCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsWarnCreateAsyncHandler;
			typedef Outcome<Error, Model::OnsInstanceCreateResult> OnsInstanceCreateOutcome;
			typedef std::future<OnsInstanceCreateOutcome> OnsInstanceCreateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsInstanceCreateRequest&, const OnsInstanceCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsInstanceCreateAsyncHandler;
			typedef Outcome<Error, Model::OnsTopicStatusResult> OnsTopicStatusOutcome;
			typedef std::future<OnsTopicStatusOutcome> OnsTopicStatusOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsTopicStatusRequest&, const OnsTopicStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsTopicStatusAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttGroupIdCreateResult> OnsMqttGroupIdCreateOutcome;
			typedef std::future<OnsMqttGroupIdCreateOutcome> OnsMqttGroupIdCreateOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttGroupIdCreateRequest&, const OnsMqttGroupIdCreateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttGroupIdCreateAsyncHandler;
			typedef Outcome<Error, Model::OnsMqttQueryClientByTopicResult> OnsMqttQueryClientByTopicOutcome;
			typedef std::future<OnsMqttQueryClientByTopicOutcome> OnsMqttQueryClientByTopicOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMqttQueryClientByTopicRequest&, const OnsMqttQueryClientByTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMqttQueryClientByTopicAsyncHandler;
			typedef Outcome<Error, Model::OnsMessageGetByKeyResult> OnsMessageGetByKeyOutcome;
			typedef std::future<OnsMessageGetByKeyOutcome> OnsMessageGetByKeyOutcomeCallable;
			typedef std::function<void(const OnsClient*, const Model::OnsMessageGetByKeyRequest&, const OnsMessageGetByKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnsMessageGetByKeyAsyncHandler;

			OnsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OnsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OnsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OnsClient();
			OnsTopicSubDetailOutcome onsTopicSubDetail(const Model::OnsTopicSubDetailRequest &request)const;
			void onsTopicSubDetailAsync(const Model::OnsTopicSubDetailRequest& request, const OnsTopicSubDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicSubDetailOutcomeCallable onsTopicSubDetailCallable(const Model::OnsTopicSubDetailRequest& request) const;
			OnsMqttQueryHistoryOnlineOutcome onsMqttQueryHistoryOnline(const Model::OnsMqttQueryHistoryOnlineRequest &request)const;
			void onsMqttQueryHistoryOnlineAsync(const Model::OnsMqttQueryHistoryOnlineRequest& request, const OnsMqttQueryHistoryOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttQueryHistoryOnlineOutcomeCallable onsMqttQueryHistoryOnlineCallable(const Model::OnsMqttQueryHistoryOnlineRequest& request) const;
			OnsInstanceDeleteOutcome onsInstanceDelete(const Model::OnsInstanceDeleteRequest &request)const;
			void onsInstanceDeleteAsync(const Model::OnsInstanceDeleteRequest& request, const OnsInstanceDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsInstanceDeleteOutcomeCallable onsInstanceDeleteCallable(const Model::OnsInstanceDeleteRequest& request) const;
			OnsTopicDeleteOutcome onsTopicDelete(const Model::OnsTopicDeleteRequest &request)const;
			void onsTopicDeleteAsync(const Model::OnsTopicDeleteRequest& request, const OnsTopicDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicDeleteOutcomeCallable onsTopicDeleteCallable(const Model::OnsTopicDeleteRequest& request) const;
			OnsTopicUpdateOutcome onsTopicUpdate(const Model::OnsTopicUpdateRequest &request)const;
			void onsTopicUpdateAsync(const Model::OnsTopicUpdateRequest& request, const OnsTopicUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicUpdateOutcomeCallable onsTopicUpdateCallable(const Model::OnsTopicUpdateRequest& request) const;
			OnsTraceQueryByMsgKeyOutcome onsTraceQueryByMsgKey(const Model::OnsTraceQueryByMsgKeyRequest &request)const;
			void onsTraceQueryByMsgKeyAsync(const Model::OnsTraceQueryByMsgKeyRequest& request, const OnsTraceQueryByMsgKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTraceQueryByMsgKeyOutcomeCallable onsTraceQueryByMsgKeyCallable(const Model::OnsTraceQueryByMsgKeyRequest& request) const;
			OnsConsumerGetConnectionOutcome onsConsumerGetConnection(const Model::OnsConsumerGetConnectionRequest &request)const;
			void onsConsumerGetConnectionAsync(const Model::OnsConsumerGetConnectionRequest& request, const OnsConsumerGetConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsConsumerGetConnectionOutcomeCallable onsConsumerGetConnectionCallable(const Model::OnsConsumerGetConnectionRequest& request) const;
			OnsTraceQueryByMsgIdOutcome onsTraceQueryByMsgId(const Model::OnsTraceQueryByMsgIdRequest &request)const;
			void onsTraceQueryByMsgIdAsync(const Model::OnsTraceQueryByMsgIdRequest& request, const OnsTraceQueryByMsgIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTraceQueryByMsgIdOutcomeCallable onsTraceQueryByMsgIdCallable(const Model::OnsTraceQueryByMsgIdRequest& request) const;
			OnsRegionListOutcome onsRegionList(const Model::OnsRegionListRequest &request)const;
			void onsRegionListAsync(const Model::OnsRegionListRequest& request, const OnsRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsRegionListOutcomeCallable onsRegionListCallable(const Model::OnsRegionListRequest& request) const;
			OnsTopicListOutcome onsTopicList(const Model::OnsTopicListRequest &request)const;
			void onsTopicListAsync(const Model::OnsTopicListRequest& request, const OnsTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicListOutcomeCallable onsTopicListCallable(const Model::OnsTopicListRequest& request) const;
			OnsConsumerAccumulateOutcome onsConsumerAccumulate(const Model::OnsConsumerAccumulateRequest &request)const;
			void onsConsumerAccumulateAsync(const Model::OnsConsumerAccumulateRequest& request, const OnsConsumerAccumulateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsConsumerAccumulateOutcomeCallable onsConsumerAccumulateCallable(const Model::OnsConsumerAccumulateRequest& request) const;
			OnsMessageSendOutcome onsMessageSend(const Model::OnsMessageSendRequest &request)const;
			void onsMessageSendAsync(const Model::OnsMessageSendRequest& request, const OnsMessageSendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessageSendOutcomeCallable onsMessageSendCallable(const Model::OnsMessageSendRequest& request) const;
			OnsMqttQueryClientByGroupIdOutcome onsMqttQueryClientByGroupId(const Model::OnsMqttQueryClientByGroupIdRequest &request)const;
			void onsMqttQueryClientByGroupIdAsync(const Model::OnsMqttQueryClientByGroupIdRequest& request, const OnsMqttQueryClientByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttQueryClientByGroupIdOutcomeCallable onsMqttQueryClientByGroupIdCallable(const Model::OnsMqttQueryClientByGroupIdRequest& request) const;
			OnsGroupConsumerUpdateOutcome onsGroupConsumerUpdate(const Model::OnsGroupConsumerUpdateRequest &request)const;
			void onsGroupConsumerUpdateAsync(const Model::OnsGroupConsumerUpdateRequest& request, const OnsGroupConsumerUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsGroupConsumerUpdateOutcomeCallable onsGroupConsumerUpdateCallable(const Model::OnsGroupConsumerUpdateRequest& request) const;
			OnsGroupListOutcome onsGroupList(const Model::OnsGroupListRequest &request)const;
			void onsGroupListAsync(const Model::OnsGroupListRequest& request, const OnsGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsGroupListOutcomeCallable onsGroupListCallable(const Model::OnsGroupListRequest& request) const;
			OnsMessageTraceOutcome onsMessageTrace(const Model::OnsMessageTraceRequest &request)const;
			void onsMessageTraceAsync(const Model::OnsMessageTraceRequest& request, const OnsMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessageTraceOutcomeCallable onsMessageTraceCallable(const Model::OnsMessageTraceRequest& request) const;
			OnsConsumerTimeSpanOutcome onsConsumerTimeSpan(const Model::OnsConsumerTimeSpanRequest &request)const;
			void onsConsumerTimeSpanAsync(const Model::OnsConsumerTimeSpanRequest& request, const OnsConsumerTimeSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsConsumerTimeSpanOutcomeCallable onsConsumerTimeSpanCallable(const Model::OnsConsumerTimeSpanRequest& request) const;
			OnsGroupSubDetailOutcome onsGroupSubDetail(const Model::OnsGroupSubDetailRequest &request)const;
			void onsGroupSubDetailAsync(const Model::OnsGroupSubDetailRequest& request, const OnsGroupSubDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsGroupSubDetailOutcomeCallable onsGroupSubDetailCallable(const Model::OnsGroupSubDetailRequest& request) const;
			OnsTraceGetResultOutcome onsTraceGetResult(const Model::OnsTraceGetResultRequest &request)const;
			void onsTraceGetResultAsync(const Model::OnsTraceGetResultRequest& request, const OnsTraceGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTraceGetResultOutcomeCallable onsTraceGetResultCallable(const Model::OnsTraceGetResultRequest& request) const;
			OnsTopicCreateOutcome onsTopicCreate(const Model::OnsTopicCreateRequest &request)const;
			void onsTopicCreateAsync(const Model::OnsTopicCreateRequest& request, const OnsTopicCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicCreateOutcomeCallable onsTopicCreateCallable(const Model::OnsTopicCreateRequest& request) const;
			OnsDLQMessagePageQueryByGroupIdOutcome onsDLQMessagePageQueryByGroupId(const Model::OnsDLQMessagePageQueryByGroupIdRequest &request)const;
			void onsDLQMessagePageQueryByGroupIdAsync(const Model::OnsDLQMessagePageQueryByGroupIdRequest& request, const OnsDLQMessagePageQueryByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsDLQMessagePageQueryByGroupIdOutcomeCallable onsDLQMessagePageQueryByGroupIdCallable(const Model::OnsDLQMessagePageQueryByGroupIdRequest& request) const;
			OnsGroupDeleteOutcome onsGroupDelete(const Model::OnsGroupDeleteRequest &request)const;
			void onsGroupDeleteAsync(const Model::OnsGroupDeleteRequest& request, const OnsGroupDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsGroupDeleteOutcomeCallable onsGroupDeleteCallable(const Model::OnsGroupDeleteRequest& request) const;
			OnsMessagePageQueryByTopicOutcome onsMessagePageQueryByTopic(const Model::OnsMessagePageQueryByTopicRequest &request)const;
			void onsMessagePageQueryByTopicAsync(const Model::OnsMessagePageQueryByTopicRequest& request, const OnsMessagePageQueryByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessagePageQueryByTopicOutcomeCallable onsMessagePageQueryByTopicCallable(const Model::OnsMessagePageQueryByTopicRequest& request) const;
			OnsInstanceUpdateOutcome onsInstanceUpdate(const Model::OnsInstanceUpdateRequest &request)const;
			void onsInstanceUpdateAsync(const Model::OnsInstanceUpdateRequest& request, const OnsInstanceUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsInstanceUpdateOutcomeCallable onsInstanceUpdateCallable(const Model::OnsInstanceUpdateRequest& request) const;
			OnsGroupCreateOutcome onsGroupCreate(const Model::OnsGroupCreateRequest &request)const;
			void onsGroupCreateAsync(const Model::OnsGroupCreateRequest& request, const OnsGroupCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsGroupCreateOutcomeCallable onsGroupCreateCallable(const Model::OnsGroupCreateRequest& request) const;
			OnsTrendTopicInputTpsOutcome onsTrendTopicInputTps(const Model::OnsTrendTopicInputTpsRequest &request)const;
			void onsTrendTopicInputTpsAsync(const Model::OnsTrendTopicInputTpsRequest& request, const OnsTrendTopicInputTpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTrendTopicInputTpsOutcomeCallable onsTrendTopicInputTpsCallable(const Model::OnsTrendTopicInputTpsRequest& request) const;
			OnsDLQMessageResendByIdOutcome onsDLQMessageResendById(const Model::OnsDLQMessageResendByIdRequest &request)const;
			void onsDLQMessageResendByIdAsync(const Model::OnsDLQMessageResendByIdRequest& request, const OnsDLQMessageResendByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsDLQMessageResendByIdOutcomeCallable onsDLQMessageResendByIdCallable(const Model::OnsDLQMessageResendByIdRequest& request) const;
			OnsTrendGroupOutputTpsOutcome onsTrendGroupOutputTps(const Model::OnsTrendGroupOutputTpsRequest &request)const;
			void onsTrendGroupOutputTpsAsync(const Model::OnsTrendGroupOutputTpsRequest& request, const OnsTrendGroupOutputTpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTrendGroupOutputTpsOutcomeCallable onsTrendGroupOutputTpsCallable(const Model::OnsTrendGroupOutputTpsRequest& request) const;
			OnsMqttQueryClientByClientIdOutcome onsMqttQueryClientByClientId(const Model::OnsMqttQueryClientByClientIdRequest &request)const;
			void onsMqttQueryClientByClientIdAsync(const Model::OnsMqttQueryClientByClientIdRequest& request, const OnsMqttQueryClientByClientIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttQueryClientByClientIdOutcomeCallable onsMqttQueryClientByClientIdCallable(const Model::OnsMqttQueryClientByClientIdRequest& request) const;
			OnsMessagePushOutcome onsMessagePush(const Model::OnsMessagePushRequest &request)const;
			void onsMessagePushAsync(const Model::OnsMessagePushRequest& request, const OnsMessagePushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessagePushOutcomeCallable onsMessagePushCallable(const Model::OnsMessagePushRequest& request) const;
			OnsConsumerStatusOutcome onsConsumerStatus(const Model::OnsConsumerStatusRequest &request)const;
			void onsConsumerStatusAsync(const Model::OnsConsumerStatusRequest& request, const OnsConsumerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsConsumerStatusOutcomeCallable onsConsumerStatusCallable(const Model::OnsConsumerStatusRequest& request) const;
			OnsWarnDeleteOutcome onsWarnDelete(const Model::OnsWarnDeleteRequest &request)const;
			void onsWarnDeleteAsync(const Model::OnsWarnDeleteRequest& request, const OnsWarnDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsWarnDeleteOutcomeCallable onsWarnDeleteCallable(const Model::OnsWarnDeleteRequest& request) const;
			OnsMqttQueryMsgTransTrendOutcome onsMqttQueryMsgTransTrend(const Model::OnsMqttQueryMsgTransTrendRequest &request)const;
			void onsMqttQueryMsgTransTrendAsync(const Model::OnsMqttQueryMsgTransTrendRequest& request, const OnsMqttQueryMsgTransTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttQueryMsgTransTrendOutcomeCallable onsMqttQueryMsgTransTrendCallable(const Model::OnsMqttQueryMsgTransTrendRequest& request) const;
			OnsConsumerResetOffsetOutcome onsConsumerResetOffset(const Model::OnsConsumerResetOffsetRequest &request)const;
			void onsConsumerResetOffsetAsync(const Model::OnsConsumerResetOffsetRequest& request, const OnsConsumerResetOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsConsumerResetOffsetOutcomeCallable onsConsumerResetOffsetCallable(const Model::OnsConsumerResetOffsetRequest& request) const;
			OnsMessageGetByMsgIdOutcome onsMessageGetByMsgId(const Model::OnsMessageGetByMsgIdRequest &request)const;
			void onsMessageGetByMsgIdAsync(const Model::OnsMessageGetByMsgIdRequest& request, const OnsMessageGetByMsgIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessageGetByMsgIdOutcomeCallable onsMessageGetByMsgIdCallable(const Model::OnsMessageGetByMsgIdRequest& request) const;
			OnsInstanceBaseInfoOutcome onsInstanceBaseInfo(const Model::OnsInstanceBaseInfoRequest &request)const;
			void onsInstanceBaseInfoAsync(const Model::OnsInstanceBaseInfoRequest& request, const OnsInstanceBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsInstanceBaseInfoOutcomeCallable onsInstanceBaseInfoCallable(const Model::OnsInstanceBaseInfoRequest& request) const;
			OnsMqttGroupIdDeleteOutcome onsMqttGroupIdDelete(const Model::OnsMqttGroupIdDeleteRequest &request)const;
			void onsMqttGroupIdDeleteAsync(const Model::OnsMqttGroupIdDeleteRequest& request, const OnsMqttGroupIdDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttGroupIdDeleteOutcomeCallable onsMqttGroupIdDeleteCallable(const Model::OnsMqttGroupIdDeleteRequest& request) const;
			OnsInstanceInServiceListOutcome onsInstanceInServiceList(const Model::OnsInstanceInServiceListRequest &request)const;
			void onsInstanceInServiceListAsync(const Model::OnsInstanceInServiceListRequest& request, const OnsInstanceInServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsInstanceInServiceListOutcomeCallable onsInstanceInServiceListCallable(const Model::OnsInstanceInServiceListRequest& request) const;
			OnsMqttGroupIdListOutcome onsMqttGroupIdList(const Model::OnsMqttGroupIdListRequest &request)const;
			void onsMqttGroupIdListAsync(const Model::OnsMqttGroupIdListRequest& request, const OnsMqttGroupIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttGroupIdListOutcomeCallable onsMqttGroupIdListCallable(const Model::OnsMqttGroupIdListRequest& request) const;
			OnsDLQMessageGetByIdOutcome onsDLQMessageGetById(const Model::OnsDLQMessageGetByIdRequest &request)const;
			void onsDLQMessageGetByIdAsync(const Model::OnsDLQMessageGetByIdRequest& request, const OnsDLQMessageGetByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsDLQMessageGetByIdOutcomeCallable onsDLQMessageGetByIdCallable(const Model::OnsDLQMessageGetByIdRequest& request) const;
			OnsWarnCreateOutcome onsWarnCreate(const Model::OnsWarnCreateRequest &request)const;
			void onsWarnCreateAsync(const Model::OnsWarnCreateRequest& request, const OnsWarnCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsWarnCreateOutcomeCallable onsWarnCreateCallable(const Model::OnsWarnCreateRequest& request) const;
			OnsInstanceCreateOutcome onsInstanceCreate(const Model::OnsInstanceCreateRequest &request)const;
			void onsInstanceCreateAsync(const Model::OnsInstanceCreateRequest& request, const OnsInstanceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsInstanceCreateOutcomeCallable onsInstanceCreateCallable(const Model::OnsInstanceCreateRequest& request) const;
			OnsTopicStatusOutcome onsTopicStatus(const Model::OnsTopicStatusRequest &request)const;
			void onsTopicStatusAsync(const Model::OnsTopicStatusRequest& request, const OnsTopicStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsTopicStatusOutcomeCallable onsTopicStatusCallable(const Model::OnsTopicStatusRequest& request) const;
			OnsMqttGroupIdCreateOutcome onsMqttGroupIdCreate(const Model::OnsMqttGroupIdCreateRequest &request)const;
			void onsMqttGroupIdCreateAsync(const Model::OnsMqttGroupIdCreateRequest& request, const OnsMqttGroupIdCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttGroupIdCreateOutcomeCallable onsMqttGroupIdCreateCallable(const Model::OnsMqttGroupIdCreateRequest& request) const;
			OnsMqttQueryClientByTopicOutcome onsMqttQueryClientByTopic(const Model::OnsMqttQueryClientByTopicRequest &request)const;
			void onsMqttQueryClientByTopicAsync(const Model::OnsMqttQueryClientByTopicRequest& request, const OnsMqttQueryClientByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMqttQueryClientByTopicOutcomeCallable onsMqttQueryClientByTopicCallable(const Model::OnsMqttQueryClientByTopicRequest& request) const;
			OnsMessageGetByKeyOutcome onsMessageGetByKey(const Model::OnsMessageGetByKeyRequest &request)const;
			void onsMessageGetByKeyAsync(const Model::OnsMessageGetByKeyRequest& request, const OnsMessageGetByKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnsMessageGetByKeyOutcomeCallable onsMessageGetByKeyCallable(const Model::OnsMessageGetByKeyRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ONS_ONSCLIENT_H_
