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

#include <alibabacloud/dyplsapi/model/QuerySubscriptionDetailRequest.h>

using AlibabaCloud::Dyplsapi::Model::QuerySubscriptionDetailRequest;

QuerySubscriptionDetailRequest::QuerySubscriptionDetailRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "QuerySubscriptionDetail") {
  setMethod(HttpRequest::Method::Post);
}

QuerySubscriptionDetailRequest::~QuerySubscriptionDetailRequest() {}

long QuerySubscriptionDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QuerySubscriptionDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QuerySubscriptionDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QuerySubscriptionDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QuerySubscriptionDetailRequest::getProductType() const {
  return productType_;
}

void QuerySubscriptionDetailRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string QuerySubscriptionDetailRequest::getSubsId() const {
  return subsId_;
}

void QuerySubscriptionDetailRequest::setSubsId(const std::string &subsId) {
  subsId_ = subsId;
  setParameter(std::string("SubsId"), subsId);
}

std::string QuerySubscriptionDetailRequest::getPhoneNoX() const {
  return phoneNoX_;
}

void QuerySubscriptionDetailRequest::setPhoneNoX(const std::string &phoneNoX) {
  phoneNoX_ = phoneNoX;
  setParameter(std::string("PhoneNoX"), phoneNoX);
}

std::string QuerySubscriptionDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QuerySubscriptionDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QuerySubscriptionDetailRequest::getOwnerId() const {
  return ownerId_;
}

void QuerySubscriptionDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QuerySubscriptionDetailRequest::getPoolKey() const {
  return poolKey_;
}

void QuerySubscriptionDetailRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

