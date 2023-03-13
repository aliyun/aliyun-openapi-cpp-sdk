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

#include <alibabacloud/cbn/model/ListTransitRouterPrefixListAssociationRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterPrefixListAssociationRequest;

ListTransitRouterPrefixListAssociationRequest::ListTransitRouterPrefixListAssociationRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterPrefixListAssociation") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterPrefixListAssociationRequest::~ListTransitRouterPrefixListAssociationRequest() {}

long ListTransitRouterPrefixListAssociationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterPrefixListAssociationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListTransitRouterPrefixListAssociationRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTransitRouterPrefixListAssociationRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListTransitRouterPrefixListAssociationRequest::getNextHopInstanceId() const {
  return nextHopInstanceId_;
}

void ListTransitRouterPrefixListAssociationRequest::setNextHopInstanceId(const std::string &nextHopInstanceId) {
  nextHopInstanceId_ = nextHopInstanceId;
  setParameter(std::string("NextHopInstanceId"), nextHopInstanceId);
}

std::string ListTransitRouterPrefixListAssociationRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterPrefixListAssociationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTransitRouterPrefixListAssociationRequest::getPrefixListId() const {
  return prefixListId_;
}

void ListTransitRouterPrefixListAssociationRequest::setPrefixListId(const std::string &prefixListId) {
  prefixListId_ = prefixListId;
  setParameter(std::string("PrefixListId"), prefixListId);
}

int ListTransitRouterPrefixListAssociationRequest::getPageSize() const {
  return pageSize_;
}

void ListTransitRouterPrefixListAssociationRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListTransitRouterPrefixListAssociationRequest::getOwnerUid() const {
  return ownerUid_;
}

void ListTransitRouterPrefixListAssociationRequest::setOwnerUid(long ownerUid) {
  ownerUid_ = ownerUid;
  setParameter(std::string("OwnerUid"), std::to_string(ownerUid));
}

std::string ListTransitRouterPrefixListAssociationRequest::getNextHopType() const {
  return nextHopType_;
}

void ListTransitRouterPrefixListAssociationRequest::setNextHopType(const std::string &nextHopType) {
  nextHopType_ = nextHopType;
  setParameter(std::string("NextHopType"), nextHopType);
}

std::string ListTransitRouterPrefixListAssociationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterPrefixListAssociationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterPrefixListAssociationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterPrefixListAssociationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterPrefixListAssociationRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterPrefixListAssociationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterPrefixListAssociationRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterPrefixListAssociationRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterPrefixListAssociationRequest::getTransitRouterTableId() const {
  return transitRouterTableId_;
}

void ListTransitRouterPrefixListAssociationRequest::setTransitRouterTableId(const std::string &transitRouterTableId) {
  transitRouterTableId_ = transitRouterTableId;
  setParameter(std::string("TransitRouterTableId"), transitRouterTableId);
}

std::string ListTransitRouterPrefixListAssociationRequest::getVersion() const {
  return version_;
}

void ListTransitRouterPrefixListAssociationRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string ListTransitRouterPrefixListAssociationRequest::getNextHop() const {
  return nextHop_;
}

void ListTransitRouterPrefixListAssociationRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string ListTransitRouterPrefixListAssociationRequest::getStatus() const {
  return status_;
}

void ListTransitRouterPrefixListAssociationRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

