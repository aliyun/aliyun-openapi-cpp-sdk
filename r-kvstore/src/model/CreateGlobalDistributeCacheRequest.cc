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

#include <alibabacloud/r-kvstore/model/CreateGlobalDistributeCacheRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateGlobalDistributeCacheRequest;

CreateGlobalDistributeCacheRequest::CreateGlobalDistributeCacheRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CreateGlobalDistributeCache") {
  setMethod(HttpRequest::Method::Post);
}

CreateGlobalDistributeCacheRequest::~CreateGlobalDistributeCacheRequest() {}

long CreateGlobalDistributeCacheRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateGlobalDistributeCacheRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateGlobalDistributeCacheRequest::getClientToken() const {
  return clientToken_;
}

void CreateGlobalDistributeCacheRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateGlobalDistributeCacheRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateGlobalDistributeCacheRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateGlobalDistributeCacheRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateGlobalDistributeCacheRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateGlobalDistributeCacheRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateGlobalDistributeCacheRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateGlobalDistributeCacheRequest::getEffectiveTime() const {
  return effectiveTime_;
}

void CreateGlobalDistributeCacheRequest::setEffectiveTime(const std::string &effectiveTime) {
  effectiveTime_ = effectiveTime;
  setParameter(std::string("EffectiveTime"), effectiveTime);
}

std::string CreateGlobalDistributeCacheRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateGlobalDistributeCacheRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateGlobalDistributeCacheRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateGlobalDistributeCacheRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateGlobalDistributeCacheRequest::getOwnerId() const {
  return ownerId_;
}

void CreateGlobalDistributeCacheRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateGlobalDistributeCacheRequest::getSeedSubInstanceId() const {
  return seedSubInstanceId_;
}

void CreateGlobalDistributeCacheRequest::setSeedSubInstanceId(const std::string &seedSubInstanceId) {
  seedSubInstanceId_ = seedSubInstanceId;
  setParameter(std::string("SeedSubInstanceId"), seedSubInstanceId);
}

