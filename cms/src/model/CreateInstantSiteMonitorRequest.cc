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

#include <alibabacloud/cms/model/CreateInstantSiteMonitorRequest.h>

using AlibabaCloud::Cms::Model::CreateInstantSiteMonitorRequest;

CreateInstantSiteMonitorRequest::CreateInstantSiteMonitorRequest()
    : RpcServiceRequest("cms", "2019-01-01", "CreateInstantSiteMonitor") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstantSiteMonitorRequest::~CreateInstantSiteMonitorRequest() {}

int CreateInstantSiteMonitorRequest::getRandomIspCity() const {
  return randomIspCity_;
}

void CreateInstantSiteMonitorRequest::setRandomIspCity(int randomIspCity) {
  randomIspCity_ = randomIspCity;
  setParameter(std::string("RandomIspCity"), std::to_string(randomIspCity));
}

std::string CreateInstantSiteMonitorRequest::getAddress() const {
  return address_;
}

void CreateInstantSiteMonitorRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string CreateInstantSiteMonitorRequest::getTaskType() const {
  return taskType_;
}

void CreateInstantSiteMonitorRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string CreateInstantSiteMonitorRequest::getTaskName() const {
  return taskName_;
}

void CreateInstantSiteMonitorRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateInstantSiteMonitorRequest::getIspCities() const {
  return ispCities_;
}

void CreateInstantSiteMonitorRequest::setIspCities(const std::string &ispCities) {
  ispCities_ = ispCities;
  setParameter(std::string("IspCities"), ispCities);
}

std::string CreateInstantSiteMonitorRequest::getOptionsJson() const {
  return optionsJson_;
}

void CreateInstantSiteMonitorRequest::setOptionsJson(const std::string &optionsJson) {
  optionsJson_ = optionsJson;
  setParameter(std::string("OptionsJson"), optionsJson);
}

