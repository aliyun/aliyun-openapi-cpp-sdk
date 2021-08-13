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

#include <alibabacloud/smartag/model/ModifySagWanSnatRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagWanSnatRequest;

ModifySagWanSnatRequest::ModifySagWanSnatRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifySagWanSnat") {
  setMethod(HttpRequest::Method::Post);
}

ModifySagWanSnatRequest::~ModifySagWanSnatRequest() {}

long ModifySagWanSnatRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySagWanSnatRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySagWanSnatRequest::getRegionId() const {
  return regionId_;
}

void ModifySagWanSnatRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySagWanSnatRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySagWanSnatRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySagWanSnatRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySagWanSnatRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySagWanSnatRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySagWanSnatRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySagWanSnatRequest::getSmartAGId() const {
  return smartAGId_;
}

void ModifySagWanSnatRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string ModifySagWanSnatRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void ModifySagWanSnatRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

std::string ModifySagWanSnatRequest::getSnat() const {
  return snat_;
}

void ModifySagWanSnatRequest::setSnat(const std::string &snat) {
  snat_ = snat;
  setParameter(std::string("Snat"), snat);
}

