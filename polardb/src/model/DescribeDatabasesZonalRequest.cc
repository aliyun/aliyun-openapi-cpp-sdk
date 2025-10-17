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

#include <alibabacloud/polardb/model/DescribeDatabasesZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDatabasesZonalRequest;

DescribeDatabasesZonalRequest::DescribeDatabasesZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeDatabasesZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabasesZonalRequest::~DescribeDatabasesZonalRequest() {}

long DescribeDatabasesZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDatabasesZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeDatabasesZonalRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatabasesZonalRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatabasesZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDatabasesZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDatabasesZonalRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDatabasesZonalRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeDatabasesZonalRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatabasesZonalRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDatabasesZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDatabasesZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDatabasesZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDatabasesZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDatabasesZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDatabasesZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDatabasesZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDatabasesZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDatabasesZonalRequest::getDBName() const {
  return dBName_;
}

void DescribeDatabasesZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

int DescribeDatabasesZonalRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDatabasesZonalRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

