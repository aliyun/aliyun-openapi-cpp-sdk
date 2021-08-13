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

#include <alibabacloud/smartag/model/ModifyACLRequest.h>

using AlibabaCloud::Smartag::Model::ModifyACLRequest;

ModifyACLRequest::ModifyACLRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "ModifyACL") {
  setMethod(HttpRequest::Method::Post);
}

ModifyACLRequest::~ModifyACLRequest() {}

long ModifyACLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyACLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyACLRequest::getRegionId() const {
  return regionId_;
}

void ModifyACLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyACLRequest::getAclId() const {
  return aclId_;
}

void ModifyACLRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string ModifyACLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyACLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyACLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyACLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyACLRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyACLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyACLRequest::getName() const {
  return name_;
}

void ModifyACLRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

