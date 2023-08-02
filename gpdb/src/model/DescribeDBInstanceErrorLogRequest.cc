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

#include <alibabacloud/gpdb/model/DescribeDBInstanceErrorLogRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDBInstanceErrorLogRequest;

DescribeDBInstanceErrorLogRequest::DescribeDBInstanceErrorLogRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDBInstanceErrorLog") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBInstanceErrorLogRequest::~DescribeDBInstanceErrorLogRequest() {}

std::string DescribeDBInstanceErrorLogRequest::getKeywords() const {
  return keywords_;
}

void DescribeDBInstanceErrorLogRequest::setKeywords(const std::string &keywords) {
  keywords_ = keywords;
  setParameter(std::string("Keywords"), keywords);
}

std::string DescribeDBInstanceErrorLogRequest::getStartTime() const {
  return startTime_;
}

void DescribeDBInstanceErrorLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDBInstanceErrorLogRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBInstanceErrorLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBInstanceErrorLogRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBInstanceErrorLogRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBInstanceErrorLogRequest::getDatabase() const {
  return database_;
}

void DescribeDBInstanceErrorLogRequest::setDatabase(const std::string &database) {
  database_ = database;
  setParameter(std::string("Database"), database);
}

int DescribeDBInstanceErrorLogRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBInstanceErrorLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBInstanceErrorLogRequest::getHost() const {
  return host_;
}

void DescribeDBInstanceErrorLogRequest::setHost(const std::string &host) {
  host_ = host;
  setParameter(std::string("Host"), host);
}

std::string DescribeDBInstanceErrorLogRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDBInstanceErrorLogRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDBInstanceErrorLogRequest::getEndTime() const {
  return endTime_;
}

void DescribeDBInstanceErrorLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDBInstanceErrorLogRequest::getLogLevel() const {
  return logLevel_;
}

void DescribeDBInstanceErrorLogRequest::setLogLevel(const std::string &logLevel) {
  logLevel_ = logLevel;
  setParameter(std::string("LogLevel"), logLevel);
}

std::string DescribeDBInstanceErrorLogRequest::getUser() const {
  return user_;
}

void DescribeDBInstanceErrorLogRequest::setUser(const std::string &user) {
  user_ = user;
  setParameter(std::string("User"), user);
}

