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

#include <alibabacloud/adb/model/ModifyDBResourcePoolRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBResourcePoolRequest;

ModifyDBResourcePoolRequest::ModifyDBResourcePoolRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyDBResourcePool") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBResourcePoolRequest::~ModifyDBResourcePoolRequest() {}

std::string ModifyDBResourcePoolRequest::getPoolName() const {
  return poolName_;
}

void ModifyDBResourcePoolRequest::setPoolName(const std::string &poolName) {
  poolName_ = poolName;
  setParameter(std::string("PoolName"), poolName);
}

long ModifyDBResourcePoolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDBResourcePoolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyDBResourcePoolRequest::getNodeNum() const {
  return nodeNum_;
}

void ModifyDBResourcePoolRequest::setNodeNum(int nodeNum) {
  nodeNum_ = nodeNum;
  setParameter(std::string("NodeNum"), std::to_string(nodeNum));
}

std::string ModifyDBResourcePoolRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBResourcePoolRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBResourcePoolRequest::getQueryType() const {
  return queryType_;
}

void ModifyDBResourcePoolRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string ModifyDBResourcePoolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDBResourcePoolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDBResourcePoolRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyDBResourcePoolRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyDBResourcePoolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDBResourcePoolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDBResourcePoolRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDBResourcePoolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

