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

#include <alibabacloud/smartag/model/CreateACLRequest.h>

using AlibabaCloud::Smartag::Model::CreateACLRequest;

CreateACLRequest::CreateACLRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "CreateACL") {
  setMethod(HttpRequest::Method::Post);
}

CreateACLRequest::~CreateACLRequest() {}

long CreateACLRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateACLRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateACLRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateACLRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateACLRequest::getRegionId() const {
  return regionId_;
}

void CreateACLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateACLRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateACLRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateACLRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateACLRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateACLRequest::getOwnerId() const {
  return ownerId_;
}

void CreateACLRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateACLRequest::getName() const {
  return name_;
}

void CreateACLRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

