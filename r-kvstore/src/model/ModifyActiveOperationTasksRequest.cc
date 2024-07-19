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

#include <alibabacloud/r-kvstore/model/ModifyActiveOperationTasksRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyActiveOperationTasksRequest;

ModifyActiveOperationTasksRequest::ModifyActiveOperationTasksRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyActiveOperationTasks") {
  setMethod(HttpRequest::Method::Post);
}

ModifyActiveOperationTasksRequest::~ModifyActiveOperationTasksRequest() {}

long ModifyActiveOperationTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyActiveOperationTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyActiveOperationTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyActiveOperationTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyActiveOperationTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyActiveOperationTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyActiveOperationTasksRequest::getRegionId() const {
  return regionId_;
}

void ModifyActiveOperationTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyActiveOperationTasksRequest::getSwitchTime() const {
  return switchTime_;
}

void ModifyActiveOperationTasksRequest::setSwitchTime(const std::string &switchTime) {
  switchTime_ = switchTime;
  setParameter(std::string("SwitchTime"), switchTime);
}

std::string ModifyActiveOperationTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyActiveOperationTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyActiveOperationTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyActiveOperationTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyActiveOperationTasksRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyActiveOperationTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyActiveOperationTasksRequest::getIds() const {
  return ids_;
}

void ModifyActiveOperationTasksRequest::setIds(const std::string &ids) {
  ids_ = ids;
  setParameter(std::string("Ids"), ids);
}

int ModifyActiveOperationTasksRequest::getImmediateStart() const {
  return immediateStart_;
}

void ModifyActiveOperationTasksRequest::setImmediateStart(int immediateStart) {
  immediateStart_ = immediateStart;
  setParameter(std::string("ImmediateStart"), std::to_string(immediateStart));
}

