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

#include <alibabacloud/drds/model/SetupTableRequest.h>

using AlibabaCloud::Drds::Model::SetupTableRequest;

SetupTableRequest::SetupTableRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SetupTable") {
  setMethod(HttpRequest::Method::Post);
}

SetupTableRequest::~SetupTableRequest() {}

bool SetupTableRequest::getAllowFullTableScan() const {
  return allowFullTableScan_;
}

void SetupTableRequest::setAllowFullTableScan(bool allowFullTableScan) {
  allowFullTableScan_ = allowFullTableScan;
  setParameter(std::string("AllowFullTableScan"), allowFullTableScan ? "true" : "false");
}

std::string SetupTableRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SetupTableRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SetupTableRequest::getDbName() const {
  return dbName_;
}

void SetupTableRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string SetupTableRequest::getRegionId() const {
  return regionId_;
}

void SetupTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> SetupTableRequest::getTableName() const {
  return tableName_;
}

void SetupTableRequest::setTableName(const std::vector<std::string> &tableName) {
  tableName_ = tableName;
}

