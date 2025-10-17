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

#include <alibabacloud/polardb/model/DescribeDBClustersZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClustersZonalRequest;

DescribeDBClustersZonalRequest::DescribeDBClustersZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClustersZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClustersZonalRequest::~DescribeDBClustersZonalRequest() {}

long DescribeDBClustersZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClustersZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClustersZonalRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeDBClustersZonalRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string DescribeDBClustersZonalRequest::getDBClusterStatus() const {
  return dBClusterStatus_;
}

void DescribeDBClustersZonalRequest::setDBClusterStatus(const std::string &dBClusterStatus) {
  dBClusterStatus_ = dBClusterStatus;
  setParameter(std::string("DBClusterStatus"), dBClusterStatus);
}

std::string DescribeDBClustersZonalRequest::getConnectionString() const {
  return connectionString_;
}

void DescribeDBClustersZonalRequest::setConnectionString(const std::string &connectionString) {
  connectionString_ = connectionString;
  setParameter(std::string("ConnectionString"), connectionString);
}

int DescribeDBClustersZonalRequest::getRecentExpirationInterval() const {
  return recentExpirationInterval_;
}

void DescribeDBClustersZonalRequest::setRecentExpirationInterval(int recentExpirationInterval) {
  recentExpirationInterval_ = recentExpirationInterval;
  setParameter(std::string("RecentExpirationInterval"), std::to_string(recentExpirationInterval));
}

std::string DescribeDBClustersZonalRequest::getDescribeType() const {
  return describeType_;
}

void DescribeDBClustersZonalRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

int DescribeDBClustersZonalRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBClustersZonalRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBClustersZonalRequest::getDBNodeIds() const {
  return dBNodeIds_;
}

void DescribeDBClustersZonalRequest::setDBNodeIds(const std::string &dBNodeIds) {
  dBNodeIds_ = dBNodeIds;
  setParameter(std::string("DBNodeIds"), dBNodeIds);
}

std::string DescribeDBClustersZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClustersZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClustersZonalRequest::getCloudProvider() const {
  return cloudProvider_;
}

void DescribeDBClustersZonalRequest::setCloudProvider(const std::string &cloudProvider) {
  cloudProvider_ = cloudProvider;
  setParameter(std::string("CloudProvider"), cloudProvider);
}

std::string DescribeDBClustersZonalRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBClustersZonalRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeDBClustersZonalRequest::getRecentCreationInterval() const {
  return recentCreationInterval_;
}

void DescribeDBClustersZonalRequest::setRecentCreationInterval(int recentCreationInterval) {
  recentCreationInterval_ = recentCreationInterval;
  setParameter(std::string("RecentCreationInterval"), std::to_string(recentCreationInterval));
}

std::string DescribeDBClustersZonalRequest::getExpired() const {
  return expired_;
}

void DescribeDBClustersZonalRequest::setExpired(const std::string &expired) {
  expired_ = expired;
  setParameter(std::string("Expired"), expired);
}

std::string DescribeDBClustersZonalRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClustersZonalRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDBClustersZonalRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDBClustersZonalRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeDBClustersZonalRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBClustersZonalRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeDBClustersZonalRequest::Tag> DescribeDBClustersZonalRequest::getTag() const {
  return tag_;
}

void DescribeDBClustersZonalRequest::setTag(const std::vector<DescribeDBClustersZonalRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeDBClustersZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClustersZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClustersZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClustersZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClustersZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClustersZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBClustersZonalRequest::getDBType() const {
  return dBType_;
}

void DescribeDBClustersZonalRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeDBClustersZonalRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeDBClustersZonalRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

int DescribeDBClustersZonalRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDBClustersZonalRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeDBClustersZonalRequest::getPayType() const {
  return payType_;
}

void DescribeDBClustersZonalRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

std::string DescribeDBClustersZonalRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeDBClustersZonalRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

