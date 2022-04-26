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

#include <alibabacloud/ccc/model/UnmuteCallRequest.h>

using AlibabaCloud::CCC::Model::UnmuteCallRequest;

UnmuteCallRequest::UnmuteCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "UnmuteCall") {
  setMethod(HttpRequest::Method::Post);
}

UnmuteCallRequest::~UnmuteCallRequest() {}

std::string UnmuteCallRequest::getUserId() const {
  return userId_;
}

void UnmuteCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UnmuteCallRequest::getDeviceId() const {
  return deviceId_;
}

void UnmuteCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string UnmuteCallRequest::getJobId() const {
  return jobId_;
}

void UnmuteCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string UnmuteCallRequest::getInstanceId() const {
  return instanceId_;
}

void UnmuteCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UnmuteCallRequest::getChannelId() const {
  return channelId_;
}

void UnmuteCallRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

