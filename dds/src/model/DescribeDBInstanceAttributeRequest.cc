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

#include <alibabacloud/dds/model/DescribeDBInstanceAttributeRequest.h>

using AlibabaCloud::Dds::Model::DescribeDBInstanceAttributeRequest;

DescribeDBInstanceAttributeRequest::DescribeDBInstanceAttributeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DescribeDBInstanceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceAttributeRequest::~DescribeDBInstanceAttributeRequest() {}

long DescribeDBInstanceAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool DescribeDBInstanceAttributeRequest::getIsOnlyGetCluster() const {
  return isOnlyGetCluster_;
}

void DescribeDBInstanceAttributeRequest::setIsOnlyGetCluster(bool isOnlyGetCluster) {
  isOnlyGetCluster_ = isOnlyGetCluster;
  setParameter(std::string("IsOnlyGetCluster"), isOnlyGetCluster ? "true" : "false");
}

std::string DescribeDBInstanceAttributeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBInstanceAttributeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBInstanceAttributeRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDBInstanceAttributeRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeDBInstanceAttributeRequest::getEngine() const {
  return engine_;
}

void DescribeDBInstanceAttributeRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string DescribeDBInstanceAttributeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceAttributeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDBInstanceAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDBInstanceAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDBInstanceAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDBInstanceAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDBInstanceAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDBInstanceAttributeRequest::getChargeType() const {
  return chargeType_;
}

void DescribeDBInstanceAttributeRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

bool DescribeDBInstanceAttributeRequest::getIsDelete() const {
  return isDelete_;
}

void DescribeDBInstanceAttributeRequest::setIsDelete(bool isDelete) {
  isDelete_ = isDelete;
  setParameter(std::string("IsDelete"), isDelete ? "true" : "false");
}

