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

#include <alibabacloud/smartag/model/AddSnatEntryRequest.h>

using AlibabaCloud::Smartag::Model::AddSnatEntryRequest;

AddSnatEntryRequest::AddSnatEntryRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "AddSnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

AddSnatEntryRequest::~AddSnatEntryRequest() {}

long AddSnatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddSnatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddSnatEntryRequest::getSnatIp() const {
  return snatIp_;
}

void AddSnatEntryRequest::setSnatIp(const std::string &snatIp) {
  snatIp_ = snatIp;
  setParameter(std::string("SnatIp"), snatIp);
}

std::string AddSnatEntryRequest::getRegionId() const {
  return regionId_;
}

void AddSnatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddSnatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddSnatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddSnatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddSnatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddSnatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void AddSnatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddSnatEntryRequest::getCidrBlock() const {
  return cidrBlock_;
}

void AddSnatEntryRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

std::string AddSnatEntryRequest::getSmartAGId() const {
  return smartAGId_;
}

void AddSnatEntryRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

