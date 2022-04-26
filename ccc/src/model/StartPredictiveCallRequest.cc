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

#include <alibabacloud/ccc/model/StartPredictiveCallRequest.h>

using AlibabaCloud::CCC::Model::StartPredictiveCallRequest;

StartPredictiveCallRequest::StartPredictiveCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "StartPredictiveCall") {
  setMethod(HttpRequest::Method::Post);
}

StartPredictiveCallRequest::~StartPredictiveCallRequest() {}

std::string StartPredictiveCallRequest::getContactFlowId() const {
  return contactFlowId_;
}

void StartPredictiveCallRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string StartPredictiveCallRequest::getCallee() const {
  return callee_;
}

void StartPredictiveCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string StartPredictiveCallRequest::getMaskedCallee() const {
  return maskedCallee_;
}

void StartPredictiveCallRequest::setMaskedCallee(const std::string &maskedCallee) {
  maskedCallee_ = maskedCallee;
  setParameter(std::string("MaskedCallee"), maskedCallee);
}

std::string StartPredictiveCallRequest::getContactFlowVariables() const {
  return contactFlowVariables_;
}

void StartPredictiveCallRequest::setContactFlowVariables(const std::string &contactFlowVariables) {
  contactFlowVariables_ = contactFlowVariables;
  setParameter(std::string("ContactFlowVariables"), contactFlowVariables);
}

std::string StartPredictiveCallRequest::getTags() const {
  return tags_;
}

void StartPredictiveCallRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int StartPredictiveCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void StartPredictiveCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string StartPredictiveCallRequest::getCaller() const {
  return caller_;
}

void StartPredictiveCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string StartPredictiveCallRequest::getInstanceId() const {
  return instanceId_;
}

void StartPredictiveCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StartPredictiveCallRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void StartPredictiveCallRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

