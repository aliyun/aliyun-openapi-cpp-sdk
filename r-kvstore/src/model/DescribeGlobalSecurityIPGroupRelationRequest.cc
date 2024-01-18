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

#include <alibabacloud/r-kvstore/model/DescribeGlobalSecurityIPGroupRelationRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeGlobalSecurityIPGroupRelationRequest;

DescribeGlobalSecurityIPGroupRelationRequest::DescribeGlobalSecurityIPGroupRelationRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeGlobalSecurityIPGroupRelation") {
  setMethod(HttpRequest::Method::Get);
}

DescribeGlobalSecurityIPGroupRelationRequest::~DescribeGlobalSecurityIPGroupRelationRequest() {}

long DescribeGlobalSecurityIPGroupRelationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getRegionId() const {
  return regionId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeGlobalSecurityIPGroupRelationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeGlobalSecurityIPGroupRelationRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGlobalSecurityIPGroupRelationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

