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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLHistoryListRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasSQLHistoryListRequest;

DescribeOasSQLHistoryListRequest::DescribeOasSQLHistoryListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasSQLHistoryList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasSQLHistoryListRequest::~DescribeOasSQLHistoryListRequest() {}

std::string DescribeOasSQLHistoryListRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasSQLHistoryListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

bool DescribeOasSQLHistoryListRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasSQLHistoryListRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

std::string DescribeOasSQLHistoryListRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasSQLHistoryListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOasSQLHistoryListRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasSQLHistoryListRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasSQLHistoryListRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasSQLHistoryListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasSQLHistoryListRequest::getNodeIp() const {
  return nodeIp_;
}

void DescribeOasSQLHistoryListRequest::setNodeIp(const std::string &nodeIp) {
  nodeIp_ = nodeIp;
  setBodyParameter(std::string("NodeIp"), nodeIp);
}

std::string DescribeOasSQLHistoryListRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasSQLHistoryListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasSQLHistoryListRequest::getDbName() const {
  return dbName_;
}

void DescribeOasSQLHistoryListRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeOasSQLHistoryListRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeOasSQLHistoryListRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

