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

#include <alibabacloud/vpc/model/ModifyVRouterAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVRouterAttributeRequest;

ModifyVRouterAttributeRequest::ModifyVRouterAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyVRouterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyVRouterAttributeRequest::~ModifyVRouterAttributeRequest() {}

long ModifyVRouterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyVRouterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyVRouterAttributeRequest::getVRouterId() const {
  return vRouterId_;
}

void ModifyVRouterAttributeRequest::setVRouterId(const std::string &vRouterId) {
  vRouterId_ = vRouterId;
  setParameter(std::string("VRouterId"), vRouterId);
}

std::string ModifyVRouterAttributeRequest::getDescription() const {
  return description_;
}

void ModifyVRouterAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyVRouterAttributeRequest::getVRouterName() const {
  return vRouterName_;
}

void ModifyVRouterAttributeRequest::setVRouterName(const std::string &vRouterName) {
  vRouterName_ = vRouterName;
  setParameter(std::string("VRouterName"), vRouterName);
}

std::string ModifyVRouterAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyVRouterAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyVRouterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyVRouterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyVRouterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyVRouterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyVRouterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyVRouterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

