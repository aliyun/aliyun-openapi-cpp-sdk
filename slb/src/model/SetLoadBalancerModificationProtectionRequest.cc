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

#include <alibabacloud/slb/model/SetLoadBalancerModificationProtectionRequest.h>

using AlibabaCloud::Slb::Model::SetLoadBalancerModificationProtectionRequest;

SetLoadBalancerModificationProtectionRequest::SetLoadBalancerModificationProtectionRequest()
    : RpcServiceRequest("slb", "2014-05-15", "SetLoadBalancerModificationProtection") {
  setMethod(HttpRequest::Method::Post);
}

SetLoadBalancerModificationProtectionRequest::~SetLoadBalancerModificationProtectionRequest() {}

std::string SetLoadBalancerModificationProtectionRequest::getModificationProtectionReason() const {
  return modificationProtectionReason_;
}

void SetLoadBalancerModificationProtectionRequest::setModificationProtectionReason(const std::string &modificationProtectionReason) {
  modificationProtectionReason_ = modificationProtectionReason;
  setParameter(std::string("ModificationProtectionReason"), modificationProtectionReason);
}

long SetLoadBalancerModificationProtectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetLoadBalancerModificationProtectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetLoadBalancerModificationProtectionRequest::getRegionId() const {
  return regionId_;
}

void SetLoadBalancerModificationProtectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetLoadBalancerModificationProtectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetLoadBalancerModificationProtectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetLoadBalancerModificationProtectionRequest::getModificationProtectionStatus() const {
  return modificationProtectionStatus_;
}

void SetLoadBalancerModificationProtectionRequest::setModificationProtectionStatus(const std::string &modificationProtectionStatus) {
  modificationProtectionStatus_ = modificationProtectionStatus;
  setParameter(std::string("ModificationProtectionStatus"), modificationProtectionStatus);
}

std::string SetLoadBalancerModificationProtectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetLoadBalancerModificationProtectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SetLoadBalancerModificationProtectionRequest::getOwnerId() const {
  return ownerId_;
}

void SetLoadBalancerModificationProtectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetLoadBalancerModificationProtectionRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void SetLoadBalancerModificationProtectionRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

