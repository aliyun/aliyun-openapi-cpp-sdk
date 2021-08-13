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

#include <alibabacloud/smartag/model/CreateSagExpressConnectInterfaceRequest.h>

using AlibabaCloud::Smartag::Model::CreateSagExpressConnectInterfaceRequest;

CreateSagExpressConnectInterfaceRequest::CreateSagExpressConnectInterfaceRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateSagExpressConnectInterface") {
  setMethod(HttpRequest::Method::Post);
}

CreateSagExpressConnectInterfaceRequest::~CreateSagExpressConnectInterfaceRequest() {}

long CreateSagExpressConnectInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSagExpressConnectInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSagExpressConnectInterfaceRequest::getVlan() const {
  return vlan_;
}

void CreateSagExpressConnectInterfaceRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string CreateSagExpressConnectInterfaceRequest::getRegionId() const {
  return regionId_;
}

void CreateSagExpressConnectInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSagExpressConnectInterfaceRequest::getMask() const {
  return mask_;
}

void CreateSagExpressConnectInterfaceRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string CreateSagExpressConnectInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSagExpressConnectInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSagExpressConnectInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSagExpressConnectInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreateSagExpressConnectInterfaceRequest::getIP() const {
  return iP_;
}

void CreateSagExpressConnectInterfaceRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

long CreateSagExpressConnectInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSagExpressConnectInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSagExpressConnectInterfaceRequest::getSmartAGId() const {
  return smartAGId_;
}

void CreateSagExpressConnectInterfaceRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string CreateSagExpressConnectInterfaceRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void CreateSagExpressConnectInterfaceRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string CreateSagExpressConnectInterfaceRequest::getPortName() const {
  return portName_;
}

void CreateSagExpressConnectInterfaceRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

