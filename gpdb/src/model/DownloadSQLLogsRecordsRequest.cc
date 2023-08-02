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

#include <alibabacloud/gpdb/model/DownloadSQLLogsRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DownloadSQLLogsRecordsRequest;

DownloadSQLLogsRecordsRequest::DownloadSQLLogsRecordsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DownloadSQLLogsRecords") {
  setMethod(HttpRequest::Method::Post);
}

DownloadSQLLogsRecordsRequest::~DownloadSQLLogsRecordsRequest() {}

std::string DownloadSQLLogsRecordsRequest::getStartTime() const {
  return startTime_;
}

void DownloadSQLLogsRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DownloadSQLLogsRecordsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DownloadSQLLogsRecordsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

int DownloadSQLLogsRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DownloadSQLLogsRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DownloadSQLLogsRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DownloadSQLLogsRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DownloadSQLLogsRecordsRequest::getDatabase() const {
  return database_;
}

void DownloadSQLLogsRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DownloadSQLLogsRecordsRequest::getSourceIP() const {
  return sourceIP_;
}

void DownloadSQLLogsRecordsRequest::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DownloadSQLLogsRecordsRequest::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DownloadSQLLogsRecordsRequest::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

int DownloadSQLLogsRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DownloadSQLLogsRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DownloadSQLLogsRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DownloadSQLLogsRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DownloadSQLLogsRecordsRequest::getLang() const {
  return lang_;
}

void DownloadSQLLogsRecordsRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DownloadSQLLogsRecordsRequest::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DownloadSQLLogsRecordsRequest::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DownloadSQLLogsRecordsRequest::getExecuteCost() const {
  return executeCost_;
}

void DownloadSQLLogsRecordsRequest::setExecuteCost(const std::string &executeCost) {
  executeCost_ = executeCost;
  setParameter(std::string("ExecuteCost"), executeCost);
}

std::string DownloadSQLLogsRecordsRequest::getExecuteState() const {
  return executeState_;
}

void DownloadSQLLogsRecordsRequest::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DownloadSQLLogsRecordsRequest::getEndTime() const {
  return endTime_;
}

void DownloadSQLLogsRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DownloadSQLLogsRecordsRequest::getOperationType() const {
  return operationType_;
}

void DownloadSQLLogsRecordsRequest::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DownloadSQLLogsRecordsRequest::getOperationClass() const {
  return operationClass_;
}

void DownloadSQLLogsRecordsRequest::setOperationClass(const std::string &operationClass) {
  operationClass_ = operationClass;
  setParameter(std::string("OperationClass"), operationClass);
}

std::string DownloadSQLLogsRecordsRequest::getUser() const {
  return user_;
}

void DownloadSQLLogsRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

