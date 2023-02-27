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

#include <alibabacloud/ice/model/CreateDNADBRequest.h>

using AlibabaCloud::ICE::Model::CreateDNADBRequest;

CreateDNADBRequest::CreateDNADBRequest()
    : RpcServiceRequest("ice", "2020-11-09", "CreateDNADB") {
  setMethod(HttpRequest::Method::Post);
}

CreateDNADBRequest::~CreateDNADBRequest() {}

long CreateDNADBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDNADBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDNADBRequest::getDescription() const {
  return description_;
}

void CreateDNADBRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDNADBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDNADBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDNADBRequest::getModel() const {
  return model_;
}

void CreateDNADBRequest::setModel(const std::string &model) {
  model_ = model;
  setParameter(std::string("Model"), model);
}

std::string CreateDNADBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDNADBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDNADBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDNADBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDNADBRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDNADBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDNADBRequest::getName() const {
  return name_;
}

void CreateDNADBRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

