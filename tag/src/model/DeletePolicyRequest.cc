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

#include <alibabacloud/tag/model/DeletePolicyRequest.h>

using AlibabaCloud::Tag::Model::DeletePolicyRequest;

DeletePolicyRequest::DeletePolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "DeletePolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeletePolicyRequest::~DeletePolicyRequest() {}

std::string DeletePolicyRequest::getPolicyId() const {
  return policyId_;
}

void DeletePolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string DeletePolicyRequest::getRegionId() const {
  return regionId_;
}

void DeletePolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletePolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeletePolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeletePolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeletePolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeletePolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

