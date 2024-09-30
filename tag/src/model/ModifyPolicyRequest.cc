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

#include <alibabacloud/tag/model/ModifyPolicyRequest.h>

using AlibabaCloud::Tag::Model::ModifyPolicyRequest;

ModifyPolicyRequest::ModifyPolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ModifyPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyPolicyRequest::~ModifyPolicyRequest() {}

std::string ModifyPolicyRequest::getPolicyDesc() const {
  return policyDesc_;
}

void ModifyPolicyRequest::setPolicyDesc(const std::string &policyDesc) {
  policyDesc_ = policyDesc;
  setParameter(std::string("PolicyDesc"), policyDesc);
}

std::string ModifyPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ModifyPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ModifyPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifyPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyPolicyRequest::getPolicyContent() const {
  return policyContent_;
}

void ModifyPolicyRequest::setPolicyContent(const std::string &policyContent) {
  policyContent_ = policyContent;
  setParameter(std::string("PolicyContent"), policyContent);
}

bool ModifyPolicyRequest::getDryRun() const {
  return dryRun_;
}

void ModifyPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyPolicyRequest::getPolicyName() const {
  return policyName_;
}

void ModifyPolicyRequest::setPolicyName(const std::string &policyName) {
  policyName_ = policyName;
  setParameter(std::string("PolicyName"), policyName);
}

