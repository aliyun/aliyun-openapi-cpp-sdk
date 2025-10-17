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

#include <alibabacloud/polardb/model/DescribeColdStorageInstanceRequest.h>

using AlibabaCloud::Polardb::Model::DescribeColdStorageInstanceRequest;

DescribeColdStorageInstanceRequest::DescribeColdStorageInstanceRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeColdStorageInstance") {
  setMethod(HttpRequest::Method::Post);
}

DescribeColdStorageInstanceRequest::~DescribeColdStorageInstanceRequest() {}

long DescribeColdStorageInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeColdStorageInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeColdStorageInstanceRequest::getDescribeType() const {
  return describeType_;
}

void DescribeColdStorageInstanceRequest::setDescribeType(const std::string &describeType) {
  describeType_ = describeType;
  setParameter(std::string("DescribeType"), describeType);
}

std::string DescribeColdStorageInstanceRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeColdStorageInstanceRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeColdStorageInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeColdStorageInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeColdStorageInstanceRequest::getNextToken() const {
  return nextToken_;
}

void DescribeColdStorageInstanceRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeColdStorageInstanceRequest::getRegionId() const {
  return regionId_;
}

void DescribeColdStorageInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeColdStorageInstanceRequest::getPageSize() const {
  return pageSize_;
}

void DescribeColdStorageInstanceRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeColdStorageInstanceRequest::getTableName() const {
  return tableName_;
}

void DescribeColdStorageInstanceRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeColdStorageInstanceRequest::getObjectType() const {
  return objectType_;
}

void DescribeColdStorageInstanceRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string DescribeColdStorageInstanceRequest::getEngineType() const {
  return engineType_;
}

void DescribeColdStorageInstanceRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

int DescribeColdStorageInstanceRequest::getExpireTime() const {
  return expireTime_;
}

void DescribeColdStorageInstanceRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string DescribeColdStorageInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeColdStorageInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeColdStorageInstanceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeColdStorageInstanceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeColdStorageInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeColdStorageInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeColdStorageInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeColdStorageInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeColdStorageInstanceRequest::getDBName() const {
  return dBName_;
}

void DescribeColdStorageInstanceRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

int DescribeColdStorageInstanceRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeColdStorageInstanceRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeColdStorageInstanceRequest::getDownloadNetType() const {
  return downloadNetType_;
}

void DescribeColdStorageInstanceRequest::setDownloadNetType(const std::string &downloadNetType) {
  downloadNetType_ = downloadNetType;
  setParameter(std::string("DownloadNetType"), downloadNetType);
}

