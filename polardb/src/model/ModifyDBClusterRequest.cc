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

#include <alibabacloud/polardb/model/ModifyDBClusterRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterRequest;

ModifyDBClusterRequest::ModifyDBClusterRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBCluster") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterRequest::~ModifyDBClusterRequest() {}

long ModifyDBClusterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBClusterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterRequest::getStandbyHAMode() const {
  return standbyHAMode_;
}

void ModifyDBClusterRequest::setStandbyHAMode(const std::string &standbyHAMode) {
  standbyHAMode_ = standbyHAMode;
  setParameter(std::string("StandbyHAMode"), standbyHAMode);
}

std::string ModifyDBClusterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBClusterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBClusterRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBClusterRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBClusterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBClusterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyDBClusterRequest::getFaultSimulateMode() const {
  return faultSimulateMode_;
}

void ModifyDBClusterRequest::setFaultSimulateMode(const std::string &faultSimulateMode) {
  faultSimulateMode_ = faultSimulateMode;
  setParameter(std::string("FaultSimulateMode"), faultSimulateMode);
}

long ModifyDBClusterRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBClusterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBClusterRequest::getDataSyncMode() const {
  return dataSyncMode_;
}

void ModifyDBClusterRequest::setDataSyncMode(const std::string &dataSyncMode) {
  dataSyncMode_ = dataSyncMode;
  setParameter(std::string("DataSyncMode"), dataSyncMode);
}

