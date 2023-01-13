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

#include <alibabacloud/cbn/model/UpdateTransitRouterRouteEntryRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterRouteEntryRequest;

UpdateTransitRouterRouteEntryRequest::UpdateTransitRouterRouteEntryRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouterRouteEntry") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterRouteEntryRequest::~UpdateTransitRouterRouteEntryRequest() {}

std::string UpdateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryId() const {
  return transitRouterRouteEntryId_;
}

void UpdateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryId(const std::string &transitRouterRouteEntryId) {
  transitRouterRouteEntryId_ = transitRouterRouteEntryId;
  setParameter(std::string("TransitRouterRouteEntryId"), transitRouterRouteEntryId);
}

long UpdateTransitRouterRouteEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterRouteEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterRouteEntryRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterRouteEntryRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryDescription() const {
  return transitRouterRouteEntryDescription_;
}

void UpdateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryDescription(const std::string &transitRouterRouteEntryDescription) {
  transitRouterRouteEntryDescription_ = transitRouterRouteEntryDescription;
  setParameter(std::string("TransitRouterRouteEntryDescription"), transitRouterRouteEntryDescription);
}

bool UpdateTransitRouterRouteEntryRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterRouteEntryRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterRouteEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterRouteEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterRouteEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterRouteEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterRouteEntryRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterRouteEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterRouteEntryRequest::getTransitRouterRouteEntryName() const {
  return transitRouterRouteEntryName_;
}

void UpdateTransitRouterRouteEntryRequest::setTransitRouterRouteEntryName(const std::string &transitRouterRouteEntryName) {
  transitRouterRouteEntryName_ = transitRouterRouteEntryName;
  setParameter(std::string("TransitRouterRouteEntryName"), transitRouterRouteEntryName);
}

std::string UpdateTransitRouterRouteEntryRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterRouteEntryRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

