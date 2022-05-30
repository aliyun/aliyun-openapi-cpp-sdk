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

#include <alibabacloud/dataworks-public/model/GetMetaTableFullInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableFullInfoRequest;

GetMetaTableFullInfoRequest::GetMetaTableFullInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableFullInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetMetaTableFullInfoRequest::~GetMetaTableFullInfoRequest() {}

std::string GetMetaTableFullInfoRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaTableFullInfoRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaTableFullInfoRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaTableFullInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetMetaTableFullInfoRequest::getPageNum() const {
  return pageNum_;
}

void GetMetaTableFullInfoRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string GetMetaTableFullInfoRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableFullInfoRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTableFullInfoRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaTableFullInfoRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int GetMetaTableFullInfoRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTableFullInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaTableFullInfoRequest::getTableName() const {
  return tableName_;
}

void GetMetaTableFullInfoRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

