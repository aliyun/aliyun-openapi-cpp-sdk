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

#include <alibabacloud/smartag/model/DescribeACLsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeACLsRequest;

DescribeACLsRequest::DescribeACLsRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeACLs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeACLsRequest::~DescribeACLsRequest() {}

long DescribeACLsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeACLsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeACLsRequest::getAclIds() const {
  return aclIds_;
}

void DescribeACLsRequest::setAclIds(const std::string &aclIds) {
  aclIds_ = aclIds;
  setParameter(std::string("AclIds"), aclIds);
}

int DescribeACLsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeACLsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeACLsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeACLsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeACLsRequest::getRegionId() const {
  return regionId_;
}

void DescribeACLsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeACLsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeACLsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeACLsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeACLsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeACLsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeACLsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeACLsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeACLsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeACLsRequest::getName() const {
  return name_;
}

void DescribeACLsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

