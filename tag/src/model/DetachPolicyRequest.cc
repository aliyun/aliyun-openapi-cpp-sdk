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

#include <alibabacloud/tag/model/DetachPolicyRequest.h>

using AlibabaCloud::Tag::Model::DetachPolicyRequest;

DetachPolicyRequest::DetachPolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "DetachPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DetachPolicyRequest::~DetachPolicyRequest() {}

std::string DetachPolicyRequest::getTargetId() const {
  return targetId_;
}

void DetachPolicyRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string DetachPolicyRequest::getTargetType() const {
  return targetType_;
}

void DetachPolicyRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string DetachPolicyRequest::getPolicyId() const {
  return policyId_;
}

void DetachPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string DetachPolicyRequest::getRegionId() const {
  return regionId_;
}

void DetachPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DetachPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DetachPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DetachPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DetachPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DetachPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DetachPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

