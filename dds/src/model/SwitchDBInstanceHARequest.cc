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

#include <alibabacloud/dds/model/SwitchDBInstanceHARequest.h>

using AlibabaCloud::Dds::Model::SwitchDBInstanceHARequest;

SwitchDBInstanceHARequest::SwitchDBInstanceHARequest()
    : RpcServiceRequest("dds", "2015-12-01", "SwitchDBInstanceHA") {
  setMethod(HttpRequest::Method::Post);
}

SwitchDBInstanceHARequest::~SwitchDBInstanceHARequest() {}

long SwitchDBInstanceHARequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchDBInstanceHARequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchDBInstanceHARequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchDBInstanceHARequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int SwitchDBInstanceHARequest::getSwitchMode() const {
  return switchMode_;
}

void SwitchDBInstanceHARequest::setSwitchMode(int switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), std::to_string(switchMode));
}

std::string SwitchDBInstanceHARequest::getRoleIds() const {
  return roleIds_;
}

void SwitchDBInstanceHARequest::setRoleIds(const std::string &roleIds) {
  roleIds_ = roleIds;
  setParameter(std::string("RoleIds"), roleIds);
}

std::string SwitchDBInstanceHARequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void SwitchDBInstanceHARequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string SwitchDBInstanceHARequest::getNodeId() const {
  return nodeId_;
}

void SwitchDBInstanceHARequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string SwitchDBInstanceHARequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchDBInstanceHARequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchDBInstanceHARequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchDBInstanceHARequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchDBInstanceHARequest::getOwnerId() const {
  return ownerId_;
}

void SwitchDBInstanceHARequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

