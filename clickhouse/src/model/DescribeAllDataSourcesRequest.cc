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

#include <alibabacloud/clickhouse/model/DescribeAllDataSourcesRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeAllDataSourcesRequest;

DescribeAllDataSourcesRequest::DescribeAllDataSourcesRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeAllDataSources") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAllDataSourcesRequest::~DescribeAllDataSourcesRequest() {}

long DescribeAllDataSourcesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeAllDataSourcesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeAllDataSourcesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAllDataSourcesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAllDataSourcesRequest::getTableName() const {
  return tableName_;
}

void DescribeAllDataSourcesRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeAllDataSourcesRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeAllDataSourcesRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeAllDataSourcesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeAllDataSourcesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeAllDataSourcesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeAllDataSourcesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeAllDataSourcesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeAllDataSourcesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeAllDataSourcesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeAllDataSourcesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

