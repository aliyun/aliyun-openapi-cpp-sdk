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

#include <alibabacloud/vpc/model/DescribeVpnPbrRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnPbrRouteEntriesRequest;

DescribeVpnPbrRouteEntriesRequest::DescribeVpnPbrRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnPbrRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnPbrRouteEntriesRequest::~DescribeVpnPbrRouteEntriesRequest() {}

long DescribeVpnPbrRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnPbrRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeVpnPbrRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVpnPbrRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVpnPbrRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnPbrRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVpnPbrRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVpnPbrRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVpnPbrRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnPbrRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnPbrRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnPbrRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeVpnPbrRouteEntriesRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeVpnPbrRouteEntriesRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeVpnPbrRouteEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnPbrRouteEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

