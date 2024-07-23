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

#include <alibabacloud/rds/model/DescribeCloudMigrationResultRequest.h>

using AlibabaCloud::Rds::Model::DescribeCloudMigrationResultRequest;

DescribeCloudMigrationResultRequest::DescribeCloudMigrationResultRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCloudMigrationResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudMigrationResultRequest::~DescribeCloudMigrationResultRequest() {}

std::string DescribeCloudMigrationResultRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeCloudMigrationResultRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeCloudMigrationResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCloudMigrationResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCloudMigrationResultRequest::getTaskName() const {
  return taskName_;
}

void DescribeCloudMigrationResultRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long DescribeCloudMigrationResultRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudMigrationResultRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudMigrationResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCloudMigrationResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long DescribeCloudMigrationResultRequest::getSourcePort() const {
  return sourcePort_;
}

void DescribeCloudMigrationResultRequest::setSourcePort(long sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string DescribeCloudMigrationResultRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudMigrationResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeCloudMigrationResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudMigrationResultRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeCloudMigrationResultRequest::getTaskId() const {
  return taskId_;
}

void DescribeCloudMigrationResultRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeCloudMigrationResultRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void DescribeCloudMigrationResultRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

std::string DescribeCloudMigrationResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCloudMigrationResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeCloudMigrationResultRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCloudMigrationResultRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

