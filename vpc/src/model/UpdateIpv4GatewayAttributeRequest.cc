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

#include <alibabacloud/vpc/model/UpdateIpv4GatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateIpv4GatewayAttributeRequest;

UpdateIpv4GatewayAttributeRequest::UpdateIpv4GatewayAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateIpv4GatewayAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIpv4GatewayAttributeRequest::~UpdateIpv4GatewayAttributeRequest() {}

std::string UpdateIpv4GatewayAttributeRequest::getIpv4GatewayDescription() const {
  return ipv4GatewayDescription_;
}

void UpdateIpv4GatewayAttributeRequest::setIpv4GatewayDescription(const std::string &ipv4GatewayDescription) {
  ipv4GatewayDescription_ = ipv4GatewayDescription;
  setParameter(std::string("Ipv4GatewayDescription"), ipv4GatewayDescription);
}

long UpdateIpv4GatewayAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateIpv4GatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateIpv4GatewayAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateIpv4GatewayAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateIpv4GatewayAttributeRequest::getIpv4GatewayName() const {
  return ipv4GatewayName_;
}

void UpdateIpv4GatewayAttributeRequest::setIpv4GatewayName(const std::string &ipv4GatewayName) {
  ipv4GatewayName_ = ipv4GatewayName;
  setParameter(std::string("Ipv4GatewayName"), ipv4GatewayName);
}

std::string UpdateIpv4GatewayAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateIpv4GatewayAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateIpv4GatewayAttributeRequest::getIpv4GatewayId() const {
  return ipv4GatewayId_;
}

void UpdateIpv4GatewayAttributeRequest::setIpv4GatewayId(const std::string &ipv4GatewayId) {
  ipv4GatewayId_ = ipv4GatewayId;
  setParameter(std::string("Ipv4GatewayId"), ipv4GatewayId);
}

bool UpdateIpv4GatewayAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateIpv4GatewayAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateIpv4GatewayAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateIpv4GatewayAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateIpv4GatewayAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateIpv4GatewayAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateIpv4GatewayAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateIpv4GatewayAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

