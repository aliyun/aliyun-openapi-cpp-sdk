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

#include <alibabacloud/polardb/model/DescribeSlowLogRecordsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeSlowLogRecordsRequest;

DescribeSlowLogRecordsRequest::DescribeSlowLogRecordsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeSlowLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlowLogRecordsRequest::~DescribeSlowLogRecordsRequest() {}

long DescribeSlowLogRecordsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSlowLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlowLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeSlowLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSlowLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSlowLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSlowLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSlowLogRecordsRequest::getRegionId() const {
  return regionId_;
}

void DescribeSlowLogRecordsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeSlowLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSlowLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSlowLogRecordsRequest::getNodeId() const {
  return nodeId_;
}

void DescribeSlowLogRecordsRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeSlowLogRecordsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSlowLogRecordsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSlowLogRecordsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSlowLogRecordsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSlowLogRecordsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSlowLogRecordsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeSlowLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlowLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeSlowLogRecordsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSlowLogRecordsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeSlowLogRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeSlowLogRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string DescribeSlowLogRecordsRequest::getSQLHASH() const {
  return sQLHASH_;
}

void DescribeSlowLogRecordsRequest::setSQLHASH(const std::string &sQLHASH) {
  sQLHASH_ = sQLHASH;
  setParameter(std::string("SQLHASH"), sQLHASH);
}

