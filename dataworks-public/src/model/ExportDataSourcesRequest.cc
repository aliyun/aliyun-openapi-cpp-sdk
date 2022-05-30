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

#include <alibabacloud/dataworks-public/model/ExportDataSourcesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ExportDataSourcesRequest;

ExportDataSourcesRequest::ExportDataSourcesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ExportDataSources") {
  setMethod(HttpRequest::Method::Get);
}

ExportDataSourcesRequest::~ExportDataSourcesRequest() {}

std::string ExportDataSourcesRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ExportDataSourcesRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

int ExportDataSourcesRequest::getPageNumber() const {
  return pageNumber_;
}

void ExportDataSourcesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ExportDataSourcesRequest::getSubType() const {
  return subType_;
}

void ExportDataSourcesRequest::setSubType(const std::string &subType) {
  subType_ = subType;
  setParameter(std::string("SubType"), subType);
}

std::string ExportDataSourcesRequest::getName() const {
  return name_;
}

void ExportDataSourcesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ExportDataSourcesRequest::getEnvType() const {
  return envType_;
}

void ExportDataSourcesRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

int ExportDataSourcesRequest::getPageSize() const {
  return pageSize_;
}

void ExportDataSourcesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ExportDataSourcesRequest::getProjectId() const {
  return projectId_;
}

void ExportDataSourcesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

