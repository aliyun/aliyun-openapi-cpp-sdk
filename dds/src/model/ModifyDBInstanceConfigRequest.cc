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

#include <alibabacloud/dds/model/ModifyDBInstanceConfigRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceConfigRequest;

ModifyDBInstanceConfigRequest::ModifyDBInstanceConfigRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceConfigRequest::~ModifyDBInstanceConfigRequest() {}

long ModifyDBInstanceConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBInstanceConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBInstanceConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBInstanceConfigRequest::getConfigName() const {
  return configName_;
}

void ModifyDBInstanceConfigRequest::setConfigName(const std::string &configName) {
  configName_ = configName;
  setParameter(std::string("ConfigName"), configName);
}

std::string ModifyDBInstanceConfigRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyDBInstanceConfigRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyDBInstanceConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBInstanceConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBInstanceConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBInstanceConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBInstanceConfigRequest::getConfigValue() const {
  return configValue_;
}

void ModifyDBInstanceConfigRequest::setConfigValue(const std::string &configValue) {
  configValue_ = configValue;
  setParameter(std::string("ConfigValue"), configValue);
}

long ModifyDBInstanceConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBInstanceConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

