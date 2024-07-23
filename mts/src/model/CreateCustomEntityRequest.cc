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

#include <alibabacloud/mts/model/CreateCustomEntityRequest.h>

using AlibabaCloud::Mts::Model::CreateCustomEntityRequest;

CreateCustomEntityRequest::CreateCustomEntityRequest()
    : RpcServiceRequest("mts", "2014-06-18", "CreateCustomEntity") {
  setMethod(HttpRequest::Method::Post);
}

CreateCustomEntityRequest::~CreateCustomEntityRequest() {}

long CreateCustomEntityRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCustomEntityRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCustomEntityRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateCustomEntityRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateCustomEntityRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateCustomEntityRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string CreateCustomEntityRequest::getCustomGroupId() const {
  return customGroupId_;
}

void CreateCustomEntityRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string CreateCustomEntityRequest::getCustomEntityName() const {
  return customEntityName_;
}

void CreateCustomEntityRequest::setCustomEntityName(const std::string &customEntityName) {
  customEntityName_ = customEntityName;
  setParameter(std::string("CustomEntityName"), customEntityName);
}

std::string CreateCustomEntityRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCustomEntityRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateCustomEntityRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateCustomEntityRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateCustomEntityRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCustomEntityRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCustomEntityRequest::getCustomEntityInfo() const {
  return customEntityInfo_;
}

void CreateCustomEntityRequest::setCustomEntityInfo(const std::string &customEntityInfo) {
  customEntityInfo_ = customEntityInfo;
  setParameter(std::string("CustomEntityInfo"), customEntityInfo);
}

