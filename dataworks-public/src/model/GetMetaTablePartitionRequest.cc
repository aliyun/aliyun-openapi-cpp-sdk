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

#include <alibabacloud/dataworks-public/model/GetMetaTablePartitionRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTablePartitionRequest;

GetMetaTablePartitionRequest::GetMetaTablePartitionRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTablePartition") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaTablePartitionRequest::~GetMetaTablePartitionRequest() {}

GetMetaTablePartitionRequest::SortCriterion GetMetaTablePartitionRequest::getSortCriterion() const {
  return sortCriterion_;
}

void GetMetaTablePartitionRequest::setSortCriterion(const GetMetaTablePartitionRequest::SortCriterion &sortCriterion) {
  sortCriterion_ = sortCriterion;
  setParameter(std::string("SortCriterion") + ".SortField", sortCriterion.sortField);
  setParameter(std::string("SortCriterion") + ".Order", sortCriterion.order);
}

std::string GetMetaTablePartitionRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaTablePartitionRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaTablePartitionRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaTablePartitionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetMetaTablePartitionRequest::getPageNumber() const {
  return pageNumber_;
}

void GetMetaTablePartitionRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetMetaTablePartitionRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTablePartitionRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTablePartitionRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaTablePartitionRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int GetMetaTablePartitionRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTablePartitionRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaTablePartitionRequest::getTableName() const {
  return tableName_;
}

void GetMetaTablePartitionRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

