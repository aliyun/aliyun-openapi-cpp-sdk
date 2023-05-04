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

#include <alibabacloud/dyplsapi/model/LockSecretNoRequest.h>

using AlibabaCloud::Dyplsapi::Model::LockSecretNoRequest;

LockSecretNoRequest::LockSecretNoRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "LockSecretNo") {
  setMethod(HttpRequest::Method::Post);
}

LockSecretNoRequest::~LockSecretNoRequest() {}

long LockSecretNoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void LockSecretNoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string LockSecretNoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void LockSecretNoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string LockSecretNoRequest::getSecretNo() const {
  return secretNo_;
}

void LockSecretNoRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string LockSecretNoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void LockSecretNoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long LockSecretNoRequest::getOwnerId() const {
  return ownerId_;
}

void LockSecretNoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string LockSecretNoRequest::getPoolKey() const {
  return poolKey_;
}

void LockSecretNoRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

