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

#include <alibabacloud/mts/model/RegisterCustomViewRequest.h>

using AlibabaCloud::Mts::Model::RegisterCustomViewRequest;

RegisterCustomViewRequest::RegisterCustomViewRequest()
    : RpcServiceRequest("mts", "2014-06-18", "RegisterCustomView") {
  setMethod(HttpRequest::Method::Post);
}

RegisterCustomViewRequest::~RegisterCustomViewRequest() {}

long RegisterCustomViewRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RegisterCustomViewRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RegisterCustomViewRequest::getLabelPrompt() const {
  return labelPrompt_;
}

void RegisterCustomViewRequest::setLabelPrompt(const std::string &labelPrompt) {
  labelPrompt_ = labelPrompt;
  setParameter(std::string("LabelPrompt"), labelPrompt);
}

std::string RegisterCustomViewRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RegisterCustomViewRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RegisterCustomViewRequest::getAlgorithm() const {
  return algorithm_;
}

void RegisterCustomViewRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string RegisterCustomViewRequest::getCustomGroupId() const {
  return customGroupId_;
}

void RegisterCustomViewRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string RegisterCustomViewRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RegisterCustomViewRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RegisterCustomViewRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RegisterCustomViewRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RegisterCustomViewRequest::getCustomEntityId() const {
  return customEntityId_;
}

void RegisterCustomViewRequest::setCustomEntityId(const std::string &customEntityId) {
  customEntityId_ = customEntityId;
  setParameter(std::string("CustomEntityId"), customEntityId);
}

long RegisterCustomViewRequest::getOwnerId() const {
  return ownerId_;
}

void RegisterCustomViewRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RegisterCustomViewRequest::getImageUrl() const {
  return imageUrl_;
}

void RegisterCustomViewRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

