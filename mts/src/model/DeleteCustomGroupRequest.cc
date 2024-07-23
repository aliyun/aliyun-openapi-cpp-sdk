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

#include <alibabacloud/mts/model/DeleteCustomGroupRequest.h>

using AlibabaCloud::Mts::Model::DeleteCustomGroupRequest;

DeleteCustomGroupRequest::DeleteCustomGroupRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeleteCustomGroup") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomGroupRequest::~DeleteCustomGroupRequest() {}

long DeleteCustomGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCustomGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCustomGroupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteCustomGroupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteCustomGroupRequest::getAlgorithm() const {
  return algorithm_;
}

void DeleteCustomGroupRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string DeleteCustomGroupRequest::getCustomGroupId() const {
  return customGroupId_;
}

void DeleteCustomGroupRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string DeleteCustomGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCustomGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCustomGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCustomGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteCustomGroupRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCustomGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

