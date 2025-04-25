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

#include <alibabacloud/ess/model/RebalanceInstancesRequest.h>

using AlibabaCloud::Ess::Model::RebalanceInstancesRequest;

RebalanceInstancesRequest::RebalanceInstancesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "RebalanceInstances") {
  setMethod(HttpRequest::Method::Post);
}

RebalanceInstancesRequest::~RebalanceInstancesRequest() {}

long RebalanceInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RebalanceInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RebalanceInstancesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void RebalanceInstancesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string RebalanceInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RebalanceInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RebalanceInstancesRequest::getRegionId() const {
  return regionId_;
}

void RebalanceInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RebalanceInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RebalanceInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RebalanceInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RebalanceInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RebalanceInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void RebalanceInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

