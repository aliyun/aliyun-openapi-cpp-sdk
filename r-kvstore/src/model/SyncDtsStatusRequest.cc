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

#include <alibabacloud/r-kvstore/model/SyncDtsStatusRequest.h>

using AlibabaCloud::R_kvstore::Model::SyncDtsStatusRequest;

SyncDtsStatusRequest::SyncDtsStatusRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "SyncDtsStatus") {
  setMethod(HttpRequest::Method::Post);
}

SyncDtsStatusRequest::~SyncDtsStatusRequest() {}

long SyncDtsStatusRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SyncDtsStatusRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SyncDtsStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SyncDtsStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SyncDtsStatusRequest::getSecurityToken() const {
  return securityToken_;
}

void SyncDtsStatusRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SyncDtsStatusRequest::getRegionId() const {
  return regionId_;
}

void SyncDtsStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SyncDtsStatusRequest::getTaskId() const {
  return taskId_;
}

void SyncDtsStatusRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string SyncDtsStatusRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SyncDtsStatusRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SyncDtsStatusRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SyncDtsStatusRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SyncDtsStatusRequest::getOwnerId() const {
  return ownerId_;
}

void SyncDtsStatusRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SyncDtsStatusRequest::getInstanceId() const {
  return instanceId_;
}

void SyncDtsStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SyncDtsStatusRequest::getStatus() const {
  return status_;
}

void SyncDtsStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

