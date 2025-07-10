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

#include <alibabacloud/vpc/model/DescribeVpnGatewaysRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnGatewaysRequest;

DescribeVpnGatewaysRequest::DescribeVpnGatewaysRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnGateways") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnGatewaysRequest::~DescribeVpnGatewaysRequest() {}

long DescribeVpnGatewaysRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnGatewaysRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeVpnGatewaysRequest::getIncludeReservationData() const {
  return includeReservationData_;
}

void DescribeVpnGatewaysRequest::setIncludeReservationData(bool includeReservationData) {
  includeReservationData_ = includeReservationData;
  setParameter(std::string("IncludeReservationData"), includeReservationData ? "true" : "false");
}

int DescribeVpnGatewaysRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpnGatewaysRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpnGatewaysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeVpnGatewaysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeVpnGatewaysRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnGatewaysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpnGatewaysRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpnGatewaysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeVpnGatewaysRequest::Tag> DescribeVpnGatewaysRequest::getTag() const {
  return tag_;
}

void DescribeVpnGatewaysRequest::setTag(const std::vector<DescribeVpnGatewaysRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeVpnGatewaysRequest::getBusinessStatus() const {
  return businessStatus_;
}

void DescribeVpnGatewaysRequest::setBusinessStatus(const std::string &businessStatus) {
  businessStatus_ = businessStatus;
  setParameter(std::string("BusinessStatus"), businessStatus);
}

std::string DescribeVpnGatewaysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnGatewaysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnGatewaysRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnGatewaysRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeVpnGatewaysRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeVpnGatewaysRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeVpnGatewaysRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnGatewaysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpnGatewaysRequest::getVpcId() const {
  return vpcId_;
}

void DescribeVpnGatewaysRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string DescribeVpnGatewaysRequest::getStatus() const {
  return status_;
}

void DescribeVpnGatewaysRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

