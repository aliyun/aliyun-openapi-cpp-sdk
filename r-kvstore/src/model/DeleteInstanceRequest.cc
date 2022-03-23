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

#include <alibabacloud/r-kvstore/model/DeleteInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteInstanceRequest;

DeleteInstanceRequest::DeleteInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteInstanceRequest::~DeleteInstanceRequest() {}

long DeleteInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DeleteInstanceRequest::getReleaseSubInstance() const {
  return releaseSubInstance_;
}

void DeleteInstanceRequest::setReleaseSubInstance(bool releaseSubInstance) {
  releaseSubInstance_ = releaseSubInstance;
  setParameter(std::string("ReleaseSubInstance"), releaseSubInstance ? "true" : "false");
}

std::string DeleteInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void DeleteInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DeleteInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteInstanceRequest::getGlobalInstanceId() const {
  return globalInstanceId_;
}

void DeleteInstanceRequest::setGlobalInstanceId(const std::string &globalInstanceId) {
  globalInstanceId_ = globalInstanceId;
  setParameter(std::string("GlobalInstanceId"), globalInstanceId);
}

std::string DeleteInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

