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

#include <alibabacloud/dataworks-public/model/GetMetaDBInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaDBInfoRequest;

GetMetaDBInfoRequest::GetMetaDBInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaDBInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetMetaDBInfoRequest::~GetMetaDBInfoRequest() {}

std::string GetMetaDBInfoRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaDBInfoRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaDBInfoRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaDBInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetMetaDBInfoRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaDBInfoRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string GetMetaDBInfoRequest::getAppGuid() const {
  return appGuid_;
}

void GetMetaDBInfoRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

