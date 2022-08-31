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

#include <alibabacloud/scdn/model/DescribeScdnRefreshTasksRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnRefreshTasksRequest;

DescribeScdnRefreshTasksRequest::DescribeScdnRefreshTasksRequest()
    : RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnRefreshTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScdnRefreshTasksRequest::~DescribeScdnRefreshTasksRequest() {}

std::string DescribeScdnRefreshTasksRequest::getObjectPath() const {
  return objectPath_;
}

void DescribeScdnRefreshTasksRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string DescribeScdnRefreshTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeScdnRefreshTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeScdnRefreshTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScdnRefreshTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScdnRefreshTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeScdnRefreshTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeScdnRefreshTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeScdnRefreshTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeScdnRefreshTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScdnRefreshTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScdnRefreshTasksRequest::getObjectType() const {
  return objectType_;
}

void DescribeScdnRefreshTasksRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string DescribeScdnRefreshTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeScdnRefreshTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeScdnRefreshTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeScdnRefreshTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeScdnRefreshTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeScdnRefreshTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeScdnRefreshTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScdnRefreshTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeScdnRefreshTasksRequest::getStatus() const {
  return status_;
}

void DescribeScdnRefreshTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

