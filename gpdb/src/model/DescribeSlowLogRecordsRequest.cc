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

#include <alibabacloud/gpdb/model/DescribeSlowLogRecordsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeSlowLogRecordsRequest;

DescribeSlowLogRecordsRequest::DescribeSlowLogRecordsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeSlowLogRecords") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSlowLogRecordsRequest::~DescribeSlowLogRecordsRequest() {}

std::string DescribeSlowLogRecordsRequest::getStartTime() const {
  return startTime_;
}

void DescribeSlowLogRecordsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeSlowLogRecordsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSlowLogRecordsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSlowLogRecordsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSlowLogRecordsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeSlowLogRecordsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSlowLogRecordsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSlowLogRecordsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeSlowLogRecordsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DescribeSlowLogRecordsRequest::getSQLId() const {
  return sQLId_;
}

void DescribeSlowLogRecordsRequest::setSQLId(long sQLId) {
  sQLId_ = sQLId;
  setParameter(std::string("SQLId"), std::to_string(sQLId));
}

std::string DescribeSlowLogRecordsRequest::getEndTime() const {
  return endTime_;
}

void DescribeSlowLogRecordsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeSlowLogRecordsRequest::getDBName() const {
  return dBName_;
}

void DescribeSlowLogRecordsRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

