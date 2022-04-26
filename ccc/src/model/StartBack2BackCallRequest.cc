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

#include <alibabacloud/ccc/model/StartBack2BackCallRequest.h>

using AlibabaCloud::CCC::Model::StartBack2BackCallRequest;

StartBack2BackCallRequest::StartBack2BackCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "StartBack2BackCall") {
  setMethod(HttpRequest::Method::Post);
}

StartBack2BackCallRequest::~StartBack2BackCallRequest() {}

std::string StartBack2BackCallRequest::getCallee() const {
  return callee_;
}

void StartBack2BackCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string StartBack2BackCallRequest::getBroker() const {
  return broker_;
}

void StartBack2BackCallRequest::setBroker(const std::string &broker) {
  broker_ = broker;
  setParameter(std::string("Broker"), broker);
}

std::string StartBack2BackCallRequest::getAdditionalBroker() const {
  return additionalBroker_;
}

void StartBack2BackCallRequest::setAdditionalBroker(const std::string &additionalBroker) {
  additionalBroker_ = additionalBroker;
  setParameter(std::string("AdditionalBroker"), additionalBroker);
}

std::string StartBack2BackCallRequest::getTags() const {
  return tags_;
}

void StartBack2BackCallRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int StartBack2BackCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void StartBack2BackCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string StartBack2BackCallRequest::getCaller() const {
  return caller_;
}

void StartBack2BackCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string StartBack2BackCallRequest::getInstanceId() const {
  return instanceId_;
}

void StartBack2BackCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

