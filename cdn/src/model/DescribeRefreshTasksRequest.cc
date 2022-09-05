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

#include <alibabacloud/cdn/model/DescribeRefreshTasksRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRefreshTasksRequest;

DescribeRefreshTasksRequest::DescribeRefreshTasksRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "DescribeRefreshTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRefreshTasksRequest::~DescribeRefreshTasksRequest() {}

std::string DescribeRefreshTasksRequest::getObjectPath() const {
  return objectPath_;
}

void DescribeRefreshTasksRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string DescribeRefreshTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeRefreshTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeRefreshTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRefreshTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRefreshTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeRefreshTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeRefreshTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeRefreshTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeRefreshTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRefreshTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRefreshTasksRequest::getObjectType() const {
  return objectType_;
}

void DescribeRefreshTasksRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string DescribeRefreshTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeRefreshTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeRefreshTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeRefreshTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeRefreshTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeRefreshTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeRefreshTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRefreshTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRefreshTasksRequest::getStatus() const {
  return status_;
}

void DescribeRefreshTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

