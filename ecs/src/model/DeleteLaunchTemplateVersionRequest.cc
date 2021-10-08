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

#include <alibabacloud/ecs/model/DeleteLaunchTemplateVersionRequest.h>

using AlibabaCloud::Ecs::Model::DeleteLaunchTemplateVersionRequest;

DeleteLaunchTemplateVersionRequest::DeleteLaunchTemplateVersionRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteLaunchTemplateVersion") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLaunchTemplateVersionRequest::~DeleteLaunchTemplateVersionRequest() {}

std::string DeleteLaunchTemplateVersionRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void DeleteLaunchTemplateVersionRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long DeleteLaunchTemplateVersionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteLaunchTemplateVersionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<long> DeleteLaunchTemplateVersionRequest::getDeleteVersion() const {
  return deleteVersion_;
}

void DeleteLaunchTemplateVersionRequest::setDeleteVersion(const std::vector<long> &deleteVersion) {
  deleteVersion_ = deleteVersion;
}

std::string DeleteLaunchTemplateVersionRequest::getRegionId() const {
  return regionId_;
}

void DeleteLaunchTemplateVersionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLaunchTemplateVersionRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void DeleteLaunchTemplateVersionRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

std::string DeleteLaunchTemplateVersionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteLaunchTemplateVersionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteLaunchTemplateVersionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteLaunchTemplateVersionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteLaunchTemplateVersionRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLaunchTemplateVersionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

