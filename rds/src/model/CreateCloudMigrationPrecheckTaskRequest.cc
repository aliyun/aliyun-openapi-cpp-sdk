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

#include <alibabacloud/rds/model/CreateCloudMigrationPrecheckTaskRequest.h>

using AlibabaCloud::Rds::Model::CreateCloudMigrationPrecheckTaskRequest;

CreateCloudMigrationPrecheckTaskRequest::CreateCloudMigrationPrecheckTaskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateCloudMigrationPrecheckTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateCloudMigrationPrecheckTaskRequest::~CreateCloudMigrationPrecheckTaskRequest() {}

std::string CreateCloudMigrationPrecheckTaskRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CreateCloudMigrationPrecheckTaskRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long CreateCloudMigrationPrecheckTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCloudMigrationPrecheckTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCloudMigrationPrecheckTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateCloudMigrationPrecheckTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateCloudMigrationPrecheckTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateCloudMigrationPrecheckTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateCloudMigrationPrecheckTaskRequest::getSourceAccount() const {
  return sourceAccount_;
}

void CreateCloudMigrationPrecheckTaskRequest::setSourceAccount(const std::string &sourceAccount) {
  sourceAccount_ = sourceAccount;
  setParameter(std::string("SourceAccount"), sourceAccount);
}

long CreateCloudMigrationPrecheckTaskRequest::getSourcePort() const {
  return sourcePort_;
}

void CreateCloudMigrationPrecheckTaskRequest::setSourcePort(long sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string CreateCloudMigrationPrecheckTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateCloudMigrationPrecheckTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCloudMigrationPrecheckTaskRequest::getSourcePassword() const {
  return sourcePassword_;
}

void CreateCloudMigrationPrecheckTaskRequest::setSourcePassword(const std::string &sourcePassword) {
  sourcePassword_ = sourcePassword;
  setParameter(std::string("SourcePassword"), sourcePassword);
}

std::string CreateCloudMigrationPrecheckTaskRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void CreateCloudMigrationPrecheckTaskRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

std::string CreateCloudMigrationPrecheckTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCloudMigrationPrecheckTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateCloudMigrationPrecheckTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCloudMigrationPrecheckTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCloudMigrationPrecheckTaskRequest::getSourceCategory() const {
  return sourceCategory_;
}

void CreateCloudMigrationPrecheckTaskRequest::setSourceCategory(const std::string &sourceCategory) {
  sourceCategory_ = sourceCategory;
  setParameter(std::string("SourceCategory"), sourceCategory);
}

