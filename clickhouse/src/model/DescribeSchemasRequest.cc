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

#include <alibabacloud/clickhouse/model/DescribeSchemasRequest.h>

using AlibabaCloud::Clickhouse::Model::DescribeSchemasRequest;

DescribeSchemasRequest::DescribeSchemasRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "DescribeSchemas") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSchemasRequest::~DescribeSchemasRequest() {}

long DescribeSchemasRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeSchemasRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeSchemasRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSchemasRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSchemasRequest::getTableName() const {
  return tableName_;
}

void DescribeSchemasRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeSchemasRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeSchemasRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeSchemasRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeSchemasRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeSchemasRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DescribeSchemasRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DescribeSchemasRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeSchemasRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeSchemasRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSchemasRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

