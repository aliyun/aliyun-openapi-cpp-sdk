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

#include <alibabacloud/ess/model/SetInstancesProtectionRequest.h>

using AlibabaCloud::Ess::Model::SetInstancesProtectionRequest;

SetInstancesProtectionRequest::SetInstancesProtectionRequest()
    : RpcServiceRequest("ess", "2014-08-28", "SetInstancesProtection") {
  setMethod(HttpRequest::Method::Post);
}

SetInstancesProtectionRequest::~SetInstancesProtectionRequest() {}

std::string SetInstancesProtectionRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void SetInstancesProtectionRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string SetInstancesProtectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetInstancesProtectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetInstancesProtectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetInstancesProtectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SetInstancesProtectionRequest::getOwnerId() const {
  return ownerId_;
}

void SetInstancesProtectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> SetInstancesProtectionRequest::getInstanceId() const {
  return instanceId_;
}

void SetInstancesProtectionRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

bool SetInstancesProtectionRequest::getProtectedFromScaleIn() const {
  return protectedFromScaleIn_;
}

void SetInstancesProtectionRequest::setProtectedFromScaleIn(bool protectedFromScaleIn) {
  protectedFromScaleIn_ = protectedFromScaleIn;
  setParameter(std::string("ProtectedFromScaleIn"), protectedFromScaleIn ? "true" : "false");
}

