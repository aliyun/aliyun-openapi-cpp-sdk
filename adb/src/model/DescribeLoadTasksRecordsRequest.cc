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

#include <alibabacloud/adb/model/DescribeLoadTasksRecordsRequest.h>

using AlibabaCloud::Adb::Model::DescribeLoadTasksRecordsRequest;

DescribeLoadTasksRecordsRequest::DescribeLoadTasksRecordsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeLoadTasksRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLoadTasksRecordsRequest::~DescribeLoadTasksRecordsRequest() {}

long DescribeLoadTasksRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLoadTasksRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeLoadTasksRecordsRequest::getRange() const {
  return range_;
}

void DescribeLoadTasksRecordsRequest::setRange(const std::string &range) {
  range_ = range;
  setParameter(std::string("Range"), range);
}

std::string DescribeLoadTasksRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeLoadTasksRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeLoadTasksRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLoadTasksRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLoadTasksRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLoadTasksRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeLoadTasksRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeLoadTasksRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLoadTasksRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLoadTasksRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLoadTasksRecordsRequest::getState() const {
  return state_;
}

void DescribeLoadTasksRecordsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string DescribeLoadTasksRecordsRequest::getOrder() const {
  return order_;
}

void DescribeLoadTasksRecordsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeLoadTasksRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLoadTasksRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLoadTasksRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeLoadTasksRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeLoadTasksRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLoadTasksRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeLoadTasksRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeLoadTasksRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLoadTasksRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLoadTasksRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeLoadTasksRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeLoadTasksRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

