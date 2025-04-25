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

#include <alibabacloud/ess/model/DeleteScalingConfigurationRequest.h>

using AlibabaCloud::Ess::Model::DeleteScalingConfigurationRequest;

DeleteScalingConfigurationRequest::DeleteScalingConfigurationRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DeleteScalingConfiguration") {
  setMethod(HttpRequest::Method::Post);
}

DeleteScalingConfigurationRequest::~DeleteScalingConfigurationRequest() {}

std::string DeleteScalingConfigurationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteScalingConfigurationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteScalingConfigurationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteScalingConfigurationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteScalingConfigurationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteScalingConfigurationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteScalingConfigurationRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteScalingConfigurationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteScalingConfigurationRequest::getScalingConfigurationId() const {
  return scalingConfigurationId_;
}

void DeleteScalingConfigurationRequest::setScalingConfigurationId(const std::string &scalingConfigurationId) {
  scalingConfigurationId_ = scalingConfigurationId;
  setParameter(std::string("ScalingConfigurationId"), scalingConfigurationId);
}

