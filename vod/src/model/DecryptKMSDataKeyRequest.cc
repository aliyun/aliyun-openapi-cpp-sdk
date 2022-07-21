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

#include <alibabacloud/vod/model/DecryptKMSDataKeyRequest.h>

using AlibabaCloud::Vod::Model::DecryptKMSDataKeyRequest;

DecryptKMSDataKeyRequest::DecryptKMSDataKeyRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DecryptKMSDataKey") {
  setMethod(HttpRequest::Method::Post);
}

DecryptKMSDataKeyRequest::~DecryptKMSDataKeyRequest() {}

std::string DecryptKMSDataKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DecryptKMSDataKeyRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

long DecryptKMSDataKeyRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void DecryptKMSDataKeyRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string DecryptKMSDataKeyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DecryptKMSDataKeyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DecryptKMSDataKeyRequest::getKmsRegionId() const {
  return kmsRegionId_;
}

void DecryptKMSDataKeyRequest::setKmsRegionId(const std::string &kmsRegionId) {
  kmsRegionId_ = kmsRegionId;
  setParameter(std::string("KmsRegionId"), kmsRegionId);
}

std::string DecryptKMSDataKeyRequest::getCipherText() const {
  return cipherText_;
}

void DecryptKMSDataKeyRequest::setCipherText(const std::string &cipherText) {
  cipherText_ = cipherText;
  setParameter(std::string("CipherText"), cipherText);
}

std::string DecryptKMSDataKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DecryptKMSDataKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DecryptKMSDataKeyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DecryptKMSDataKeyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DecryptKMSDataKeyRequest::getOwnerId() const {
  return ownerId_;
}

void DecryptKMSDataKeyRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

