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

#include <alibabacloud/rds/model/DescribeHistoryEventsRequest.h>

using AlibabaCloud::Rds::Model::DescribeHistoryEventsRequest;

DescribeHistoryEventsRequest::DescribeHistoryEventsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeHistoryEvents") {
  setMethod(HttpRequest::Method::Post);
}

DescribeHistoryEventsRequest::~DescribeHistoryEventsRequest() {}

std::string DescribeHistoryEventsRequest::getEventId() const {
  return eventId_;
}

void DescribeHistoryEventsRequest::setEventId(const std::string &eventId) {
  eventId_ = eventId;
  setParameter(std::string("EventId"), eventId);
}

std::string DescribeHistoryEventsRequest::getToStartTime() const {
  return toStartTime_;
}

void DescribeHistoryEventsRequest::setToStartTime(const std::string &toStartTime) {
  toStartTime_ = toStartTime;
  setParameter(std::string("ToStartTime"), toStartTime);
}

int DescribeHistoryEventsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeHistoryEventsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeHistoryEventsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeHistoryEventsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeHistoryEventsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeHistoryEventsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeHistoryEventsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeHistoryEventsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string DescribeHistoryEventsRequest::getRegionId() const {
  return regionId_;
}

void DescribeHistoryEventsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeHistoryEventsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeHistoryEventsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeHistoryEventsRequest::getTaskId() const {
  return taskId_;
}

void DescribeHistoryEventsRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string DescribeHistoryEventsRequest::getFromStartTime() const {
  return fromStartTime_;
}

void DescribeHistoryEventsRequest::setFromStartTime(const std::string &fromStartTime) {
  fromStartTime_ = fromStartTime;
  setParameter(std::string("FromStartTime"), fromStartTime);
}

std::string DescribeHistoryEventsRequest::getResourceType() const {
  return resourceType_;
}

void DescribeHistoryEventsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string DescribeHistoryEventsRequest::getArchiveStatus() const {
  return archiveStatus_;
}

void DescribeHistoryEventsRequest::setArchiveStatus(const std::string &archiveStatus) {
  archiveStatus_ = archiveStatus;
  setParameter(std::string("ArchiveStatus"), archiveStatus);
}

std::string DescribeHistoryEventsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeHistoryEventsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeHistoryEventsRequest::getEventLevel() const {
  return eventLevel_;
}

void DescribeHistoryEventsRequest::setEventLevel(const std::string &eventLevel) {
  eventLevel_ = eventLevel;
  setParameter(std::string("EventLevel"), eventLevel);
}

std::string DescribeHistoryEventsRequest::getEventCategory() const {
  return eventCategory_;
}

void DescribeHistoryEventsRequest::setEventCategory(const std::string &eventCategory) {
  eventCategory_ = eventCategory;
  setParameter(std::string("EventCategory"), eventCategory);
}

std::string DescribeHistoryEventsRequest::getEventType() const {
  return eventType_;
}

void DescribeHistoryEventsRequest::setEventType(const std::string &eventType) {
  eventType_ = eventType;
  setParameter(std::string("EventType"), eventType);
}

std::string DescribeHistoryEventsRequest::getEventStatus() const {
  return eventStatus_;
}

void DescribeHistoryEventsRequest::setEventStatus(const std::string &eventStatus) {
  eventStatus_ = eventStatus;
  setParameter(std::string("EventStatus"), eventStatus);
}

