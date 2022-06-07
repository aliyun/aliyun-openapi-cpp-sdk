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

#include <alibabacloud/adb/model/BindDBResourcePoolWithUserRequest.h>

using AlibabaCloud::Adb::Model::BindDBResourcePoolWithUserRequest;

BindDBResourcePoolWithUserRequest::BindDBResourcePoolWithUserRequest()
    : RpcServiceRequest("adb", "2019-03-15", "BindDBResourcePoolWithUser") {
  setMethod(HttpRequest::Method::Post);
}

BindDBResourcePoolWithUserRequest::~BindDBResourcePoolWithUserRequest() {}

std::string BindDBResourcePoolWithUserRequest::getPoolName() const {
  return poolName_;
}

void BindDBResourcePoolWithUserRequest::setPoolName(const std::string &poolName) {
  poolName_ = poolName;
  setParameter(std::string("PoolName"), poolName);
}

long BindDBResourcePoolWithUserRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindDBResourcePoolWithUserRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string BindDBResourcePoolWithUserRequest::getPoolUser() const {
  return poolUser_;
}

void BindDBResourcePoolWithUserRequest::setPoolUser(const std::string &poolUser) {
  poolUser_ = poolUser;
  setParameter(std::string("PoolUser"), poolUser);
}

std::string BindDBResourcePoolWithUserRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BindDBResourcePoolWithUserRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BindDBResourcePoolWithUserRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindDBResourcePoolWithUserRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string BindDBResourcePoolWithUserRequest::getDBClusterId() const {
  return dBClusterId_;
}

void BindDBResourcePoolWithUserRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string BindDBResourcePoolWithUserRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void BindDBResourcePoolWithUserRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long BindDBResourcePoolWithUserRequest::getOwnerId() const {
  return ownerId_;
}

void BindDBResourcePoolWithUserRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

