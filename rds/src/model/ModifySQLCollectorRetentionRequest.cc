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

#include <alibabacloud/rds/model/ModifySQLCollectorRetentionRequest.h>

using AlibabaCloud::Rds::Model::ModifySQLCollectorRetentionRequest;

ModifySQLCollectorRetentionRequest::ModifySQLCollectorRetentionRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifySQLCollectorRetention") {
  setMethod(HttpRequest::Method::Post);
}

ModifySQLCollectorRetentionRequest::~ModifySQLCollectorRetentionRequest() {}

long ModifySQLCollectorRetentionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySQLCollectorRetentionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySQLCollectorRetentionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySQLCollectorRetentionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySQLCollectorRetentionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifySQLCollectorRetentionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifySQLCollectorRetentionRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifySQLCollectorRetentionRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifySQLCollectorRetentionRequest::getRegionId() const {
  return regionId_;
}

void ModifySQLCollectorRetentionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySQLCollectorRetentionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifySQLCollectorRetentionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifySQLCollectorRetentionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySQLCollectorRetentionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySQLCollectorRetentionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySQLCollectorRetentionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySQLCollectorRetentionRequest::getConfigValue() const {
  return configValue_;
}

void ModifySQLCollectorRetentionRequest::setConfigValue(const std::string &configValue) {
  configValue_ = configValue;
  setParameter(std::string("ConfigValue"), configValue);
}

long ModifySQLCollectorRetentionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySQLCollectorRetentionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

