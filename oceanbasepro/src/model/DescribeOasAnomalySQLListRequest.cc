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

#include <alibabacloud/oceanbasepro/model/DescribeOasAnomalySQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasAnomalySQLListRequest;

DescribeOasAnomalySQLListRequest::DescribeOasAnomalySQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasAnomalySQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasAnomalySQLListRequest::~DescribeOasAnomalySQLListRequest() {}

std::string DescribeOasAnomalySQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasAnomalySQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeOasAnomalySQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeOasAnomalySQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

bool DescribeOasAnomalySQLListRequest::getMergeDynamicSql() const {
  return mergeDynamicSql_;
}

void DescribeOasAnomalySQLListRequest::setMergeDynamicSql(bool mergeDynamicSql) {
  mergeDynamicSql_ = mergeDynamicSql;
  setBodyParameter(std::string("MergeDynamicSql"), mergeDynamicSql ? "true" : "false");
}

long DescribeOasAnomalySQLListRequest::getCurrent() const {
  return current_;
}

void DescribeOasAnomalySQLListRequest::setCurrent(long current) {
  current_ = current;
  setBodyParameter(std::string("Current"), std::to_string(current));
}

bool DescribeOasAnomalySQLListRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasAnomalySQLListRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

long DescribeOasAnomalySQLListRequest::getSqlTextLength() const {
  return sqlTextLength_;
}

void DescribeOasAnomalySQLListRequest::setSqlTextLength(long sqlTextLength) {
  sqlTextLength_ = sqlTextLength;
  setBodyParameter(std::string("SqlTextLength"), std::to_string(sqlTextLength));
}

std::string DescribeOasAnomalySQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasAnomalySQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

long DescribeOasAnomalySQLListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeOasAnomalySQLListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeOasAnomalySQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeOasAnomalySQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeOasAnomalySQLListRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasAnomalySQLListRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasAnomalySQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeOasAnomalySQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeOasAnomalySQLListRequest::getSearchParam() const {
  return searchParam_;
}

void DescribeOasAnomalySQLListRequest::setSearchParam(const std::string &searchParam) {
  searchParam_ = searchParam;
  setBodyParameter(std::string("SearchParam"), searchParam);
}

std::string DescribeOasAnomalySQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasAnomalySQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasAnomalySQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeOasAnomalySQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeOasAnomalySQLListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasAnomalySQLListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasAnomalySQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeOasAnomalySQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeOasAnomalySQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeOasAnomalySQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeOasAnomalySQLListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeOasAnomalySQLListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

