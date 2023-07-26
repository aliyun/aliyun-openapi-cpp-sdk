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

#include <alibabacloud/polardb/model/CreateServiceLinkedRoleRequest.h>

using AlibabaCloud::Polardb::Model::CreateServiceLinkedRoleRequest;

CreateServiceLinkedRoleRequest::CreateServiceLinkedRoleRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CreateServiceLinkedRoleRequest::~CreateServiceLinkedRoleRequest() {}

long CreateServiceLinkedRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateServiceLinkedRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateServiceLinkedRoleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateServiceLinkedRoleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateServiceLinkedRoleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateServiceLinkedRoleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateServiceLinkedRoleRequest::getOwnerId() const {
  return ownerId_;
}

void CreateServiceLinkedRoleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

