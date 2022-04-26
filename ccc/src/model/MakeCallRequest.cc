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

#include <alibabacloud/ccc/model/MakeCallRequest.h>

using AlibabaCloud::CCC::Model::MakeCallRequest;

MakeCallRequest::MakeCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "MakeCall") {
  setMethod(HttpRequest::Method::Post);
}

MakeCallRequest::~MakeCallRequest() {}

std::string MakeCallRequest::getCallee() const {
  return callee_;
}

void MakeCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string MakeCallRequest::getMaskedCallee() const {
  return maskedCallee_;
}

void MakeCallRequest::setMaskedCallee(const std::string &maskedCallee) {
  maskedCallee_ = maskedCallee;
  setParameter(std::string("MaskedCallee"), maskedCallee);
}

std::string MakeCallRequest::getUserId() const {
  return userId_;
}

void MakeCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string MakeCallRequest::getDeviceId() const {
  return deviceId_;
}

void MakeCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string MakeCallRequest::getTags() const {
  return tags_;
}

void MakeCallRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int MakeCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void MakeCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string MakeCallRequest::getCaller() const {
  return caller_;
}

void MakeCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string MakeCallRequest::getInstanceId() const {
  return instanceId_;
}

void MakeCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

