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

#include <alibabacloud/ccc/model/ReadyForServiceRequest.h>

using AlibabaCloud::CCC::Model::ReadyForServiceRequest;

ReadyForServiceRequest::ReadyForServiceRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ReadyForService") {
  setMethod(HttpRequest::Method::Post);
}

ReadyForServiceRequest::~ReadyForServiceRequest() {}

bool ReadyForServiceRequest::getOutboundScenario() const {
  return outboundScenario_;
}

void ReadyForServiceRequest::setOutboundScenario(bool outboundScenario) {
  outboundScenario_ = outboundScenario;
  setParameter(std::string("OutboundScenario"), outboundScenario ? "true" : "false");
}

std::string ReadyForServiceRequest::getUserId() const {
  return userId_;
}

void ReadyForServiceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ReadyForServiceRequest::getDeviceId() const {
  return deviceId_;
}

void ReadyForServiceRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string ReadyForServiceRequest::getInstanceId() const {
  return instanceId_;
}

void ReadyForServiceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

