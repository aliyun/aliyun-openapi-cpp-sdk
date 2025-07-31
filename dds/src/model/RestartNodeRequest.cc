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

#include <alibabacloud/dds/model/RestartNodeRequest.h>

using AlibabaCloud::Dds::Model::RestartNodeRequest;

RestartNodeRequest::RestartNodeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "RestartNode") {
  setMethod(HttpRequest::Method::Post);
}

RestartNodeRequest::~RestartNodeRequest() {}

long RestartNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartNodeRequest::getRoleId() const {
  return roleId_;
}

void RestartNodeRequest::setRoleId(const std::string &roleId) {
  roleId_ = roleId;
  setParameter(std::string("RoleId"), roleId);
}

std::string RestartNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartNodeRequest::getSwitchMode() const {
  return switchMode_;
}

void RestartNodeRequest::setSwitchMode(const std::string &switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), switchMode);
}

std::string RestartNodeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RestartNodeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RestartNodeRequest::getNodeId() const {
  return nodeId_;
}

void RestartNodeRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string RestartNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartNodeRequest::getOwnerId() const {
  return ownerId_;
}

void RestartNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

