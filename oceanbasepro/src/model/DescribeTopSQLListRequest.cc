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

#include <alibabacloud/oceanbasepro/model/DescribeTopSQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTopSQLListRequest;

DescribeTopSQLListRequest::DescribeTopSQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTopSQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTopSQLListRequest::~DescribeTopSQLListRequest() {}

std::string DescribeTopSQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeTopSQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeTopSQLListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTopSQLListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTopSQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeTopSQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

std::string DescribeTopSQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTopSQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeTopSQLListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTopSQLListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTopSQLListRequest::getSearchParameter() const {
  return searchParameter_;
}

void DescribeTopSQLListRequest::setSearchParameter(const std::string &searchParameter) {
  searchParameter_ = searchParameter;
  setBodyParameter(std::string("SearchParameter"), searchParameter);
}

std::string DescribeTopSQLListRequest::getSortOrder() const {
  return sortOrder_;
}

void DescribeTopSQLListRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setBodyParameter(std::string("SortOrder"), sortOrder);
}

std::string DescribeTopSQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeTopSQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeTopSQLListRequest::getSQLId() const {
  return sQLId_;
}

void DescribeTopSQLListRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeTopSQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeTopSQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeTopSQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeTopSQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeTopSQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeTopSQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeTopSQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeTopSQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeTopSQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeTopSQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeTopSQLListRequest::getSortColumn() const {
  return sortColumn_;
}

void DescribeTopSQLListRequest::setSortColumn(const std::string &sortColumn) {
  sortColumn_ = sortColumn;
  setBodyParameter(std::string("SortColumn"), sortColumn);
}

