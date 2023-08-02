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

#include <alibabacloud/gpdb/model/DescribeSQLLogsV2Request.h>

using AlibabaCloud::Gpdb::Model::DescribeSQLLogsV2Request;

DescribeSQLLogsV2Request::DescribeSQLLogsV2Request()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSQLLogsV2") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSQLLogsV2Request::~DescribeSQLLogsV2Request() {}

std::string DescribeSQLLogsV2Request::getStartTime() const {
  return startTime_;
}

void DescribeSQLLogsV2Request::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeSQLLogsV2Request::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeSQLLogsV2Request::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

std::string DescribeSQLLogsV2Request::getPageNumber() const {
  return pageNumber_;
}

void DescribeSQLLogsV2Request::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeSQLLogsV2Request::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSQLLogsV2Request::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSQLLogsV2Request::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeSQLLogsV2Request::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeSQLLogsV2Request::getDatabase() const {
  return database_;
}

void DescribeSQLLogsV2Request::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeSQLLogsV2Request::getSourceIP() const {
  return sourceIP_;
}

void DescribeSQLLogsV2Request::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DescribeSQLLogsV2Request::getRegionId() const {
  return regionId_;
}

void DescribeSQLLogsV2Request::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSQLLogsV2Request::getMinExecuteCost() const {
  return minExecuteCost_;
}

void DescribeSQLLogsV2Request::setMinExecuteCost(const std::string &minExecuteCost) {
  minExecuteCost_ = minExecuteCost;
  setParameter(std::string("MinExecuteCost"), minExecuteCost);
}

std::string DescribeSQLLogsV2Request::getPageSize() const {
  return pageSize_;
}

void DescribeSQLLogsV2Request::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeSQLLogsV2Request::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSQLLogsV2Request::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeSQLLogsV2Request::getMaxExecuteCost() const {
  return maxExecuteCost_;
}

void DescribeSQLLogsV2Request::setMaxExecuteCost(const std::string &maxExecuteCost) {
  maxExecuteCost_ = maxExecuteCost;
  setParameter(std::string("MaxExecuteCost"), maxExecuteCost);
}

std::string DescribeSQLLogsV2Request::getExecuteCost() const {
  return executeCost_;
}

void DescribeSQLLogsV2Request::setExecuteCost(const std::string &executeCost) {
  executeCost_ = executeCost;
  setParameter(std::string("ExecuteCost"), executeCost);
}

std::string DescribeSQLLogsV2Request::getExecuteState() const {
  return executeState_;
}

void DescribeSQLLogsV2Request::setExecuteState(const std::string &executeState) {
  executeState_ = executeState;
  setParameter(std::string("ExecuteState"), executeState);
}

std::string DescribeSQLLogsV2Request::getEndTime() const {
  return endTime_;
}

void DescribeSQLLogsV2Request::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSQLLogsV2Request::getOperationType() const {
  return operationType_;
}

void DescribeSQLLogsV2Request::setOperationType(const std::string &operationType) {
  operationType_ = operationType;
  setParameter(std::string("OperationType"), operationType);
}

std::string DescribeSQLLogsV2Request::getOperationClass() const {
  return operationClass_;
}

void DescribeSQLLogsV2Request::setOperationClass(const std::string &operationClass) {
  operationClass_ = operationClass;
  setParameter(std::string("OperationClass"), operationClass);
}

std::string DescribeSQLLogsV2Request::getUser() const {
  return user_;
}

void DescribeSQLLogsV2Request::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

