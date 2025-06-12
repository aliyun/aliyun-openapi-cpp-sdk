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

#include <alibabacloud/clickhouse/model/DescribeAllDataSourceRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeAllDataSourceRequest;

DescribeAllDataSourceRequest::DescribeAllDataSourceRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeAllDataSource") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAllDataSourceRequest::~DescribeAllDataSourceRequest() {}

long DescribeAllDataSourceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAllDataSourceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAllDataSourceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAllDataSourceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAllDataSourceRequest::getTableName() const {
  return tableName_;
}

void DescribeAllDataSourceRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeAllDataSourceRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeAllDataSourceRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeAllDataSourceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAllDataSourceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAllDataSourceRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAllDataSourceRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAllDataSourceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAllDataSourceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAllDataSourceRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAllDataSourceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

