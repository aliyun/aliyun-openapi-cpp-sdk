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

#include <alibabacloud/rds/model/DescribeUpgradeMajorVersionTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeUpgradeMajorVersionTasksRequest;

DescribeUpgradeMajorVersionTasksRequest::DescribeUpgradeMajorVersionTasksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeUpgradeMajorVersionTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUpgradeMajorVersionTasksRequest::~DescribeUpgradeMajorVersionTasksRequest() {}

long DescribeUpgradeMajorVersionTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeUpgradeMajorVersionTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeUpgradeMajorVersionTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeUpgradeMajorVersionTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeUpgradeMajorVersionTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeUpgradeMajorVersionTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUpgradeMajorVersionTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUpgradeMajorVersionTasksRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int DescribeUpgradeMajorVersionTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setTaskId(int taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeUpgradeMajorVersionTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeUpgradeMajorVersionTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeUpgradeMajorVersionTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeUpgradeMajorVersionTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeUpgradeMajorVersionTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUpgradeMajorVersionTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUpgradeMajorVersionTasksRequest::getTargetMajorVersion() const {
  return targetMajorVersion_;
}

void DescribeUpgradeMajorVersionTasksRequest::setTargetMajorVersion(const std::string &targetMajorVersion) {
  targetMajorVersion_ = targetMajorVersion;
  setParameter(std::string("TargetMajorVersion"), targetMajorVersion);
}

