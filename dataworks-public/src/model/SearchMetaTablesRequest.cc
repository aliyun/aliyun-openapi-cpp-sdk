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

#include <alibabacloud/dataworks-public/model/SearchMetaTablesRequest.h>

using AlibabaCloud::Dataworks_public::Model::SearchMetaTablesRequest;

SearchMetaTablesRequest::SearchMetaTablesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "SearchMetaTables") {
  setMethod(HttpRequest::Method::Post);
}

SearchMetaTablesRequest::~SearchMetaTablesRequest() {}

std::string SearchMetaTablesRequest::getSchema() const {
  return schema_;
}

void SearchMetaTablesRequest::setSchema(const std::string &schema) {
  schema_ = schema;
  setParameter(std::string("Schema"), schema);
}

std::string SearchMetaTablesRequest::getDataSourceType() const {
  return dataSourceType_;
}

void SearchMetaTablesRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string SearchMetaTablesRequest::getClusterId() const {
  return clusterId_;
}

void SearchMetaTablesRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int SearchMetaTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchMetaTablesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int SearchMetaTablesRequest::getEntityType() const {
  return entityType_;
}

void SearchMetaTablesRequest::setEntityType(int entityType) {
  entityType_ = entityType;
  setParameter(std::string("EntityType"), std::to_string(entityType));
}

int SearchMetaTablesRequest::getPageSize() const {
  return pageSize_;
}

void SearchMetaTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchMetaTablesRequest::getAppGuid() const {
  return appGuid_;
}

void SearchMetaTablesRequest::setAppGuid(const std::string &appGuid) {
  appGuid_ = appGuid;
  setParameter(std::string("AppGuid"), appGuid);
}

std::string SearchMetaTablesRequest::getKeyword() const {
  return keyword_;
}

void SearchMetaTablesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

