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

#include <alibabacloud/ccc/model/SwitchToConferenceRequest.h>

using AlibabaCloud::CCC::Model::SwitchToConferenceRequest;

SwitchToConferenceRequest::SwitchToConferenceRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "SwitchToConference") {
  setMethod(HttpRequest::Method::Post);
}

SwitchToConferenceRequest::~SwitchToConferenceRequest() {}

std::string SwitchToConferenceRequest::getUserId() const {
  return userId_;
}

void SwitchToConferenceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string SwitchToConferenceRequest::getDeviceId() const {
  return deviceId_;
}

void SwitchToConferenceRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string SwitchToConferenceRequest::getJobId() const {
  return jobId_;
}

void SwitchToConferenceRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string SwitchToConferenceRequest::getInstanceId() const {
  return instanceId_;
}

void SwitchToConferenceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

