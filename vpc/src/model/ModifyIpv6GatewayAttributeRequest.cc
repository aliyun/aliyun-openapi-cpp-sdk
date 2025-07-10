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

#include <alibabacloud/vpc/model/ModifyIpv6GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6GatewayAttributeRequest;

ModifyIpv6GatewayAttributeRequest::ModifyIpv6GatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6GatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyIpv6GatewayAttributeRequest::~ModifyIpv6GatewayAttributeRequest() {}

long ModifyIpv6GatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyIpv6GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyIpv6GatewayAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyIpv6GatewayAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyIpv6GatewayAttributeRequest::getDescription() const {
  return description_;
}

void ModifyIpv6GatewayAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyIpv6GatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyIpv6GatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyIpv6GatewayAttributeRequest::getDryRun() const {
  return dryRun_;
}

void ModifyIpv6GatewayAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyIpv6GatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyIpv6GatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyIpv6GatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyIpv6GatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyIpv6GatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyIpv6GatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyIpv6GatewayAttributeRequest::getIpv6GatewayId() const {
  return ipv6GatewayId_;
}

void ModifyIpv6GatewayAttributeRequest::setIpv6GatewayId(const std::string &ipv6GatewayId) {
  ipv6GatewayId_ = ipv6GatewayId;
  setParameter(std::string("Ipv6GatewayId"), ipv6GatewayId);
}

std::string ModifyIpv6GatewayAttributeRequest::getName() const {
  return name_;
}

void ModifyIpv6GatewayAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

