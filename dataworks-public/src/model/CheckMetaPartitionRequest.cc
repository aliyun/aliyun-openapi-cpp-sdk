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

#include <alibabacloud/dataworks-public/model/CheckMetaPartitionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckMetaPartitionRequest;

CheckMetaPartitionRequest::CheckMetaPartitionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CheckMetaPartition") {
  setMethod(HttpRequest::Method::Post);
}

CheckMetaPartitionRequest::~CheckMetaPartitionRequest() {}

std::string CheckMetaPartitionRequest::getDataSourceType() const {
  return dataSourceType_;
}

void CheckMetaPartitionRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string CheckMetaPartitionRequest::getClusterId() const {
  return clusterId_;
}

void CheckMetaPartitionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string CheckMetaPartitionRequest::getPartition() const {
  return partition_;
}

void CheckMetaPartitionRequest::setPartition(const std::string &partition) {
  partition_ = partition;
  setParameter(std::string("Partition"), partition);
}

std::string CheckMetaPartitionRequest::getTableGuid() const {
  return tableGuid_;
}

void CheckMetaPartitionRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string CheckMetaPartitionRequest::getDatabaseName() const {
  return databaseName_;
}

void CheckMetaPartitionRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string CheckMetaPartitionRequest::getTableName() const {
  return tableName_;
}

void CheckMetaPartitionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

