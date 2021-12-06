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

#include <alibabacloud/ecs/model/CreateHpcClusterRequest.h>

using AlibabaCloud::Ecs::Model::CreateHpcClusterRequest;

CreateHpcClusterRequest::CreateHpcClusterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateHpcCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateHpcClusterRequest::~CreateHpcClusterRequest() {}

long CreateHpcClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateHpcClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateHpcClusterRequest::getClientToken() const {
  return clientToken_;
}

void CreateHpcClusterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateHpcClusterRequest::getDescription() const {
  return description_;
}

void CreateHpcClusterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateHpcClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateHpcClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateHpcClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateHpcClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateHpcClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateHpcClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateHpcClusterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateHpcClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateHpcClusterRequest::getName() const {
  return name_;
}

void CreateHpcClusterRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

