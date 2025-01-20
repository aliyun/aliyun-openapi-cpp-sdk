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

#include <alibabacloud/polardb/model/ModifyDBNodeClassRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodeClassRequest;

ModifyDBNodeClassRequest::ModifyDBNodeClassRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodeClass") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeClassRequest::~ModifyDBNodeClassRequest() {}

long ModifyDBNodeClassRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodeClassRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeClassRequest::getClientToken() const {
  return clientToken_;
}

void ModifyDBNodeClassRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyDBNodeClassRequest::getPlannedEndTime() const {
  return plannedEndTime_;
}

void ModifyDBNodeClassRequest::setPlannedEndTime(const std::string &plannedEndTime) {
  plannedEndTime_ = plannedEndTime;
  setParameter(std::string("PlannedEndTime"), plannedEndTime);
}

std::string ModifyDBNodeClassRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodeClassRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodeClassRequest::getDBNodeType() const {
  return dBNodeType_;
}

void ModifyDBNodeClassRequest::setDBNodeType(const std::string &dBNodeType) {
  dBNodeType_ = dBNodeType;
  setParameter(std::string("DBNodeType"), dBNodeType);
}

std::string ModifyDBNodeClassRequest::getDBNodeTargetClass() const {
  return dBNodeTargetClass_;
}

void ModifyDBNodeClassRequest::setDBNodeTargetClass(const std::string &dBNodeTargetClass) {
  dBNodeTargetClass_ = dBNodeTargetClass;
  setParameter(std::string("DBNodeTargetClass"), dBNodeTargetClass);
}

std::string ModifyDBNodeClassRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodeClassRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodeClassRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodeClassRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodeClassRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodeClassRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBNodeClassRequest::getPlannedFlashingOffTime() const {
  return plannedFlashingOffTime_;
}

void ModifyDBNodeClassRequest::setPlannedFlashingOffTime(const std::string &plannedFlashingOffTime) {
  plannedFlashingOffTime_ = plannedFlashingOffTime;
  setParameter(std::string("PlannedFlashingOffTime"), plannedFlashingOffTime);
}

long ModifyDBNodeClassRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodeClassRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBNodeClassRequest::getPlannedStartTime() const {
  return plannedStartTime_;
}

void ModifyDBNodeClassRequest::setPlannedStartTime(const std::string &plannedStartTime) {
  plannedStartTime_ = plannedStartTime;
  setParameter(std::string("PlannedStartTime"), plannedStartTime);
}

std::string ModifyDBNodeClassRequest::getModifyType() const {
  return modifyType_;
}

void ModifyDBNodeClassRequest::setModifyType(const std::string &modifyType) {
  modifyType_ = modifyType;
  setParameter(std::string("ModifyType"), modifyType);
}

std::string ModifyDBNodeClassRequest::getSubCategory() const {
  return subCategory_;
}

void ModifyDBNodeClassRequest::setSubCategory(const std::string &subCategory) {
  subCategory_ = subCategory;
  setParameter(std::string("SubCategory"), subCategory);
}

