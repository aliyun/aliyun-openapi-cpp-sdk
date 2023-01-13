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

#include <alibabacloud/cbn/model/DeleteTransitRouterRouteEntryRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterRouteEntryRequest;

DeleteTransitRouterRouteEntryRequest::DeleteTransitRouterRouteEntryRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterRouteEntryRequest::~DeleteTransitRouterRouteEntryRequest() {}

std::string DeleteTransitRouterRouteEntryRequest::getTransitRouterRouteEntryId() const {
  return transitRouterRouteEntryId_;
}

void DeleteTransitRouterRouteEntryRequest::setTransitRouterRouteEntryId(const std::string &transitRouterRouteEntryId) {
  transitRouterRouteEntryId_ = transitRouterRouteEntryId;
  setParameter(std::string("TransitRouterRouteEntryId"), transitRouterRouteEntryId);
}

long DeleteTransitRouterRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTransitRouterRouteEntryRequest::getTransitRouterRouteEntryNextHopType() const {
  return transitRouterRouteEntryNextHopType_;
}

void DeleteTransitRouterRouteEntryRequest::setTransitRouterRouteEntryNextHopType(const std::string &transitRouterRouteEntryNextHopType) {
  transitRouterRouteEntryNextHopType_ = transitRouterRouteEntryNextHopType;
  setParameter(std::string("TransitRouterRouteEntryNextHopType"), transitRouterRouteEntryNextHopType);
}

std::string DeleteTransitRouterRouteEntryRequest::getTransitRouterRouteEntryDestinationCidrBlock() const {
  return transitRouterRouteEntryDestinationCidrBlock_;
}

void DeleteTransitRouterRouteEntryRequest::setTransitRouterRouteEntryDestinationCidrBlock(const std::string &transitRouterRouteEntryDestinationCidrBlock) {
  transitRouterRouteEntryDestinationCidrBlock_ = transitRouterRouteEntryDestinationCidrBlock;
  setParameter(std::string("TransitRouterRouteEntryDestinationCidrBlock"), transitRouterRouteEntryDestinationCidrBlock);
}

std::string DeleteTransitRouterRouteEntryRequest::getTransitRouterRouteTableId() const {
  return transitRouterRouteTableId_;
}

void DeleteTransitRouterRouteEntryRequest::setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId) {
  transitRouterRouteTableId_ = transitRouterRouteTableId;
  setParameter(std::string("TransitRouterRouteTableId"), transitRouterRouteTableId);
}

std::string DeleteTransitRouterRouteEntryRequest::getTransitRouterRouteEntryNextHopId() const {
  return transitRouterRouteEntryNextHopId_;
}

void DeleteTransitRouterRouteEntryRequest::setTransitRouterRouteEntryNextHopId(const std::string &transitRouterRouteEntryNextHopId) {
  transitRouterRouteEntryNextHopId_ = transitRouterRouteEntryNextHopId;
  setParameter(std::string("TransitRouterRouteEntryNextHopId"), transitRouterRouteEntryNextHopId);
}

bool DeleteTransitRouterRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterRouteEntryRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterRouteEntryRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

