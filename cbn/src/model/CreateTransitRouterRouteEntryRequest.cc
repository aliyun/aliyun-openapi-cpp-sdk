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

#include <alibabacloud/cbn/model/CreateTransitRouterRouteEntryRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterRouteEntryRequest;

CreateTransitRouterRouteEntryRequest::CreateTransitRouterRouteEntryRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterRouteEntryRequest::~CreateTransitRouterRouteEntryRequest() {}

long CreateTransitRouterRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryNextHopType() const {
  return transitRouterRouteEntryNextHopType_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryNextHopType(const std::string &transitRouterRouteEntryNextHopType) {
  transitRouterRouteEntryNextHopType_ = transitRouterRouteEntryNextHopType;
  setParameter(std::string("TransitRouterRouteEntryNextHopType"), transitRouterRouteEntryNextHopType);
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryDestinationCidrBlock() const {
  return transitRouterRouteEntryDestinationCidrBlock_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryDestinationCidrBlock(const std::string &transitRouterRouteEntryDestinationCidrBlock) {
  transitRouterRouteEntryDestinationCidrBlock_ = transitRouterRouteEntryDestinationCidrBlock;
  setParameter(std::string("TransitRouterRouteEntryDestinationCidrBlock"), transitRouterRouteEntryDestinationCidrBlock);
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryNextHopId() const {
  return transitRouterRouteEntryNextHopId_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryNextHopId(const std::string &transitRouterRouteEntryNextHopId) {
  transitRouterRouteEntryNextHopId_ = transitRouterRouteEntryNextHopId;
  setParameter(std::string("TransitRouterRouteEntryNextHopId"), transitRouterRouteEntryNextHopId);
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryDescription() const {
  return transitRouterRouteEntryDescription_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryDescription(const std::string &transitRouterRouteEntryDescription) {
  transitRouterRouteEntryDescription_ = transitRouterRouteEntryDescription;
  setParameter(std::string("TransitRouterRouteEntryDescription"), transitRouterRouteEntryDescription);
}

bool CreateTransitRouterRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryName() const {
  return transitRouterRouteEntryName_;
}

void CreateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryName(const std::string &transitRouterRouteEntryName) {
  transitRouterRouteEntryName_ = transitRouterRouteEntryName;
  setParameter(std::string("TransitRouterRouteEntryName"), transitRouterRouteEntryName);
}

std::string CreateTransitRouterRouteEntryRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterRouteEntryRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

