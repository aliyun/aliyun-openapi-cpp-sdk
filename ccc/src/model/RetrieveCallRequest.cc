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

#include <alibabacloud/ccc/model/RetrieveCallRequest.h>

using AlibabaCloud::CCC::Model::RetrieveCallRequest;

RetrieveCallRequest::RetrieveCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RetrieveCall") {
  setMethod(HttpRequest::Method::Post);
}

RetrieveCallRequest::~RetrieveCallRequest() {}

std::string RetrieveCallRequest::getUserId() const {
  return userId_;
}

void RetrieveCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RetrieveCallRequest::getDeviceId() const {
  return deviceId_;
}

void RetrieveCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string RetrieveCallRequest::getJobId() const {
  return jobId_;
}

void RetrieveCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string RetrieveCallRequest::getInstanceId() const {
  return instanceId_;
}

void RetrieveCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RetrieveCallRequest::getChannelId() const {
  return channelId_;
}

void RetrieveCallRequest::setChannelId(const std::string &channelId) {
  channelId_ = channelId;
  setParameter(std::string("ChannelId"), channelId);
}

