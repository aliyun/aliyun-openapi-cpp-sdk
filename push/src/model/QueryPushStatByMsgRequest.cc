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

#include <alibabacloud/push/model/QueryPushStatByMsgRequest.h>

using AlibabaCloud::Push::Model::QueryPushStatByMsgRequest;

QueryPushStatByMsgRequest::QueryPushStatByMsgRequest()
    : RpcServiceRequest("push", "2016-08-01", "QueryPushStatByMsg") {
  setMethod(HttpRequest::Method::Post);
}

QueryPushStatByMsgRequest::~QueryPushStatByMsgRequest() {}

long QueryPushStatByMsgRequest::getMessageId() const {
  return messageId_;
}

void QueryPushStatByMsgRequest::setMessageId(long messageId) {
  messageId_ = messageId;
  setParameter(std::string("MessageId"), std::to_string(messageId));
}

long QueryPushStatByMsgRequest::getAppKey() const {
  return appKey_;
}

void QueryPushStatByMsgRequest::setAppKey(long appKey) {
  appKey_ = appKey;
  setParameter(std::string("AppKey"), std::to_string(appKey));
}

