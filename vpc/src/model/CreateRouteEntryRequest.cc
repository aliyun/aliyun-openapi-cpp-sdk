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

#include <alibabacloud/vpc/model/CreateRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouteEntryRequest;

CreateRouteEntryRequest::CreateRouteEntryRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateRouteEntryRequest::~CreateRouteEntryRequest() {}

long CreateRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRouteEntryRequest::getRouteEntryName() const {
  return routeEntryName_;
}

void CreateRouteEntryRequest::setRouteEntryName(const std::string &routeEntryName) {
  routeEntryName_ = routeEntryName;
  setParameter(std::string("RouteEntryName"), routeEntryName);
}

std::string CreateRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRouteEntryRequest::getDescription() const {
  return description_;
}

void CreateRouteEntryRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRouteEntryRequest::getRegionId() const {
  return regionId_;
}

void CreateRouteEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRouteEntryRequest::getNextHopId() const {
  return nextHopId_;
}

void CreateRouteEntryRequest::setNextHopId(const std::string &nextHopId) {
  nextHopId_ = nextHopId;
  setParameter(std::string("NextHopId"), nextHopId);
}

std::string CreateRouteEntryRequest::getNextHopType() const {
  return nextHopType_;
}

void CreateRouteEntryRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

std::string CreateRouteEntryRequest::getRouteTableId() const {
  return routeTableId_;
}

void CreateRouteEntryRequest::setRouteTableId(const std::string &routeTableId) {
  routeTableId_ = routeTableId;
  setParameter(std::string("RouteTableId"), routeTableId);
}

bool CreateRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateRouteEntryRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void CreateRouteEntryRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string CreateRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateRouteEntryRequest::getPrivateIpAddress() const {
  return privateIpAddress_;
}

void CreateRouteEntryRequest::setPrivateIpAddress(const std::string &privateIpAddress) {
  privateIpAddress_ = privateIpAddress;
  setParameter(std::string("PrivateIpAddress"), privateIpAddress);
}

std::vector<CreateRouteEntryRequest::NextHopList> CreateRouteEntryRequest::getNextHopList() const {
  return nextHopList_;
}

void CreateRouteEntryRequest::setNextHopList(const std::vector<CreateRouteEntryRequest::NextHopList> &nextHopList) {
  nextHopList_ = nextHopList;
  for(int dep1 = 0; dep1 != nextHopList.size(); dep1++) {
  auto nextHopListObj = nextHopList.at(dep1);
  std::string nextHopListObjStr = std::string("NextHopList") + "." + std::to_string(dep1 + 1);
    setParameter(nextHopListObjStr + ".Weight", std::to_string(nextHopListObj.weight));
    setParameter(nextHopListObjStr + ".NextHopId", nextHopListObj.nextHopId);
    setParameter(nextHopListObjStr + ".NextHopType", nextHopListObj.nextHopType);
  }
}

