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

#include <alibabacloud/cbn/model/UpdateTransitRouterRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTransitRouterRequest;

UpdateTransitRouterRequest::UpdateTransitRouterRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTransitRouter") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTransitRouterRequest::~UpdateTransitRouterRequest() {}

std::string UpdateTransitRouterRequest::getTransitRouterName() const {
  return transitRouterName_;
}

void UpdateTransitRouterRequest::setTransitRouterName(const std::string &transitRouterName) {
  transitRouterName_ = transitRouterName;
  setParameter(std::string("TransitRouterName"), transitRouterName);
}

long UpdateTransitRouterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTransitRouterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTransitRouterRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTransitRouterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTransitRouterRequest::getRegionId() const {
  return regionId_;
}

void UpdateTransitRouterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateTransitRouterRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTransitRouterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTransitRouterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTransitRouterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTransitRouterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTransitRouterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTransitRouterRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTransitRouterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTransitRouterRequest::getTransitRouterId() const {
  return transitRouterId_;
}

void UpdateTransitRouterRequest::setTransitRouterId(const std::string &transitRouterId) {
  transitRouterId_ = transitRouterId;
  setParameter(std::string("TransitRouterId"), transitRouterId);
}

std::string UpdateTransitRouterRequest::getTransitRouterDescription() const {
  return transitRouterDescription_;
}

void UpdateTransitRouterRequest::setTransitRouterDescription(const std::string &transitRouterDescription) {
  transitRouterDescription_ = transitRouterDescription;
  setParameter(std::string("TransitRouterDescription"), transitRouterDescription);
}

bool UpdateTransitRouterRequest::getSupportMulticast() const {
  return supportMulticast_;
}

void UpdateTransitRouterRequest::setSupportMulticast(bool supportMulticast) {
  supportMulticast_ = supportMulticast;
  setParameter(std::string("SupportMulticast"), supportMulticast ? "true" : "false");
}

std::string UpdateTransitRouterRequest::getVersion() const {
  return version_;
}

void UpdateTransitRouterRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

