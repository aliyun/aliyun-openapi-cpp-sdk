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

#include <alibabacloud/smartag/model/ModifySagPortRouteProtocolRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagPortRouteProtocolRequest;

ModifySagPortRouteProtocolRequest::ModifySagPortRouteProtocolRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagPortRouteProtocol") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagPortRouteProtocolRequest::~ModifySagPortRouteProtocolRequest() {}

long ModifySagPortRouteProtocolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagPortRouteProtocolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagPortRouteProtocolRequest::getRemoteIp() const {
  return remoteIp_;
}

void ModifySagPortRouteProtocolRequest::setRemoteIp(const std::string &remoteIp) {
  remoteIp_ = remoteIp;
  setParameter(std::string("RemoteIp"), remoteIp);
}

std::string ModifySagPortRouteProtocolRequest::getVlan() const {
  return vlan_;
}

void ModifySagPortRouteProtocolRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string ModifySagPortRouteProtocolRequest::getRegionId() const {
  return regionId_;
}

void ModifySagPortRouteProtocolRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagPortRouteProtocolRequest::getRemoteAs() const {
  return remoteAs_;
}

void ModifySagPortRouteProtocolRequest::setRemoteAs(const std::string &remoteAs) {
  remoteAs_ = remoteAs;
  setParameter(std::string("RemoteAs"), remoteAs);
}

std::string ModifySagPortRouteProtocolRequest::getRouteProtocol() const {
  return routeProtocol_;
}

void ModifySagPortRouteProtocolRequest::setRouteProtocol(const std::string &routeProtocol) {
  routeProtocol_ = routeProtocol;
  setParameter(std::string("RouteProtocol"), routeProtocol);
}

std::string ModifySagPortRouteProtocolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagPortRouteProtocolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagPortRouteProtocolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagPortRouteProtocolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagPortRouteProtocolRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagPortRouteProtocolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagPortRouteProtocolRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagPortRouteProtocolRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagPortRouteProtocolRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagPortRouteProtocolRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagPortRouteProtocolRequest::getPortName() const {
  return portName_;
}

void ModifySagPortRouteProtocolRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

