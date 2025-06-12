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

#include <alibabacloud/clickhouse/model/ModifyDBClusterConfigRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyDBClusterConfigRequest;

ModifyDBClusterConfigRequest::ModifyDBClusterConfigRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyDBClusterConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterConfigRequest::~ModifyDBClusterConfigRequest() {}

std::string ModifyDBClusterConfigRequest::getReason() const {
  return reason_;
}

void ModifyDBClusterConfigRequest::setReason(const std::string &reason) {
  reason_ = reason;
  setParameter(std::string("Reason"), reason);
}

long ModifyDBClusterConfigRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterConfigRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterConfigRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterConfigRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterConfigRequest::getRegionId() const {
  return regionId_;
}

void ModifyDBClusterConfigRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyDBClusterConfigRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterConfigRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterConfigRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterConfigRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterConfigRequest::getUserConfig() const {
  return userConfig_;
}

void ModifyDBClusterConfigRequest::setUserConfig(const std::string &userConfig) {
  userConfig_ = userConfig;
  setParameter(std::string("UserConfig"), userConfig);
}

std::string ModifyDBClusterConfigRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterConfigRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBClusterConfigRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterConfigRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

