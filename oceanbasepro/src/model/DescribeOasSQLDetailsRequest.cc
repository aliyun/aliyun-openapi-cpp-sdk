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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLDetailsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasSQLDetailsRequest;

DescribeOasSQLDetailsRequest::DescribeOasSQLDetailsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasSQLDetails") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasSQLDetailsRequest::~DescribeOasSQLDetailsRequest() {}

std::string DescribeOasSQLDetailsRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasSQLDetailsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

bool DescribeOasSQLDetailsRequest::getParseTable() const {
  return parseTable_;
}

void DescribeOasSQLDetailsRequest::setParseTable(bool parseTable) {
  parseTable_ = parseTable;
  setBodyParameter(std::string("ParseTable"), parseTable ? "true" : "false");
}

bool DescribeOasSQLDetailsRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasSQLDetailsRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

std::string DescribeOasSQLDetailsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasSQLDetailsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOasSQLDetailsRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasSQLDetailsRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasSQLDetailsRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasSQLDetailsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasSQLDetailsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasSQLDetailsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasSQLDetailsRequest::getDbName() const {
  return dbName_;
}

void DescribeOasSQLDetailsRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

