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

#include <alibabacloud/datalake/model/DeleteTableVersionRequest.h>

using AlibabaCloud::DataLake::Model::DeleteTableVersionRequest;

DeleteTableVersionRequest::DeleteTableVersionRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/tables/versions"};
  setMethod(HttpRequest::Method::Delete);
}

DeleteTableVersionRequest::~DeleteTableVersionRequest() {}

int DeleteTableVersionRequest::getVersionId() const {
  return versionId_;
}

void DeleteTableVersionRequest::setVersionId(int versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), std::to_string(versionId));
}

std::string DeleteTableVersionRequest::getCatalogId() const {
  return catalogId_;
}

void DeleteTableVersionRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string DeleteTableVersionRequest::getDatabaseName() const {
  return databaseName_;
}

void DeleteTableVersionRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string DeleteTableVersionRequest::getTableName() const {
  return tableName_;
}

void DeleteTableVersionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

