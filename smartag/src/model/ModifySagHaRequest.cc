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

#include <alibabacloud/smartag/model/ModifySagHaRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagHaRequest;

ModifySagHaRequest::ModifySagHaRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagHa") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagHaRequest::~ModifySagHaRequest() {}

long ModifySagHaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagHaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagHaRequest::getVirtualIp() const {
  return virtualIp_;
}

void ModifySagHaRequest::setVirtualIp(const std::string &virtualIp) {
  virtualIp_ = virtualIp;
  setParameter(std::string("VirtualIp"), virtualIp);
}

std::string ModifySagHaRequest::getMode() const {
  return mode_;
}

void ModifySagHaRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifySagHaRequest::getRegionId() const {
  return regionId_;
}

void ModifySagHaRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagHaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagHaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagHaRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagHaRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagHaRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagHaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagHaRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagHaRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagHaRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagHaRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagHaRequest::getPortName() const {
  return portName_;
}

void ModifySagHaRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

