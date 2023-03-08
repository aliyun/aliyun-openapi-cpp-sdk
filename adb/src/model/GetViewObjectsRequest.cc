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

#include <alibabacloud/adb/model/GetViewObjectsRequest.h>

using AlibabaCloud::Adb::Model::GetViewObjectsRequest;

GetViewObjectsRequest::GetViewObjectsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetViewObjects") {
  setMethod(HttpRequest::Method::Post);
}

GetViewObjectsRequest::~GetViewObjectsRequest() {}

long GetViewObjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetViewObjectsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetViewObjectsRequest::getRegionId() const {
  return regionId_;
}

void GetViewObjectsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetViewObjectsRequest::getPageSize() const {
  return pageSize_;
}

void GetViewObjectsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetViewObjectsRequest::getFilterViewName() const {
  return filterViewName_;
}

void GetViewObjectsRequest::setFilterViewName(const std::string &filterViewName) {
  filterViewName_ = filterViewName;
  setParameter(std::string("FilterViewName"), filterViewName);
}

std::string GetViewObjectsRequest::getFilterViewType() const {
  return filterViewType_;
}

void GetViewObjectsRequest::setFilterViewType(const std::string &filterViewType) {
  filterViewType_ = filterViewType;
  setParameter(std::string("FilterViewType"), filterViewType);
}

std::string GetViewObjectsRequest::getSchemaName() const {
  return schemaName_;
}

void GetViewObjectsRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string GetViewObjectsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetViewObjectsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetViewObjectsRequest::getOrderBy() const {
  return orderBy_;
}

void GetViewObjectsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetViewObjectsRequest::getFilterOwner() const {
  return filterOwner_;
}

void GetViewObjectsRequest::setFilterOwner(const std::string &filterOwner) {
  filterOwner_ = filterOwner;
  setParameter(std::string("FilterOwner"), filterOwner);
}

