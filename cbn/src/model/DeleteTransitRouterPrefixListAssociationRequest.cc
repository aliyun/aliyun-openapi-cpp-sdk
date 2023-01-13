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

#include <alibabacloud/cbn/model/DeleteTransitRouterPrefixListAssociationRequest.h>

using AlibabaCloud::Cbn::Model::DeleteTransitRouterPrefixListAssociationRequest;

DeleteTransitRouterPrefixListAssociationRequest::DeleteTransitRouterPrefixListAssociationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DeleteTransitRouterPrefixListAssociation") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTransitRouterPrefixListAssociationRequest::~DeleteTransitRouterPrefixListAssociationRequest() {}

long DeleteTransitRouterPrefixListAssociationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getClientToken() const {
  return clientToken_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getRegionId() const {
  return regionId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getPrefixListId() const {
  return prefixListId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getNextHopType() const {
  return nextHopType_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

bool DeleteTransitRouterPrefixListAssociationRequest::getDryRun() const {
  return dryRun_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteTransitRouterPrefixListAssociationRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getTransitRouterTableId() const {
  return transitRouterTableId_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setTransitRouterTableId(const std::string &transitRouterTableId) {
  transitRouterTableId_ = transitRouterTableId;
  setParameter(std::string("TransitRouterTableId"), transitRouterTableId);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getVersion() const {
  return version_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string DeleteTransitRouterPrefixListAssociationRequest::getNextHop() const {
  return nextHop_;
}

void DeleteTransitRouterPrefixListAssociationRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

