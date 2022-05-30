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

#include <alibabacloud/dataworks-public/model/GetDataSourceMetaRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataSourceMetaRequest;

GetDataSourceMetaRequest::GetDataSourceMetaRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDataSourceMeta") {
  setMethod(HttpRequest::Method::Post);
}

GetDataSourceMetaRequest::~GetDataSourceMetaRequest() {}

std::string GetDataSourceMetaRequest::getDatasourceName() const {
  return datasourceName_;
}

void GetDataSourceMetaRequest::setDatasourceName(const std::string &datasourceName) {
  datasourceName_ = datasourceName;
  setParameter(std::string("DatasourceName"), datasourceName);
}

long GetDataSourceMetaRequest::getPageNumber() const {
  return pageNumber_;
}

void GetDataSourceMetaRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long GetDataSourceMetaRequest::getPageSize() const {
  return pageSize_;
}

void GetDataSourceMetaRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetDataSourceMetaRequest::getEnvType() const {
  return envType_;
}

void GetDataSourceMetaRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

long GetDataSourceMetaRequest::getProjectId() const {
  return projectId_;
}

void GetDataSourceMetaRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

