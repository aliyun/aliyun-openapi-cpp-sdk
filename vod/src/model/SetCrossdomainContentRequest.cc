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

#include <alibabacloud/vod/model/SetCrossdomainContentRequest.h>

using AlibabaCloud::Vod::Model::SetCrossdomainContentRequest;

SetCrossdomainContentRequest::SetCrossdomainContentRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SetCrossdomainContent") {
  setMethod(HttpRequest::Method::Post);
}

SetCrossdomainContentRequest::~SetCrossdomainContentRequest() {}

std::string SetCrossdomainContentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetCrossdomainContentRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SetCrossdomainContentRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void SetCrossdomainContentRequest::setResourceRealOwnerId(const std::string &resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), resourceRealOwnerId);
}

std::string SetCrossdomainContentRequest::getContent() const {
  return content_;
}

void SetCrossdomainContentRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string SetCrossdomainContentRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetCrossdomainContentRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetCrossdomainContentRequest::getStorageLocation() const {
  return storageLocation_;
}

void SetCrossdomainContentRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

std::string SetCrossdomainContentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetCrossdomainContentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetCrossdomainContentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetCrossdomainContentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetCrossdomainContentRequest::getOwnerId() const {
  return ownerId_;
}

void SetCrossdomainContentRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

