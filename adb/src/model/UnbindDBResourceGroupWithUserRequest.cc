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

#include <alibabacloud/adb/model/UnbindDBResourceGroupWithUserRequest.h>

using AlibabaCloud::Adb::Model::UnbindDBResourceGroupWithUserRequest;

UnbindDBResourceGroupWithUserRequest::UnbindDBResourceGroupWithUserRequest()
    : RpcServiceRequest("adb", "2019-03-15", "UnbindDBResourceGroupWithUser") {
  setMethod(HttpRequest::Method::Post);
}

UnbindDBResourceGroupWithUserRequest::~UnbindDBResourceGroupWithUserRequest() {}

long UnbindDBResourceGroupWithUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnbindDBResourceGroupWithUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnbindDBResourceGroupWithUserRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnbindDBResourceGroupWithUserRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnbindDBResourceGroupWithUserRequest::getGroupUser() const {
  return groupUser_;
}

void UnbindDBResourceGroupWithUserRequest::setGroupUser(const std::string &groupUser) {
  groupUser_ = groupUser;
  setParameter(std::string("GroupUser"), groupUser);
}

std::string UnbindDBResourceGroupWithUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnbindDBResourceGroupWithUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnbindDBResourceGroupWithUserRequest::getDBClusterId() const {
  return dBClusterId_;
}

void UnbindDBResourceGroupWithUserRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string UnbindDBResourceGroupWithUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnbindDBResourceGroupWithUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UnbindDBResourceGroupWithUserRequest::getOwnerId() const {
  return ownerId_;
}

void UnbindDBResourceGroupWithUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnbindDBResourceGroupWithUserRequest::getGroupName() const {
  return groupName_;
}

void UnbindDBResourceGroupWithUserRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

