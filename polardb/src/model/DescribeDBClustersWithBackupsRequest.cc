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

#include <alibabacloud/polardb/model/DescribeDBClustersWithBackupsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClustersWithBackupsRequest;

DescribeDBClustersWithBackupsRequest::DescribeDBClustersWithBackupsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClustersWithBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClustersWithBackupsRequest::~DescribeDBClustersWithBackupsRequest() {}

long DescribeDBClustersWithBackupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBClustersWithBackupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBClustersWithBackupsRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeDBClustersWithBackupsRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

int DescribeDBClustersWithBackupsRequest::getIsDeleted() const {
  return isDeleted_;
}

void DescribeDBClustersWithBackupsRequest::setIsDeleted(int isDeleted) {
  isDeleted_ = isDeleted;
  setParameter(std::string("IsDeleted"), std::to_string(isDeleted));
}

int DescribeDBClustersWithBackupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBClustersWithBackupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBClustersWithBackupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClustersWithBackupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClustersWithBackupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBClustersWithBackupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBClustersWithBackupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClustersWithBackupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBClustersWithBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBClustersWithBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBClustersWithBackupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBClustersWithBackupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBClustersWithBackupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBClustersWithBackupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBClustersWithBackupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBClustersWithBackupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBClustersWithBackupsRequest::getDBType() const {
  return dBType_;
}

void DescribeDBClustersWithBackupsRequest::setDBType(const std::string &dBType) {
  dBType_ = dBType;
  setParameter(std::string("DBType"), dBType);
}

std::string DescribeDBClustersWithBackupsRequest::getDBVersion() const {
  return dBVersion_;
}

void DescribeDBClustersWithBackupsRequest::setDBVersion(const std::string &dBVersion) {
  dBVersion_ = dBVersion;
  setParameter(std::string("DBVersion"), dBVersion);
}

std::string DescribeDBClustersWithBackupsRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeDBClustersWithBackupsRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

