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

#include <alibabacloud/ccc/model/CoachCallRequest.h>

using AlibabaCloud::CCC::Model::CoachCallRequest;

CoachCallRequest::CoachCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CoachCall") {
  setMethod(HttpRequest::Method::Post);
}

CoachCallRequest::~CoachCallRequest() {}

std::string CoachCallRequest::getCoachedUserId() const {
  return coachedUserId_;
}

void CoachCallRequest::setCoachedUserId(const std::string &coachedUserId) {
  coachedUserId_ = coachedUserId;
  setParameter(std::string("CoachedUserId"), coachedUserId);
}

std::string CoachCallRequest::getUserId() const {
  return userId_;
}

void CoachCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CoachCallRequest::getDeviceId() const {
  return deviceId_;
}

void CoachCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string CoachCallRequest::getJobId() const {
  return jobId_;
}

void CoachCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int CoachCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void CoachCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string CoachCallRequest::getInstanceId() const {
  return instanceId_;
}

void CoachCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

