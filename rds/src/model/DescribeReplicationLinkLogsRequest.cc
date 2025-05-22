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

#include <alibabacloud/rds/model/DescribeReplicationLinkLogsRequest.h>

using AlibabaCloud::Rds::Model::DescribeReplicationLinkLogsRequest;

DescribeReplicationLinkLogsRequest::DescribeReplicationLinkLogsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeReplicationLinkLogs") {
  setMethod(HttpRequest::Method::Post);
}

DescribeReplicationLinkLogsRequest::~DescribeReplicationLinkLogsRequest() {}

std::string DescribeReplicationLinkLogsRequest::getTaskName() const {
  return taskName_;
}

void DescribeReplicationLinkLogsRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long DescribeReplicationLinkLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeReplicationLinkLogsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeReplicationLinkLogsRequest::getRegionId() const {
  return regionId_;
}

void DescribeReplicationLinkLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeReplicationLinkLogsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeReplicationLinkLogsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeReplicationLinkLogsRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeReplicationLinkLogsRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long DescribeReplicationLinkLogsRequest::getTaskId() const {
  return taskId_;
}

void DescribeReplicationLinkLogsRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeReplicationLinkLogsRequest::getTaskType() const {
  return taskType_;
}

void DescribeReplicationLinkLogsRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

