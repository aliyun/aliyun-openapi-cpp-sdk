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

#include <alibabacloud/oceanbasepro/model/CreateOasOutlineTaskRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateOasOutlineTaskRequest;

CreateOasOutlineTaskRequest::CreateOasOutlineTaskRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateOasOutlineTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateOasOutlineTaskRequest::~CreateOasOutlineTaskRequest() {}

std::string CreateOasOutlineTaskRequest::getStartTime() const {
  return startTime_;
}

void CreateOasOutlineTaskRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

std::string CreateOasOutlineTaskRequest::getUId() const {
  return uId_;
}

void CreateOasOutlineTaskRequest::setUId(const std::string &uId) {
  uId_ = uId;
  setBodyParameter(std::string("UId"), uId);
}

bool CreateOasOutlineTaskRequest::getDynamicSql() const {
  return dynamicSql_;
}

void CreateOasOutlineTaskRequest::setDynamicSql(bool dynamicSql) {
  dynamicSql_ = dynamicSql;
  setBodyParameter(std::string("DynamicSql"), dynamicSql ? "true" : "false");
}

std::string CreateOasOutlineTaskRequest::getSqlText() const {
  return sqlText_;
}

void CreateOasOutlineTaskRequest::setSqlText(const std::string &sqlText) {
  sqlText_ = sqlText;
  setBodyParameter(std::string("SqlText"), sqlText);
}

bool CreateOasOutlineTaskRequest::getBySqlId() const {
  return bySqlId_;
}

void CreateOasOutlineTaskRequest::setBySqlId(bool bySqlId) {
  bySqlId_ = bySqlId;
  setBodyParameter(std::string("BySqlId"), bySqlId ? "true" : "false");
}

int CreateOasOutlineTaskRequest::getMaxConcurrent() const {
  return maxConcurrent_;
}

void CreateOasOutlineTaskRequest::setMaxConcurrent(int maxConcurrent) {
  maxConcurrent_ = maxConcurrent;
  setBodyParameter(std::string("MaxConcurrent"), std::to_string(maxConcurrent));
}

std::string CreateOasOutlineTaskRequest::getTenantId() const {
  return tenantId_;
}

void CreateOasOutlineTaskRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string CreateOasOutlineTaskRequest::getStatementId() const {
  return statementId_;
}

void CreateOasOutlineTaskRequest::setStatementId(const std::string &statementId) {
  statementId_ = statementId;
  setBodyParameter(std::string("StatementId"), statementId);
}

std::string CreateOasOutlineTaskRequest::getTableName() const {
  return tableName_;
}

void CreateOasOutlineTaskRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setBodyParameter(std::string("TableName"), tableName);
}

std::string CreateOasOutlineTaskRequest::getSqlId() const {
  return sqlId_;
}

void CreateOasOutlineTaskRequest::setSqlId(const std::string &sqlId) {
  sqlId_ = sqlId;
  setBodyParameter(std::string("SqlId"), sqlId);
}

std::string CreateOasOutlineTaskRequest::getEndTime() const {
  return endTime_;
}

void CreateOasOutlineTaskRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string CreateOasOutlineTaskRequest::getInstanceId() const {
  return instanceId_;
}

void CreateOasOutlineTaskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateOasOutlineTaskRequest::getPlanData() const {
  return planData_;
}

void CreateOasOutlineTaskRequest::setPlanData(const std::string &planData) {
  planData_ = planData;
  setBodyParameter(std::string("PlanData"), planData);
}

std::string CreateOasOutlineTaskRequest::getIndexName() const {
  return indexName_;
}

void CreateOasOutlineTaskRequest::setIndexName(const std::string &indexName) {
  indexName_ = indexName;
  setBodyParameter(std::string("IndexName"), indexName);
}

std::string CreateOasOutlineTaskRequest::getDatabaseName() const {
  return databaseName_;
}

void CreateOasOutlineTaskRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setBodyParameter(std::string("DatabaseName"), databaseName);
}

bool CreateOasOutlineTaskRequest::getIsConcurrentLimit() const {
  return isConcurrentLimit_;
}

void CreateOasOutlineTaskRequest::setIsConcurrentLimit(bool isConcurrentLimit) {
  isConcurrentLimit_ = isConcurrentLimit;
  setBodyParameter(std::string("IsConcurrentLimit"), isConcurrentLimit ? "true" : "false");
}

