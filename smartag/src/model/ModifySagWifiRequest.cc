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

#include <alibabacloud/smartag/model/ModifySagWifiRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagWifiRequest;

ModifySagWifiRequest::ModifySagWifiRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagWifi") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagWifiRequest::~ModifySagWifiRequest() {}

long ModifySagWifiRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagWifiRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagWifiRequest::getEncryptAlgorithm() const {
  return encryptAlgorithm_;
}

void ModifySagWifiRequest::setEncryptAlgorithm(const std::string &encryptAlgorithm) {
  encryptAlgorithm_ = encryptAlgorithm;
  setParameter(std::string("EncryptAlgorithm"), encryptAlgorithm);
}

std::string ModifySagWifiRequest::getChannel() const {
  return channel_;
}

void ModifySagWifiRequest::setChannel(const std::string &channel) {
  channel_ = channel;
  setParameter(std::string("Channel"), channel);
}

std::string ModifySagWifiRequest::getAuthenticationType() const {
  return authenticationType_;
}

void ModifySagWifiRequest::setAuthenticationType(const std::string &authenticationType) {
  authenticationType_ = authenticationType;
  setParameter(std::string("AuthenticationType"), authenticationType);
}

std::string ModifySagWifiRequest::getSSID() const {
  return sSID_;
}

void ModifySagWifiRequest::setSSID(const std::string &sSID) {
  sSID_ = sSID;
  setParameter(std::string("SSID"), sSID);
}

std::string ModifySagWifiRequest::getPassword() const {
  return password_;
}

void ModifySagWifiRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifySagWifiRequest::getRegionId() const {
  return regionId_;
}

void ModifySagWifiRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagWifiRequest::getIsBroadcast() const {
  return isBroadcast_;
}

void ModifySagWifiRequest::setIsBroadcast(const std::string &isBroadcast) {
  isBroadcast_ = isBroadcast;
  setParameter(std::string("IsBroadcast"), isBroadcast);
}

std::string ModifySagWifiRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagWifiRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagWifiRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifySagWifiRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string ModifySagWifiRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagWifiRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagWifiRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagWifiRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagWifiRequest::getIsEnable() const {
  return isEnable_;
}

void ModifySagWifiRequest::setIsEnable(const std::string &isEnable) {
  isEnable_ = isEnable;
  setParameter(std::string("IsEnable"), isEnable);
}

std::string ModifySagWifiRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagWifiRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagWifiRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagWifiRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagWifiRequest::getIsAuth() const {
  return isAuth_;
}

void ModifySagWifiRequest::setIsAuth(const std::string &isAuth) {
  isAuth_ = isAuth;
  setParameter(std::string("IsAuth"), isAuth);
}

