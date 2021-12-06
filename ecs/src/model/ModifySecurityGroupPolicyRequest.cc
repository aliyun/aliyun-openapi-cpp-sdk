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

#include <alibabacloud/ecs/model/ModifySecurityGroupPolicyRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupPolicyRequest;

ModifySecurityGroupPolicyRequest::ModifySecurityGroupPolicyRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupPolicyRequest::~ModifySecurityGroupPolicyRequest() {}

long ModifySecurityGroupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySecurityGroupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupPolicyRequest::getClientToken() const {
  return clientToken_;
}

void ModifySecurityGroupPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifySecurityGroupPolicyRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void ModifySecurityGroupPolicyRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string ModifySecurityGroupPolicyRequest::getInnerAccessPolicy() const {
  return innerAccessPolicy_;
}

void ModifySecurityGroupPolicyRequest::setInnerAccessPolicy(const std::string &innerAccessPolicy) {
  innerAccessPolicy_ = innerAccessPolicy;
  setParameter(std::string("InnerAccessPolicy"), innerAccessPolicy);
}

std::string ModifySecurityGroupPolicyRequest::getRegionId() const {
  return regionId_;
}

void ModifySecurityGroupPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySecurityGroupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySecurityGroupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySecurityGroupPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySecurityGroupPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySecurityGroupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySecurityGroupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

