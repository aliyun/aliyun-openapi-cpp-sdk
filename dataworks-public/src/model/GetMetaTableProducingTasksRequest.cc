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

#include <alibabacloud/dataworks-public/model/GetMetaTableProducingTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableProducingTasksRequest;

GetMetaTableProducingTasksRequest::GetMetaTableProducingTasksRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableProducingTasks") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaTableProducingTasksRequest::~GetMetaTableProducingTasksRequest() {}

std::string GetMetaTableProducingTasksRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaTableProducingTasksRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaTableProducingTasksRequest::getSchemaName() const {
  return schemaName_;
}

void GetMetaTableProducingTasksRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string GetMetaTableProducingTasksRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaTableProducingTasksRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetMetaTableProducingTasksRequest::getDbName() const {
  return dbName_;
}

void GetMetaTableProducingTasksRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string GetMetaTableProducingTasksRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableProducingTasksRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTableProducingTasksRequest::getTableName() const {
  return tableName_;
}

void GetMetaTableProducingTasksRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

