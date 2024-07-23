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

#include <alibabacloud/rds/model/DescribeCloudMigrationPrecheckResultRequest.h>

using AlibabaCloud::Rds::Model::DescribeCloudMigrationPrecheckResultRequest;

DescribeCloudMigrationPrecheckResultRequest::DescribeCloudMigrationPrecheckResultRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeCloudMigrationPrecheckResult") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudMigrationPrecheckResultRequest::~DescribeCloudMigrationPrecheckResultRequest() {}

std::string DescribeCloudMigrationPrecheckResultRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void DescribeCloudMigrationPrecheckResultRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long DescribeCloudMigrationPrecheckResultRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCloudMigrationPrecheckResultRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCloudMigrationPrecheckResultRequest::getTaskName() const {
  return taskName_;
}

void DescribeCloudMigrationPrecheckResultRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long DescribeCloudMigrationPrecheckResultRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudMigrationPrecheckResultRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudMigrationPrecheckResultRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeCloudMigrationPrecheckResultRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long DescribeCloudMigrationPrecheckResultRequest::getSourcePort() const {
  return sourcePort_;
}

void DescribeCloudMigrationPrecheckResultRequest::setSourcePort(long sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string DescribeCloudMigrationPrecheckResultRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudMigrationPrecheckResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeCloudMigrationPrecheckResultRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudMigrationPrecheckResultRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long DescribeCloudMigrationPrecheckResultRequest::getTaskId() const {
  return taskId_;
}

void DescribeCloudMigrationPrecheckResultRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeCloudMigrationPrecheckResultRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void DescribeCloudMigrationPrecheckResultRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

std::string DescribeCloudMigrationPrecheckResultRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCloudMigrationPrecheckResultRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribeCloudMigrationPrecheckResultRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCloudMigrationPrecheckResultRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

