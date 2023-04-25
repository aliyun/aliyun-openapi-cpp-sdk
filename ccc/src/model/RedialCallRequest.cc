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

#include <alibabacloud/ccc/model/RedialCallRequest.h>

using AlibabaCloud::CCC::Model::RedialCallRequest;

RedialCallRequest::RedialCallRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "RedialCall") {
  setMethod(HttpRequest::Method::Post);
}

RedialCallRequest::~RedialCallRequest() {}

std::string RedialCallRequest::getCallee() const {
  return callee_;
}

void RedialCallRequest::setCallee(const std::string &callee) {
  callee_ = callee;
  setParameter(std::string("Callee"), callee);
}

std::string RedialCallRequest::getUserId() const {
  return userId_;
}

void RedialCallRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RedialCallRequest::getDeviceId() const {
  return deviceId_;
}

void RedialCallRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string RedialCallRequest::getTags() const {
  return tags_;
}

void RedialCallRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

int RedialCallRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void RedialCallRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string RedialCallRequest::getJobId() const {
  return jobId_;
}

void RedialCallRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string RedialCallRequest::getCaller() const {
  return caller_;
}

void RedialCallRequest::setCaller(const std::string &caller) {
  caller_ = caller;
  setParameter(std::string("Caller"), caller);
}

std::string RedialCallRequest::getInstanceId() const {
  return instanceId_;
}

void RedialCallRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

