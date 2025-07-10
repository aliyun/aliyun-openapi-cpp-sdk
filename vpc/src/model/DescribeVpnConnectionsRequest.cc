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

#include <alibabacloud/vpc/model/DescribeVpnConnectionsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnConnectionsRequest;

DescribeVpnConnectionsRequest::DescribeVpnConnectionsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnConnections") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnConnectionsRequest::~DescribeVpnConnectionsRequest() {}

long DescribeVpnConnectionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnConnectionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVpnConnectionsRequest::getCustomerGatewayId() const {
  return customerGatewayId_;
}

void DescribeVpnConnectionsRequest::setCustomerGatewayId(const std::string &customerGatewayId) {
  customerGatewayId_ = customerGatewayId;
  setParameter(std::string("CustomerGatewayId"), customerGatewayId);
}

int DescribeVpnConnectionsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpnConnectionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpnConnectionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeVpnConnectionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeVpnConnectionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnConnectionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpnConnectionsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpnConnectionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeVpnConnectionsRequest::Tag> DescribeVpnConnectionsRequest::getTag() const {
  return tag_;
}

void DescribeVpnConnectionsRequest::setTag(const std::vector<DescribeVpnConnectionsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeVpnConnectionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnConnectionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnConnectionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnConnectionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeVpnConnectionsRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeVpnConnectionsRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeVpnConnectionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnConnectionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpnConnectionsRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DescribeVpnConnectionsRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

