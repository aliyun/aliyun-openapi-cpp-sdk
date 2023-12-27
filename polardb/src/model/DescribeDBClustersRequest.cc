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

#include <alibabacloud/polardb/model/DescribeDBClustersRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClustersRequest;

DescribeDBClustersRequest::DescribeDBClustersRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClustersRequest::~DescribeDBClustersRequest() {}

long DescribeDBClustersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClustersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClustersRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeDBClustersRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string DescribeDBClustersRequest::getDBClusterStatus() const {
  return dBClusterStatus_;
}

void DescribeDBClustersRequest::setDBClusterStatus(const std::string &dBClusterStatus) {
  dBClusterStatus_ = dBClusterStatus;
  setParameter(std::string("DBClusterStatus"), dBClusterStatus);
}

std::string DescribeDBClustersRequest::getConnectionString() const {
  return connectionString_;
}

void DescribeDBClustersRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

int DescribeDBClustersRequest::getRecentExpirationInterval() const {
  return recentExpirationInterval_;
}

void DescribeDBClustersRequest::setRecentExpirationInterval(int recentExpirationInterval) {
  recentExpirationInterval_ = recentExpirationInterval;
  setParameter(std::string("RecentExpirationInterval"), std::to_string(recentExpirationInterval));
}

std::string DescribeDBClustersRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClustersRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

int DescribeDBClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBClustersRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void DescribeDBClustersRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string DescribeDBClustersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClustersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClustersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBClustersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeDBClustersRequest::getRecentCreationInterval() const {
  return recentCreationInterval_;
}

void DescribeDBClustersRequest::setRecentCreationInterval(int recentCreationInterval) {
  recentCreationInterval_ = recentCreationInterval;
  setParameter(std::string("RecentCreationInterval"), std::to_string(recentCreationInterval));
}

bool DescribeDBClustersRequest::getExpired() const {
  return expired_;
}

void DescribeDBClustersRequest::setExpired(bool expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired ? "true" : "false");
}

std::string DescribeDBClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBClustersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDBClustersRequest::Tag> DescribeDBClustersRequest::getTag() const {
  return tag_;
}

void DescribeDBClustersRequest::setTag(const std::vector<DescribeDBClustersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDBClustersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClustersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClustersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClustersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClustersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClustersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBClustersRequest::getDBType() const {
  return dBType_;
}

void DescribeDBClustersRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeDBClustersRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeDBClustersRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string DescribeDBClustersRequest::getPayType() const {
  return payType_;
}

void DescribeDBClustersRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeDBClustersRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeDBClustersRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

