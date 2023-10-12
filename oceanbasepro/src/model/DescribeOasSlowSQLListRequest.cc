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

#include <alibabacloud/oceanbasepro/model/DescribeOasSlowSQLListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasSlowSQLListRequest;

DescribeOasSlowSQLListRequest::DescribeOasSlowSQLListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasSlowSQLList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasSlowSQLListRequest::~DescribeOasSlowSQLListRequest() {}

std::string DescribeOasSlowSQLListRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasSlowSQLListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeOasSlowSQLListRequest::getSearchRule() const {
  return searchRule_;
}

void DescribeOasSlowSQLListRequest::setSearchRule(const std::string &searchRule) {
  searchRule_ = searchRule;
  setBodyParameter(std::string("SearchRule"), searchRule);
}

bool DescribeOasSlowSQLListRequest::getMergeDynamicSql() const {
  return mergeDynamicSql_;
}

void DescribeOasSlowSQLListRequest::setMergeDynamicSql(bool mergeDynamicSql) {
  mergeDynamicSql_ = mergeDynamicSql;
  setBodyParameter(std::string("MergeDynamicSql"), mergeDynamicSql ? "true" : "false");
}

bool DescribeOasSlowSQLListRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasSlowSQLListRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

long DescribeOasSlowSQLListRequest::getSqlTextLength() const {
  return sqlTextLength_;
}

void DescribeOasSlowSQLListRequest::setSqlTextLength(long sqlTextLength) {
  sqlTextLength_ = sqlTextLength;
  setBodyParameter(std::string("SqlTextLength"), std::to_string(sqlTextLength));
}

std::string DescribeOasSlowSQLListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasSlowSQLListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOasSlowSQLListRequest::getSearchValue() const {
  return searchValue_;
}

void DescribeOasSlowSQLListRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setBodyParameter(std::string("SearchValue"), searchValue);
}

std::string DescribeOasSlowSQLListRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasSlowSQLListRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasSlowSQLListRequest::getFilterCondition() const {
  return filterCondition_;
}

void DescribeOasSlowSQLListRequest::setFilterCondition(const std::string &filterCondition) {
  filterCondition_ = filterCondition;
  setBodyParameter(std::string("FilterCondition"), filterCondition);
}

std::string DescribeOasSlowSQLListRequest::getSearchParam() const {
  return searchParam_;
}

void DescribeOasSlowSQLListRequest::setSearchParam(const std::string &searchParam) {
  searchParam_ = searchParam;
  setBodyParameter(std::string("SearchParam"), searchParam);
}

std::string DescribeOasSlowSQLListRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasSlowSQLListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasSlowSQLListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeOasSlowSQLListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeOasSlowSQLListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasSlowSQLListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasSlowSQLListRequest::getDbName() const {
  return dbName_;
}

void DescribeOasSlowSQLListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeOasSlowSQLListRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void DescribeOasSlowSQLListRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setBodyParameter(std::string("SearchKeyWord"), searchKeyWord);
}

std::string DescribeOasSlowSQLListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeOasSlowSQLListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

