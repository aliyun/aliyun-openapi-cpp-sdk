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

#include <alibabacloud/ccc/model/BridgeRtcCallRequest.h>

using AlibabaCloud::CCC::Model::BridgeRtcCallRequest;

BridgeRtcCallRequest::BridgeRtcCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "BridgeRtcCall") {
  setMethod(HttpRequest::Method::Post);
}

BridgeRtcCallRequest::~BridgeRtcCallRequest() {}

std::string BridgeRtcCallRequest::getServiceProvider() const {
  return serviceProvider_;
}

void BridgeRtcCallRequest::setServiceProvider(const std::string &serviceProvider) {
  serviceProvider_ = serviceProvider;
  setParameter(std::string("ServiceProvider"), serviceProvider);
}

std::string BridgeRtcCallRequest::getCallee() const {
  return callee_;
}

void BridgeRtcCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string BridgeRtcCallRequest::getUserId() const {
  return userId_;
}

void BridgeRtcCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string BridgeRtcCallRequest::getDeviceId() const {
  return deviceId_;
}

void BridgeRtcCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string BridgeRtcCallRequest::getTags() const {
  return tags_;
}

void BridgeRtcCallRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int BridgeRtcCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void BridgeRtcCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string BridgeRtcCallRequest::getCaller() const {
  return caller_;
}

void BridgeRtcCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string BridgeRtcCallRequest::getInstanceId() const {
  return instanceId_;
}

void BridgeRtcCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool BridgeRtcCallRequest::getVideoEnabled() const {
  return videoEnabled_;
}

void BridgeRtcCallRequest::setVideoEnabled(bool videoEnabled) {
  videoEnabled_ = videoEnabled;
  setParameter(std::string("VideoEnabled"), videoEnabled ? "true" : "false");
}

