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

#include <alibabacloud/ecs/model/ModifyUserBusinessBehaviorRequest.h>

using AlibabaCloud::Ecs::Model::ModifyUserBusinessBehaviorRequest;

ModifyUserBusinessBehaviorRequest::ModifyUserBusinessBehaviorRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyUserBusinessBehavior") {
  setMethod(HttpRequest::Method::Post);
}

ModifyUserBusinessBehaviorRequest::~ModifyUserBusinessBehaviorRequest() {}

long ModifyUserBusinessBehaviorRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyUserBusinessBehaviorRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyUserBusinessBehaviorRequest::getRegionId() const {
  return regionId_;
}

void ModifyUserBusinessBehaviorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyUserBusinessBehaviorRequest::getStatusValue() const {
  return statusValue_;
}

void ModifyUserBusinessBehaviorRequest::setStatusValue(const std::string &statusValue) {
  statusValue_ = statusValue;
  setParameter(std::string("statusValue"), statusValue);
}

std::string ModifyUserBusinessBehaviorRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyUserBusinessBehaviorRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyUserBusinessBehaviorRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyUserBusinessBehaviorRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyUserBusinessBehaviorRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyUserBusinessBehaviorRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyUserBusinessBehaviorRequest::getStatusKey() const {
  return statusKey_;
}

void ModifyUserBusinessBehaviorRequest::setStatusKey(const std::string &statusKey) {
  statusKey_ = statusKey;
  setParameter(std::string("statusKey"), statusKey);
}

