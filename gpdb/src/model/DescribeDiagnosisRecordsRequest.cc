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

#include <alibabacloud/gpdb/model/DescribeDiagnosisRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDiagnosisRecordsRequest;

DescribeDiagnosisRecordsRequest::DescribeDiagnosisRecordsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDiagnosisRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDiagnosisRecordsRequest::~DescribeDiagnosisRecordsRequest() {}

std::string DescribeDiagnosisRecordsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeDiagnosisRecordsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeDiagnosisRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDiagnosisRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDiagnosisRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDiagnosisRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDiagnosisRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDiagnosisRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDiagnosisRecordsRequest::getDatabase() const {
  return database_;
}

void DescribeDiagnosisRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

int DescribeDiagnosisRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDiagnosisRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDiagnosisRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDiagnosisRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDiagnosisRecordsRequest::getKeyword() const {
  return keyword_;
}

void DescribeDiagnosisRecordsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeDiagnosisRecordsRequest::getOrder() const {
  return order_;
}

void DescribeDiagnosisRecordsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeDiagnosisRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDiagnosisRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDiagnosisRecordsRequest::getUser() const {
  return user_;
}

void DescribeDiagnosisRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

