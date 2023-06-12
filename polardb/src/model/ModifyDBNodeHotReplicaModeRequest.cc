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

#include <alibabacloud/polardb/model/ModifyDBNodeHotReplicaModeRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBNodeHotReplicaModeRequest;

ModifyDBNodeHotReplicaModeRequest::ModifyDBNodeHotReplicaModeRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyDBNodeHotReplicaMode") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBNodeHotReplicaModeRequest::~ModifyDBNodeHotReplicaModeRequest() {}

long ModifyDBNodeHotReplicaModeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBNodeHotReplicaModeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDBNodeHotReplicaModeRequest::getDBNodeId() const {
  return dBNodeId_;
}

void ModifyDBNodeHotReplicaModeRequest::setDBNodeId(const std::string &dBNodeId) {
  dBNodeId_ = dBNodeId;
  setParameter(std::string("DBNodeId"), dBNodeId);
}

std::string ModifyDBNodeHotReplicaModeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBNodeHotReplicaModeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBNodeHotReplicaModeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBNodeHotReplicaModeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBNodeHotReplicaModeRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBNodeHotReplicaModeRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBNodeHotReplicaModeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBNodeHotReplicaModeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBNodeHotReplicaModeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBNodeHotReplicaModeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDBNodeHotReplicaModeRequest::getHotReplicaMode() const {
  return hotReplicaMode_;
}

void ModifyDBNodeHotReplicaModeRequest::setHotReplicaMode(const std::string &hotReplicaMode) {
  hotReplicaMode_ = hotReplicaMode;
  setParameter(std::string("HotReplicaMode"), hotReplicaMode);
}

