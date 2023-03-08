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

#include <alibabacloud/adb/model/DescribeApsActionLogsRequest.h>

using AlibabaCloud::Adb::Model::DescribeApsActionLogsRequest;

DescribeApsActionLogsRequest::DescribeApsActionLogsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeApsActionLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeApsActionLogsRequest::~DescribeApsActionLogsRequest() {}

long DescribeApsActionLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeApsActionLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeApsActionLogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeApsActionLogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeApsActionLogsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeApsActionLogsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeApsActionLogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeApsActionLogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeApsActionLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeApsActionLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeApsActionLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeApsActionLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long DescribeApsActionLogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeApsActionLogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeApsActionLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeApsActionLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeApsActionLogsRequest::getStage() const {
  return stage_;
}

void DescribeApsActionLogsRequest::setStage(const std::string &stage) {
  stage_ = stage;
  setParameter(std::string("Stage"), stage);
}

std::string DescribeApsActionLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeApsActionLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeApsActionLogsRequest::getProxyUser() const {
  return proxyUser_;
}

void DescribeApsActionLogsRequest::setProxyUser(const std::string &proxyUser) {
  proxyUser_ = proxyUser;
  setParameter(std::string("ProxyUser"), proxyUser);
}

std::string DescribeApsActionLogsRequest::getWorkloadId() const {
  return workloadId_;
}

void DescribeApsActionLogsRequest::setWorkloadId(const std::string &workloadId) {
  workloadId_ = workloadId;
  setParameter(std::string("WorkloadId"), workloadId);
}

int DescribeApsActionLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeApsActionLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeApsActionLogsRequest::getState() const {
  return state_;
}

void DescribeApsActionLogsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string DescribeApsActionLogsRequest::getKeyword() const {
  return keyword_;
}

void DescribeApsActionLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

