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

#include <alibabacloud/oceanbasepro/model/DescribeOasTopSQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasTopSQLListRequest;

DescribeOasTopSQLListRequest::DescribeOasTopSQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasTopSQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasTopSQLListRequest::~DescribeOasTopSQLListRequest() {}

std::string DescribeOasTopSQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasTopSQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeOasTopSQLListRequest::getCustomColumns() const {
  return customColumns_;
}

void DescribeOasTopSQLListRequest::setCustomColumns(const std::string &customColumns) {
  customColumns_ = customColumns;
  setBodyParameter(std::string("CustomColumns"), customColumns);
}

std::string DescribeOasTopSQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeOasTopSQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

bool DescribeOasTopSQLListRequest::getMergeDynamicSql() const {
  return mergeDynamicSql_;
}

void DescribeOasTopSQLListRequest::setMergeDynamicSql(bool mergeDynamicSql) {
  mergeDynamicSql_ = mergeDynamicSql;
  setBodyParameter(std::string("MergeDynamicSql"), mergeDynamicSql ? "true" : "false");
}

bool DescribeOasTopSQLListRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasTopSQLListRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

long DescribeOasTopSQLListRequest::getSqlTextLength() const {
  return sqlTextLength_;
}

void DescribeOasTopSQLListRequest::setSqlTextLength(long sqlTextLength) {
  sqlTextLength_ = sqlTextLength;
  setBodyParameter(std::string("SqlTextLength"), std::to_string(sqlTextLength));
}

std::string DescribeOasTopSQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasTopSQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOasTopSQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeOasTopSQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeOasTopSQLListRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasTopSQLListRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasTopSQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeOasTopSQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeOasTopSQLListRequest::getSearchParam() const {
  return searchParam_;
}

void DescribeOasTopSQLListRequest::setSearchParam(const std::string &searchParam) {
  searchParam_ = searchParam;
  setBodyParameter(std::string("SearchParam"), searchParam);
}

std::string DescribeOasTopSQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasTopSQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasTopSQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeOasTopSQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeOasTopSQLListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasTopSQLListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasTopSQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeOasTopSQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeOasTopSQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeOasTopSQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeOasTopSQLListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeOasTopSQLListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

