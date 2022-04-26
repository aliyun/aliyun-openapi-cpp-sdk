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

#include <alibabacloud/ccc/model/PickOutboundNumbersRequest.h>

using AlibabaCloud::CCC::Model::PickOutboundNumbersRequest;

PickOutboundNumbersRequest::PickOutboundNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "PickOutboundNumbers") {
  setMethod(HttpRequest::Method::Post);
}

PickOutboundNumbersRequest::~PickOutboundNumbersRequest() {}

int PickOutboundNumbersRequest::getCount() const {
  return count_;
}

void PickOutboundNumbersRequest::setCount(int count) {
  count_ = count;
  setParameter(std::string("Count"), std::to_string(count));
}

std::string PickOutboundNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void PickOutboundNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string PickOutboundNumbersRequest::getSkillGroupIdList() const {
  return skillGroupIdList_;
}

void PickOutboundNumbersRequest::setSkillGroupIdList(const std::string &skillGroupIdList) {
  skillGroupIdList_ = skillGroupIdList;
  setParameter(std::string("SkillGroupIdList"), skillGroupIdList);
}

std::string PickOutboundNumbersRequest::getCalledNumber() const {
  return calledNumber_;
}

void PickOutboundNumbersRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

