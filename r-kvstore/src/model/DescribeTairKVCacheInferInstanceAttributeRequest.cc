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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheInferInstanceAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTairKVCacheInferInstanceAttributeRequest;

DescribeTairKVCacheInferInstanceAttributeRequest::DescribeTairKVCacheInferInstanceAttributeRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTairKVCacheInferInstanceAttribute") {
  setMethod(HttpRequest::Method::Get);
}

DescribeTairKVCacheInferInstanceAttributeRequest::~DescribeTairKVCacheInferInstanceAttributeRequest() {}

long DescribeTairKVCacheInferInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTairKVCacheInferInstanceAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTairKVCacheInferInstanceAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeTairKVCacheInferInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTairKVCacheInferInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTairKVCacheInferInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTairKVCacheInferInstanceAttributeRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeTairKVCacheInferInstanceAttributeRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

