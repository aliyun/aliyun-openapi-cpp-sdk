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

#include <alibabacloud/ecs/model/ModifySecurityGroupAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupAttributeRequest;

ModifySecurityGroupAttributeRequest::ModifySecurityGroupAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupAttributeRequest::~ModifySecurityGroupAttributeRequest() {}

long ModifySecurityGroupAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupAttributeRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifySecurityGroupAttributeRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifySecurityGroupAttributeRequest::getDescription() const {
  return description_;
}

void ModifySecurityGroupAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifySecurityGroupAttributeRequest::getSecurityGroupName() const {
  return securityGroupName_;
}

void ModifySecurityGroupAttributeRequest::setSecurityGroupName(const std::string &securityGroupName) {
  securityGroupName_ = securityGroupName;
  setParameter(std::string("SecurityGroupName"), securityGroupName);
}

std::string ModifySecurityGroupAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityGroupAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySecurityGroupAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityGroupAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityGroupAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityGroupAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySecurityGroupAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityGroupAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

