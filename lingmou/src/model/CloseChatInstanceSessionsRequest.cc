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

#include <alibabacloud/lingmou/model/CloseChatInstanceSessionsRequest.h>

using AlibabaCloud::LingMou::Model::CloseChatInstanceSessionsRequest;

CloseChatInstanceSessionsRequest::CloseChatInstanceSessionsRequest()
    : RoaServiceRequest("lingmou", "2025-05-27") {
  setResourcePath("/openapi/chat/instances/[instanceId]/sessions/close"};
  setMethod(HttpRequest::Method::Put);
}

CloseChatInstanceSessionsRequest::~CloseChatInstanceSessionsRequest() {}

std::string CloseChatInstanceSessionsRequest::getInstanceId() const {
  return instanceId_;
}

void CloseChatInstanceSessionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

std::string CloseChatInstanceSessionsRequest::getSessionIds() const {
  return sessionIds_;
}

void CloseChatInstanceSessionsRequest::setSessionIds(const std::string &sessionIds) {
  sessionIds_ = sessionIds;
  setBodyParameter(std::string("sessionIds"), sessionIds);
}

