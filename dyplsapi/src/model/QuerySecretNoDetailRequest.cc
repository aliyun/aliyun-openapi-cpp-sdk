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

#include <alibabacloud/dyplsapi/model/QuerySecretNoDetailRequest.h>

using AlibabaCloud::Dyplsapi::Model::QuerySecretNoDetailRequest;

QuerySecretNoDetailRequest::QuerySecretNoDetailRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "QuerySecretNoDetail") {
  setMethod(HttpRequest::Method::Post);
}

QuerySecretNoDetailRequest::~QuerySecretNoDetailRequest() {}

long QuerySecretNoDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySecretNoDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySecretNoDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySecretNoDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySecretNoDetailRequest::getSecretNo() const {
  return secretNo_;
}

void QuerySecretNoDetailRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string QuerySecretNoDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySecretNoDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QuerySecretNoDetailRequest::getProdCode() const {
  return prodCode_;
}

void QuerySecretNoDetailRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

long QuerySecretNoDetailRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySecretNoDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySecretNoDetailRequest::getPoolKey() const {
  return poolKey_;
}

void QuerySecretNoDetailRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

