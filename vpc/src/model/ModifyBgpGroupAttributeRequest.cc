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

#include <alibabacloud/vpc/model/ModifyBgpGroupAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyBgpGroupAttributeRequest;

ModifyBgpGroupAttributeRequest::ModifyBgpGroupAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyBgpGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBgpGroupAttributeRequest::~ModifyBgpGroupAttributeRequest() {}

std::string ModifyBgpGroupAttributeRequest::getAuthKey() const {
  return authKey_;
}

void ModifyBgpGroupAttributeRequest::setAuthKey(const std::string &authKey) {
  authKey_ = authKey;
  setParameter(std::string("AuthKey"), authKey);
}

long ModifyBgpGroupAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBgpGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBgpGroupAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBgpGroupAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBgpGroupAttributeRequest::getBgpGroupId() const {
  return bgpGroupId_;
}

void ModifyBgpGroupAttributeRequest::setBgpGroupId(const std::string &bgpGroupId) {
  bgpGroupId_ = bgpGroupId;
  setParameter(std::string("BgpGroupId"), bgpGroupId);
}

std::string ModifyBgpGroupAttributeRequest::getDescription() const {
  return description_;
}

void ModifyBgpGroupAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long ModifyBgpGroupAttributeRequest::getPeerAsn() const {
  return peerAsn_;
}

void ModifyBgpGroupAttributeRequest::setPeerAsn(long peerAsn) {
  peerAsn_ = peerAsn;
  setParameter(std::string("PeerAsn"), std::to_string(peerAsn));
}

bool ModifyBgpGroupAttributeRequest::getIsFakeAsn() const {
  return isFakeAsn_;
}

void ModifyBgpGroupAttributeRequest::setIsFakeAsn(bool isFakeAsn) {
  isFakeAsn_ = isFakeAsn;
  setParameter(std::string("IsFakeAsn"), isFakeAsn ? "true" : "false");
}

std::string ModifyBgpGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyBgpGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ModifyBgpGroupAttributeRequest::getClearAuthKey() const {
  return clearAuthKey_;
}

void ModifyBgpGroupAttributeRequest::setClearAuthKey(bool clearAuthKey) {
  clearAuthKey_ = clearAuthKey;
  setParameter(std::string("ClearAuthKey"), clearAuthKey ? "true" : "false");
}

std::string ModifyBgpGroupAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBgpGroupAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyBgpGroupAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBgpGroupAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int ModifyBgpGroupAttributeRequest::getRouteQuota() const {
  return routeQuota_;
}

void ModifyBgpGroupAttributeRequest::setRouteQuota(int routeQuota) {
  routeQuota_ = routeQuota;
  setParameter(std::string("RouteQuota"), std::to_string(routeQuota));
}

long ModifyBgpGroupAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBgpGroupAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifyBgpGroupAttributeRequest::getRouteUsageAlarmThreshold() const {
  return routeUsageAlarmThreshold_;
}

void ModifyBgpGroupAttributeRequest::setRouteUsageAlarmThreshold(int routeUsageAlarmThreshold) {
  routeUsageAlarmThreshold_ = routeUsageAlarmThreshold;
  setParameter(std::string("RouteUsageAlarmThreshold"), std::to_string(routeUsageAlarmThreshold));
}

std::string ModifyBgpGroupAttributeRequest::getName() const {
  return name_;
}

void ModifyBgpGroupAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long ModifyBgpGroupAttributeRequest::getLocalAsn() const {
  return localAsn_;
}

void ModifyBgpGroupAttributeRequest::setLocalAsn(long localAsn) {
  localAsn_ = localAsn;
  setParameter(std::string("LocalAsn"), std::to_string(localAsn));
}

