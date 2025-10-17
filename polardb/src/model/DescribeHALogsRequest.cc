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

#include <alibabacloud/polardb/model/DescribeHALogsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeHALogsRequest;

DescribeHALogsRequest::DescribeHALogsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeHALogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHALogsRequest::~DescribeHALogsRequest() {}

std::string DescribeHALogsRequest::getDBNodeId() const {
  return dBNodeId_;
}

void DescribeHALogsRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string DescribeHALogsRequest::getSimulateListId() const {
  return simulateListId_;
}

void DescribeHALogsRequest::setSimulateListId(const std::string &simulateListId) {
  simulateListId_ = simulateListId;
  setParameter(std::string("SimulateListId"), simulateListId);
}

std::string DescribeHALogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeHALogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeHALogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHALogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeHALogsRequest::getLogType() const {
  return logType_;
}

void DescribeHALogsRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

int DescribeHALogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHALogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeHALogsRequest::getSwitchId() const {
  return switchId_;
}

void DescribeHALogsRequest::setSwitchId(const std::string &switchId) {
  switchId_ = switchId;
  setParameter(std::string("SwitchId"), switchId);
}

std::string DescribeHALogsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeHALogsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeHALogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeHALogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeHALogsRequest::getDescribeSimulateSwitchMode() const {
  return describeSimulateSwitchMode_;
}

void DescribeHALogsRequest::setDescribeSimulateSwitchMode(const std::string &describeSimulateSwitchMode) {
  describeSimulateSwitchMode_ = describeSimulateSwitchMode;
  setParameter(std::string("DescribeSimulateSwitchMode"), describeSimulateSwitchMode);
}

std::string DescribeHALogsRequest::getSimulateStatusList() const {
  return simulateStatusList_;
}

void DescribeHALogsRequest::setSimulateStatusList(const std::string &simulateStatusList) {
  simulateStatusList_ = simulateStatusList;
  setParameter(std::string("SimulateStatusList"), simulateStatusList);
}

std::string DescribeHALogsRequest::getSimulateModeList() const {
  return simulateModeList_;
}

void DescribeHALogsRequest::setSimulateModeList(const std::string &simulateModeList) {
  simulateModeList_ = simulateModeList;
  setParameter(std::string("SimulateModeList"), simulateModeList);
}

