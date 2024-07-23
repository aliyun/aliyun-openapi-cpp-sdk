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

#include <alibabacloud/rds/model/DescribeBinlogFilesRequest.h>

using AlibabaCloud::Rds::Model::DescribeBinlogFilesRequest;

DescribeBinlogFilesRequest::DescribeBinlogFilesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeBinlogFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBinlogFilesRequest::~DescribeBinlogFilesRequest() {}

long DescribeBinlogFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBinlogFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBinlogFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeBinlogFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeBinlogFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBinlogFilesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeBinlogFilesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBinlogFilesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBinlogFilesRequest::getRegionId() const {
  return regionId_;
}

void DescribeBinlogFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBinlogFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBinlogFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeBinlogFilesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeBinlogFilesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int DescribeBinlogFilesRequest::getLatest() const {
  return latest_;
}

void DescribeBinlogFilesRequest::setLatest(int latest) {
  latest_ = latest;
  setParameter(std::string("Latest"), std::to_string(latest));
}

std::string DescribeBinlogFilesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBinlogFilesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBinlogFilesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBinlogFilesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeBinlogFilesRequest::getEndTime() const {
  return endTime_;
}

void DescribeBinlogFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeBinlogFilesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBinlogFilesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

