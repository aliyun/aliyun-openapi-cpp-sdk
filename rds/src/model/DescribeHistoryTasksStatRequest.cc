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

#include <alibabacloud/rds/model/DescribeHistoryTasksStatRequest.h>

using AlibabaCloud::Rds::Model::DescribeHistoryTasksStatRequest;

DescribeHistoryTasksStatRequest::DescribeHistoryTasksStatRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHistoryTasksStat") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHistoryTasksStatRequest::~DescribeHistoryTasksStatRequest() {}

long DescribeHistoryTasksStatRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHistoryTasksStatRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHistoryTasksStatRequest::getToStartTime() const {
  return toStartTime_;
}

void DescribeHistoryTasksStatRequest::setToStartTime(const std::string &toStartTime) {
  toStartTime_ = toStartTime;
  setParameter(std::string("ToStartTime"), toStartTime);
}

std::string DescribeHistoryTasksStatRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHistoryTasksStatRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHistoryTasksStatRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeHistoryTasksStatRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeHistoryTasksStatRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeHistoryTasksStatRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeHistoryTasksStatRequest::getRegionId() const {
  return regionId_;
}

void DescribeHistoryTasksStatRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeHistoryTasksStatRequest::getTaskId() const {
  return taskId_;
}

void DescribeHistoryTasksStatRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

int DescribeHistoryTasksStatRequest::getToExecTime() const {
  return toExecTime_;
}

void DescribeHistoryTasksStatRequest::setToExecTime(int toExecTime) {
  toExecTime_ = toExecTime;
  setParameter(std::string("ToExecTime"), std::to_string(toExecTime));
}

std::string DescribeHistoryTasksStatRequest::getTaskType() const {
  return taskType_;
}

void DescribeHistoryTasksStatRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long DescribeHistoryTasksStatRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHistoryTasksStatRequest::setResourceOwnerAccount(long resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), std::to_string(resourceOwnerAccount));
}

std::string DescribeHistoryTasksStatRequest::getFromStartTime() const {
  return fromStartTime_;
}

void DescribeHistoryTasksStatRequest::setFromStartTime(const std::string &fromStartTime) {
  fromStartTime_ = fromStartTime;
  setParameter(std::string("FromStartTime"), fromStartTime);
}

int DescribeHistoryTasksStatRequest::getFromExecTime() const {
  return fromExecTime_;
}

void DescribeHistoryTasksStatRequest::setFromExecTime(int fromExecTime) {
  fromExecTime_ = fromExecTime;
  setParameter(std::string("FromExecTime"), std::to_string(fromExecTime));
}

long DescribeHistoryTasksStatRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHistoryTasksStatRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHistoryTasksStatRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeHistoryTasksStatRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeHistoryTasksStatRequest::getStatus() const {
  return status_;
}

void DescribeHistoryTasksStatRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

