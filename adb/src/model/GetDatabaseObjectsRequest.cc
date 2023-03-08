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

#include <alibabacloud/adb/model/GetDatabaseObjectsRequest.h>

using AlibabaCloud::Adb::Model::GetDatabaseObjectsRequest;

GetDatabaseObjectsRequest::GetDatabaseObjectsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetDatabaseObjects") {
  setMethod(HttpRequest::Method::Post);
}

GetDatabaseObjectsRequest::~GetDatabaseObjectsRequest() {}

std::string GetDatabaseObjectsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetDatabaseObjectsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetDatabaseObjectsRequest::getOrderBy() const {
  return orderBy_;
}

void GetDatabaseObjectsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetDatabaseObjectsRequest::getFilterOwner() const {
  return filterOwner_;
}

void GetDatabaseObjectsRequest::setFilterOwner(const std::string &filterOwner) {
  filterOwner_ = filterOwner;
  setParameter(std::string("FilterOwner"), filterOwner);
}

std::string GetDatabaseObjectsRequest::getFilterSchemaName() const {
  return filterSchemaName_;
}

void GetDatabaseObjectsRequest::setFilterSchemaName(const std::string &filterSchemaName) {
  filterSchemaName_ = filterSchemaName;
  setParameter(std::string("FilterSchemaName"), filterSchemaName);
}

long GetDatabaseObjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetDatabaseObjectsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetDatabaseObjectsRequest::getRegionId() const {
  return regionId_;
}

void GetDatabaseObjectsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetDatabaseObjectsRequest::getPageSize() const {
  return pageSize_;
}

void GetDatabaseObjectsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

