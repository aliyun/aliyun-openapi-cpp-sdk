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

#include <alibabacloud/rds/model/DescribePostgresExtensionsRequest.h>

using AlibabaCloud::Rds::Model::DescribePostgresExtensionsRequest;

DescribePostgresExtensionsRequest::DescribePostgresExtensionsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribePostgresExtensions") {
  setMethod(HttpRequest::Method::Post);
}

DescribePostgresExtensionsRequest::~DescribePostgresExtensionsRequest() {}

long DescribePostgresExtensionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePostgresExtensionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePostgresExtensionsRequest::getClientToken() const {
  return clientToken_;
}

void DescribePostgresExtensionsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribePostgresExtensionsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePostgresExtensionsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePostgresExtensionsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribePostgresExtensionsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribePostgresExtensionsRequest::getRegionId() const {
  return regionId_;
}

void DescribePostgresExtensionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribePostgresExtensionsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribePostgresExtensionsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribePostgresExtensionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePostgresExtensionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribePostgresExtensionsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribePostgresExtensionsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribePostgresExtensionsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePostgresExtensionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePostgresExtensionsRequest::getDBName() const {
  return dBName_;
}

void DescribePostgresExtensionsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

