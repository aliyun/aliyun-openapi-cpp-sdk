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

#include <alibabacloud/smartag/model/ModifySagGlobalRouteProtocolRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagGlobalRouteProtocolRequest;

ModifySagGlobalRouteProtocolRequest::ModifySagGlobalRouteProtocolRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagGlobalRouteProtocol") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagGlobalRouteProtocolRequest::~ModifySagGlobalRouteProtocolRequest() {}

long ModifySagGlobalRouteProtocolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagGlobalRouteProtocolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagGlobalRouteProtocolRequest::getRegionId() const {
  return regionId_;
}

void ModifySagGlobalRouteProtocolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagGlobalRouteProtocolRequest::getRouteProtocol() const {
  return routeProtocol_;
}

void ModifySagGlobalRouteProtocolRequest::setRouteProtocol(const std::string &routeProtocol) {
  routeProtocol_ = routeProtocol;
  setParameter(std::string("RouteProtocol"), routeProtocol);
}

std::string ModifySagGlobalRouteProtocolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagGlobalRouteProtocolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagGlobalRouteProtocolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagGlobalRouteProtocolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagGlobalRouteProtocolRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagGlobalRouteProtocolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagGlobalRouteProtocolRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagGlobalRouteProtocolRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagGlobalRouteProtocolRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagGlobalRouteProtocolRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

