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

#include <alibabacloud/vod/model/GenerateKMSDataKeyRequest.h>

using AlibabaCloud::Vod::Model::GenerateKMSDataKeyRequest;

GenerateKMSDataKeyRequest::GenerateKMSDataKeyRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GenerateKMSDataKey") {
  setMethod(HttpRequest::Method::Post);
}

GenerateKMSDataKeyRequest::~GenerateKMSDataKeyRequest() {}

std::string GenerateKMSDataKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GenerateKMSDataKeyRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

long GenerateKMSDataKeyRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GenerateKMSDataKeyRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string GenerateKMSDataKeyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GenerateKMSDataKeyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GenerateKMSDataKeyRequest::getKmsRegionId() const {
  return kmsRegionId_;
}

void GenerateKMSDataKeyRequest::setKmsRegionId(const std::string &kmsRegionId) {
  kmsRegionId_ = kmsRegionId;
  setParameter(std::string("KmsRegionId"), kmsRegionId);
}

std::string GenerateKMSDataKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GenerateKMSDataKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GenerateKMSDataKeyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GenerateKMSDataKeyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GenerateKMSDataKeyRequest::getOwnerId() const {
  return ownerId_;
}

void GenerateKMSDataKeyRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

