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

#include <alibabacloud/ecs/model/DeleteDedicatedHostClusterRequest.h>

using AlibabaCloud::Ecs::Model::DeleteDedicatedHostClusterRequest;

DeleteDedicatedHostClusterRequest::DeleteDedicatedHostClusterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteDedicatedHostCluster") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDedicatedHostClusterRequest::~DeleteDedicatedHostClusterRequest() {}

long DeleteDedicatedHostClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDedicatedHostClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedHostClusterRequest::getRegionId() const {
  return regionId_;
}

void DeleteDedicatedHostClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDedicatedHostClusterRequest::getDedicatedHostClusterId() const {
  return dedicatedHostClusterId_;
}

void DeleteDedicatedHostClusterRequest::setDedicatedHostClusterId(const std::string &dedicatedHostClusterId) {
  dedicatedHostClusterId_ = dedicatedHostClusterId;
  setParameter(std::string("DedicatedHostClusterId"), dedicatedHostClusterId);
}

std::string DeleteDedicatedHostClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDedicatedHostClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDedicatedHostClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDedicatedHostClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDedicatedHostClusterRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDedicatedHostClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

