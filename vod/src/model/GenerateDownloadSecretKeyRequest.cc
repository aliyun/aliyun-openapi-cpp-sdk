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

#include <alibabacloud/vod/model/GenerateDownloadSecretKeyRequest.h>

using AlibabaCloud::Vod::Model::GenerateDownloadSecretKeyRequest;

GenerateDownloadSecretKeyRequest::GenerateDownloadSecretKeyRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GenerateDownloadSecretKey") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDownloadSecretKeyRequest::~GenerateDownloadSecretKeyRequest() {}

long GenerateDownloadSecretKeyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GenerateDownloadSecretKeyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GenerateDownloadSecretKeyRequest::getAppDecryptKey() const {
  return appDecryptKey_;
}

void GenerateDownloadSecretKeyRequest::setAppDecryptKey(const std::string &appDecryptKey) {
  appDecryptKey_ = appDecryptKey;
  setParameter(std::string("AppDecryptKey"), appDecryptKey);
}

std::string GenerateDownloadSecretKeyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GenerateDownloadSecretKeyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GenerateDownloadSecretKeyRequest::getAppIdentification() const {
  return appIdentification_;
}

void GenerateDownloadSecretKeyRequest::setAppIdentification(const std::string &appIdentification) {
  appIdentification_ = appIdentification;
  setParameter(std::string("AppIdentification"), appIdentification);
}

long GenerateDownloadSecretKeyRequest::getOwnerId() const {
  return ownerId_;
}

void GenerateDownloadSecretKeyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

