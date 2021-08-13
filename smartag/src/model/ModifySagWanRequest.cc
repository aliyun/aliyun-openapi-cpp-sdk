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

#include <alibabacloud/smartag/model/ModifySagWanRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagWanRequest;

ModifySagWanRequest::ModifySagWanRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagWan") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagWanRequest::~ModifySagWanRequest() {}

long ModifySagWanRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagWanRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagWanRequest::getISP() const {
  return iSP_;
}

void ModifySagWanRequest::setISP(const std::string &iSP) {
  iSP_ = iSP;
  setParameter(std::string("ISP"), iSP);
}

std::string ModifySagWanRequest::getPassword() const {
  return password_;
}

void ModifySagWanRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifySagWanRequest::getVlan() const {
  return vlan_;
}

void ModifySagWanRequest::setVlan(const std::string &vlan) {
  vlan_ = vlan;
  setParameter(std::string("Vlan"), vlan);
}

std::string ModifySagWanRequest::getRegionId() const {
  return regionId_;
}

void ModifySagWanRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagWanRequest::getMask() const {
  return mask_;
}

void ModifySagWanRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string ModifySagWanRequest::getStartIp() const {
  return startIp_;
}

void ModifySagWanRequest::setStartIp(const std::string &startIp) {
  startIp_ = startIp;
  setParameter(std::string("StartIp"), startIp);
}

std::string ModifySagWanRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagWanRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int ModifySagWanRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifySagWanRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string ModifySagWanRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagWanRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySagWanRequest::getIP() const {
  return iP_;
}

void ModifySagWanRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

int ModifySagWanRequest::getWeight() const {
  return weight_;
}

void ModifySagWanRequest::setWeight(int weight) {
  weight_ = weight;
  setParameter(std::string("Weight"), std::to_string(weight));
}

long ModifySagWanRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagWanRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagWanRequest::getIPType() const {
  return iPType_;
}

void ModifySagWanRequest::setIPType(const std::string &iPType) {
  iPType_ = iPType;
  setParameter(std::string("IPType"), iPType);
}

int ModifySagWanRequest::getPriority() const {
  return priority_;
}

void ModifySagWanRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string ModifySagWanRequest::getSourceIps() const {
  return sourceIps_;
}

void ModifySagWanRequest::setSourceIps(const std::string &sourceIps) {
  sourceIps_ = sourceIps;
  setParameter(std::string("SourceIps"), sourceIps);
}

std::string ModifySagWanRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagWanRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagWanRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagWanRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagWanRequest::getPortName() const {
  return portName_;
}

void ModifySagWanRequest::setPortName(const std::string &portName) {
  portName_ = portName;
  setParameter(std::string("PortName"), portName);
}

std::string ModifySagWanRequest::getStopIp() const {
  return stopIp_;
}

void ModifySagWanRequest::setStopIp(const std::string &stopIp) {
  stopIp_ = stopIp;
  setParameter(std::string("StopIp"), stopIp);
}

std::string ModifySagWanRequest::getGateway() const {
  return gateway_;
}

void ModifySagWanRequest::setGateway(const std::string &gateway) {
  gateway_ = gateway;
  setParameter(std::string("Gateway"), gateway);
}

std::string ModifySagWanRequest::getUsername() const {
  return username_;
}

void ModifySagWanRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

