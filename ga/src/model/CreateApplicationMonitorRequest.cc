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

#include <alibabacloud/ga/model/CreateApplicationMonitorRequest.h>

using AlibabaCloud::Ga::Model::CreateApplicationMonitorRequest;

CreateApplicationMonitorRequest::CreateApplicationMonitorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateApplicationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationMonitorRequest::~CreateApplicationMonitorRequest() {}

std::string CreateApplicationMonitorRequest::getAddress() const {
  return address_;
}

void CreateApplicationMonitorRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

bool CreateApplicationMonitorRequest::getDetectEnable() const {
  return detectEnable_;
}

void CreateApplicationMonitorRequest::setDetectEnable(bool detectEnable) {
  detectEnable_ = detectEnable;
  setParameter(std::string("DetectEnable"), detectEnable ? "true" : "false");
}

std::string CreateApplicationMonitorRequest::getClientToken() const {
  return clientToken_;
}

void CreateApplicationMonitorRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateApplicationMonitorRequest::getTaskName() const {
  return taskName_;
}

void CreateApplicationMonitorRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int CreateApplicationMonitorRequest::getDetectThreshold() const {
  return detectThreshold_;
}

void CreateApplicationMonitorRequest::setDetectThreshold(int detectThreshold) {
  detectThreshold_ = detectThreshold;
  setParameter(std::string("DetectThreshold"), std::to_string(detectThreshold));
}

std::string CreateApplicationMonitorRequest::getListenerId() const {
  return listenerId_;
}

void CreateApplicationMonitorRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string CreateApplicationMonitorRequest::getOptionsJson() const {
  return optionsJson_;
}

void CreateApplicationMonitorRequest::setOptionsJson(const std::string &optionsJson) {
  optionsJson_ = optionsJson;
  setParameter(std::string("OptionsJson"), optionsJson);
}

int CreateApplicationMonitorRequest::getDetectTimes() const {
  return detectTimes_;
}

void CreateApplicationMonitorRequest::setDetectTimes(int detectTimes) {
  detectTimes_ = detectTimes;
  setParameter(std::string("DetectTimes"), std::to_string(detectTimes));
}

std::string CreateApplicationMonitorRequest::getRegionId() const {
  return regionId_;
}

void CreateApplicationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateApplicationMonitorRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateApplicationMonitorRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

int CreateApplicationMonitorRequest::getSilenceTime() const {
  return silenceTime_;
}

void CreateApplicationMonitorRequest::setSilenceTime(int silenceTime) {
  silenceTime_ = silenceTime;
  setParameter(std::string("SilenceTime"), std::to_string(silenceTime));
}

