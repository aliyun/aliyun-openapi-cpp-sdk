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

#include <alibabacloud/gpdb/model/DescribeRdsVpcsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeRdsVpcsRequest;

DescribeRdsVpcsRequest::DescribeRdsVpcsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeRdsVpcs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRdsVpcsRequest::~DescribeRdsVpcsRequest() {}

long DescribeRdsVpcsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRdsVpcsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRdsVpcsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRdsVpcsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRdsVpcsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRdsVpcsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRdsVpcsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeRdsVpcsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeRdsVpcsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRdsVpcsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRdsVpcsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRdsVpcsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRdsVpcsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRdsVpcsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRdsVpcsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRdsVpcsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRdsVpcsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeRdsVpcsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

