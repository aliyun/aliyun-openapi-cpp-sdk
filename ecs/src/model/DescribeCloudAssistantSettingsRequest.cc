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

#include <alibabacloud/ecs/model/DescribeCloudAssistantSettingsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeCloudAssistantSettingsRequest;

DescribeCloudAssistantSettingsRequest::DescribeCloudAssistantSettingsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeCloudAssistantSettings") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudAssistantSettingsRequest::~DescribeCloudAssistantSettingsRequest() {}

long DescribeCloudAssistantSettingsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCloudAssistantSettingsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeCloudAssistantSettingsRequest::getSettingType() const {
  return settingType_;
}

void DescribeCloudAssistantSettingsRequest::setSettingType(const std::vector<std::string> &settingType) {
  settingType_ = settingType;
}

std::string DescribeCloudAssistantSettingsRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudAssistantSettingsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeCloudAssistantSettingsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCloudAssistantSettingsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCloudAssistantSettingsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCloudAssistantSettingsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCloudAssistantSettingsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCloudAssistantSettingsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

