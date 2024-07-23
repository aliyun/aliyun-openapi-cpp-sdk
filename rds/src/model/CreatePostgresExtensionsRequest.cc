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

#include <alibabacloud/rds/model/CreatePostgresExtensionsRequest.h>

using AlibabaCloud::Rds::Model::CreatePostgresExtensionsRequest;

CreatePostgresExtensionsRequest::CreatePostgresExtensionsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreatePostgresExtensions") {
  setMethod(HttpRequest::Method::Post);
}

CreatePostgresExtensionsRequest::~CreatePostgresExtensionsRequest() {}

long CreatePostgresExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreatePostgresExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreatePostgresExtensionsRequest::getClientToken() const {
  return clientToken_;
}

void CreatePostgresExtensionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreatePostgresExtensionsRequest::getRiskConfirmed() const {
  return riskConfirmed_;
}

void CreatePostgresExtensionsRequest::setRiskConfirmed(bool riskConfirmed) {
  riskConfirmed_ = riskConfirmed;
  setParameter(std::string("RiskConfirmed"), riskConfirmed ? "true" : "false");
}

std::string CreatePostgresExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreatePostgresExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreatePostgresExtensionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreatePostgresExtensionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreatePostgresExtensionsRequest::getAccountName() const {
  return accountName_;
}

void CreatePostgresExtensionsRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreatePostgresExtensionsRequest::getRegionId() const {
  return regionId_;
}

void CreatePostgresExtensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreatePostgresExtensionsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreatePostgresExtensionsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreatePostgresExtensionsRequest::getSourceDatabase() const {
  return sourceDatabase_;
}

void CreatePostgresExtensionsRequest::setSourceDatabase(const std::string &sourceDatabase) {
  sourceDatabase_ = sourceDatabase;
  setParameter(std::string("SourceDatabase"), sourceDatabase);
}

std::string CreatePostgresExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreatePostgresExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreatePostgresExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreatePostgresExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreatePostgresExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void CreatePostgresExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreatePostgresExtensionsRequest::getDBNames() const {
  return dBNames_;
}

void CreatePostgresExtensionsRequest::setDBNames(const std::string &dBNames) {
  dBNames_ = dBNames;
  setParameter(std::string("DBNames"), dBNames);
}

std::string CreatePostgresExtensionsRequest::getExtensions() const {
  return extensions_;
}

void CreatePostgresExtensionsRequest::setExtensions(const std::string &extensions) {
  extensions_ = extensions;
  setParameter(std::string("Extensions"), extensions);
}

