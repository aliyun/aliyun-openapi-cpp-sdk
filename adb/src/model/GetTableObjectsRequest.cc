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

#include <alibabacloud/adb/model/GetTableObjectsRequest.h>

using AlibabaCloud::Adb::Model::GetTableObjectsRequest;

GetTableObjectsRequest::GetTableObjectsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetTableObjects") {
  setMethod(HttpRequest::Method::Post);
}

GetTableObjectsRequest::~GetTableObjectsRequest() {}

long GetTableObjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetTableObjectsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetTableObjectsRequest::getFilterTblType() const {
  return filterTblType_;
}

void GetTableObjectsRequest::setFilterTblType(const std::string &filterTblType) {
  filterTblType_ = filterTblType;
  setParameter(std::string("FilterTblType"), filterTblType);
}

std::string GetTableObjectsRequest::getFilterDescription() const {
  return filterDescription_;
}

void GetTableObjectsRequest::setFilterDescription(const std::string &filterDescription) {
  filterDescription_ = filterDescription;
  setParameter(std::string("FilterDescription"), filterDescription);
}

std::string GetTableObjectsRequest::getRegionId() const {
  return regionId_;
}

void GetTableObjectsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetTableObjectsRequest::getPageSize() const {
  return pageSize_;
}

void GetTableObjectsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetTableObjectsRequest::getFilterTblName() const {
  return filterTblName_;
}

void GetTableObjectsRequest::setFilterTblName(const std::string &filterTblName) {
  filterTblName_ = filterTblName;
  setParameter(std::string("FilterTblName"), filterTblName);
}

std::string GetTableObjectsRequest::getSchemaName() const {
  return schemaName_;
}

void GetTableObjectsRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string GetTableObjectsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetTableObjectsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetTableObjectsRequest::getOrderBy() const {
  return orderBy_;
}

void GetTableObjectsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string GetTableObjectsRequest::getFilterOwner() const {
  return filterOwner_;
}

void GetTableObjectsRequest::setFilterOwner(const std::string &filterOwner) {
  filterOwner_ = filterOwner;
  setParameter(std::string("FilterOwner"), filterOwner);
}

