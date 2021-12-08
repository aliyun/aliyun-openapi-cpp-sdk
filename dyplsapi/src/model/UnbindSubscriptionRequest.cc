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

#include <alibabacloud/dyplsapi/model/UnbindSubscriptionRequest.h>

using AlibabaCloud::Dyplsapi::Model::UnbindSubscriptionRequest;

UnbindSubscriptionRequest::UnbindSubscriptionRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "UnbindSubscription") {
  setMethod(HttpRequest::Method::Post);
}

UnbindSubscriptionRequest::~UnbindSubscriptionRequest() {}

long UnbindSubscriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnbindSubscriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnbindSubscriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnbindSubscriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnbindSubscriptionRequest::getProductType() const {
  return productType_;
}

void UnbindSubscriptionRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string UnbindSubscriptionRequest::getSubsId() const {
  return subsId_;
}

void UnbindSubscriptionRequest::setSubsId(const std::string &subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), subsId);
}

std::string UnbindSubscriptionRequest::getSecretNo() const {
  return secretNo_;
}

void UnbindSubscriptionRequest::setSecretNo(const std::string &secretNo) {
  secretNo_ = secretNo;
  setParameter(std::string("SecretNo"), secretNo);
}

std::string UnbindSubscriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnbindSubscriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long UnbindSubscriptionRequest::getOwnerId() const {
  return ownerId_;
}

void UnbindSubscriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UnbindSubscriptionRequest::getPoolKey() const {
  return poolKey_;
}

void UnbindSubscriptionRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

