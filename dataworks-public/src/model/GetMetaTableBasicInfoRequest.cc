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

#include <alibabacloud/dataworks-public/model/GetMetaTableBasicInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableBasicInfoRequest;

GetMetaTableBasicInfoRequest::GetMetaTableBasicInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableBasicInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetMetaTableBasicInfoRequest::~GetMetaTableBasicInfoRequest() {}

std::string GetMetaTableBasicInfoRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaTableBasicInfoRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

bool GetMetaTableBasicInfoRequest::getExtension() const {
  return extension_;
}

void GetMetaTableBasicInfoRequest::setExtension(bool extension) {
  extension_ = extension;
  setParameter(std::string("Extension"), extension ? "true" : "false");
}

std::string GetMetaTableBasicInfoRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaTableBasicInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetMetaTableBasicInfoRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableBasicInfoRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTableBasicInfoRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaTableBasicInfoRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string GetMetaTableBasicInfoRequest::getTableName() const {
  return tableName_;
}

void GetMetaTableBasicInfoRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

