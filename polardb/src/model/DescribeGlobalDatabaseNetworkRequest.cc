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

#include <alibabacloud/polardb/model/DescribeGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::DescribeGlobalDatabaseNetworkRequest;

DescribeGlobalDatabaseNetworkRequest::DescribeGlobalDatabaseNetworkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeGlobalDatabaseNetwork") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalDatabaseNetworkRequest::~DescribeGlobalDatabaseNetworkRequest() {}

long DescribeGlobalDatabaseNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGlobalDatabaseNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGlobalDatabaseNetworkRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGlobalDatabaseNetworkRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGlobalDatabaseNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGlobalDatabaseNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeGlobalDatabaseNetworkRequest::getGDNId() const {
  return gDNId_;
}

void DescribeGlobalDatabaseNetworkRequest::setGDNId(const std::string &gDNId) {
  gDNId_ = gDNId;
  setParameter(std::string("GDNId"), gDNId);
}

std::string DescribeGlobalDatabaseNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGlobalDatabaseNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGlobalDatabaseNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGlobalDatabaseNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

