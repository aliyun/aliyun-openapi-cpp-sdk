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

#include <alibabacloud/outboundbot/model/SuspendCallRequest.h>

using AlibabaCloud::OutboundBot::Model::SuspendCallRequest;

SuspendCallRequest::SuspendCallRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SuspendCall") {
  setMethod(HttpRequest::Method::Post);
}

SuspendCallRequest::~SuspendCallRequest() {}

std::string SuspendCallRequest::getGroupId() const {
  return groupId_;
}

void SuspendCallRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setParameter(std::string("GroupId"), groupId);
}

std::vector<std::string> SuspendCallRequest::getCalledNumbers() const {
  return calledNumbers_;
}

void SuspendCallRequest::setCalledNumbers(const std::vector<std::string> &calledNumbers) {
  calledNumbers_ = calledNumbers;
}

std::string SuspendCallRequest::getInstanceId() const {
  return instanceId_;
}

void SuspendCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

