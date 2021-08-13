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

#include <alibabacloud/smartag/model/ModifySagExpressConnectInterfaceRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagExpressConnectInterfaceRequest;

ModifySagExpressConnectInterfaceRequest::ModifySagExpressConnectInterfaceRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagExpressConnectInterface") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagExpressConnectInterfaceRequest::~ModifySagExpressConnectInterfaceRequest() {}

long ModifySagExpressConnectInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagExpressConnectInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagExpressConnectInterfaceRequest::getVlan() const {
  return vlan_;
}

void ModifySagExpressConnectInterfaceRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string ModifySagExpressConnectInterfaceRequest::getRegionId() const {
  return regionId_;
}

void ModifySagExpressConnectInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagExpressConnectInterfaceRequest::getMask() const {
  return mask_;
}

void ModifySagExpressConnectInterfaceRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string ModifySagExpressConnectInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagExpressConnectInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagExpressConnectInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagExpressConnectInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySagExpressConnectInterfaceRequest::getIP() const {
  return iP_;
}

void ModifySagExpressConnectInterfaceRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

long ModifySagExpressConnectInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagExpressConnectInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagExpressConnectInterfaceRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagExpressConnectInterfaceRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagExpressConnectInterfaceRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagExpressConnectInterfaceRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagExpressConnectInterfaceRequest::getPortName() const {
  return portName_;
}

void ModifySagExpressConnectInterfaceRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

