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

#include <alibabacloud/rds/model/CreateSecretRequest.h>

using AlibabaCloud::Rds::Model::CreateSecretRequest;

CreateSecretRequest::CreateSecretRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateSecret") {
  setMethod(HttpRequest::Method::Post);
}

CreateSecretRequest::~CreateSecretRequest() {}

long CreateSecretRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSecretRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSecretRequest::getClientToken() const {
  return clientToken_;
}

void CreateSecretRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSecretRequest::getDescription() const {
  return description_;
}

void CreateSecretRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSecretRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateSecretRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateSecretRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSecretRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSecretRequest::getPassword() const {
  return password_;
}

void CreateSecretRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateSecretRequest::getRegionId() const {
  return regionId_;
}

void CreateSecretRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSecretRequest::getEngine() const {
  return engine_;
}

void CreateSecretRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateSecretRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void CreateSecretRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string CreateSecretRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSecretRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateSecretRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSecretRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSecretRequest::getDbNames() const {
  return dbNames_;
}

void CreateSecretRequest::setDbNames(const std::string &dbNames) {
  dbNames_ = dbNames;
  setParameter(std::string("DbNames"), dbNames);
}

std::string CreateSecretRequest::getSecretName() const {
  return secretName_;
}

void CreateSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

std::string CreateSecretRequest::getUsername() const {
  return username_;
}

void CreateSecretRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

