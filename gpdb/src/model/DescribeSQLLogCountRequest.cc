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

#include <alibabacloud/gpdb/model/DescribeSQLLogCountRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLLogCountRequest;

DescribeSQLLogCountRequest::DescribeSQLLogCountRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLLogCount") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogCountRequest::~DescribeSQLLogCountRequest() {}

std::string DescribeSQLLogCountRequest::getStartTime() const {
  return startTime_;
}

void DescribeSQLLogCountRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLLogCountRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeSQLLogCountRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

std::string DescribeSQLLogCountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLLogCountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLLogCountRequest::getDatabase() const {
  return database_;
}

void DescribeSQLLogCountRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeSQLLogCountRequest::getSourceIP() const {
  return sourceIP_;
}

void DescribeSQLLogCountRequest::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DescribeSQLLogCountRequest::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DescribeSQLLogCountRequest::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

std::string DescribeSQLLogCountRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSQLLogCountRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSQLLogCountRequest::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DescribeSQLLogCountRequest::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DescribeSQLLogCountRequest::getExecuteCost() const {
  return executeCost_;
}

void DescribeSQLLogCountRequest::setExecuteCost(const std::string &executeCost) {
  executeCost_ = executeCost;
  setParameter(std::string("ExecuteCost"), executeCost);
}

std::string DescribeSQLLogCountRequest::getExecuteState() const {
  return executeState_;
}

void DescribeSQLLogCountRequest::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DescribeSQLLogCountRequest::getEndTime() const {
  return endTime_;
}

void DescribeSQLLogCountRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLLogCountRequest::getOperationType() const {
  return operationType_;
}

void DescribeSQLLogCountRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DescribeSQLLogCountRequest::getOperationClass() const {
  return operationClass_;
}

void DescribeSQLLogCountRequest::setOperationClass(const std::string &operationClass) {
  operationClass_ = operationClass;
  setParameter(std::string("OperationClass"), operationClass);
}

std::string DescribeSQLLogCountRequest::getUser() const {
  return user_;
}

void DescribeSQLLogCountRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

