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

#include <alibabacloud/rds/model/CreateReplicationLinkRequest.h>

using AlibabaCloud::Rds::Model::CreateReplicationLinkRequest;

CreateReplicationLinkRequest::CreateReplicationLinkRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateReplicationLink") {
  setMethod(HttpRequest::Method::Post);
}

CreateReplicationLinkRequest::~CreateReplicationLinkRequest() {}

std::string CreateReplicationLinkRequest::getReplicatorAccount() const {
  return replicatorAccount_;
}

void CreateReplicationLinkRequest::setReplicatorAccount(const std::string &replicatorAccount) {
  replicatorAccount_ = replicatorAccount;
  setParameter(std::string("ReplicatorAccount"), replicatorAccount);
}

std::string CreateReplicationLinkRequest::getTaskName() const {
  return taskName_;
}

void CreateReplicationLinkRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long CreateReplicationLinkRequest::getSourcePort() const {
  return sourcePort_;
}

void CreateReplicationLinkRequest::setSourcePort(long sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string CreateReplicationLinkRequest::getRegionId() const {
  return regionId_;
}

void CreateReplicationLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateReplicationLinkRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateReplicationLinkRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long CreateReplicationLinkRequest::getTaskId() const {
  return taskId_;
}

void CreateReplicationLinkRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string CreateReplicationLinkRequest::getSourceInstanceName() const {
  return sourceInstanceName_;
}

void CreateReplicationLinkRequest::setSourceInstanceName(const std::string &sourceInstanceName) {
  sourceInstanceName_ = sourceInstanceName;
  setParameter(std::string("SourceInstanceName"), sourceInstanceName);
}

bool CreateReplicationLinkRequest::getDryRun() const {
  return dryRun_;
}

void CreateReplicationLinkRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateReplicationLinkRequest::getSourceInstanceRegionId() const {
  return sourceInstanceRegionId_;
}

void CreateReplicationLinkRequest::setSourceInstanceRegionId(const std::string &sourceInstanceRegionId) {
  sourceInstanceRegionId_ = sourceInstanceRegionId;
  setParameter(std::string("SourceInstanceRegionId"), sourceInstanceRegionId);
}

std::string CreateReplicationLinkRequest::getTargetAddress() const {
  return targetAddress_;
}

void CreateReplicationLinkRequest::setTargetAddress(const std::string &targetAddress) {
  targetAddress_ = targetAddress;
  setParameter(std::string("TargetAddress"), targetAddress);
}

std::string CreateReplicationLinkRequest::getReplicatorPassword() const {
  return replicatorPassword_;
}

void CreateReplicationLinkRequest::setReplicatorPassword(const std::string &replicatorPassword) {
  replicatorPassword_ = replicatorPassword;
  setParameter(std::string("ReplicatorPassword"), replicatorPassword);
}

std::string CreateReplicationLinkRequest::getSourceAddress() const {
  return sourceAddress_;
}

void CreateReplicationLinkRequest::setSourceAddress(const std::string &sourceAddress) {
  sourceAddress_ = sourceAddress;
  setParameter(std::string("SourceAddress"), sourceAddress);
}

std::string CreateReplicationLinkRequest::getSourceCategory() const {
  return sourceCategory_;
}

void CreateReplicationLinkRequest::setSourceCategory(const std::string &sourceCategory) {
  sourceCategory_ = sourceCategory;
  setParameter(std::string("SourceCategory"), sourceCategory);
}

