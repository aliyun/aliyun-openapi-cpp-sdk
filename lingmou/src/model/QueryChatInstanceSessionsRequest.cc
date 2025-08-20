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

#include <alibabacloud/lingmou/model/QueryChatInstanceSessionsRequest.h>

using AlibabaCloud::LingMou::Model::QueryChatInstanceSessionsRequest;

QueryChatInstanceSessionsRequest::QueryChatInstanceSessionsRequest()
    : RoaServiceRequest("lingmou", "2025-05-27") {
  setResourcePath("/openapi/chat/instances/[instanceId]/sessions"};
  setMethod(HttpRequest::Method::Get);
}

QueryChatInstanceSessionsRequest::~QueryChatInstanceSessionsRequest() {}

std::string QueryChatInstanceSessionsRequest::getInstanceId() const {
  return instanceId_;
}

void QueryChatInstanceSessionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

std::string QueryChatInstanceSessionsRequest::getSessionIds() const {
  return sessionIds_;
}

void QueryChatInstanceSessionsRequest::setSessionIds(const std::string &sessionIds) {
  sessionIds_ = sessionIds;
  setParameter(std::string("sessionIds"), sessionIds);
}

