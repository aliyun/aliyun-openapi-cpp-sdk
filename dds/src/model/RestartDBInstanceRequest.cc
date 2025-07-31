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

#include <alibabacloud/dds/model/RestartDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RestartDBInstanceRequest;

RestartDBInstanceRequest::RestartDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "RestartDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestartDBInstanceRequest::~RestartDBInstanceRequest() {}

long RestartDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestartDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestartDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestartDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestartDBInstanceRequest::getSwitchMode() const {
  return switchMode_;
}

void RestartDBInstanceRequest::setSwitchMode(const std::string &switchMode) {
  switchMode_ = switchMode;
  setParameter(std::string("SwitchMode"), switchMode);
}

std::string RestartDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RestartDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RestartDBInstanceRequest::getNodeId() const {
  return nodeId_;
}

void RestartDBInstanceRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setParameter(std::string("NodeId"), nodeId);
}

std::string RestartDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestartDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestartDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestartDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestartDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RestartDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

