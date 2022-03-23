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

#include <alibabacloud/r-kvstore/model/DescribeGlobalDistributeCacheRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeGlobalDistributeCacheRequest;

DescribeGlobalDistributeCacheRequest::DescribeGlobalDistributeCacheRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeGlobalDistributeCache") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalDistributeCacheRequest::~DescribeGlobalDistributeCacheRequest() {}

long DescribeGlobalDistributeCacheRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGlobalDistributeCacheRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGlobalDistributeCacheRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGlobalDistributeCacheRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeGlobalDistributeCacheRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGlobalDistributeCacheRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGlobalDistributeCacheRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGlobalDistributeCacheRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeGlobalDistributeCacheRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGlobalDistributeCacheRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeGlobalDistributeCacheRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGlobalDistributeCacheRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGlobalDistributeCacheRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGlobalDistributeCacheRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGlobalDistributeCacheRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGlobalDistributeCacheRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeGlobalDistributeCacheRequest::getSubInstanceId() const {
  return subInstanceId_;
}

void DescribeGlobalDistributeCacheRequest::setSubInstanceId(const std::string &subInstanceId) {
  subInstanceId_ = subInstanceId;
  setParameter(std::string("SubInstanceId"), subInstanceId);
}

std::string DescribeGlobalDistributeCacheRequest::getGlobalInstanceId() const {
  return globalInstanceId_;
}

void DescribeGlobalDistributeCacheRequest::setGlobalInstanceId(const std::string &globalInstanceId) {
  globalInstanceId_ = globalInstanceId;
  setParameter(std::string("GlobalInstanceId"), globalInstanceId);
}

