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

#include <alibabacloud/rds/model/DescribeErrorLogsRequest.h>

using AlibabaCloud::Rds::Model::DescribeErrorLogsRequest;

DescribeErrorLogsRequest::DescribeErrorLogsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeErrorLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeErrorLogsRequest::~DescribeErrorLogsRequest() {}

long DescribeErrorLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeErrorLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeErrorLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeErrorLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeErrorLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeErrorLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeErrorLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeErrorLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeErrorLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeErrorLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeErrorLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeErrorLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeErrorLogsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeErrorLogsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeErrorLogsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeErrorLogsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeErrorLogsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeErrorLogsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeErrorLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeErrorLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeErrorLogsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeErrorLogsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

