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

#include <alibabacloud/rds/model/DescribeHistoryTasksRequest.h>

using AlibabaCloud::Rds::Model::DescribeHistoryTasksRequest;

DescribeHistoryTasksRequest::DescribeHistoryTasksRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHistoryTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHistoryTasksRequest::~DescribeHistoryTasksRequest() {}

long DescribeHistoryTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeHistoryTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeHistoryTasksRequest::getToStartTime() const {
  return toStartTime_;
}

void DescribeHistoryTasksRequest::setToStartTime(const std::string &toStartTime) {
  toStartTime_ = toStartTime;
  setParameter(std::string("ToStartTime"), toStartTime);
}

int DescribeHistoryTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHistoryTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeHistoryTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHistoryTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHistoryTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeHistoryTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeHistoryTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeHistoryTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeHistoryTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeHistoryTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeHistoryTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHistoryTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeHistoryTasksRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeHistoryTasksRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string DescribeHistoryTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeHistoryTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

int DescribeHistoryTasksRequest::getToExecTime() const {
  return toExecTime_;
}

void DescribeHistoryTasksRequest::setToExecTime(int toExecTime) {
  toExecTime_ = toExecTime;
  setParameter(std::string("ToExecTime"), std::to_string(toExecTime));
}

std::string DescribeHistoryTasksRequest::getTaskType() const {
  return taskType_;
}

void DescribeHistoryTasksRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long DescribeHistoryTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeHistoryTasksRequest::setResourceOwnerAccount(long resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), std::to_string(resourceOwnerAccount));
}

std::string DescribeHistoryTasksRequest::getFromStartTime() const {
  return fromStartTime_;
}

void DescribeHistoryTasksRequest::setFromStartTime(const std::string &fromStartTime) {
  fromStartTime_ = fromStartTime;
  setParameter(std::string("FromStartTime"), fromStartTime);
}

int DescribeHistoryTasksRequest::getFromExecTime() const {
  return fromExecTime_;
}

void DescribeHistoryTasksRequest::setFromExecTime(int fromExecTime) {
  fromExecTime_ = fromExecTime;
  setParameter(std::string("FromExecTime"), std::to_string(fromExecTime));
}

long DescribeHistoryTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeHistoryTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeHistoryTasksRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeHistoryTasksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeHistoryTasksRequest::getStatus() const {
  return status_;
}

void DescribeHistoryTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

