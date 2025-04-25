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

#include <alibabacloud/ess/model/DescribeScheduledTasksRequest.h>

using AlibabaCloud::Ess::Model::DescribeScheduledTasksRequest;

DescribeScheduledTasksRequest::DescribeScheduledTasksRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScheduledTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScheduledTasksRequest::~DescribeScheduledTasksRequest() {}

long DescribeScheduledTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScheduledTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<std::string> DescribeScheduledTasksRequest::getScheduledAction() const {
  return scheduledAction_;
}

void DescribeScheduledTasksRequest::setScheduledAction(const std::vector<std::string> &scheduledAction) {
  scheduledAction_ = scheduledAction;
}

std::string DescribeScheduledTasksRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScheduledTasksRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::string DescribeScheduledTasksRequest::getTaskName() const {
  return taskName_;
}

void DescribeScheduledTasksRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int DescribeScheduledTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScheduledTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScheduledTasksRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScheduledTasksRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeScheduledTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeScheduledTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScheduledTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScheduledTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScheduledTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScheduledTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScheduledTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScheduledTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScheduledTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScheduledTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScheduledTasksRequest::getRecurrenceValue() const {
  return recurrenceValue_;
}

void DescribeScheduledTasksRequest::setRecurrenceValue(const std::string &recurrenceValue) {
  recurrenceValue_ = recurrenceValue;
  setParameter(std::string("RecurrenceValue"), recurrenceValue);
}

std::vector<std::string> DescribeScheduledTasksRequest::getScheduledTaskName() const {
  return scheduledTaskName_;
}

void DescribeScheduledTasksRequest::setScheduledTaskName(const std::vector<std::string> &scheduledTaskName) {
  scheduledTaskName_ = scheduledTaskName;
}

bool DescribeScheduledTasksRequest::getTaskEnabled() const {
  return taskEnabled_;
}

void DescribeScheduledTasksRequest::setTaskEnabled(bool taskEnabled) {
  taskEnabled_ = taskEnabled;
  setParameter(std::string("TaskEnabled"), taskEnabled ? "true" : "false");
}

std::vector<std::string> DescribeScheduledTasksRequest::getScheduledTaskId() const {
  return scheduledTaskId_;
}

void DescribeScheduledTasksRequest::setScheduledTaskId(const std::vector<std::string> &scheduledTaskId) {
  scheduledTaskId_ = scheduledTaskId;
}

std::string DescribeScheduledTasksRequest::getRecurrenceType() const {
  return recurrenceType_;
}

void DescribeScheduledTasksRequest::setRecurrenceType(const std::string &recurrenceType) {
  recurrenceType_ = recurrenceType;
  setParameter(std::string("RecurrenceType"), recurrenceType);
}

