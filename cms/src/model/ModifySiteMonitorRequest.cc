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

#include <alibabacloud/cms/model/ModifySiteMonitorRequest.h>

using AlibabaCloud::Cms::Model::ModifySiteMonitorRequest;

ModifySiteMonitorRequest::ModifySiteMonitorRequest()
    : RpcServiceRequest("cms", "2019-01-01", "ModifySiteMonitor") {
  setMethod(HttpRequest::Method::Post);
}

ModifySiteMonitorRequest::~ModifySiteMonitorRequest() {}

std::string ModifySiteMonitorRequest::getAddress() const {
  return address_;
}

void ModifySiteMonitorRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string ModifySiteMonitorRequest::getTaskName() const {
  return taskName_;
}

void ModifySiteMonitorRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string ModifySiteMonitorRequest::getIspCities() const {
  return ispCities_;
}

void ModifySiteMonitorRequest::setIspCities(const std::string &ispCities) {
  ispCities_ = ispCities;
  setParameter(std::string("IspCities"), ispCities);
}

std::string ModifySiteMonitorRequest::getOptionsJson() const {
  return optionsJson_;
}

void ModifySiteMonitorRequest::setOptionsJson(const std::string &optionsJson) {
  optionsJson_ = optionsJson;
  setParameter(std::string("OptionsJson"), optionsJson);
}

std::string ModifySiteMonitorRequest::getAlertIds() const {
  return alertIds_;
}

void ModifySiteMonitorRequest::setAlertIds(const std::string &alertIds) {
  alertIds_ = alertIds;
  setParameter(std::string("AlertIds"), alertIds);
}

std::string ModifySiteMonitorRequest::getIntervalUnit() const {
  return intervalUnit_;
}

void ModifySiteMonitorRequest::setIntervalUnit(const std::string &intervalUnit) {
  intervalUnit_ = intervalUnit;
  setParameter(std::string("IntervalUnit"), intervalUnit);
}

std::string ModifySiteMonitorRequest::getInterval() const {
  return interval_;
}

void ModifySiteMonitorRequest::setInterval(const std::string &interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), interval);
}

std::string ModifySiteMonitorRequest::getTaskId() const {
  return taskId_;
}

void ModifySiteMonitorRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

