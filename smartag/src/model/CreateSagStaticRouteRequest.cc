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

#include <alibabacloud/smartag/model/CreateSagStaticRouteRequest.h>

using AlibabaCloud::Smartag::Model::CreateSagStaticRouteRequest;

CreateSagStaticRouteRequest::CreateSagStaticRouteRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateSagStaticRoute") {
  setMethod(HttpRequest::Method::Post);
}

CreateSagStaticRouteRequest::~CreateSagStaticRouteRequest() {}

long CreateSagStaticRouteRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSagStaticRouteRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSagStaticRouteRequest::getVlan() const {
  return vlan_;
}

void CreateSagStaticRouteRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string CreateSagStaticRouteRequest::getRegionId() const {
  return regionId_;
}

void CreateSagStaticRouteRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSagStaticRouteRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSagStaticRouteRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSagStaticRouteRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSagStaticRouteRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSagStaticRouteRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSagStaticRouteRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSagStaticRouteRequest::getNextHop() const {
  return nextHop_;
}

void CreateSagStaticRouteRequest::setNextHop(const std::string &nextHop) {
  nextHop_ = nextHop;
  setParameter(std::string("NextHop"), nextHop);
}

std::string CreateSagStaticRouteRequest::getSmartAGId() const {
  return smartAGId_;
}

void CreateSagStaticRouteRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string CreateSagStaticRouteRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void CreateSagStaticRouteRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string CreateSagStaticRouteRequest::getPortName() const {
  return portName_;
}

void CreateSagStaticRouteRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

std::string CreateSagStaticRouteRequest::getDestinationCidr() const {
  return destinationCidr_;
}

void CreateSagStaticRouteRequest::setDestinationCidr(const std::string &destinationCidr) {
  destinationCidr_ = destinationCidr;
  setParameter(std::string("DestinationCidr"), destinationCidr);
}

