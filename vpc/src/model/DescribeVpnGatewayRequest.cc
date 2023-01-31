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

#include <alibabacloud/vpc/model/DescribeVpnGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnGatewayRequest;

DescribeVpnGatewayRequest::DescribeVpnGatewayRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnGateway") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVpnGatewayRequest::~DescribeVpnGatewayRequest() {}

long DescribeVpnGatewayRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnGatewayRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeVpnGatewayRequest::getIncludeReservationData() const {
  return includeReservationData_;
}

void DescribeVpnGatewayRequest::setIncludeReservationData(bool includeReservationData) {
  includeReservationData_ = includeReservationData;
  setParameter(std::string("IncludeReservationData"), includeReservationData ? "true" : "false");
}

std::string DescribeVpnGatewayRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnGatewayRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeVpnGatewayRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnGatewayRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnGatewayRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnGatewayRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeVpnGatewayRequest::getVpnGatewayId() const {
  return vpnGatewayId_;
}

void DescribeVpnGatewayRequest::setVpnGatewayId(const std::string &vpnGatewayId) {
  vpnGatewayId_ = vpnGatewayId;
  setParameter(std::string("VpnGatewayId"), vpnGatewayId);
}

long DescribeVpnGatewayRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnGatewayRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

