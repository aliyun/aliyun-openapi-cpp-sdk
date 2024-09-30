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

#include <alibabacloud/tag/model/CreatePolicyRequest.h>

using AlibabaCloud::Tag::Model::CreatePolicyRequest;

CreatePolicyRequest::CreatePolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "CreatePolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreatePolicyRequest::~CreatePolicyRequest() {}

std::string CreatePolicyRequest::getPolicyDesc() const {
  return policyDesc_;
}

void CreatePolicyRequest::setPolicyDesc(const std::string &policyDesc) {
  policyDesc_ = policyDesc;
  setParameter(std::string("PolicyDesc"), policyDesc);
}

std::string CreatePolicyRequest::getRegionId() const {
  return regionId_;
}

void CreatePolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePolicyRequest::getPolicyContent() const {
  return policyContent_;
}

void CreatePolicyRequest::setPolicyContent(const std::string &policyContent) {
  policyContent_ = policyContent;
  setParameter(std::string("PolicyContent"), policyContent);
}

bool CreatePolicyRequest::getDryRun() const {
  return dryRun_;
}

void CreatePolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreatePolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CreatePolicyRequest::getUserType() const {
  return userType_;
}

void CreatePolicyRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long CreatePolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreatePolicyRequest::getPolicyName() const {
  return policyName_;
}

void CreatePolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

