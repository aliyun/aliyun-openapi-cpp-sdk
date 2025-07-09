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

#include <alibabacloud/oceanbasepro/model/DescribeSampleSqlRawTextsRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSampleSqlRawTextsRequest;

DescribeSampleSqlRawTextsRequest::DescribeSampleSqlRawTextsRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSampleSqlRawTexts") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSampleSqlRawTextsRequest::~DescribeSampleSqlRawTextsRequest() {}

std::string DescribeSampleSqlRawTextsRequest::getTraceId() const {
  return traceId_;
}

void DescribeSampleSqlRawTextsRequest::setTraceId(const std::string &traceId) {
  traceId_ = traceId;
  setBodyParameter(std::string("TraceId"), traceId);
}

std::string DescribeSampleSqlRawTextsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSampleSqlRawTextsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

bool DescribeSampleSqlRawTextsRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeSampleSqlRawTextsRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

std::string DescribeSampleSqlRawTextsRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSampleSqlRawTextsRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeSampleSqlRawTextsRequest::getLimit() const {
  return limit_;
}

void DescribeSampleSqlRawTextsRequest::setLimit(int limit) {
  limit_ = limit;
  setBodyParameter(std::string("Limit"), std::to_string(limit));
}

std::string DescribeSampleSqlRawTextsRequest::getSqlId() const {
  return sqlId_;
}

void DescribeSampleSqlRawTextsRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeSampleSqlRawTextsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSampleSqlRawTextsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSampleSqlRawTextsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSampleSqlRawTextsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSampleSqlRawTextsRequest::getDbName() const {
  return dbName_;
}

void DescribeSampleSqlRawTextsRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

