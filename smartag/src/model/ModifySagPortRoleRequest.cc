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

#include <alibabacloud/smartag/model/ModifySagPortRoleRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagPortRoleRequest;

ModifySagPortRoleRequest::ModifySagPortRoleRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagPortRole") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagPortRoleRequest::~ModifySagPortRoleRequest() {}

long ModifySagPortRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagPortRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagPortRoleRequest::getRole() const {
  return role_;
}

void ModifySagPortRoleRequest::setRole(const std::string &role) {
  role_ = role;
  setParameter(std::string("Role"), role);
}

std::string ModifySagPortRoleRequest::getVlan() const {
  return vlan_;
}

void ModifySagPortRoleRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string ModifySagPortRoleRequest::getRegionId() const {
  return regionId_;
}

void ModifySagPortRoleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagPortRoleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagPortRoleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagPortRoleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagPortRoleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagPortRoleRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagPortRoleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagPortRoleRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagPortRoleRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagPortRoleRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagPortRoleRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagPortRoleRequest::getPortName() const {
  return portName_;
}

void ModifySagPortRoleRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

