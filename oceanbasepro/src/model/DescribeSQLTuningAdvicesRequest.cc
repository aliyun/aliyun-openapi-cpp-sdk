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

#include <alibabacloud/oceanbasepro/model/DescribeSQLTuningAdvicesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeSQLTuningAdvicesRequest;

DescribeSQLTuningAdvicesRequest::DescribeSQLTuningAdvicesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeSQLTuningAdvices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLTuningAdvicesRequest::~DescribeSQLTuningAdvicesRequest() {}

std::string DescribeSQLTuningAdvicesRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLTuningAdvicesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLTuningAdvicesRequest::getTenantId() const {
  return tenantId_;
}

void DescribeSQLTuningAdvicesRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeSQLTuningAdvicesRequest::getSqlId() const {
  return sqlId_;
}

void DescribeSQLTuningAdvicesRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeSQLTuningAdvicesRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLTuningAdvicesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLTuningAdvicesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSQLTuningAdvicesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSQLTuningAdvicesRequest::getDbName() const {
  return dbName_;
}

void DescribeSQLTuningAdvicesRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeSQLTuningAdvicesRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeSQLTuningAdvicesRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

