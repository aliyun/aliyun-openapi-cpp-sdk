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

#include <alibabacloud/adb/model/DescribeDBResourcePoolRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBResourcePoolRequest;

DescribeDBResourcePoolRequest::DescribeDBResourcePoolRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeDBResourcePool") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBResourcePoolRequest::~DescribeDBResourcePoolRequest() {}

std::string DescribeDBResourcePoolRequest::getPoolName() const {
  return poolName_;
}

void DescribeDBResourcePoolRequest::setPoolName(const std::string &poolName) {
  poolName_ = poolName;
  setParameter(std::string("PoolName"), poolName);
}

long DescribeDBResourcePoolRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBResourcePoolRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBResourcePoolRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBResourcePoolRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBResourcePoolRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBResourcePoolRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBResourcePoolRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeDBResourcePoolRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeDBResourcePoolRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBResourcePoolRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBResourcePoolRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBResourcePoolRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

