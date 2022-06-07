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

#include <alibabacloud/adb/model/DescribeTableDetailRequest.h>

using AlibabaCloud::Adb::Model::DescribeTableDetailRequest;

DescribeTableDetailRequest::DescribeTableDetailRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeTableDetail") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTableDetailRequest::~DescribeTableDetailRequest() {}

long DescribeTableDetailRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTableDetailRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTableDetailRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeTableDetailRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeTableDetailRequest::getTableName() const {
  return tableName_;
}

void DescribeTableDetailRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeTableDetailRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeTableDetailRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeTableDetailRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTableDetailRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTableDetailRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeTableDetailRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeTableDetailRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTableDetailRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeTableDetailRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTableDetailRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

