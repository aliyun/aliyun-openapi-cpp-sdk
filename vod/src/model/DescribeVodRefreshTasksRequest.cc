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

#include <alibabacloud/vod/model/DescribeVodRefreshTasksRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodRefreshTasksRequest;

DescribeVodRefreshTasksRequest::DescribeVodRefreshTasksRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DescribeVodRefreshTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVodRefreshTasksRequest::~DescribeVodRefreshTasksRequest() {}

std::string DescribeVodRefreshTasksRequest::getObjectPath() const {
  return objectPath_;
}

void DescribeVodRefreshTasksRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string DescribeVodRefreshTasksRequest::getStartTime() const {
  return startTime_;
}

void DescribeVodRefreshTasksRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int DescribeVodRefreshTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeVodRefreshTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeVodRefreshTasksRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeVodRefreshTasksRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeVodRefreshTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeVodRefreshTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeVodRefreshTasksRequest::getObjectType() const {
  return objectType_;
}

void DescribeVodRefreshTasksRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string DescribeVodRefreshTasksRequest::getTaskId() const {
  return taskId_;
}

void DescribeVodRefreshTasksRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeVodRefreshTasksRequest::getDomainName() const {
  return domainName_;
}

void DescribeVodRefreshTasksRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string DescribeVodRefreshTasksRequest::getEndTime() const {
  return endTime_;
}

void DescribeVodRefreshTasksRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long DescribeVodRefreshTasksRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVodRefreshTasksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVodRefreshTasksRequest::getStatus() const {
  return status_;
}

void DescribeVodRefreshTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

