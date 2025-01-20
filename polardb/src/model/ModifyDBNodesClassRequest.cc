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

#include <alibabacloud/polardb/model/ModifyDBNodesClassRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodesClassRequest;

ModifyDBNodesClassRequest::ModifyDBNodesClassRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodesClass") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodesClassRequest::~ModifyDBNodesClassRequest() {}

long ModifyDBNodesClassRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodesClassRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodesClassRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBNodesClassRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBNodesClassRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBNodesClassRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBNodesClassRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodesClassRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodesClassRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodesClassRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodesClassRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodesClassRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodesClassRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodesClassRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBNodesClassRequest::getPlannedFlashingOffTime() const {
  return plannedFlashingOffTime_;
}

void ModifyDBNodesClassRequest::setPlannedFlashingOffTime(const std::string &plannedFlashingOffTime) {
  plannedFlashingOffTime_ = plannedFlashingOffTime;
  setParameter(std::string("PlannedFlashingOffTime"), plannedFlashingOffTime);
}

long ModifyDBNodesClassRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodesClassRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBNodesClassRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBNodesClassRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBNodesClassRequest::getModifyType() const {
  return modifyType_;
}

void ModifyDBNodesClassRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

std::string ModifyDBNodesClassRequest::getSubCategory() const {
  return subCategory_;
}

void ModifyDBNodesClassRequest::setSubCategory(const std::string &subCategory) {
  subCategory_ = subCategory;
  setParameter(std::string("SubCategory"), subCategory);
}

std::vector<ModifyDBNodesClassRequest::DBNode> ModifyDBNodesClassRequest::getDBNode() const {
  return dBNode_;
}

void ModifyDBNodesClassRequest::setDBNode(const std::vector<ModifyDBNodesClassRequest::DBNode> &dBNode) {
  dBNode_ = dBNode;
  for(int dep1 = 0; dep1 != dBNode.size(); dep1++) {
  auto dBNodeObj = dBNode.at(dep1);
  std::string dBNodeObjStr = std::string("DBNode") + "." + std::to_string(dep1 + 1);
    setParameter(dBNodeObjStr + ".DBNodeId", dBNodeObj.dBNodeId);
    setParameter(dBNodeObjStr + ".TargetClass", dBNodeObj.targetClass);
  }
}

