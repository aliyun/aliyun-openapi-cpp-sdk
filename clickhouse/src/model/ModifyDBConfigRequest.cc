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

#include <alibabacloud/clickhouse/model/ModifyDBConfigRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyDBConfigRequest;

ModifyDBConfigRequest::ModifyDBConfigRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyDBConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBConfigRequest::~ModifyDBConfigRequest() {}

long ModifyDBConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBConfigRequest::getConfig() const {
  return config_;
}

void ModifyDBConfigRequest::setConfig(const std::string &config) {
  config_ = config;
  setParameter(std::string("Config"), config);
}

