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

#include <alibabacloud/dytnsapi/model/DescribeEmptyNumberDetectRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribeEmptyNumberDetectRequest;

DescribeEmptyNumberDetectRequest::DescribeEmptyNumberDetectRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribeEmptyNumberDetect") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEmptyNumberDetectRequest::~DescribeEmptyNumberDetectRequest() {}

long DescribeEmptyNumberDetectRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeEmptyNumberDetectRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeEmptyNumberDetectRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeEmptyNumberDetectRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeEmptyNumberDetectRequest::getEncryptType() const {
  return encryptType_;
}

void DescribeEmptyNumberDetectRequest::setEncryptType(const std::string &encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), encryptType);
}

std::string DescribeEmptyNumberDetectRequest::getOfferType() const {
  return offerType_;
}

void DescribeEmptyNumberDetectRequest::setOfferType(const std::string &offerType) {
  offerType_ = offerType;
  setParameter(std::string("OfferType"), offerType);
}

std::string DescribeEmptyNumberDetectRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeEmptyNumberDetectRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeEmptyNumberDetectRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeEmptyNumberDetectRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeEmptyNumberDetectRequest::getPhone() const {
  return phone_;
}

void DescribeEmptyNumberDetectRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

