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

#include <alibabacloud/smartag/model/SynchronizeSmartAGWebConfigRequest.h>

using AlibabaCloud::Smartag::Model::SynchronizeSmartAGWebConfigRequest;

SynchronizeSmartAGWebConfigRequest::SynchronizeSmartAGWebConfigRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "SynchronizeSmartAGWebConfig") {
  setMethod(HttpRequest::Method::Post);
}

SynchronizeSmartAGWebConfigRequest::~SynchronizeSmartAGWebConfigRequest() {}

long SynchronizeSmartAGWebConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SynchronizeSmartAGWebConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SynchronizeSmartAGWebConfigRequest::getRegionId() const {
  return regionId_;
}

void SynchronizeSmartAGWebConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SynchronizeSmartAGWebConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SynchronizeSmartAGWebConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SynchronizeSmartAGWebConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SynchronizeSmartAGWebConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SynchronizeSmartAGWebConfigRequest::getOwnerId() const {
  return ownerId_;
}

void SynchronizeSmartAGWebConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SynchronizeSmartAGWebConfigRequest::getSmartAGId() const {
  return smartAGId_;
}

void SynchronizeSmartAGWebConfigRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

std::string SynchronizeSmartAGWebConfigRequest::getSmartAGSn() const {
  return smartAGSn_;
}

void SynchronizeSmartAGWebConfigRequest::setSmartAGSn(const std::string &smartAGSn) {
  smartAGSn_ = smartAGSn;
  setParameter(std::string("SmartAGSn"), smartAGSn);
}

