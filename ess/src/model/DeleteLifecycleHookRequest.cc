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

#include <alibabacloud/ess/model/DeleteLifecycleHookRequest.h>

using AlibabaCloud::Ess::Model::DeleteLifecycleHookRequest;

DeleteLifecycleHookRequest::DeleteLifecycleHookRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DeleteLifecycleHook") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLifecycleHookRequest::~DeleteLifecycleHookRequest() {}

std::string DeleteLifecycleHookRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DeleteLifecycleHookRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DeleteLifecycleHookRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteLifecycleHookRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteLifecycleHookRequest::getLifecycleHookName() const {
  return lifecycleHookName_;
}

void DeleteLifecycleHookRequest::setLifecycleHookName(const std::string &lifecycleHookName) {
  lifecycleHookName_ = lifecycleHookName;
  setParameter(std::string("LifecycleHookName"), lifecycleHookName);
}

std::string DeleteLifecycleHookRequest::getRegionId() const {
  return regionId_;
}

void DeleteLifecycleHookRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLifecycleHookRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteLifecycleHookRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteLifecycleHookRequest::getLifecycleHookId() const {
  return lifecycleHookId_;
}

void DeleteLifecycleHookRequest::setLifecycleHookId(const std::string &lifecycleHookId) {
  lifecycleHookId_ = lifecycleHookId;
  setParameter(std::string("LifecycleHookId"), lifecycleHookId);
}

std::string DeleteLifecycleHookRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteLifecycleHookRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteLifecycleHookRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLifecycleHookRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

