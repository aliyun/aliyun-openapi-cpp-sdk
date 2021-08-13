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

#include <alibabacloud/smartag/model/ModifySagLanRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagLanRequest;

ModifySagLanRequest::ModifySagLanRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagLan") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagLanRequest::~ModifySagLanRequest() {}

std::string ModifySagLanRequest::getEndIp() const {
  return endIp_;
}

void ModifySagLanRequest::setEndIp(const std::string &endIp) {
  endIp_ = endIp;
  setParameter(std::string("EndIp"), endIp);
}

long ModifySagLanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagLanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagLanRequest::getRegionId() const {
  return regionId_;
}

void ModifySagLanRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagLanRequest::getMask() const {
  return mask_;
}

void ModifySagLanRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string ModifySagLanRequest::getStartIp() const {
  return startIp_;
}

void ModifySagLanRequest::setStartIp(const std::string &startIp) {
  startIp_ = startIp;
  setParameter(std::string("StartIp"), startIp);
}

std::string ModifySagLanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagLanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagLanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagLanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySagLanRequest::getIP() const {
  return iP_;
}

void ModifySagLanRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

long ModifySagLanRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagLanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagLanRequest::getIPType() const {
  return iPType_;
}

void ModifySagLanRequest::setIPType(const std::string &iPType) {
  iPType_ = iPType;
  setParameter(std::string("IPType"), iPType);
}

std::string ModifySagLanRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagLanRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagLanRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagLanRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagLanRequest::getPortName() const {
  return portName_;
}

void ModifySagLanRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

std::string ModifySagLanRequest::getLease() const {
  return lease_;
}

void ModifySagLanRequest::setLease(const std::string &lease) {
  lease_ = lease;
  setParameter(std::string("Lease"), lease);
}

