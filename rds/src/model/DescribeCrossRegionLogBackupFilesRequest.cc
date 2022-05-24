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

#include <alibabacloud/rds/model/DescribeCrossRegionLogBackupFilesRequest.h>

using AlibabaCloud::Rds::Model::DescribeCrossRegionLogBackupFilesRequest;

DescribeCrossRegionLogBackupFilesRequest::DescribeCrossRegionLogBackupFilesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCrossRegionLogBackupFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCrossRegionLogBackupFilesRequest::~DescribeCrossRegionLogBackupFilesRequest() {}

long DescribeCrossRegionLogBackupFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCrossRegionLogBackupFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCrossRegionLogBackupFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeCrossRegionLogBackupFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeCrossRegionLogBackupFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCrossRegionLogBackupFilesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCrossRegionLogBackupFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCrossRegionLogBackupFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeCrossRegionLogBackupFilesRequest::getRegionId() const {
  return regionId_;
}

void DescribeCrossRegionLogBackupFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeCrossRegionLogBackupFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCrossRegionLogBackupFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCrossRegionLogBackupFilesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeCrossRegionLogBackupFilesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeCrossRegionLogBackupFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCrossRegionLogBackupFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCrossRegionLogBackupFilesRequest::getEndTime() const {
  return endTime_;
}

void DescribeCrossRegionLogBackupFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeCrossRegionLogBackupFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCrossRegionLogBackupFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCrossRegionLogBackupFilesRequest::getCrossBackupRegion() const {
  return crossBackupRegion_;
}

void DescribeCrossRegionLogBackupFilesRequest::setCrossBackupRegion(const std::string &crossBackupRegion) {
  crossBackupRegion_ = crossBackupRegion;
  setParameter(std::string("CrossBackupRegion"), crossBackupRegion);
}

