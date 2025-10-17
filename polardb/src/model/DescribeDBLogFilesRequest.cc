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

#include <alibabacloud/polardb/model/DescribeDBLogFilesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBLogFilesRequest;

DescribeDBLogFilesRequest::DescribeDBLogFilesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBLogFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBLogFilesRequest::~DescribeDBLogFilesRequest() {}

long DescribeDBLogFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBLogFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBLogFilesRequest::getDBNodeId() const {
  return dBNodeId_;
}

void DescribeDBLogFilesRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string DescribeDBLogFilesRequest::getSimulateListId() const {
  return simulateListId_;
}

void DescribeDBLogFilesRequest::setSimulateListId(const std::string &simulateListId) {
  simulateListId_ = simulateListId;
  setParameter(std::string("SimulateListId"), simulateListId);
}

std::string DescribeDBLogFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBLogFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDBLogFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBLogFilesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBLogFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBLogFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBLogFilesRequest::getLogType() const {
  return logType_;
}

void DescribeDBLogFilesRequest::setLogType(const std::string &logType) {
  logType_ = logType;
  setParameter(std::string("LogType"), logType);
}

int DescribeDBLogFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBLogFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBLogFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBLogFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBLogFilesRequest::getSwitchId() const {
  return switchId_;
}

void DescribeDBLogFilesRequest::setSwitchId(const std::string &switchId) {
  switchId_ = switchId;
  setParameter(std::string("SwitchId"), switchId);
}

std::string DescribeDBLogFilesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBLogFilesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBLogFilesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBLogFilesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeDBLogFilesRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBLogFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDBLogFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBLogFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBLogFilesRequest::getDescribeSimulateSwitchMode() const {
  return describeSimulateSwitchMode_;
}

void DescribeDBLogFilesRequest::setDescribeSimulateSwitchMode(const std::string &describeSimulateSwitchMode) {
  describeSimulateSwitchMode_ = describeSimulateSwitchMode;
  setParameter(std::string("DescribeSimulateSwitchMode"), describeSimulateSwitchMode);
}

std::string DescribeDBLogFilesRequest::getSimulateStatusList() const {
  return simulateStatusList_;
}

void DescribeDBLogFilesRequest::setSimulateStatusList(const std::string &simulateStatusList) {
  simulateStatusList_ = simulateStatusList;
  setParameter(std::string("SimulateStatusList"), simulateStatusList);
}

std::string DescribeDBLogFilesRequest::getSimulateModeList() const {
  return simulateModeList_;
}

void DescribeDBLogFilesRequest::setSimulateModeList(const std::string &simulateModeList) {
  simulateModeList_ = simulateModeList;
  setParameter(std::string("SimulateModeList"), simulateModeList);
}

