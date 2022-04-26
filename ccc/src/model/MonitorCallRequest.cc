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

#include <alibabacloud/ccc/model/MonitorCallRequest.h>

using AlibabaCloud::CCC::Model::MonitorCallRequest;

MonitorCallRequest::MonitorCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "MonitorCall") {
  setMethod(HttpRequest::Method::Post);
}

MonitorCallRequest::~MonitorCallRequest() {}

std::string MonitorCallRequest::getUserId() const {
  return userId_;
}

void MonitorCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string MonitorCallRequest::getDeviceId() const {
  return deviceId_;
}

void MonitorCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

int MonitorCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void MonitorCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string MonitorCallRequest::getInstanceId() const {
  return instanceId_;
}

void MonitorCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string MonitorCallRequest::getMonitoredUserId() const {
  return monitoredUserId_;
}

void MonitorCallRequest::setMonitoredUserId(const std::string &monitoredUserId) {
  monitoredUserId_ = monitoredUserId;
  setParameter(std::string("MonitoredUserId"), monitoredUserId);
}

