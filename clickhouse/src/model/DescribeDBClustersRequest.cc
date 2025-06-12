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

#include <alibabacloud/clickhouse/model/DescribeDBClustersRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeDBClustersRequest;

DescribeDBClustersRequest::DescribeDBClustersRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeDBClusters") {
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

std::string DescribeDBClustersRequest::getControlVersion() const {
  return controlVersion_;
}

void DescribeDBClustersRequest::setControlVersion(const std::string &controlVersion) {
  controlVersion_ = controlVersion;
  setParameter(std::string("ControlVersion"), controlVersion);
}

int DescribeDBClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
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

std::string DescribeDBClustersRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeDBClustersRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

