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

#include <alibabacloud/r-kvstore/model/ResetTairKVCacheCustomInstancePasswordRequest.h>

using AlibabaCloud::R_kvstore::Model::ResetTairKVCacheCustomInstancePasswordRequest;

ResetTairKVCacheCustomInstancePasswordRequest::ResetTairKVCacheCustomInstancePasswordRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ResetTairKVCacheCustomInstancePassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetTairKVCacheCustomInstancePasswordRequest::~ResetTairKVCacheCustomInstancePasswordRequest() {}

long ResetTairKVCacheCustomInstancePasswordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getPassword() const {
  return password_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getSecurityToken() const {
  return securityToken_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getSourceBiz() const {
  return sourceBiz_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetTairKVCacheCustomInstancePasswordRequest::getOwnerId() const {
  return ownerId_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResetTairKVCacheCustomInstancePasswordRequest::getInstanceId() const {
  return instanceId_;
}

void ResetTairKVCacheCustomInstancePasswordRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

