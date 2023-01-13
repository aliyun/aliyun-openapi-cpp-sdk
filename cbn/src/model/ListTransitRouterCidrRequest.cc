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

#include <alibabacloud/cbn/model/ListTransitRouterCidrRequest.h>

using AlibabaCloud::Cbn::Model::ListTransitRouterCidrRequest;

ListTransitRouterCidrRequest::ListTransitRouterCidrRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "ListTransitRouterCidr") {
  setMethod(HttpRequest::Method::Post);
}

ListTransitRouterCidrRequest::~ListTransitRouterCidrRequest() {}

long ListTransitRouterCidrRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTransitRouterCidrRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListTransitRouterCidrRequest::getClientToken() const {
  return clientToken_;
}

void ListTransitRouterCidrRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ListTransitRouterCidrRequest::getTransitRouterCidrId() const {
  return transitRouterCidrId_;
}

void ListTransitRouterCidrRequest::setTransitRouterCidrId(const std::string &transitRouterCidrId) {
  transitRouterCidrId_ = transitRouterCidrId;
  setParameter(std::string("TransitRouterCidrId"), transitRouterCidrId);
}

std::string ListTransitRouterCidrRequest::getRegionId() const {
  return regionId_;
}

void ListTransitRouterCidrRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ListTransitRouterCidrRequest::getDryRun() const {
  return dryRun_;
}

void ListTransitRouterCidrRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ListTransitRouterCidrRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTransitRouterCidrRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTransitRouterCidrRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTransitRouterCidrRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTransitRouterCidrRequest::getOwnerId() const {
  return ownerId_;
}

void ListTransitRouterCidrRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTransitRouterCidrRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void ListTransitRouterCidrRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string ListTransitRouterCidrRequest::getVersion() const {
  return version_;
}

void ListTransitRouterCidrRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

