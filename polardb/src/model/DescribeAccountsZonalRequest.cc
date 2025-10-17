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

#include <alibabacloud/polardb/model/DescribeAccountsZonalRequest.h>

using AlibabaCloud::Polardb::Model::DescribeAccountsZonalRequest;

DescribeAccountsZonalRequest::DescribeAccountsZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeAccountsZonal") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccountsZonalRequest::~DescribeAccountsZonalRequest() {}

long DescribeAccountsZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAccountsZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAccountsZonalRequest::getNodeType() const {
  return nodeType_;
}

void DescribeAccountsZonalRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

int DescribeAccountsZonalRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAccountsZonalRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAccountsZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAccountsZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAccountsZonalRequest::getAccountName() const {
  return accountName_;
}

void DescribeAccountsZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string DescribeAccountsZonalRequest::getNextToken() const {
  return nextToken_;
}

void DescribeAccountsZonalRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeAccountsZonalRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAccountsZonalRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAccountsZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAccountsZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAccountsZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAccountsZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAccountsZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAccountsZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAccountsZonalRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAccountsZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int DescribeAccountsZonalRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeAccountsZonalRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

