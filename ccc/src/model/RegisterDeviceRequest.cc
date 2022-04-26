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

#include <alibabacloud/ccc/model/RegisterDeviceRequest.h>

using AlibabaCloud::CCC::Model::RegisterDeviceRequest;

RegisterDeviceRequest::RegisterDeviceRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RegisterDevice") {
  setMethod(HttpRequest::Method::Post);
}

RegisterDeviceRequest::~RegisterDeviceRequest() {}

std::string RegisterDeviceRequest::getUserId() const {
  return userId_;
}

void RegisterDeviceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RegisterDeviceRequest::getDeviceId() const {
  return deviceId_;
}

void RegisterDeviceRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string RegisterDeviceRequest::getPassword() const {
  return password_;
}

void RegisterDeviceRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string RegisterDeviceRequest::getInstanceId() const {
  return instanceId_;
}

void RegisterDeviceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

