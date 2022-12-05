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

#include <alibabacloud/polardb/model/TempModifyDBNodeRequest.h>

using AlibabaCloud::Polardb::Model::TempModifyDBNodeRequest;

TempModifyDBNodeRequest::TempModifyDBNodeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "TempModifyDBNode") {
  setMethod(HttpRequest::Method::Post);
}

TempModifyDBNodeRequest::~TempModifyDBNodeRequest() {}

long TempModifyDBNodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TempModifyDBNodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TempModifyDBNodeRequest::getClientToken() const {
  return clientToken_;
}

void TempModifyDBNodeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string TempModifyDBNodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TempModifyDBNodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TempModifyDBNodeRequest::getRestoreTime() const {
  return restoreTime_;
}

void TempModifyDBNodeRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string TempModifyDBNodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TempModifyDBNodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TempModifyDBNodeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void TempModifyDBNodeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string TempModifyDBNodeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TempModifyDBNodeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string TempModifyDBNodeRequest::getOperationType() const {
  return operationType_;
}

void TempModifyDBNodeRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

long TempModifyDBNodeRequest::getOwnerId() const {
  return ownerId_;
}

void TempModifyDBNodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TempModifyDBNodeRequest::getModifyType() const {
  return modifyType_;
}

void TempModifyDBNodeRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

std::vector<TempModifyDBNodeRequest::DBNode> TempModifyDBNodeRequest::getDBNode() const {
  return dBNode_;
}

void TempModifyDBNodeRequest::setDBNode(const std::vector<TempModifyDBNodeRequest::DBNode> &dBNode) {
  dBNode_ = dBNode;
  for(int dep1 = 0; dep1 != dBNode.size(); dep1++) {
  auto dBNodeObj = dBNode.at(dep1);
  std::string dBNodeObjStr = std::string("DBNode") + "." + std::to_string(dep1 + 1);
    setParameter(dBNodeObjStr + ".TargetClass", dBNodeObj.targetClass);
    setParameter(dBNodeObjStr + ".ZoneId", dBNodeObj.zoneId);
  }
}

