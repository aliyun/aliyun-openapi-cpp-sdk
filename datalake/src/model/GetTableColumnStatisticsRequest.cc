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

#include <alibabacloud/datalake/model/GetTableColumnStatisticsRequest.h>

using AlibabaCloud::DataLake::Model::GetTableColumnStatisticsRequest;

GetTableColumnStatisticsRequest::GetTableColumnStatisticsRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/tables/columnstatistics"};
  setMethod(HttpRequest::Method::Get);
}

GetTableColumnStatisticsRequest::~GetTableColumnStatisticsRequest() {}

std::string GetTableColumnStatisticsRequest::getCatalogId() const {
  return catalogId_;
}

void GetTableColumnStatisticsRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string GetTableColumnStatisticsRequest::getDatabaseName() const {
  return databaseName_;
}

void GetTableColumnStatisticsRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string GetTableColumnStatisticsRequest::getTableName() const {
  return tableName_;
}

void GetTableColumnStatisticsRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

