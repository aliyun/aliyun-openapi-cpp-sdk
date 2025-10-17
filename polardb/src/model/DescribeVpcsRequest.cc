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

#include <alibabacloud/polardb/model/DescribeVpcsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeVpcsRequest;

DescribeVpcsRequest::DescribeVpcsRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DescribeVpcs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpcsRequest::~DescribeVpcsRequest() {}

long DescribeVpcsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpcsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVpcsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpcsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpcsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeVpcsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeVpcsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeVpcsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeVpcsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVpcsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeVpcsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpcsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVpcsRequest::getProduct() const {
  return product_;
}

void DescribeVpcsRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

std::string DescribeVpcsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpcsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpcsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpcsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVpcsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpcsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpcsRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVpcsRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeVpcsRequest::getZoneId() const {
  return zoneId_;
}

void DescribeVpcsRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

