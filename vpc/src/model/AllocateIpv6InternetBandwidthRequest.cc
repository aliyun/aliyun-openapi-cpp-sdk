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

#include <alibabacloud/vpc/model/AllocateIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::AllocateIpv6InternetBandwidthRequest;

AllocateIpv6InternetBandwidthRequest::AllocateIpv6InternetBandwidthRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AllocateIpv6InternetBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

AllocateIpv6InternetBandwidthRequest::~AllocateIpv6InternetBandwidthRequest() {}

long AllocateIpv6InternetBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateIpv6InternetBandwidthRequest::getClientToken() const {
  return clientToken_;
}

void AllocateIpv6InternetBandwidthRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AllocateIpv6InternetBandwidthRequest::getRegionId() const {
  return regionId_;
}

void AllocateIpv6InternetBandwidthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool AllocateIpv6InternetBandwidthRequest::getDryRun() const {
  return dryRun_;
}

void AllocateIpv6InternetBandwidthRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int AllocateIpv6InternetBandwidthRequest::getBandwidth() const {
  return bandwidth_;
}

void AllocateIpv6InternetBandwidthRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string AllocateIpv6InternetBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AllocateIpv6InternetBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AllocateIpv6InternetBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AllocateIpv6InternetBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateIpv6InternetBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateIpv6InternetBandwidthRequest::getIpv6AddressId() const {
  return ipv6AddressId_;
}

void AllocateIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string &ipv6AddressId) {
  ipv6AddressId_ = ipv6AddressId;
  setParameter(std::string("Ipv6AddressId"), ipv6AddressId);
}

std::string AllocateIpv6InternetBandwidthRequest::getInternetChargeType() const {
  return internetChargeType_;
}

void AllocateIpv6InternetBandwidthRequest::setInternetChargeType(const std::string &internetChargeType) {
  internetChargeType_ = internetChargeType;
  setParameter(std::string("InternetChargeType"), internetChargeType);
}

std::string AllocateIpv6InternetBandwidthRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void AllocateIpv6InternetBandwidthRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}

