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

#include <alibabacloud/polardb/model/DescribeAIDBClustersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeAIDBClustersRequest;

DescribeAIDBClustersRequest::DescribeAIDBClustersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeAIDBClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAIDBClustersRequest::~DescribeAIDBClustersRequest() {}

std::string DescribeAIDBClustersRequest::getAiNodeType() const {
  return aiNodeType_;
}

void DescribeAIDBClustersRequest::setAiNodeType(const std::string &aiNodeType) {
  aiNodeType_ = aiNodeType;
  setParameter(std::string("AiNodeType"), aiNodeType);
}

long DescribeAIDBClustersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAIDBClustersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAIDBClustersRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeAIDBClustersRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string DescribeAIDBClustersRequest::getDBClusterStatus() const {
  return dBClusterStatus_;
}

void DescribeAIDBClustersRequest::setDBClusterStatus(const std::string &dBClusterStatus) {
  dBClusterStatus_ = dBClusterStatus;
  setParameter(std::string("DBClusterStatus"), dBClusterStatus);
}

std::string DescribeAIDBClustersRequest::getDescribeType() const {
  return describeType_;
}

void DescribeAIDBClustersRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

int DescribeAIDBClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAIDBClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAIDBClustersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAIDBClustersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAIDBClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeAIDBClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeAIDBClustersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAIDBClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeAIDBClustersRequest::Tag> DescribeAIDBClustersRequest::getTag() const {
  return tag_;
}

void DescribeAIDBClustersRequest::setTag(const std::vector<DescribeAIDBClustersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeAIDBClustersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAIDBClustersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAIDBClustersRequest::getRelativeDBClusterId() const {
  return relativeDBClusterId_;
}

void DescribeAIDBClustersRequest::setRelativeDBClusterId(const std::string &relativeDBClusterId) {
  relativeDBClusterId_ = relativeDBClusterId;
  setParameter(std::string("RelativeDBClusterId"), relativeDBClusterId);
}

std::string DescribeAIDBClustersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAIDBClustersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAIDBClustersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAIDBClustersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeAIDBClustersRequest::getTargetPolarFsInstanceId() const {
  return targetPolarFsInstanceId_;
}

void DescribeAIDBClustersRequest::setTargetPolarFsInstanceId(const std::string &targetPolarFsInstanceId) {
  targetPolarFsInstanceId_ = targetPolarFsInstanceId;
  setParameter(std::string("TargetPolarFsInstanceId"), targetPolarFsInstanceId);
}

std::string DescribeAIDBClustersRequest::getZoneId() const {
  return zoneId_;
}

void DescribeAIDBClustersRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string DescribeAIDBClustersRequest::getPayType() const {
  return payType_;
}

void DescribeAIDBClustersRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeAIDBClustersRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeAIDBClustersRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

