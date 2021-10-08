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

#include <alibabacloud/ecs/model/CreateDedicatedHostClusterRequest.h>

using AlibabaCloud::Ecs::Model::CreateDedicatedHostClusterRequest;

CreateDedicatedHostClusterRequest::CreateDedicatedHostClusterRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDedicatedHostCluster") {
  setMethod(HttpRequest::Method::Post);
}

CreateDedicatedHostClusterRequest::~CreateDedicatedHostClusterRequest() {}

std::string CreateDedicatedHostClusterRequest::getDedicatedHostClusterName() const {
  return dedicatedHostClusterName_;
}

void CreateDedicatedHostClusterRequest::setDedicatedHostClusterName(const std::string &dedicatedHostClusterName) {
  dedicatedHostClusterName_ = dedicatedHostClusterName;
  setParameter(std::string("DedicatedHostClusterName"), dedicatedHostClusterName);
}

long CreateDedicatedHostClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDedicatedHostClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDedicatedHostClusterRequest::getDescription() const {
  return description_;
}

void CreateDedicatedHostClusterRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDedicatedHostClusterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDedicatedHostClusterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDedicatedHostClusterRequest::getRegionId() const {
  return regionId_;
}

void CreateDedicatedHostClusterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateDedicatedHostClusterRequest::Tag> CreateDedicatedHostClusterRequest::getTag() const {
  return tag_;
}

void CreateDedicatedHostClusterRequest::setTag(const std::vector<CreateDedicatedHostClusterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateDedicatedHostClusterRequest::getDryRun() const {
  return dryRun_;
}

void CreateDedicatedHostClusterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateDedicatedHostClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDedicatedHostClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDedicatedHostClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDedicatedHostClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDedicatedHostClusterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDedicatedHostClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDedicatedHostClusterRequest::getZoneId() const {
  return zoneId_;
}

void CreateDedicatedHostClusterRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

