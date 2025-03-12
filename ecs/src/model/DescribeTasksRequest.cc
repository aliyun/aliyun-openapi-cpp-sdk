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

#include <alibabacloud/ecs/model/DescribeTasksRequest.h>

using AlibabaCloud::Ecs::Model::DescribeTasksRequest;

DescribeTasksRequest::DescribeTasksRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTasksRequest::~DescribeTasksRequest() {}

long DescribeTasksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeTasksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribeTasksRequest::getTaskIds() const {
  return taskIds_;
}

void DescribeTasksRequest::setTaskIds(const std::string &taskIds) {
  taskIds_ = taskIds;
  setParameter(std::string("TaskIds"), taskIds);
}

int DescribeTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTasksRequest::getTaskStatus() const {
  return taskStatus_;
}

void DescribeTasksRequest::setTaskStatus(const std::string &taskStatus) {
  taskStatus_ = taskStatus;
  setParameter(std::string("TaskStatus"), taskStatus);
}

std::string DescribeTasksRequest::getRegionId() const {
  return regionId_;
}

void DescribeTasksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTasksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeTasksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeTasksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeTasksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeTasksRequest::getTaskGroupId() const {
  return taskGroupId_;
}

void DescribeTasksRequest::setTaskGroupId(const std::string &taskGroupId) {
  taskGroupId_ = taskGroupId;
  setParameter(std::string("TaskGroupId"), taskGroupId);
}

std::string DescribeTasksRequest::getTaskAction() const {
  return taskAction_;
}

void DescribeTasksRequest::setTaskAction(const std::string &taskAction) {
  taskAction_ = taskAction;
  setParameter(std::string("TaskAction"), taskAction);
}

std::vector<std::string> DescribeTasksRequest::getResourceIds() const {
  return resourceIds_;
}

void DescribeTasksRequest::setResourceIds(const std::vector<std::string> &resourceIds) {
  resourceIds_ = resourceIds;
}

