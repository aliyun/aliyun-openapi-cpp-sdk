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

#include <alibabacloud/tag/model/AttachPolicyRequest.h>

using AlibabaCloud::Tag::Model::AttachPolicyRequest;

AttachPolicyRequest::AttachPolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "AttachPolicy") {
  setMethod(HttpRequest::Method::Post);
}

AttachPolicyRequest::~AttachPolicyRequest() {}

std::string AttachPolicyRequest::getTargetId() const {
  return targetId_;
}

void AttachPolicyRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string AttachPolicyRequest::getTargetType() const {
  return targetType_;
}

void AttachPolicyRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string AttachPolicyRequest::getPolicyId() const {
  return policyId_;
}

void AttachPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string AttachPolicyRequest::getRegionId() const {
  return regionId_;
}

void AttachPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AttachPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AttachPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AttachPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AttachPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AttachPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void AttachPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

