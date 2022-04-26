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

#include <alibabacloud/ccc/model/InterceptCallRequest.h>

using AlibabaCloud::CCC::Model::InterceptCallRequest;

InterceptCallRequest::InterceptCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "InterceptCall") {
  setMethod(HttpRequest::Method::Post);
}

InterceptCallRequest::~InterceptCallRequest() {}

std::string InterceptCallRequest::getInterceptedUserId() const {
  return interceptedUserId_;
}

void InterceptCallRequest::setInterceptedUserId(const std::string &interceptedUserId) {
  interceptedUserId_ = interceptedUserId;
  setParameter(std::string("InterceptedUserId"), interceptedUserId);
}

std::string InterceptCallRequest::getUserId() const {
  return userId_;
}

void InterceptCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string InterceptCallRequest::getDeviceId() const {
  return deviceId_;
}

void InterceptCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string InterceptCallRequest::getJobId() const {
  return jobId_;
}

void InterceptCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int InterceptCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void InterceptCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string InterceptCallRequest::getInstanceId() const {
  return instanceId_;
}

void InterceptCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

