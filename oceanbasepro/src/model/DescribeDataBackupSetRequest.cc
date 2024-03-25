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

#include <alibabacloud/oceanbasepro/model/DescribeDataBackupSetRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeDataBackupSetRequest;

DescribeDataBackupSetRequest::DescribeDataBackupSetRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeDataBackupSet") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDataBackupSetRequest::~DescribeDataBackupSetRequest() {}

std::string DescribeDataBackupSetRequest::getStartTime() const {
  return startTime_;
}

void DescribeDataBackupSetRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), startTime);
}

int DescribeDataBackupSetRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDataBackupSetRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeDataBackupSetRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDataBackupSetRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDataBackupSetRequest::getBackupObjectType() const {
  return backupObjectType_;
}

void DescribeDataBackupSetRequest::setBackupObjectType(const std::string &backupObjectType) {
  backupObjectType_ = backupObjectType;
  setBodyParameter(std::string("BackupObjectType"), backupObjectType);
}

std::string DescribeDataBackupSetRequest::getEndTime() const {
  return endTime_;
}

void DescribeDataBackupSetRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), endTime);
}

std::string DescribeDataBackupSetRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeDataBackupSetRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeDataBackupSetRequest::getStatus() const {
  return status_;
}

void DescribeDataBackupSetRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

