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

#include <alibabacloud/live/model/UpdateLiveDelayConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveDelayConfigRequest;

UpdateLiveDelayConfigRequest::UpdateLiveDelayConfigRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveDelayConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveDelayConfigRequest::~UpdateLiveDelayConfigRequest() {}

int UpdateLiveDelayConfigRequest::getDelayTime() const {
  return delayTime_;
}

void UpdateLiveDelayConfigRequest::setDelayTime(int delayTime) {
  delayTime_ = delayTime;
  setParameter(std::string("DelayTime"), std::to_string(delayTime));
}

std::string UpdateLiveDelayConfigRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveDelayConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveDelayConfigRequest::getStream() const {
  return stream_;
}

void UpdateLiveDelayConfigRequest::setStream(const std::string &stream) {
  stream_ = stream;
  setParameter(std::string("Stream"), stream);
}

std::string UpdateLiveDelayConfigRequest::getApp() const {
  return app_;
}

void UpdateLiveDelayConfigRequest::setApp(const std::string &app) {
  app_ = app;
  setParameter(std::string("App"), app);
}

long UpdateLiveDelayConfigRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveDelayConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateLiveDelayConfigRequest::getTaskTriggerMode() const {
  return taskTriggerMode_;
}

void UpdateLiveDelayConfigRequest::setTaskTriggerMode(const std::string &taskTriggerMode) {
  taskTriggerMode_ = taskTriggerMode;
  setParameter(std::string("TaskTriggerMode"), taskTriggerMode);
}

std::string UpdateLiveDelayConfigRequest::getDomain() const {
  return domain_;
}

void UpdateLiveDelayConfigRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

