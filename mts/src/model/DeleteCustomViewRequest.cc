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

#include <alibabacloud/mts/model/DeleteCustomViewRequest.h>

using AlibabaCloud::Mts::Model::DeleteCustomViewRequest;

DeleteCustomViewRequest::DeleteCustomViewRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeleteCustomView") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomViewRequest::~DeleteCustomViewRequest() {}

long DeleteCustomViewRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCustomViewRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCustomViewRequest::getCustomViewId() const {
  return customViewId_;
}

void DeleteCustomViewRequest::setCustomViewId(const std::string &customViewId) {
  customViewId_ = customViewId;
  setParameter(std::string("CustomViewId"), customViewId);
}

std::string DeleteCustomViewRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteCustomViewRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteCustomViewRequest::getAlgorithm() const {
  return algorithm_;
}

void DeleteCustomViewRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string DeleteCustomViewRequest::getCustomGroupId() const {
  return customGroupId_;
}

void DeleteCustomViewRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string DeleteCustomViewRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCustomViewRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCustomViewRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCustomViewRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteCustomViewRequest::getCustomEntityId() const {
  return customEntityId_;
}

void DeleteCustomViewRequest::setCustomEntityId(const std::string &customEntityId) {
  customEntityId_ = customEntityId;
  setParameter(std::string("CustomEntityId"), customEntityId);
}

long DeleteCustomViewRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCustomViewRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

