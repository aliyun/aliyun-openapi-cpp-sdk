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

#include <alibabacloud/adb/model/ModifyDBClusterResourceGroupRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterResourceGroupRequest;

ModifyDBClusterResourceGroupRequest::ModifyDBClusterResourceGroupRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyDBClusterResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterResourceGroupRequest::~ModifyDBClusterResourceGroupRequest() {}

long ModifyDBClusterResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterResourceGroupRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterResourceGroupRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void ModifyDBClusterResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

