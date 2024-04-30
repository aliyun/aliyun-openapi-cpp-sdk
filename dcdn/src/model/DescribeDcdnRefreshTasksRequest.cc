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

#include <alibabacloud/dcdn/model/DescribeDcdnRefreshTasksRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnRefreshTasksRequest;

DescribeDcdnRefreshTasksRequest::DescribeDcdnRefreshTasksRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnRefreshTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDcdnRefreshTasksRequest::~DescribeDcdnRefreshTasksRequest() {}

std::string DescribeDcdnRefreshTasksRequest::getObjectPath() const {
  return objectPath_;
}

void DescribeDcdnRefreshTasksRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string DescribeDcdnRefreshTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeDcdnRefreshTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeDcdnRefreshTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDcdnRefreshTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDcdnRefreshTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeDcdnRefreshTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeDcdnRefreshTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDcdnRefreshTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDcdnRefreshTasksRequest::getObjectType() const {
  return objectType_;
}

void DescribeDcdnRefreshTasksRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string DescribeDcdnRefreshTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeDcdnRefreshTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeDcdnRefreshTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeDcdnRefreshTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeDcdnRefreshTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeDcdnRefreshTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeDcdnRefreshTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDcdnRefreshTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDcdnRefreshTasksRequest::getStatus() const {
  return status_;
}

void DescribeDcdnRefreshTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

