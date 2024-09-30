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

#include <alibabacloud/tag/model/GetPolicyRequest.h>

using AlibabaCloud::Tag::Model::GetPolicyRequest;

GetPolicyRequest::GetPolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "GetPolicy") {
  setMethod(HttpRequest::Method::Post);
}

GetPolicyRequest::~GetPolicyRequest() {}

std::string GetPolicyRequest::getPolicyId() const {
  return policyId_;
}

void GetPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string GetPolicyRequest::getRegionId() const {
  return regionId_;
}

void GetPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long GetPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void GetPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

