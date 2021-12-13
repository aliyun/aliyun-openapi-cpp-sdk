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

#include <alibabacloud/gpdb/model/DescribeDBInstanceSQLPatternsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstanceSQLPatternsRequest;

DescribeDBInstanceSQLPatternsRequest::DescribeDBInstanceSQLPatternsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstanceSQLPatterns") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceSQLPatternsRequest::~DescribeDBInstanceSQLPatternsRequest() {}

std::string DescribeDBInstanceSQLPatternsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBInstanceSQLPatternsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeDBInstanceSQLPatternsRequest::getQueryKeywords() const {
  return queryKeywords_;
}

void DescribeDBInstanceSQLPatternsRequest::setQueryKeywords(const std::string &queryKeywords) {
  queryKeywords_ = queryKeywords;
  setParameter(std::string("QueryKeywords"), queryKeywords);
}

std::string DescribeDBInstanceSQLPatternsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceSQLPatternsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceSQLPatternsRequest::getDatabase() const {
  return database_;
}

void DescribeDBInstanceSQLPatternsRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

std::string DescribeDBInstanceSQLPatternsRequest::getSourceIP() const {
  return sourceIP_;
}

void DescribeDBInstanceSQLPatternsRequest::setSourceIP(const std::string &sourceIP) {
  sourceIP_ = sourceIP;
  setParameter(std::string("SourceIP"), sourceIP);
}

std::string DescribeDBInstanceSQLPatternsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceSQLPatternsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceSQLPatternsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBInstanceSQLPatternsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDBInstanceSQLPatternsRequest::getUser() const {
  return user_;
}

void DescribeDBInstanceSQLPatternsRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

