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

#include <alibabacloud/gpdb/model/DescribeSQLLogsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLLogsRequest;

DescribeSQLLogsRequest::DescribeSQLLogsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogsRequest::~DescribeSQLLogsRequest() {}

std::string DescribeSQLLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLLogsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeSQLLogsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

int DescribeSQLLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSQLLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLLogsRequest::getDatabase() const {
  return database_;
}

void DescribeSQLLogsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeSQLLogsRequest::getSourceIP() const {
  return sourceIP_;
}

void DescribeSQLLogsRequest::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DescribeSQLLogsRequest::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DescribeSQLLogsRequest::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

int DescribeSQLLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSQLLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSQLLogsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSQLLogsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSQLLogsRequest::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DescribeSQLLogsRequest::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DescribeSQLLogsRequest::getExecuteCost() const {
  return executeCost_;
}

void DescribeSQLLogsRequest::setExecuteCost(const std::string &executeCost) {
  executeCost_ = executeCost;
  setParameter(std::string("ExecuteCost"), executeCost);
}

std::string DescribeSQLLogsRequest::getExecuteState() const {
  return executeState_;
}

void DescribeSQLLogsRequest::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DescribeSQLLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLLogsRequest::getOperationType() const {
  return operationType_;
}

void DescribeSQLLogsRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DescribeSQLLogsRequest::getOperationClass() const {
  return operationClass_;
}

void DescribeSQLLogsRequest::setOperationClass(const std::string &operationClass) {
  operationClass_ = operationClass;
  setParameter(std::string("OperationClass"), operationClass);
}

std::string DescribeSQLLogsRequest::getUser() const {
  return user_;
}

void DescribeSQLLogsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

