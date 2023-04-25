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

#include <alibabacloud/ccc/model/ListLegacyQueueEventLogsRequest.h>

using AlibabaCloud::CCC::Model::ListLegacyQueueEventLogsRequest;

ListLegacyQueueEventLogsRequest::ListLegacyQueueEventLogsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListLegacyQueueEventLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListLegacyQueueEventLogsRequest::~ListLegacyQueueEventLogsRequest() {}

long ListLegacyQueueEventLogsRequest::getEndTime() const {
  return endTime_;
}

void ListLegacyQueueEventLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListLegacyQueueEventLogsRequest::getStartTime() const {
  return startTime_;
}

void ListLegacyQueueEventLogsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListLegacyQueueEventLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLegacyQueueEventLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLegacyQueueEventLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListLegacyQueueEventLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListLegacyQueueEventLogsRequest::getInstanceId() const {
  return instanceId_;
}

void ListLegacyQueueEventLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListLegacyQueueEventLogsRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListLegacyQueueEventLogsRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

int ListLegacyQueueEventLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListLegacyQueueEventLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

