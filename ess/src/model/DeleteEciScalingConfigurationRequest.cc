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

#include <alibabacloud/ess/model/DeleteEciScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::DeleteEciScalingConfigurationRequest;

DeleteEciScalingConfigurationRequest::DeleteEciScalingConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DeleteEciScalingConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEciScalingConfigurationRequest::~DeleteEciScalingConfigurationRequest() {}

std::string DeleteEciScalingConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteEciScalingConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteEciScalingConfigurationRequest::getRegionId() const {
  return regionId_;
}

void DeleteEciScalingConfigurationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteEciScalingConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteEciScalingConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteEciScalingConfigurationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteEciScalingConfigurationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteEciScalingConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteEciScalingConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteEciScalingConfigurationRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void DeleteEciScalingConfigurationRequest::setScalingConfigurationId(const std::string &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
  setParameter(std::string("ScalingConfigurationId"), scalingConfigurationId);
}

