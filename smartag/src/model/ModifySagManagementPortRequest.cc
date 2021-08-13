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

#include <alibabacloud/smartag/model/ModifySagManagementPortRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagManagementPortRequest;

ModifySagManagementPortRequest::ModifySagManagementPortRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagManagementPort") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagManagementPortRequest::~ModifySagManagementPortRequest() {}

long ModifySagManagementPortRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagManagementPortRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagManagementPortRequest::getRegionId() const {
  return regionId_;
}

void ModifySagManagementPortRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagManagementPortRequest::getMask() const {
  return mask_;
}

void ModifySagManagementPortRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string ModifySagManagementPortRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagManagementPortRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagManagementPortRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagManagementPortRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySagManagementPortRequest::getIP() const {
  return iP_;
}

void ModifySagManagementPortRequest::setIP(const std::string &iP) {
  iP_ = iP;
  setParameter(std::string("IP"), iP);
}

long ModifySagManagementPortRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagManagementPortRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagManagementPortRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagManagementPortRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagManagementPortRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagManagementPortRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagManagementPortRequest::getGateway() const {
  return gateway_;
}

void ModifySagManagementPortRequest::setGateway(const std::string &gateway) {
  gateway_ = gateway;
  setParameter(std::string("Gateway"), gateway);
}

