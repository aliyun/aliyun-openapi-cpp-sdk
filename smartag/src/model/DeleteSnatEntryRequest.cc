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

#include <alibabacloud/smartag/model/DeleteSnatEntryRequest.h>

using AlibabaCloud::Smartag::Model::DeleteSnatEntryRequest;

DeleteSnatEntryRequest::DeleteSnatEntryRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteSnatEntry") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSnatEntryRequest::~DeleteSnatEntryRequest() {}

long DeleteSnatEntryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSnatEntryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSnatEntryRequest::getRegionId() const {
  return regionId_;
}

void DeleteSnatEntryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSnatEntryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSnatEntryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSnatEntryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSnatEntryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSnatEntryRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSnatEntryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteSnatEntryRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteSnatEntryRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteSnatEntryRequest::getSmartAGId() const {
  return smartAGId_;
}

void DeleteSnatEntryRequest::setSmartAGId(const std::string &smartAGId) {
  smartAGId_ = smartAGId;
  setParameter(std::string("SmartAGId"), smartAGId);
}

