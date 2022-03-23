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

#include <alibabacloud/r-kvstore/model/DescribeRoleZoneInfoRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeRoleZoneInfoRequest;

DescribeRoleZoneInfoRequest::DescribeRoleZoneInfoRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeRoleZoneInfo") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRoleZoneInfoRequest::~DescribeRoleZoneInfoRequest() {}

long DescribeRoleZoneInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRoleZoneInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRoleZoneInfoRequest::getRole() const {
  return role_;
}

void DescribeRoleZoneInfoRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

int DescribeRoleZoneInfoRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRoleZoneInfoRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRoleZoneInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeRoleZoneInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeRoleZoneInfoRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeRoleZoneInfoRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeRoleZoneInfoRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRoleZoneInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeRoleZoneInfoRequest::getQueryType() const {
  return queryType_;
}

void DescribeRoleZoneInfoRequest::setQueryType(int queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), std::to_string(queryType));
}

std::string DescribeRoleZoneInfoRequest::getProduct() const {
  return product_;
}

void DescribeRoleZoneInfoRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeRoleZoneInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRoleZoneInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRoleZoneInfoRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRoleZoneInfoRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRoleZoneInfoRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRoleZoneInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRoleZoneInfoRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeRoleZoneInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeRoleZoneInfoRequest::getCategory() const {
  return category_;
}

void DescribeRoleZoneInfoRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

