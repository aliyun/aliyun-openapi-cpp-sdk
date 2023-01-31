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

#include <alibabacloud/vpc/model/DescribeVcoRouteEntriesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVcoRouteEntriesRequest;

DescribeVcoRouteEntriesRequest::DescribeVcoRouteEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVcoRouteEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVcoRouteEntriesRequest::~DescribeVcoRouteEntriesRequest() {}

long DescribeVcoRouteEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVcoRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVcoRouteEntriesRequest::getClientToken() const {
  return clientToken_;
}

void DescribeVcoRouteEntriesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int DescribeVcoRouteEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVcoRouteEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVcoRouteEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVcoRouteEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeVcoRouteEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVcoRouteEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVcoRouteEntriesRequest::getRouteEntryType() const {
  return routeEntryType_;
}

void DescribeVcoRouteEntriesRequest::setRouteEntryType(const std::string &routeEntryType) {
  routeEntryType_ = routeEntryType;
  setParameter(std::string("RouteEntryType"), routeEntryType);
}

std::string DescribeVcoRouteEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVcoRouteEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVcoRouteEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVcoRouteEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeVcoRouteEntriesRequest::getVpnConnectionId() const {
  return vpnConnectionId_;
}

void DescribeVcoRouteEntriesRequest::setVpnConnectionId(const std::string &vpnConnectionId) {
  vpnConnectionId_ = vpnConnectionId;
  setParameter(std::string("VpnConnectionId"), vpnConnectionId);
}

