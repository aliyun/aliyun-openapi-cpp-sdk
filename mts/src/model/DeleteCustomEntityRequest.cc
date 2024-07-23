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

#include <alibabacloud/mts/model/DeleteCustomEntityRequest.h>

using AlibabaCloud::Mts::Model::DeleteCustomEntityRequest;

DeleteCustomEntityRequest::DeleteCustomEntityRequest()
    : RpcServiceRequest("mts", "2014-06-18", "DeleteCustomEntity") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomEntityRequest::~DeleteCustomEntityRequest() {}

long DeleteCustomEntityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteCustomEntityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteCustomEntityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteCustomEntityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteCustomEntityRequest::getAlgorithm() const {
  return algorithm_;
}

void DeleteCustomEntityRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string DeleteCustomEntityRequest::getCustomGroupId() const {
  return customGroupId_;
}

void DeleteCustomEntityRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string DeleteCustomEntityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteCustomEntityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteCustomEntityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteCustomEntityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DeleteCustomEntityRequest::getCustomEntityId() const {
  return customEntityId_;
}

void DeleteCustomEntityRequest::setCustomEntityId(const std::string &customEntityId) {
  customEntityId_ = customEntityId;
  setParameter(std::string("CustomEntityId"), customEntityId);
}

long DeleteCustomEntityRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCustomEntityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

