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

#include <alibabacloud/ecs/model/ModifyHpcClusterAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyHpcClusterAttributeRequest;

ModifyHpcClusterAttributeRequest::ModifyHpcClusterAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyHpcClusterAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyHpcClusterAttributeRequest::~ModifyHpcClusterAttributeRequest() {}

long ModifyHpcClusterAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyHpcClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyHpcClusterAttributeRequest::getHpcClusterId() const {
  return hpcClusterId_;
}

void ModifyHpcClusterAttributeRequest::setHpcClusterId(const std::string &hpcClusterId) {
  hpcClusterId_ = hpcClusterId;
  setParameter(std::string("HpcClusterId"), hpcClusterId);
}

std::string ModifyHpcClusterAttributeRequest::getClientToken() const {
  return clientToken_;
}

void ModifyHpcClusterAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyHpcClusterAttributeRequest::getDescription() const {
  return description_;
}

void ModifyHpcClusterAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyHpcClusterAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyHpcClusterAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyHpcClusterAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyHpcClusterAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyHpcClusterAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyHpcClusterAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyHpcClusterAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyHpcClusterAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyHpcClusterAttributeRequest::getName() const {
  return name_;
}

void ModifyHpcClusterAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

