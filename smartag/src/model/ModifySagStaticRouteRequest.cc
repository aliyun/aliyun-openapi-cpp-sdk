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

#include <alibabacloud/smartag/model/ModifySagStaticRouteRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagStaticRouteRequest;

ModifySagStaticRouteRequest::ModifySagStaticRouteRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagStaticRoute") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagStaticRouteRequest::~ModifySagStaticRouteRequest() {}

long ModifySagStaticRouteRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagStaticRouteRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagStaticRouteRequest::getVlan() const {
  return vlan_;
}

void ModifySagStaticRouteRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string ModifySagStaticRouteRequest::getRegionId() const {
  return regionId_;
}

void ModifySagStaticRouteRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagStaticRouteRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagStaticRouteRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagStaticRouteRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagStaticRouteRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagStaticRouteRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagStaticRouteRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagStaticRouteRequest::getNextHop() const {
  return nextHop_;
}

void ModifySagStaticRouteRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string ModifySagStaticRouteRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagStaticRouteRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagStaticRouteRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagStaticRouteRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagStaticRouteRequest::getPortName() const {
  return portName_;
}

void ModifySagStaticRouteRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

std::string ModifySagStaticRouteRequest::getDestinationCidr() const {
  return destinationCidr_;
}

void ModifySagStaticRouteRequest::setDestinationCidr(const std::string &destinationCidr) {
  destinationCidr_ = destinationCidr;
  setParameter(std::string("DestinationCidr"), destinationCidr);
}

