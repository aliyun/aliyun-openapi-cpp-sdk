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

#include <alibabacloud/ga/model/UpdateApplicationMonitorRequest.h>

using AlibabaCloud::Ga::Model::UpdateApplicationMonitorRequest;

UpdateApplicationMonitorRequest::UpdateApplicationMonitorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateApplicationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationMonitorRequest::~UpdateApplicationMonitorRequest() {}

bool UpdateApplicationMonitorRequest::getDetectEnable() const {
  return detectEnable_;
}

void UpdateApplicationMonitorRequest::setDetectEnable(bool detectEnable) {
  detectEnable_ = detectEnable;
  setParameter(std::string("DetectEnable"), detectEnable ? "true" : "false");
}

std::string UpdateApplicationMonitorRequest::getClientToken() const {
  return clientToken_;
}

void UpdateApplicationMonitorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateApplicationMonitorRequest::getTaskName() const {
  return taskName_;
}

void UpdateApplicationMonitorRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string UpdateApplicationMonitorRequest::getListenerId() const {
  return listenerId_;
}

void UpdateApplicationMonitorRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string UpdateApplicationMonitorRequest::getRegionId() const {
  return regionId_;
}

void UpdateApplicationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int UpdateApplicationMonitorRequest::getSilenceTime() const {
  return silenceTime_;
}

void UpdateApplicationMonitorRequest::setSilenceTime(int silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

std::string UpdateApplicationMonitorRequest::getTaskId() const {
  return taskId_;
}

void UpdateApplicationMonitorRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string UpdateApplicationMonitorRequest::getAddress() const {
  return address_;
}

void UpdateApplicationMonitorRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

int UpdateApplicationMonitorRequest::getDetectThreshold() const {
  return detectThreshold_;
}

void UpdateApplicationMonitorRequest::setDetectThreshold(int detectThreshold) {
  detectThreshold_ = detectThreshold;
  setParameter(std::string("DetectThreshold"), std::to_string(detectThreshold));
}

std::string UpdateApplicationMonitorRequest::getOptionsJson() const {
  return optionsJson_;
}

void UpdateApplicationMonitorRequest::setOptionsJson(const std::string &optionsJson) {
  optionsJson_ = optionsJson;
  setParameter(std::string("OptionsJson"), optionsJson);
}

int UpdateApplicationMonitorRequest::getDetectTimes() const {
  return detectTimes_;
}

void UpdateApplicationMonitorRequest::setDetectTimes(int detectTimes) {
  detectTimes_ = detectTimes;
  setParameter(std::string("DetectTimes"), std::to_string(detectTimes));
}

