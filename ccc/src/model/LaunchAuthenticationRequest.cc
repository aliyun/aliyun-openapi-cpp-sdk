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

#include <alibabacloud/ccc/model/LaunchAuthenticationRequest.h>

using AlibabaCloud::CCC::Model::LaunchAuthenticationRequest;

LaunchAuthenticationRequest::LaunchAuthenticationRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "LaunchAuthentication") {
  setMethod(HttpRequest::Method::Post);
}

LaunchAuthenticationRequest::~LaunchAuthenticationRequest() {}

std::string LaunchAuthenticationRequest::getContactFlowId() const {
  return contactFlowId_;
}

void LaunchAuthenticationRequest::setContactFlowId(const std::string &contactFlowId) {
  contactFlowId_ = contactFlowId;
  setParameter(std::string("ContactFlowId"), contactFlowId);
}

std::string LaunchAuthenticationRequest::getContactFlowVariables() const {
  return contactFlowVariables_;
}

void LaunchAuthenticationRequest::setContactFlowVariables(const std::string &contactFlowVariables) {
  contactFlowVariables_ = contactFlowVariables;
  setParameter(std::string("ContactFlowVariables"), contactFlowVariables);
}

std::string LaunchAuthenticationRequest::getUserId() const {
  return userId_;
}

void LaunchAuthenticationRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string LaunchAuthenticationRequest::getDeviceId() const {
  return deviceId_;
}

void LaunchAuthenticationRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string LaunchAuthenticationRequest::getJobId() const {
  return jobId_;
}

void LaunchAuthenticationRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string LaunchAuthenticationRequest::getInstanceId() const {
  return instanceId_;
}

void LaunchAuthenticationRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

