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

#include <alibabacloud/dds/model/DescribeBinlogFilesRequest.h>

using AlibabaCloud::Dds::Model::DescribeBinlogFilesRequest;

DescribeBinlogFilesRequest::DescribeBinlogFilesRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeBinlogFiles") {
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

std::string DescribeBinlogFilesRequest::getBinlogId() const {
  return binlogId_;
}

void DescribeBinlogFilesRequest::setBinlogId(const std::string &binlogId) {
  binlogId_ = binlogId;
  setParameter(std::string("BinlogId"), binlogId);
}

std::string DescribeBinlogFilesRequest::getStartTime() const {
  return startTime_;
}

void DescribeBinlogFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeBinlogFilesRequest::getSrcRegion() const {
  return srcRegion_;
}

void DescribeBinlogFilesRequest::setSrcRegion(const std::string &srcRegion) {
  srcRegion_ = srcRegion;
  setParameter(std::string("SrcRegion"), srcRegion);
}

long DescribeBinlogFilesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeBinlogFilesRequest::setPageNumber(long pageNumber) {
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

std::string DescribeBinlogFilesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeBinlogFilesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeBinlogFilesRequest::getRegionId() const {
  return regionId_;
}

void DescribeBinlogFilesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeBinlogFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBinlogFilesRequest::setPageSize(long pageSize) {
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

std::string DescribeBinlogFilesRequest::getNodeId() const {
  return nodeId_;
}

void DescribeBinlogFilesRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string DescribeBinlogFilesRequest::getDestRegion() const {
  return destRegion_;
}

void DescribeBinlogFilesRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
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

