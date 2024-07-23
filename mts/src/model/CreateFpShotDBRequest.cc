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

#include <alibabacloud/mts/model/CreateFpShotDBRequest.h>

using AlibabaCloud::Mts::Model::CreateFpShotDBRequest;

CreateFpShotDBRequest::CreateFpShotDBRequest()
    : RpcServiceRequest("mts", "2014-06-18", "CreateFpShotDB") {
  setMethod(HttpRequest::Method::Post);
}

CreateFpShotDBRequest::~CreateFpShotDBRequest() {}

long CreateFpShotDBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateFpShotDBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateFpShotDBRequest::getDescription() const {
  return description_;
}

void CreateFpShotDBRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateFpShotDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateFpShotDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateFpShotDBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateFpShotDBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int CreateFpShotDBRequest::getModelId() const {
  return modelId_;
}

void CreateFpShotDBRequest::setModelId(int modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), std::to_string(modelId));
}

std::string CreateFpShotDBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateFpShotDBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateFpShotDBRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFpShotDBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateFpShotDBRequest::getInstanceId() const {
  return instanceId_;
}

void CreateFpShotDBRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateFpShotDBRequest::getName() const {
  return name_;
}

void CreateFpShotDBRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateFpShotDBRequest::getConfig() const {
  return config_;
}

void CreateFpShotDBRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

