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

#include <alibabacloud/smartag/model/ModifySagRouteProtocolOspfRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagRouteProtocolOspfRequest;

ModifySagRouteProtocolOspfRequest::ModifySagRouteProtocolOspfRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagRouteProtocolOspf") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagRouteProtocolOspfRequest::~ModifySagRouteProtocolOspfRequest() {}

long ModifySagRouteProtocolOspfRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagRouteProtocolOspfRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagRouteProtocolOspfRequest::getAuthenticationType() const {
  return authenticationType_;
}

void ModifySagRouteProtocolOspfRequest::setAuthenticationType(const std::string &authenticationType) {
  authenticationType_ = authenticationType;
  setParameter(std::string("AuthenticationType"), authenticationType);
}

std::string ModifySagRouteProtocolOspfRequest::getPassword() const {
  return password_;
}

void ModifySagRouteProtocolOspfRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

int ModifySagRouteProtocolOspfRequest::getAreaId() const {
  return areaId_;
}

void ModifySagRouteProtocolOspfRequest::setAreaId(int areaId) {
  areaId_ = areaId;
  setParameter(std::string("AreaId"), std::to_string(areaId));
}

std::string ModifySagRouteProtocolOspfRequest::getRegionId() const {
  return regionId_;
}

void ModifySagRouteProtocolOspfRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagRouteProtocolOspfRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagRouteProtocolOspfRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagRouteProtocolOspfRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagRouteProtocolOspfRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagRouteProtocolOspfRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagRouteProtocolOspfRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ModifySagRouteProtocolOspfRequest::getMd5KeyId() const {
  return md5KeyId_;
}

void ModifySagRouteProtocolOspfRequest::setMd5KeyId(int md5KeyId) {
  md5KeyId_ = md5KeyId;
  setParameter(std::string("Md5KeyId"), std::to_string(md5KeyId));
}

std::string ModifySagRouteProtocolOspfRequest::getRouterId() const {
  return routerId_;
}

void ModifySagRouteProtocolOspfRequest::setRouterId(const std::string &routerId) {
  routerId_ = routerId;
  setParameter(std::string("RouterId"), routerId);
}

std::string ModifySagRouteProtocolOspfRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagRouteProtocolOspfRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagRouteProtocolOspfRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagRouteProtocolOspfRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

int ModifySagRouteProtocolOspfRequest::getDeadTime() const {
  return deadTime_;
}

void ModifySagRouteProtocolOspfRequest::setDeadTime(int deadTime) {
  deadTime_ = deadTime;
  setParameter(std::string("DeadTime"), std::to_string(deadTime));
}

std::string ModifySagRouteProtocolOspfRequest::getMd5Key() const {
  return md5Key_;
}

void ModifySagRouteProtocolOspfRequest::setMd5Key(const std::string &md5Key) {
  md5Key_ = md5Key;
  setParameter(std::string("Md5Key"), md5Key);
}

int ModifySagRouteProtocolOspfRequest::getHelloTime() const {
  return helloTime_;
}

void ModifySagRouteProtocolOspfRequest::setHelloTime(int helloTime) {
  helloTime_ = helloTime;
  setParameter(std::string("HelloTime"), std::to_string(helloTime));
}

