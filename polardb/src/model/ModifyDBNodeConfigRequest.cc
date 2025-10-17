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

#include <alibabacloud/polardb/model/ModifyDBNodeConfigRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodeConfigRequest;

ModifyDBNodeConfigRequest::ModifyDBNodeConfigRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodeConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeConfigRequest::~ModifyDBNodeConfigRequest() {}

long ModifyDBNodeConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodeConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeConfigRequest::getDBNodeId() const {
  return dBNodeId_;
}

void ModifyDBNodeConfigRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string ModifyDBNodeConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodeConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodeConfigRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyDBNodeConfigRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyDBNodeConfigRequest::getConfigName() const {
  return configName_;
}

void ModifyDBNodeConfigRequest::setConfigName(const std::string &configName) {
  configName_ = configName;
  setParameter(std::string("ConfigName"), configName);
}

std::string ModifyDBNodeConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodeConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodeConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodeConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodeConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodeConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBNodeConfigRequest::getConfigValue() const {
  return configValue_;
}

void ModifyDBNodeConfigRequest::setConfigValue(const std::string &configValue) {
  configValue_ = configValue;
  setParameter(std::string("ConfigValue"), configValue);
}

long ModifyDBNodeConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodeConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

