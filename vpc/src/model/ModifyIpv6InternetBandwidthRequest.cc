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

#include <alibabacloud/vpc/model/ModifyIpv6InternetBandwidthRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6InternetBandwidthRequest;

ModifyIpv6InternetBandwidthRequest::ModifyIpv6InternetBandwidthRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6InternetBandwidth") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIpv6InternetBandwidthRequest::~ModifyIpv6InternetBandwidthRequest() {}

long ModifyIpv6InternetBandwidthRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyIpv6InternetBandwidthRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyIpv6InternetBandwidthRequest::getClientToken() const {
  return clientToken_;
}

void ModifyIpv6InternetBandwidthRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyIpv6InternetBandwidthRequest::getIpv6InternetBandwidthId() const {
  return ipv6InternetBandwidthId_;
}

void ModifyIpv6InternetBandwidthRequest::setIpv6InternetBandwidthId(const std::string &ipv6InternetBandwidthId) {
  ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
  setParameter(std::string("Ipv6InternetBandwidthId"), ipv6InternetBandwidthId);
}

std::string ModifyIpv6InternetBandwidthRequest::getRegionId() const {
  return regionId_;
}

void ModifyIpv6InternetBandwidthRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyIpv6InternetBandwidthRequest::getDryRun() const {
  return dryRun_;
}

void ModifyIpv6InternetBandwidthRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

long ModifyIpv6InternetBandwidthRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyIpv6InternetBandwidthRequest::setBandwidth(long bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifyIpv6InternetBandwidthRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyIpv6InternetBandwidthRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyIpv6InternetBandwidthRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyIpv6InternetBandwidthRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyIpv6InternetBandwidthRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyIpv6InternetBandwidthRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyIpv6InternetBandwidthRequest::getIpv6AddressId() const {
  return ipv6AddressId_;
}

void ModifyIpv6InternetBandwidthRequest::setIpv6AddressId(const std::string &ipv6AddressId) {
  ipv6AddressId_ = ipv6AddressId;
  setParameter(std::string("Ipv6AddressId"), ipv6AddressId);
}

