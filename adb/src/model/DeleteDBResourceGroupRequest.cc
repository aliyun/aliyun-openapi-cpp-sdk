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

#include <alibabacloud/adb/model/DeleteDBResourceGroupRequest.h>

using AlibabaCloud::Adb::Model::DeleteDBResourceGroupRequest;

DeleteDBResourceGroupRequest::DeleteDBResourceGroupRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DeleteDBResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBResourceGroupRequest::~DeleteDBResourceGroupRequest() {}

long DeleteDBResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBResourceGroupRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBResourceGroupRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteDBResourceGroupRequest::getGroupName() const {
  return groupName_;
}

void DeleteDBResourceGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

