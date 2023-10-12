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

#include <alibabacloud/oceanbasepro/model/DescribeAnomalySQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeAnomalySQLListRequest;

DescribeAnomalySQLListRequest::DescribeAnomalySQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeAnomalySQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAnomalySQLListRequest::~DescribeAnomalySQLListRequest() {}

std::string DescribeAnomalySQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeAnomalySQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeAnomalySQLListRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAnomalySQLListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAnomalySQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeAnomalySQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

std::string DescribeAnomalySQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeAnomalySQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeAnomalySQLListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAnomalySQLListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAnomalySQLListRequest::getSearchParameter() const {
  return searchParameter_;
}

void DescribeAnomalySQLListRequest::setSearchParameter(const std::string &searchParameter) {
  searchParameter_ = searchParameter;
  setBodyParameter(std::string("SearchParameter"), searchParameter);
}

std::string DescribeAnomalySQLListRequest::getSortOrder() const {
  return sortOrder_;
}

void DescribeAnomalySQLListRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setBodyParameter(std::string("SortOrder"), sortOrder);
}

std::string DescribeAnomalySQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeAnomalySQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeAnomalySQLListRequest::getSQLId() const {
  return sQLId_;
}

void DescribeAnomalySQLListRequest::setSQLId(const std::string &sQLId) {
  sQLId_ = sQLId;
  setBodyParameter(std::string("SQLId"), sQLId);
}

std::string DescribeAnomalySQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeAnomalySQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeAnomalySQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeAnomalySQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeAnomalySQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeAnomalySQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeAnomalySQLListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeAnomalySQLListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeAnomalySQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeAnomalySQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeAnomalySQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeAnomalySQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeAnomalySQLListRequest::getSortColumn() const {
  return sortColumn_;
}

void DescribeAnomalySQLListRequest::setSortColumn(const std::string &sortColumn) {
  sortColumn_ = sortColumn;
  setBodyParameter(std::string("SortColumn"), sortColumn);
}

std::string DescribeAnomalySQLListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeAnomalySQLListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

