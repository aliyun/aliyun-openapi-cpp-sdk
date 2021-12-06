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

#include <alibabacloud/ecs/model/DescribeVpcsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVpcsRequest;

DescribeVpcsRequest::DescribeVpcsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeVpcs") {
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

std::string DescribeVpcsRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpcsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpcsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpcsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

bool DescribeVpcsRequest::getIsDefault() const {
  return isDefault_;
}

void DescribeVpcsRequest::setIsDefault(bool isDefault) {
  isDefault_ = isDefault;
  setParameter(std::string("IsDefault"), isDefault ? "true" : "false");
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

