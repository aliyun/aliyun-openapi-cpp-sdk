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

#include <alibabacloud/vpc/model/ModifyIpv6AddressAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6AddressAttributeRequest;

ModifyIpv6AddressAttributeRequest::ModifyIpv6AddressAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6AddressAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIpv6AddressAttributeRequest::~ModifyIpv6AddressAttributeRequest() {}

long ModifyIpv6AddressAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyIpv6AddressAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyIpv6AddressAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyIpv6AddressAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyIpv6AddressAttributeRequest::getDescription() const {
  return description_;
}

void ModifyIpv6AddressAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyIpv6AddressAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyIpv6AddressAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyIpv6AddressAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyIpv6AddressAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyIpv6AddressAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyIpv6AddressAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyIpv6AddressAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyIpv6AddressAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyIpv6AddressAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyIpv6AddressAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyIpv6AddressAttributeRequest::getIpv6AddressId() const {
  return ipv6AddressId_;
}

void ModifyIpv6AddressAttributeRequest::setIpv6AddressId(const std::string &ipv6AddressId) {
  ipv6AddressId_ = ipv6AddressId;
  setParameter(std::string("Ipv6AddressId"), ipv6AddressId);
}

std::string ModifyIpv6AddressAttributeRequest::getName() const {
  return name_;
}

void ModifyIpv6AddressAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

