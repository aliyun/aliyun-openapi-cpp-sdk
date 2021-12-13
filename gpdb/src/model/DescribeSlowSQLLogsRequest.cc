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

#include <alibabacloud/gpdb/model/DescribeSlowSQLLogsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSlowSQLLogsRequest;

DescribeSlowSQLLogsRequest::DescribeSlowSQLLogsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSlowSQLLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlowSQLLogsRequest::~DescribeSlowSQLLogsRequest() {}

std::string DescribeSlowSQLLogsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlowSQLLogsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSlowSQLLogsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeSlowSQLLogsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

int DescribeSlowSQLLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSlowSQLLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSlowSQLLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSlowSQLLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSlowSQLLogsRequest::getDatabase() const {
  return database_;
}

void DescribeSlowSQLLogsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeSlowSQLLogsRequest::getSourceIP() const {
  return sourceIP_;
}

void DescribeSlowSQLLogsRequest::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DescribeSlowSQLLogsRequest::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DescribeSlowSQLLogsRequest::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

int DescribeSlowSQLLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSlowSQLLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSlowSQLLogsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSlowSQLLogsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSlowSQLLogsRequest::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DescribeSlowSQLLogsRequest::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DescribeSlowSQLLogsRequest::getExecuteState() const {
  return executeState_;
}

void DescribeSlowSQLLogsRequest::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DescribeSlowSQLLogsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlowSQLLogsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSlowSQLLogsRequest::getOperationType() const {
  return operationType_;
}

void DescribeSlowSQLLogsRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DescribeSlowSQLLogsRequest::getOperationClass() const {
  return operationClass_;
}

void DescribeSlowSQLLogsRequest::setOperationClass(const std::string &operationClass) {
  operationClass_ = operationClass;
  setParameter(std::string("OperationClass"), operationClass);
}

std::string DescribeSlowSQLLogsRequest::getUser() const {
  return user_;
}

void DescribeSlowSQLLogsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

