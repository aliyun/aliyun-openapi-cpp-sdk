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

#include <alibabacloud/adb/model/ModifyDBResourceGroupRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBResourceGroupRequest;

ModifyDBResourceGroupRequest::ModifyDBResourceGroupRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyDBResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBResourceGroupRequest::~ModifyDBResourceGroupRequest() {}

long ModifyDBResourceGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBResourceGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyDBResourceGroupRequest::getNodeNum() const {
  return nodeNum_;
}

void ModifyDBResourceGroupRequest::setNodeNum(int nodeNum) {
  nodeNum_ = nodeNum;
  setParameter(std::string("NodeNum"), std::to_string(nodeNum));
}

std::string ModifyDBResourceGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBResourceGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBResourceGroupRequest::getGroupType() const {
  return groupType_;
}

void ModifyDBResourceGroupRequest::setGroupType(const std::string &groupType) {
  groupType_ = groupType;
  setParameter(std::string("GroupType"), groupType);
}

std::string ModifyDBResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBResourceGroupRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBResourceGroupRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBResourceGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBResourceGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBResourceGroupRequest::getGroupName() const {
  return groupName_;
}

void ModifyDBResourceGroupRequest::setGroupName(const std::string &groupName) {
  groupName_ = groupName;
  setParameter(std::string("GroupName"), groupName);
}

