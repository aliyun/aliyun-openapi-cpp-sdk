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

#include <alibabacloud/smartag/model/DeleteSagExpressConnectInterfaceRequest.h>

using AlibabaCloud::Smartag::Model::DeleteSagExpressConnectInterfaceRequest;

DeleteSagExpressConnectInterfaceRequest::DeleteSagExpressConnectInterfaceRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteSagExpressConnectInterface") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSagExpressConnectInterfaceRequest::~DeleteSagExpressConnectInterfaceRequest() {}

long DeleteSagExpressConnectInterfaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSagExpressConnectInterfaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSagExpressConnectInterfaceRequest::getVlan() const {
  return vlan_;
}

void DeleteSagExpressConnectInterfaceRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string DeleteSagExpressConnectInterfaceRequest::getRegionId() const {
  return regionId_;
}

void DeleteSagExpressConnectInterfaceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSagExpressConnectInterfaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSagExpressConnectInterfaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSagExpressConnectInterfaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSagExpressConnectInterfaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSagExpressConnectInterfaceRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSagExpressConnectInterfaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteSagExpressConnectInterfaceRequest::getSmartAGId() const {
  return smartAGId_;
}

void DeleteSagExpressConnectInterfaceRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string DeleteSagExpressConnectInterfaceRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void DeleteSagExpressConnectInterfaceRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string DeleteSagExpressConnectInterfaceRequest::getPortName() const {
  return portName_;
}

void DeleteSagExpressConnectInterfaceRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

