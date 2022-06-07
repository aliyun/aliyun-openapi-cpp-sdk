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

#include <alibabacloud/adb/model/CreateDBResourcePoolRequest.h>

using AlibabaCloud::Adb::Model::CreateDBResourcePoolRequest;

CreateDBResourcePoolRequest::CreateDBResourcePoolRequest()
    : RpcServiceRequest("adb", "2019-03-15", "CreateDBResourcePool") {
  setMethod(HttpRequest::Method::Post);
}

CreateDBResourcePoolRequest::~CreateDBResourcePoolRequest() {}

std::string CreateDBResourcePoolRequest::getPoolName() const {
  return poolName_;
}

void CreateDBResourcePoolRequest::setPoolName(const std::string &poolName) {
  poolName_ = poolName;
  setParameter(std::string("PoolName"), poolName);
}

long CreateDBResourcePoolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDBResourcePoolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int CreateDBResourcePoolRequest::getNodeNum() const {
  return nodeNum_;
}

void CreateDBResourcePoolRequest::setNodeNum(int nodeNum) {
  nodeNum_ = nodeNum;
  setParameter(std::string("NodeNum"), std::to_string(nodeNum));
}

std::string CreateDBResourcePoolRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDBResourcePoolRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDBResourcePoolRequest::getQueryType() const {
  return queryType_;
}

void CreateDBResourcePoolRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::string CreateDBResourcePoolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDBResourcePoolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDBResourcePoolRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateDBResourcePoolRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateDBResourcePoolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDBResourcePoolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDBResourcePoolRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDBResourcePoolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

