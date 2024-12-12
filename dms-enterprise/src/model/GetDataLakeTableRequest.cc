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

#include <alibabacloud/dms-enterprise/model/GetDataLakeTableRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetDataLakeTableRequest;

GetDataLakeTableRequest::GetDataLakeTableRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetDataLakeTable") {
  setMethod(HttpRequest::Method::Post);
}

GetDataLakeTableRequest::~GetDataLakeTableRequest() {}

long GetDataLakeTableRequest::getTid() const {
  return tid_;
}

void GetDataLakeTableRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string GetDataLakeTableRequest::getCatalogName() const {
  return catalogName_;
}

void GetDataLakeTableRequest::setCatalogName(const std::string &catalogName) {
  catalogName_ = catalogName;
  setParameter(std::string("CatalogName"), catalogName);
}

std::string GetDataLakeTableRequest::getDbName() const {
  return dbName_;
}

void GetDataLakeTableRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string GetDataLakeTableRequest::getDataRegion() const {
  return dataRegion_;
}

void GetDataLakeTableRequest::setDataRegion(const std::string &dataRegion) {
  dataRegion_ = dataRegion;
  setParameter(std::string("DataRegion"), dataRegion);
}

std::string GetDataLakeTableRequest::getName() const {
  return name_;
}

void GetDataLakeTableRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

