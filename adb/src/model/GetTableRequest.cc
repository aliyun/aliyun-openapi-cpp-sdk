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

#include <alibabacloud/adb/model/GetTableRequest.h>

using AlibabaCloud::Adb::Model::GetTableRequest;

GetTableRequest::GetTableRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetTable") {
  setMethod(HttpRequest::Method::Post);
}

GetTableRequest::~GetTableRequest() {}

std::string GetTableRequest::getDbName() const {
  return dbName_;
}

void GetTableRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string GetTableRequest::getRegionId() const {
  return regionId_;
}

void GetTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetTableRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetTableRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetTableRequest::getTableName() const {
  return tableName_;
}

void GetTableRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

