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

#include <alibabacloud/ecs/model/ModifyLaunchTemplateDefaultVersionRequest.h>

using AlibabaCloud::Ecs::Model::ModifyLaunchTemplateDefaultVersionRequest;

ModifyLaunchTemplateDefaultVersionRequest::ModifyLaunchTemplateDefaultVersionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyLaunchTemplateDefaultVersion") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLaunchTemplateDefaultVersionRequest::~ModifyLaunchTemplateDefaultVersionRequest() {}

std::string ModifyLaunchTemplateDefaultVersionRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long ModifyLaunchTemplateDefaultVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getRegionId() const {
  return regionId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyLaunchTemplateDefaultVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLaunchTemplateDefaultVersionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long ModifyLaunchTemplateDefaultVersionRequest::getDefaultVersionNumber() const {
  return defaultVersionNumber_;
}

void ModifyLaunchTemplateDefaultVersionRequest::setDefaultVersionNumber(long defaultVersionNumber) {
  defaultVersionNumber_ = defaultVersionNumber;
  setParameter(std::string("DefaultVersionNumber"), std::to_string(defaultVersionNumber));
}

