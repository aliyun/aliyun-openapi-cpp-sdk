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

#include <alibabacloud/ecs/model/ModifyDeploymentSetAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDeploymentSetAttributeRequest;

ModifyDeploymentSetAttributeRequest::ModifyDeploymentSetAttributeRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDeploymentSetAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDeploymentSetAttributeRequest::~ModifyDeploymentSetAttributeRequest() {}

long ModifyDeploymentSetAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDeploymentSetAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDeploymentSetAttributeRequest::getDescription() const {
  return description_;
}

void ModifyDeploymentSetAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyDeploymentSetAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyDeploymentSetAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDeploymentSetAttributeRequest::getDeploymentSetId() const {
  return deploymentSetId_;
}

void ModifyDeploymentSetAttributeRequest::setDeploymentSetId(const std::string &deploymentSetId) {
  deploymentSetId_ = deploymentSetId;
  setParameter(std::string("DeploymentSetId"), deploymentSetId);
}

std::string ModifyDeploymentSetAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDeploymentSetAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDeploymentSetAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDeploymentSetAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDeploymentSetAttributeRequest::getDeploymentSetName() const {
  return deploymentSetName_;
}

void ModifyDeploymentSetAttributeRequest::setDeploymentSetName(const std::string &deploymentSetName) {
  deploymentSetName_ = deploymentSetName;
  setParameter(std::string("DeploymentSetName"), deploymentSetName);
}

long ModifyDeploymentSetAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDeploymentSetAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

