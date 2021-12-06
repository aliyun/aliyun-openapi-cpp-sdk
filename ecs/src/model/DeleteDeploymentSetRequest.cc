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

#include <alibabacloud/ecs/model/DeleteDeploymentSetRequest.h>

using AlibabaCloud::Ecs::Model::DeleteDeploymentSetRequest;

DeleteDeploymentSetRequest::DeleteDeploymentSetRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteDeploymentSet") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDeploymentSetRequest::~DeleteDeploymentSetRequest() {}

long DeleteDeploymentSetRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDeploymentSetRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDeploymentSetRequest::getRegionId() const {
  return regionId_;
}

void DeleteDeploymentSetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteDeploymentSetRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void DeleteDeploymentSetRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string DeleteDeploymentSetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDeploymentSetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDeploymentSetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDeploymentSetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDeploymentSetRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDeploymentSetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

