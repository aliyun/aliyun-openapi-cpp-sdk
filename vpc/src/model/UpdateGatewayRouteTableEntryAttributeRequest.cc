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

#include <alibabacloud/vpc/model/UpdateGatewayRouteTableEntryAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateGatewayRouteTableEntryAttributeRequest;

UpdateGatewayRouteTableEntryAttributeRequest::UpdateGatewayRouteTableEntryAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateGatewayRouteTableEntryAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteTableEntryAttributeRequest::~UpdateGatewayRouteTableEntryAttributeRequest() {}

long UpdateGatewayRouteTableEntryAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getDescription() const {
  return description_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getIPv4GatewayRouteTableId() const {
  return iPv4GatewayRouteTableId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setIPv4GatewayRouteTableId(const std::string &iPv4GatewayRouteTableId) {
  iPv4GatewayRouteTableId_ = iPv4GatewayRouteTableId;
  setParameter(std::string("IPv4GatewayRouteTableId"), iPv4GatewayRouteTableId);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getNextHopId() const {
  return nextHopId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setParameter(std::string("NextHopId"), nextHopId);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getNextHopType() const {
  return nextHopType_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

bool UpdateGatewayRouteTableEntryAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getGatewayRouteTableId() const {
  return gatewayRouteTableId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setGatewayRouteTableId(const std::string &gatewayRouteTableId) {
  gatewayRouteTableId_ = gatewayRouteTableId;
  setParameter(std::string("GatewayRouteTableId"), gatewayRouteTableId);
}

long UpdateGatewayRouteTableEntryAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateGatewayRouteTableEntryAttributeRequest::getName() const {
  return name_;
}

void UpdateGatewayRouteTableEntryAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

