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

#include <alibabacloud/ons/model/OnsTrendTopicInputTpsRequest.h>

using AlibabaCloud::Ons::Model::OnsTrendTopicInputTpsRequest;

OnsTrendTopicInputTpsRequest::OnsTrendTopicInputTpsRequest()
    : RpcServiceRequest("ons", "2019-02-14", "OnsTrendTopicInputTps") {
  setMethod(HttpRequest::Method::Post);
}

OnsTrendTopicInputTpsRequest::~OnsTrendTopicInputTpsRequest() {}

long OnsTrendTopicInputTpsRequest::getPeriod() const {
  return period_;
}

void OnsTrendTopicInputTpsRequest::setPeriod(long period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

long OnsTrendTopicInputTpsRequest::getEndTime() const {
  return endTime_;
}

void OnsTrendTopicInputTpsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long OnsTrendTopicInputTpsRequest::getBeginTime() const {
  return beginTime_;
}

void OnsTrendTopicInputTpsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int OnsTrendTopicInputTpsRequest::getType() const {
  return type_;
}

void OnsTrendTopicInputTpsRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string OnsTrendTopicInputTpsRequest::getInstanceId() const {
  return instanceId_;
}

void OnsTrendTopicInputTpsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string OnsTrendTopicInputTpsRequest::getTopic() const {
  return topic_;
}

void OnsTrendTopicInputTpsRequest::setTopic(const std::string &topic) {
  topic_ = topic;
  setParameter(std::string("Topic"), topic);
}

