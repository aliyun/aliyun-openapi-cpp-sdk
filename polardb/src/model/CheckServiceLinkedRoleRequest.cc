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

#include <alibabacloud/polardb/model/CheckServiceLinkedRoleRequest.h>

using AlibabaCloud::Polardb::Model::CheckServiceLinkedRoleRequest;

CheckServiceLinkedRoleRequest::CheckServiceLinkedRoleRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CheckServiceLinkedRole") {
  setMethod(HttpRequest::Method::Post);
}

CheckServiceLinkedRoleRequest::~CheckServiceLinkedRoleRequest() {}

long CheckServiceLinkedRoleRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckServiceLinkedRoleRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckServiceLinkedRoleRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckServiceLinkedRoleRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckServiceLinkedRoleRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckServiceLinkedRoleRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckServiceLinkedRoleRequest::getOwnerId() const {
  return ownerId_;
}

void CheckServiceLinkedRoleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

