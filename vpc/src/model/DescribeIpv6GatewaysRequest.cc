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

#include <alibabacloud/vpc/model/DescribeIpv6GatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6GatewaysRequest;

DescribeIpv6GatewaysRequest::DescribeIpv6GatewaysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6Gateways") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIpv6GatewaysRequest::~DescribeIpv6GatewaysRequest() {}

long DescribeIpv6GatewaysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIpv6GatewaysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeIpv6GatewaysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIpv6GatewaysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIpv6GatewaysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeIpv6GatewaysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeIpv6GatewaysRequest::getRegionId() const {
  return regionId_;
}

void DescribeIpv6GatewaysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeIpv6GatewaysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIpv6GatewaysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIpv6GatewaysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIpv6GatewaysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIpv6GatewaysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIpv6GatewaysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIpv6GatewaysRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIpv6GatewaysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<DescribeIpv6GatewaysRequest::Tags> DescribeIpv6GatewaysRequest::getTags() const {
  return tags_;
}

void DescribeIpv6GatewaysRequest::setTags(const std::vector<DescribeIpv6GatewaysRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
  }
}

std::string DescribeIpv6GatewaysRequest::getVpcId() const {
  return vpcId_;
}

void DescribeIpv6GatewaysRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeIpv6GatewaysRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void DescribeIpv6GatewaysRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}

std::string DescribeIpv6GatewaysRequest::getName() const {
  return name_;
}

void DescribeIpv6GatewaysRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

