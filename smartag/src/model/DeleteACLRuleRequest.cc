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

#include <alibabacloud/smartag/model/DeleteACLRuleRequest.h>

using AlibabaCloud::Smartag::Model::DeleteACLRuleRequest;

DeleteACLRuleRequest::DeleteACLRuleRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteACLRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteACLRuleRequest::~DeleteACLRuleRequest() {}

long DeleteACLRuleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteACLRuleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteACLRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteACLRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteACLRuleRequest::getAclId() const {
  return aclId_;
}

void DeleteACLRuleRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DeleteACLRuleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteACLRuleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteACLRuleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteACLRuleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteACLRuleRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteACLRuleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteACLRuleRequest::getAcrId() const {
  return acrId_;
}

void DeleteACLRuleRequest::setAcrId(const std::string &acrId) {
  acrId_ = acrId;
  setParameter(std::string("AcrId"), acrId);
}

