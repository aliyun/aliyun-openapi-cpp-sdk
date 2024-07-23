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

#include <alibabacloud/rds/model/DescribeLogBackupFilesRequest.h>

using AlibabaCloud::Rds::Model::DescribeLogBackupFilesRequest;

DescribeLogBackupFilesRequest::DescribeLogBackupFilesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeLogBackupFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogBackupFilesRequest::~DescribeLogBackupFilesRequest() {}

long DescribeLogBackupFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLogBackupFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeLogBackupFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeLogBackupFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeLogBackupFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLogBackupFilesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLogBackupFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLogBackupFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeLogBackupFilesRequest::getRegionId() const {
  return regionId_;
}

void DescribeLogBackupFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLogBackupFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLogBackupFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLogBackupFilesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeLogBackupFilesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeLogBackupFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLogBackupFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLogBackupFilesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLogBackupFilesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeLogBackupFilesRequest::getEndTime() const {
  return endTime_;
}

void DescribeLogBackupFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeLogBackupFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLogBackupFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

