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

#include <alibabacloud/ccc/model/BargeInCallRequest.h>

using AlibabaCloud::CCC::Model::BargeInCallRequest;

BargeInCallRequest::BargeInCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "BargeInCall") {
  setMethod(HttpRequest::Method::Post);
}

BargeInCallRequest::~BargeInCallRequest() {}

std::string BargeInCallRequest::getUserId() const {
  return userId_;
}

void BargeInCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string BargeInCallRequest::getDeviceId() const {
  return deviceId_;
}

void BargeInCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string BargeInCallRequest::getBargedUserId() const {
  return bargedUserId_;
}

void BargeInCallRequest::setBargedUserId(const std::string &bargedUserId) {
  bargedUserId_ = bargedUserId;
  setParameter(std::string("BargedUserId"), bargedUserId);
}

std::string BargeInCallRequest::getJobId() const {
  return jobId_;
}

void BargeInCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int BargeInCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void BargeInCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string BargeInCallRequest::getInstanceId() const {
  return instanceId_;
}

void BargeInCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

