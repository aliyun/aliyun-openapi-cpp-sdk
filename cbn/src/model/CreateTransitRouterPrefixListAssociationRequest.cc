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

#include <alibabacloud/cbn/model/CreateTransitRouterPrefixListAssociationRequest.h>

using AlibabaCloud::Cbn::Model::CreateTransitRouterPrefixListAssociationRequest;

CreateTransitRouterPrefixListAssociationRequest::CreateTransitRouterPrefixListAssociationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "CreateTransitRouterPrefixListAssociation") {
  setMethod(HttpRequest::Method::Post);
}

CreateTransitRouterPrefixListAssociationRequest::~CreateTransitRouterPrefixListAssociationRequest() {}

long CreateTransitRouterPrefixListAssociationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTransitRouterPrefixListAssociationRequest::getClientToken() const {
  return clientToken_;
}

void CreateTransitRouterPrefixListAssociationRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getRegionId() const {
  return regionId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getPrefixListId() const {
  return prefixListId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

long CreateTransitRouterPrefixListAssociationRequest::getOwnerUid() const {
  return ownerUid_;
}

void CreateTransitRouterPrefixListAssociationRequest::setOwnerUid(long ownerUid) {
  ownerUid_ = ownerUid;
  setParameter(std::string("OwnerUid"), std::to_string(ownerUid));
}

std::string CreateTransitRouterPrefixListAssociationRequest::getNextHopType() const {
  return nextHopType_;
}

void CreateTransitRouterPrefixListAssociationRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

bool CreateTransitRouterPrefixListAssociationRequest::getDryRun() const {
  return dryRun_;
}

void CreateTransitRouterPrefixListAssociationRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTransitRouterPrefixListAssociationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTransitRouterPrefixListAssociationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTransitRouterPrefixListAssociationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTransitRouterPrefixListAssociationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTransitRouterPrefixListAssociationRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getTransitRouterTableId() const {
  return transitRouterTableId_;
}

void CreateTransitRouterPrefixListAssociationRequest::setTransitRouterTableId(const std::string &transitRouterTableId) {
  transitRouterTableId_ = transitRouterTableId;
  setParameter(std::string("TransitRouterTableId"), transitRouterTableId);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getVersion() const {
  return version_;
}

void CreateTransitRouterPrefixListAssociationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string CreateTransitRouterPrefixListAssociationRequest::getNextHop() const {
  return nextHop_;
}

void CreateTransitRouterPrefixListAssociationRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

