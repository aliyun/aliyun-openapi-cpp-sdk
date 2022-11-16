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

#include <alibabacloud/dataworks-public/model/CheckMetaTableRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckMetaTableRequest;

CheckMetaTableRequest::CheckMetaTableRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CheckMetaTable") {
  setMethod(HttpRequest::Method::Post);
}

CheckMetaTableRequest::~CheckMetaTableRequest() {}

std::string CheckMetaTableRequest::getDataSourceType() const {
  return dataSourceType_;
}

void CheckMetaTableRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string CheckMetaTableRequest::getClusterId() const {
  return clusterId_;
}

void CheckMetaTableRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CheckMetaTableRequest::getTableGuid() const {
  return tableGuid_;
}

void CheckMetaTableRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string CheckMetaTableRequest::getDatabaseName() const {
  return databaseName_;
}

void CheckMetaTableRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string CheckMetaTableRequest::getTableName() const {
  return tableName_;
}

void CheckMetaTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

