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

#include <alibabacloud/smartag/model/ModifySagRouteProtocolBgpRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagRouteProtocolBgpRequest;

ModifySagRouteProtocolBgpRequest::ModifySagRouteProtocolBgpRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagRouteProtocolBgp") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagRouteProtocolBgpRequest::~ModifySagRouteProtocolBgpRequest() {}

long ModifySagRouteProtocolBgpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagRouteProtocolBgpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifySagRouteProtocolBgpRequest::getKeepAlive() const {
  return keepAlive_;
}

void ModifySagRouteProtocolBgpRequest::setKeepAlive(int keepAlive) {
  keepAlive_ = keepAlive;
  setParameter(std::string("KeepAlive"), std::to_string(keepAlive));
}

std::string ModifySagRouteProtocolBgpRequest::getRegionId() const {
  return regionId_;
}

void ModifySagRouteProtocolBgpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifySagRouteProtocolBgpRequest::getHoldTime() const {
  return holdTime_;
}

void ModifySagRouteProtocolBgpRequest::setHoldTime(int holdTime) {
  holdTime_ = holdTime;
  setParameter(std::string("HoldTime"), std::to_string(holdTime));
}

std::string ModifySagRouteProtocolBgpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagRouteProtocolBgpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagRouteProtocolBgpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagRouteProtocolBgpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagRouteProtocolBgpRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagRouteProtocolBgpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagRouteProtocolBgpRequest::getAdvertiseIps() const {
  return advertiseIps_;
}

void ModifySagRouteProtocolBgpRequest::setAdvertiseIps(const std::string &advertiseIps) {
  advertiseIps_ = advertiseIps;
  setParameter(std::string("AdvertiseIps"), advertiseIps);
}

std::string ModifySagRouteProtocolBgpRequest::getRouterId() const {
  return routerId_;
}

void ModifySagRouteProtocolBgpRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

int ModifySagRouteProtocolBgpRequest::getLocalAs() const {
  return localAs_;
}

void ModifySagRouteProtocolBgpRequest::setLocalAs(int localAs) {
  localAs_ = localAs;
  setParameter(std::string("LocalAs"), std::to_string(localAs));
}

std::string ModifySagRouteProtocolBgpRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagRouteProtocolBgpRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagRouteProtocolBgpRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagRouteProtocolBgpRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

