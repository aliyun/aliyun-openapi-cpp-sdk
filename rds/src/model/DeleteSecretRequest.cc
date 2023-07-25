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

#include <alibabacloud/rds/model/DeleteSecretRequest.h>

using AlibabaCloud::Rds::Model::DeleteSecretRequest;

DeleteSecretRequest::DeleteSecretRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteSecret") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSecretRequest::~DeleteSecretRequest() {}

long DeleteSecretRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSecretRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSecretRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSecretRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteSecretRequest::getSecretArn() const {
  return secretArn_;
}

void DeleteSecretRequest::setSecretArn(const std::string &secretArn) {
  secretArn_ = secretArn;
  setParameter(std::string("SecretArn"), secretArn);
}

std::string DeleteSecretRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteSecretRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteSecretRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DeleteSecretRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DeleteSecretRequest::getRegionId() const {
  return regionId_;
}

void DeleteSecretRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteSecretRequest::getEngine() const {
  return engine_;
}

void DeleteSecretRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DeleteSecretRequest::getDbInstanceId() const {
  return dbInstanceId_;
}

void DeleteSecretRequest::setDbInstanceId(const std::string &dbInstanceId) {
  dbInstanceId_ = dbInstanceId;
  setParameter(std::string("DbInstanceId"), dbInstanceId);
}

std::string DeleteSecretRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSecretRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteSecretRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSecretRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteSecretRequest::getSecretName() const {
  return secretName_;
}

void DeleteSecretRequest::setSecretName(const std::string &secretName) {
  secretName_ = secretName;
  setParameter(std::string("SecretName"), secretName);
}

