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

#include <alibabacloud/ccc/model/HoldCallRequest.h>

using AlibabaCloud::CCC::Model::HoldCallRequest;

HoldCallRequest::HoldCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "HoldCall") {
  setMethod(HttpRequest::Method::Post);
}

HoldCallRequest::~HoldCallRequest() {}

std::string HoldCallRequest::getUserId() const {
  return userId_;
}

void HoldCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string HoldCallRequest::getDeviceId() const {
  return deviceId_;
}

void HoldCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string HoldCallRequest::getJobId() const {
  return jobId_;
}

void HoldCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string HoldCallRequest::getInstanceId() const {
  return instanceId_;
}

void HoldCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string HoldCallRequest::getMusic() const {
  return music_;
}

void HoldCallRequest::setMusic(const std::string &music) {
  music_ = music;
  setParameter(std::string("Music"), music);
}

std::string HoldCallRequest::getChannelId() const {
  return channelId_;
}

void HoldCallRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

