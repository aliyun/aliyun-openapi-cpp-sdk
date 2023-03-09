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

#include <alibabacloud/adb/model/DescribeColumnsRequest.h>

using AlibabaCloud::Adb::Model::DescribeColumnsRequest;

DescribeColumnsRequest::DescribeColumnsRequest()
    : RpcServiceRequest("adb", "2019-03-15", "DescribeColumns") {
  setMethod(HttpRequest::Method::Post);
}

DescribeColumnsRequest::~DescribeColumnsRequest() {}

long DescribeColumnsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeColumnsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeColumnsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeColumnsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeColumnsRequest::getTableName() const {
  return tableName_;
}

void DescribeColumnsRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeColumnsRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeColumnsRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeColumnsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeColumnsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeColumnsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeColumnsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeColumnsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeColumnsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeColumnsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeColumnsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

