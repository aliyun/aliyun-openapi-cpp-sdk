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

#include <alibabacloud/ccc/model/RegisterDevicesRequest.h>

using AlibabaCloud::CCC::Model::RegisterDevicesRequest;

RegisterDevicesRequest::RegisterDevicesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RegisterDevices") {
  setMethod(HttpRequest::Method::Post);
}

RegisterDevicesRequest::~RegisterDevicesRequest() {}

std::string RegisterDevicesRequest::getUserIdListJson() const {
  return userIdListJson_;
}

void RegisterDevicesRequest::setUserIdListJson(const std::string &userIdListJson) {
  userIdListJson_ = userIdListJson;
  setParameter(std::string("UserIdListJson"), userIdListJson);
}

std::string RegisterDevicesRequest::getDeviceId() const {
  return deviceId_;
}

void RegisterDevicesRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string RegisterDevicesRequest::getPassword() const {
  return password_;
}

void RegisterDevicesRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string RegisterDevicesRequest::getInstanceId() const {
  return instanceId_;
}

void RegisterDevicesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

