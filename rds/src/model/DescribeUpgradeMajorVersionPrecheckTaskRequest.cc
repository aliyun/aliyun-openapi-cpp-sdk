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

#include <alibabacloud/rds/model/DescribeUpgradeMajorVersionPrecheckTaskRequest.h>

using AlibabaCloud::Rds::Model::DescribeUpgradeMajorVersionPrecheckTaskRequest;

DescribeUpgradeMajorVersionPrecheckTaskRequest::DescribeUpgradeMajorVersionPrecheckTaskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeUpgradeMajorVersionPrecheckTask") {
  setMethod(HttpRequest::Method::Post);
}

DescribeUpgradeMajorVersionPrecheckTaskRequest::~DescribeUpgradeMajorVersionPrecheckTaskRequest() {}

long DescribeUpgradeMajorVersionPrecheckTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeUpgradeMajorVersionPrecheckTaskRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getRegionId() const {
  return regionId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeUpgradeMajorVersionPrecheckTaskRequest::getPageSize() const {
  return pageSize_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int DescribeUpgradeMajorVersionPrecheckTaskRequest::getTaskId() const {
  return taskId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setTaskId(int taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeUpgradeMajorVersionPrecheckTaskRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeUpgradeMajorVersionPrecheckTaskRequest::getTargetMajorVersion() const {
  return targetMajorVersion_;
}

void DescribeUpgradeMajorVersionPrecheckTaskRequest::setTargetMajorVersion(const std::string &targetMajorVersion) {
  targetMajorVersion_ = targetMajorVersion;
  setParameter(std::string("TargetMajorVersion"), targetMajorVersion);
}

