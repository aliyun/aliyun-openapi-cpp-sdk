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

#include <alibabacloud/polardb/model/DescribeGlobalSecurityIPGroupRequest.h>

using AlibabaCloud::Polardb::Model::DescribeGlobalSecurityIPGroupRequest;

DescribeGlobalSecurityIPGroupRequest::DescribeGlobalSecurityIPGroupRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeGlobalSecurityIPGroup") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGlobalSecurityIPGroupRequest::~DescribeGlobalSecurityIPGroupRequest() {}

long DescribeGlobalSecurityIPGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGlobalSecurityIPGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGlobalSecurityIPGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGlobalSecurityIPGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGlobalSecurityIPGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGlobalSecurityIPGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGlobalSecurityIPGroupRequest::getGlobalSecurityGroupId() const {
  return globalSecurityGroupId_;
}

void DescribeGlobalSecurityIPGroupRequest::setGlobalSecurityGroupId(const std::string &globalSecurityGroupId) {
  globalSecurityGroupId_ = globalSecurityGroupId;
  setParameter(std::string("GlobalSecurityGroupId"), globalSecurityGroupId);
}

std::string DescribeGlobalSecurityIPGroupRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGlobalSecurityIPGroupRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeGlobalSecurityIPGroupRequest::getRegionId() const {
  return regionId_;
}

void DescribeGlobalSecurityIPGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeGlobalSecurityIPGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGlobalSecurityIPGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGlobalSecurityIPGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGlobalSecurityIPGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGlobalSecurityIPGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGlobalSecurityIPGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

