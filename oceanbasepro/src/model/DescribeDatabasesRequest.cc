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

#include <alibabacloud/oceanbasepro/model/DescribeDatabasesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeDatabasesRequest;

DescribeDatabasesRequest::DescribeDatabasesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeDatabases") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDatabasesRequest::~DescribeDatabasesRequest() {}

std::string DescribeDatabasesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeDatabasesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

int DescribeDatabasesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDatabasesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDatabasesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDatabasesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDatabasesRequest::getDatabaseName() const {
  return databaseName_;
}

void DescribeDatabasesRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

bool DescribeDatabasesRequest::getWithTables() const {
  return withTables_;
}

void DescribeDatabasesRequest::setWithTables(bool withTables) {
  withTables_ = withTables;
  setBodyParameter(std::string("WithTables"), withTables ? "true" : "false");
}

std::string DescribeDatabasesRequest::getTenantId() const {
  return tenantId_;
}

void DescribeDatabasesRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeDatabasesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDatabasesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

