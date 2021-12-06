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

#include <alibabacloud/ecs/model/DeleteLaunchTemplateRequest.h>

using AlibabaCloud::Ecs::Model::DeleteLaunchTemplateRequest;

DeleteLaunchTemplateRequest::DeleteLaunchTemplateRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteLaunchTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLaunchTemplateRequest::~DeleteLaunchTemplateRequest() {}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long DeleteLaunchTemplateRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteLaunchTemplateRequest::getRegionId() const {
  return regionId_;
}

void DeleteLaunchTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLaunchTemplateRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void DeleteLaunchTemplateRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

std::string DeleteLaunchTemplateRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteLaunchTemplateRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteLaunchTemplateRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteLaunchTemplateRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteLaunchTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLaunchTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

