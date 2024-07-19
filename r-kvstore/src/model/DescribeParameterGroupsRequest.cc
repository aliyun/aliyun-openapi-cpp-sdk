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

#include <alibabacloud/r-kvstore/model/DescribeParameterGroupsRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeParameterGroupsRequest;

DescribeParameterGroupsRequest::DescribeParameterGroupsRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeParameterGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeParameterGroupsRequest::~DescribeParameterGroupsRequest() {}

long DescribeParameterGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeParameterGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeParameterGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeParameterGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeParameterGroupsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeParameterGroupsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeParameterGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeParameterGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeParameterGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeParameterGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeParameterGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeParameterGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeParameterGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeParameterGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeParameterGroupsRequest::getDbType() const {
  return dbType_;
}

void DescribeParameterGroupsRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

