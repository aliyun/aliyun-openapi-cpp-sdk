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

#include <alibabacloud/r-kvstore/model/StartTairKVCacheCustomInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::StartTairKVCacheCustomInstanceRequest;

StartTairKVCacheCustomInstanceRequest::StartTairKVCacheCustomInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "StartTairKVCacheCustomInstance") {
  setMethod(HttpRequest::Method::Post);
}

StartTairKVCacheCustomInstanceRequest::~StartTairKVCacheCustomInstanceRequest() {}

long StartTairKVCacheCustomInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void StartTairKVCacheCustomInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string StartTairKVCacheCustomInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void StartTairKVCacheCustomInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string StartTairKVCacheCustomInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void StartTairKVCacheCustomInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string StartTairKVCacheCustomInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void StartTairKVCacheCustomInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string StartTairKVCacheCustomInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void StartTairKVCacheCustomInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long StartTairKVCacheCustomInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void StartTairKVCacheCustomInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string StartTairKVCacheCustomInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void StartTairKVCacheCustomInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

