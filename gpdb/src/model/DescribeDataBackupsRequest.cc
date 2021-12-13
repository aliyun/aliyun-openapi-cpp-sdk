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

#include <alibabacloud/gpdb/model/DescribeDataBackupsRequest.h>

using AlibabaCloud::Gpdb::Model::DescribeDataBackupsRequest;

DescribeDataBackupsRequest::DescribeDataBackupsRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "DescribeDataBackups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataBackupsRequest::~DescribeDataBackupsRequest() {}

std::string DescribeDataBackupsRequest::getStartTime() const {
  return startTime_;
}

void DescribeDataBackupsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDataBackupsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataBackupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDataBackupsRequest::getDataType() const {
  return dataType_;
}

void DescribeDataBackupsRequest::setDataType(const std::string &dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), dataType);
}

int DescribeDataBackupsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataBackupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataBackupsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeDataBackupsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DescribeDataBackupsRequest::getBackupId() const {
  return backupId_;
}

void DescribeDataBackupsRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string DescribeDataBackupsRequest::getEndTime() const {
  return endTime_;
}

void DescribeDataBackupsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string DescribeDataBackupsRequest::getBackupStatus() const {
  return backupStatus_;
}

void DescribeDataBackupsRequest::setBackupStatus(const std::string &backupStatus) {
  backupStatus_ = backupStatus;
  setParameter(std::string("BackupStatus"), backupStatus);
}

std::string DescribeDataBackupsRequest::getBackupMode() const {
  return backupMode_;
}

void DescribeDataBackupsRequest::setBackupMode(const std::string &backupMode) {
  backupMode_ = backupMode;
  setParameter(std::string("BackupMode"), backupMode);
}

