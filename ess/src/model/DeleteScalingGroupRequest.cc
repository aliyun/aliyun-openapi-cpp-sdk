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

#include <alibabacloud/ess/model/DeleteScalingGroupRequest.h>

using AlibabaCloud::Ess::Model::DeleteScalingGroupRequest;

DeleteScalingGroupRequest::DeleteScalingGroupRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DeleteScalingGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteScalingGroupRequest::~DeleteScalingGroupRequest() {}

std::string DeleteScalingGroupRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DeleteScalingGroupRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DeleteScalingGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteScalingGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteScalingGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteScalingGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteScalingGroupRequest::getForceDelete() const {
  return forceDelete_;
}

void DeleteScalingGroupRequest::setForceDelete(bool forceDelete) {
  forceDelete_ = forceDelete;
  setParameter(std::string("ForceDelete"), forceDelete ? "true" : "false");
}

std::string DeleteScalingGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteScalingGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteScalingGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteScalingGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteScalingGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteScalingGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

