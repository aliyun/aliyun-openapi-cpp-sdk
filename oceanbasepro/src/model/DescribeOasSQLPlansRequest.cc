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

#include <alibabacloud/oceanbasepro/model/DescribeOasSQLPlansRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeOasSQLPlansRequest;

DescribeOasSQLPlansRequest::DescribeOasSQLPlansRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeOasSQLPlans") {
  setMethod(HttpRequest::Method::Post);
}

DescribeOasSQLPlansRequest::~DescribeOasSQLPlansRequest() {}

bool DescribeOasSQLPlansRequest::getReturnBriefInfo() const {
  return returnBriefInfo_;
}

void DescribeOasSQLPlansRequest::setReturnBriefInfo(bool returnBriefInfo) {
  returnBriefInfo_ = returnBriefInfo;
  setBodyParameter(std::string("ReturnBriefInfo"), returnBriefInfo ? "true" : "false");
}

std::string DescribeOasSQLPlansRequest::getStartTime() const {
  return startTime_;
}

void DescribeOasSQLPlansRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string DescribeOasSQLPlansRequest::getPlanUnionHash() const {
  return planUnionHash_;
}

void DescribeOasSQLPlansRequest::setPlanUnionHash(const std::string &planUnionHash) {
  planUnionHash_ = planUnionHash;
  setBodyParameter(std::string("PlanUnionHash"), planUnionHash);
}

bool DescribeOasSQLPlansRequest::getDynamicSql() const {
  return dynamicSql_;
}

void DescribeOasSQLPlansRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

std::string DescribeOasSQLPlansRequest::getTenantId() const {
  return tenantId_;
}

void DescribeOasSQLPlansRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string DescribeOasSQLPlansRequest::getSqlId() const {
  return sqlId_;
}

void DescribeOasSQLPlansRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string DescribeOasSQLPlansRequest::getEndTime() const {
  return endTime_;
}

void DescribeOasSQLPlansRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeOasSQLPlansRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeOasSQLPlansRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeOasSQLPlansRequest::getDbName() const {
  return dbName_;
}

void DescribeOasSQLPlansRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setBodyParameter(std::string("DbName"), dbName);
}

std::string DescribeOasSQLPlansRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void DescribeOasSQLPlansRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setBodyParameter(std::string("AcceptLanguage"), acceptLanguage);
}

