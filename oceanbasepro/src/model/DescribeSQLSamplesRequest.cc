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

#include <alibabacloud/oceanbasepro/model/DescribeSQLSamplesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSQLSamplesRequest;

DescribeSQLSamplesRequest::DescribeSQLSamplesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSQLSamples") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLSamplesRequest::~DescribeSQLSamplesRequest() {}

bool DescribeSQLSamplesRequest::getReturnSqlText() const {
  return returnSqlText_;
}

void DescribeSQLSamplesRequest::setReturnSqlText(bool returnSqlText) {
  returnSqlText_ = returnSqlText;
  setBodyParameter(std::string("ReturnSqlText"), returnSqlText ? "true" : "false");
}

std::string DescribeSQLSamplesRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLSamplesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLSamplesRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSQLSamplesRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeSQLSamplesRequest::getSqlId() const {
  return sqlId_;
}

void DescribeSQLSamplesRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeSQLSamplesRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLSamplesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLSamplesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSQLSamplesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSQLSamplesRequest::getDbName() const {
  return dbName_;
}

void DescribeSQLSamplesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

