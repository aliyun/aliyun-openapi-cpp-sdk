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

#include <alibabacloud/ecs/model/DeleteSecurityGroupRequest.h>

using AlibabaCloud::Ecs::Model::DeleteSecurityGroupRequest;

DeleteSecurityGroupRequest::DeleteSecurityGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteSecurityGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSecurityGroupRequest::~DeleteSecurityGroupRequest() {}

long DeleteSecurityGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSecurityGroupRequest::getSecurityGroupId() const {
  return securityGroupId_;
}

void DeleteSecurityGroupRequest::setSecurityGroupId(const std::string &securityGroupId) {
  securityGroupId_ = securityGroupId;
  setParameter(std::string("SecurityGroupId"), securityGroupId);
}

std::string DeleteSecurityGroupRequest::getRegionId() const {
  return regionId_;
}

void DeleteSecurityGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSecurityGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSecurityGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSecurityGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSecurityGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSecurityGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSecurityGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

