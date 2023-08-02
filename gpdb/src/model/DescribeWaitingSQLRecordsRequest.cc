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

#include <alibabacloud/gpdb/model/DescribeWaitingSQLRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeWaitingSQLRecordsRequest;

DescribeWaitingSQLRecordsRequest::DescribeWaitingSQLRecordsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeWaitingSQLRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWaitingSQLRecordsRequest::~DescribeWaitingSQLRecordsRequest() {}

std::string DescribeWaitingSQLRecordsRequest::getQueryCondition() const {
  return queryCondition_;
}

void DescribeWaitingSQLRecordsRequest::setQueryCondition(const std::string &queryCondition) {
  queryCondition_ = queryCondition;
  setParameter(std::string("QueryCondition"), queryCondition);
}

std::string DescribeWaitingSQLRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeWaitingSQLRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeWaitingSQLRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeWaitingSQLRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeWaitingSQLRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeWaitingSQLRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeWaitingSQLRecordsRequest::getDatabase() const {
  return database_;
}

void DescribeWaitingSQLRecordsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

int DescribeWaitingSQLRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWaitingSQLRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeWaitingSQLRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeWaitingSQLRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeWaitingSQLRecordsRequest::getKeyword() const {
  return keyword_;
}

void DescribeWaitingSQLRecordsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeWaitingSQLRecordsRequest::getOrder() const {
  return order_;
}

void DescribeWaitingSQLRecordsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string DescribeWaitingSQLRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeWaitingSQLRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeWaitingSQLRecordsRequest::getUser() const {
  return user_;
}

void DescribeWaitingSQLRecordsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

