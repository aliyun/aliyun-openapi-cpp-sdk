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

#include <alibabacloud/ecs/model/DescribeLaunchTemplatesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLaunchTemplatesRequest;

DescribeLaunchTemplatesRequest::DescribeLaunchTemplatesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeLaunchTemplates") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLaunchTemplatesRequest::~DescribeLaunchTemplatesRequest() {}

std::vector<std::string> DescribeLaunchTemplatesRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void DescribeLaunchTemplatesRequest::setLaunchTemplateName(const std::vector<std::string> &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
}

long DescribeLaunchTemplatesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLaunchTemplatesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeLaunchTemplatesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLaunchTemplatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLaunchTemplatesRequest::getRegionId() const {
  return regionId_;
}

void DescribeLaunchTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLaunchTemplatesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLaunchTemplatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeLaunchTemplatesRequest::TemplateTag> DescribeLaunchTemplatesRequest::getTemplateTag() const {
  return templateTag_;
}

void DescribeLaunchTemplatesRequest::setTemplateTag(const std::vector<DescribeLaunchTemplatesRequest::TemplateTag> &templateTag) {
  templateTag_ = templateTag;
  for(int dep1 = 0; dep1 != templateTag.size(); dep1++) {
  auto templateTagObj = templateTag.at(dep1);
  std::string templateTagObjStr = std::string("TemplateTag") + "." + std::to_string(dep1 + 1);
    setParameter(templateTagObjStr + ".Key", templateTagObj.key);
    setParameter(templateTagObjStr + ".Value", templateTagObj.value);
  }
}

std::vector<std::string> DescribeLaunchTemplatesRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void DescribeLaunchTemplatesRequest::setLaunchTemplateId(const std::vector<std::string> &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
}

std::string DescribeLaunchTemplatesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLaunchTemplatesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLaunchTemplatesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLaunchTemplatesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeLaunchTemplatesRequest::getTemplateResourceGroupId() const {
  return templateResourceGroupId_;
}

void DescribeLaunchTemplatesRequest::setTemplateResourceGroupId(const std::string &templateResourceGroupId) {
  templateResourceGroupId_ = templateResourceGroupId;
  setParameter(std::string("TemplateResourceGroupId"), templateResourceGroupId);
}

long DescribeLaunchTemplatesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLaunchTemplatesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

