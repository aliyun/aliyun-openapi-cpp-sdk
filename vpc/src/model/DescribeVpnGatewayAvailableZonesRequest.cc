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

#include <alibabacloud/vpc/model/DescribeVpnGatewayAvailableZonesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVpnGatewayAvailableZonesRequest;

DescribeVpnGatewayAvailableZonesRequest::DescribeVpnGatewayAvailableZonesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeVpnGatewayAvailableZones") {
  setMethod(HttpRequest::Method::Get);
}

DescribeVpnGatewayAvailableZonesRequest::~DescribeVpnGatewayAvailableZonesRequest() {}

long DescribeVpnGatewayAvailableZonesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVpnGatewayAvailableZonesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeVpnGatewayAvailableZonesRequest::getSpec() const {
  return spec_;
}

void DescribeVpnGatewayAvailableZonesRequest::setSpec(const std::string &spec) {
  spec_ = spec;
  setParameter(std::string("Spec"), spec);
}

std::string DescribeVpnGatewayAvailableZonesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVpnGatewayAvailableZonesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeVpnGatewayAvailableZonesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVpnGatewayAvailableZonesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVpnGatewayAvailableZonesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVpnGatewayAvailableZonesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVpnGatewayAvailableZonesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVpnGatewayAvailableZonesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVpnGatewayAvailableZonesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeVpnGatewayAvailableZonesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

