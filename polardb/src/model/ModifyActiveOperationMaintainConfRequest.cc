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

#include <alibabacloud/polardb/model/ModifyActiveOperationMaintainConfRequest.h>

using AlibabaCloud::Polardb::Model::ModifyActiveOperationMaintainConfRequest;

ModifyActiveOperationMaintainConfRequest::ModifyActiveOperationMaintainConfRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyActiveOperationMaintainConf") {
  setMethod(HttpRequest::Method::Post);
}

ModifyActiveOperationMaintainConfRequest::~ModifyActiveOperationMaintainConfRequest() {}

long ModifyActiveOperationMaintainConfRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyActiveOperationMaintainConfRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyActiveOperationMaintainConfRequest::getCycleTime() const {
  return cycleTime_;
}

void ModifyActiveOperationMaintainConfRequest::setCycleTime(const std::string &cycleTime) {
  cycleTime_ = cycleTime;
  setParameter(std::string("CycleTime"), cycleTime);
}

std::string ModifyActiveOperationMaintainConfRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyActiveOperationMaintainConfRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyActiveOperationMaintainConfRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyActiveOperationMaintainConfRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyActiveOperationMaintainConfRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyActiveOperationMaintainConfRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyActiveOperationMaintainConfRequest::getRegionId() const {
  return regionId_;
}

void ModifyActiveOperationMaintainConfRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyActiveOperationMaintainConfRequest::getMaintainStartTime() const {
  return maintainStartTime_;
}

void ModifyActiveOperationMaintainConfRequest::setMaintainStartTime(const std::string &maintainStartTime) {
  maintainStartTime_ = maintainStartTime;
  setParameter(std::string("MaintainStartTime"), maintainStartTime);
}

std::string ModifyActiveOperationMaintainConfRequest::getCycleType() const {
  return cycleType_;
}

void ModifyActiveOperationMaintainConfRequest::setCycleType(const std::string &cycleType) {
  cycleType_ = cycleType;
  setParameter(std::string("CycleType"), cycleType);
}

std::string ModifyActiveOperationMaintainConfRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyActiveOperationMaintainConfRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyActiveOperationMaintainConfRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyActiveOperationMaintainConfRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyActiveOperationMaintainConfRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyActiveOperationMaintainConfRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyActiveOperationMaintainConfRequest::getMaintainEndTime() const {
  return maintainEndTime_;
}

void ModifyActiveOperationMaintainConfRequest::setMaintainEndTime(const std::string &maintainEndTime) {
  maintainEndTime_ = maintainEndTime;
  setParameter(std::string("MaintainEndTime"), maintainEndTime);
}

std::string ModifyActiveOperationMaintainConfRequest::getComment() const {
  return comment_;
}

void ModifyActiveOperationMaintainConfRequest::setComment(const std::string &comment) {
  comment_ = comment;
  setParameter(std::string("Comment"), comment);
}

long ModifyActiveOperationMaintainConfRequest::getStatus() const {
  return status_;
}

void ModifyActiveOperationMaintainConfRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

