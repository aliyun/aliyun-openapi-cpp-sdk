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

#include <alibabacloud/vpc/model/DescribeCustomerGatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeCustomerGatewaysRequest;

DescribeCustomerGatewaysRequest::DescribeCustomerGatewaysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeCustomerGateways") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCustomerGatewaysRequest::~DescribeCustomerGatewaysRequest() {}

long DescribeCustomerGatewaysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCustomerGatewaysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCustomerGatewaysRequest::getCustomerGatewayId() const {
  return customerGatewayId_;
}

void DescribeCustomerGatewaysRequest::setCustomerGatewayId(const std::string &customerGatewayId) {
  customerGatewayId_ = customerGatewayId;
  setParameter(std::string("CustomerGatewayId"), customerGatewayId);
}

int DescribeCustomerGatewaysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCustomerGatewaysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCustomerGatewaysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCustomerGatewaysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeCustomerGatewaysRequest::getRegionId() const {
  return regionId_;
}

void DescribeCustomerGatewaysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeCustomerGatewaysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCustomerGatewaysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCustomerGatewaysRequest::Tag> DescribeCustomerGatewaysRequest::getTag() const {
  return tag_;
}

void DescribeCustomerGatewaysRequest::setTag(const std::vector<DescribeCustomerGatewaysRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeCustomerGatewaysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCustomerGatewaysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCustomerGatewaysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCustomerGatewaysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCustomerGatewaysRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCustomerGatewaysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

