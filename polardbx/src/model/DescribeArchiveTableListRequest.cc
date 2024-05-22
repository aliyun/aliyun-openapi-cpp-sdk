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

#include <alibabacloud/polardbx/model/DescribeArchiveTableListRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeArchiveTableListRequest;

DescribeArchiveTableListRequest::DescribeArchiveTableListRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "DescribeArchiveTableList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeArchiveTableListRequest::~DescribeArchiveTableListRequest() {}

std::string DescribeArchiveTableListRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeArchiveTableListRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string DescribeArchiveTableListRequest::getRegionId() const {
  return regionId_;
}

void DescribeArchiveTableListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeArchiveTableListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeArchiveTableListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeArchiveTableListRequest::getPageIndex() const {
  return pageIndex_;
}

void DescribeArchiveTableListRequest::setPageIndex(long pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("PageIndex"), std::to_string(pageIndex));
}

std::string DescribeArchiveTableListRequest::getTableName() const {
  return tableName_;
}

void DescribeArchiveTableListRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string DescribeArchiveTableListRequest::getSchemaName() const {
  return schemaName_;
}

void DescribeArchiveTableListRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string DescribeArchiveTableListRequest::getStatus() const {
  return status_;
}

void DescribeArchiveTableListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

