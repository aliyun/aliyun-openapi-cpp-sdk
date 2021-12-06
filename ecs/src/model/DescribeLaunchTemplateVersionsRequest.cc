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

#include <alibabacloud/ecs/model/DescribeLaunchTemplateVersionsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeLaunchTemplateVersionsRequest;

DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeLaunchTemplateVersions") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLaunchTemplateVersionsRequest::~DescribeLaunchTemplateVersionsRequest() {}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateName() const {
  return launchTemplateName_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateName(const std::string &launchTemplateName) {
  launchTemplateName_ = launchTemplateName;
  setParameter(std::string("LaunchTemplateName"), launchTemplateName);
}

long DescribeLaunchTemplateVersionsRequest::getMaxVersion() const {
  return maxVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMaxVersion(long maxVersion) {
  maxVersion_ = maxVersion;
  setParameter(std::string("MaxVersion"), std::to_string(maxVersion));
}

long DescribeLaunchTemplateVersionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeLaunchTemplateVersionsRequest::getDefaultVersion() const {
  return defaultVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setDefaultVersion(bool defaultVersion) {
  defaultVersion_ = defaultVersion;
  setParameter(std::string("DefaultVersion"), defaultVersion ? "true" : "false");
}

long DescribeLaunchTemplateVersionsRequest::getMinVersion() const {
  return minVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setMinVersion(long minVersion) {
  minVersion_ = minVersion;
  setParameter(std::string("MinVersion"), std::to_string(minVersion));
}

int DescribeLaunchTemplateVersionsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLaunchTemplateVersionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLaunchTemplateVersionsRequest::getRegionId() const {
  return regionId_;
}

void DescribeLaunchTemplateVersionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeLaunchTemplateVersionsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLaunchTemplateVersionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLaunchTemplateVersionsRequest::getLaunchTemplateId() const {
  return launchTemplateId_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateId(const std::string &launchTemplateId) {
  launchTemplateId_ = launchTemplateId;
  setParameter(std::string("LaunchTemplateId"), launchTemplateId);
}

std::string DescribeLaunchTemplateVersionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeLaunchTemplateVersionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeLaunchTemplateVersionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeLaunchTemplateVersionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<long> DescribeLaunchTemplateVersionsRequest::getLaunchTemplateVersion() const {
  return launchTemplateVersion_;
}

void DescribeLaunchTemplateVersionsRequest::setLaunchTemplateVersion(const std::vector<long> &launchTemplateVersion) {
  launchTemplateVersion_ = launchTemplateVersion;
}

bool DescribeLaunchTemplateVersionsRequest::getDetailFlag() const {
  return detailFlag_;
}

void DescribeLaunchTemplateVersionsRequest::setDetailFlag(bool detailFlag) {
  detailFlag_ = detailFlag;
  setParameter(std::string("DetailFlag"), detailFlag ? "true" : "false");
}

