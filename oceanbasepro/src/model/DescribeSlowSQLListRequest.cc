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

#include <alibabacloud/oceanbasepro/model/DescribeSlowSQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSlowSQLListRequest;

DescribeSlowSQLListRequest::DescribeSlowSQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSlowSQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlowSQLListRequest::~DescribeSlowSQLListRequest() {}

std::string DescribeSlowSQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlowSQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeSlowSQLListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSlowSQLListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSlowSQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeSlowSQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

std::string DescribeSlowSQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSlowSQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeSlowSQLListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSlowSQLListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSlowSQLListRequest::getSearchParameter() const {
  return searchParameter_;
}

void DescribeSlowSQLListRequest::setSearchParameter(const std::string &searchParameter) {
  searchParameter_ = searchParameter;
  setBodyParameter(std::string("SearchParameter"), searchParameter);
}

std::string DescribeSlowSQLListRequest::getSortOrder() const {
  return sortOrder_;
}

void DescribeSlowSQLListRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setBodyParameter(std::string("SortOrder"), sortOrder);
}

std::string DescribeSlowSQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeSlowSQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeSlowSQLListRequest::getSQLId() const {
  return sQLId_;
}

void DescribeSlowSQLListRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeSlowSQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeSlowSQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeSlowSQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlowSQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSlowSQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeSlowSQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeSlowSQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeSlowSQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeSlowSQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeSlowSQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeSlowSQLListRequest::getSortColumn() const {
  return sortColumn_;
}

void DescribeSlowSQLListRequest::setSortColumn(const std::string &sortColumn) {
  sortColumn_ = sortColumn;
  setBodyParameter(std::string("SortColumn"), sortColumn);
}

