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

#include <alibabacloud/dyplsapi/model/CreateSubscriptionRequest.h>

using AlibabaCloud::Dyplsapi::Model::CreateSubscriptionRequest;

CreateSubscriptionRequest::CreateSubscriptionRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "CreateSubscription") {
  setMethod(HttpRequest::Method::Post);
}

CreateSubscriptionRequest::~CreateSubscriptionRequest() {}

long CreateSubscriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSubscriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSubscriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateSubscriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateSubscriptionRequest::getSecretNo() const {
  return secretNo_;
}

void CreateSubscriptionRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string CreateSubscriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSubscriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSubscriptionRequest::getProdCode() const {
  return prodCode_;
}

void CreateSubscriptionRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string CreateSubscriptionRequest::getBindToken() const {
  return bindToken_;
}

void CreateSubscriptionRequest::setBindToken(const std::string &bindToken) {
  bindToken_ = bindToken;
  setParameter(std::string("BindToken"), bindToken);
}

long CreateSubscriptionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSubscriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSubscriptionRequest::getPhoneNo() const {
  return phoneNo_;
}

void CreateSubscriptionRequest::setPhoneNo(const std::string &phoneNo) {
  phoneNo_ = phoneNo;
  setParameter(std::string("PhoneNo"), phoneNo);
}

std::string CreateSubscriptionRequest::getPoolKey() const {
  return poolKey_;
}

void CreateSubscriptionRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

