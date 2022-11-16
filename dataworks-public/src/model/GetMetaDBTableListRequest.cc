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

#include <alibabacloud/dataworks-public/model/GetMetaDBTableListRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaDBTableListRequest;

GetMetaDBTableListRequest::GetMetaDBTableListRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaDBTableList") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaDBTableListRequest::~GetMetaDBTableListRequest() {}

std::string GetMetaDBTableListRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaDBTableListRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaDBTableListRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaDBTableListRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetMetaDBTableListRequest::getPageNumber() const {
  return pageNumber_;
}

void GetMetaDBTableListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetMetaDBTableListRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaDBTableListRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int GetMetaDBTableListRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaDBTableListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaDBTableListRequest::getAppGuid() const {
  return appGuid_;
}

void GetMetaDBTableListRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

