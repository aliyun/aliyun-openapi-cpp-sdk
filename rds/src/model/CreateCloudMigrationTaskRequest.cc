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

#include <alibabacloud/rds/model/CreateCloudMigrationTaskRequest.h>

using AlibabaCloud::Rds::Model::CreateCloudMigrationTaskRequest;

CreateCloudMigrationTaskRequest::CreateCloudMigrationTaskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateCloudMigrationTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateCloudMigrationTaskRequest::~CreateCloudMigrationTaskRequest() {}

std::string CreateCloudMigrationTaskRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CreateCloudMigrationTaskRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long CreateCloudMigrationTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateCloudMigrationTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateCloudMigrationTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateCloudMigrationTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateCloudMigrationTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateCloudMigrationTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateCloudMigrationTaskRequest::getSourceAccount() const {
  return sourceAccount_;
}

void CreateCloudMigrationTaskRequest::setSourceAccount(const std::string &sourceAccount) {
  sourceAccount_ = sourceAccount;
  setParameter(std::string("SourceAccount"), sourceAccount);
}

long CreateCloudMigrationTaskRequest::getSourcePort() const {
  return sourcePort_;
}

void CreateCloudMigrationTaskRequest::setSourcePort(long sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string CreateCloudMigrationTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateCloudMigrationTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateCloudMigrationTaskRequest::getSourcePassword() const {
  return sourcePassword_;
}

void CreateCloudMigrationTaskRequest::setSourcePassword(const std::string &sourcePassword) {
  sourcePassword_ = sourcePassword;
  setParameter(std::string("SourcePassword"), sourcePassword);
}

std::string CreateCloudMigrationTaskRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void CreateCloudMigrationTaskRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

std::string CreateCloudMigrationTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateCloudMigrationTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateCloudMigrationTaskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCloudMigrationTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCloudMigrationTaskRequest::getSourceCategory() const {
  return sourceCategory_;
}

void CreateCloudMigrationTaskRequest::setSourceCategory(const std::string &sourceCategory) {
  sourceCategory_ = sourceCategory;
  setParameter(std::string("SourceCategory"), sourceCategory);
}

