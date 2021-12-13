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

#include <alibabacloud/gpdb/model/DescribeLogBackupsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeLogBackupsRequest;

DescribeLogBackupsRequest::DescribeLogBackupsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeLogBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeLogBackupsRequest::~DescribeLogBackupsRequest() {}

std::string DescribeLogBackupsRequest::getStartTime() const {
  return startTime_;
}

void DescribeLogBackupsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeLogBackupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeLogBackupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeLogBackupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeLogBackupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int DescribeLogBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeLogBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeLogBackupsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeLogBackupsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeLogBackupsRequest::getEndTime() const {
  return endTime_;
}

void DescribeLogBackupsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

