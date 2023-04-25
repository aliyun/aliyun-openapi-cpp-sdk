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

#include <alibabacloud/ccc/model/ListLegacyAgentStatusLogsRequest.h>

using AlibabaCloud::CCC::Model::ListLegacyAgentStatusLogsRequest;

ListLegacyAgentStatusLogsRequest::ListLegacyAgentStatusLogsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListLegacyAgentStatusLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListLegacyAgentStatusLogsRequest::~ListLegacyAgentStatusLogsRequest() {}

std::string ListLegacyAgentStatusLogsRequest::getAgentId() const {
  return agentId_;
}

void ListLegacyAgentStatusLogsRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

long ListLegacyAgentStatusLogsRequest::getEndTime() const {
  return endTime_;
}

void ListLegacyAgentStatusLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListLegacyAgentStatusLogsRequest::getStartTime() const {
  return startTime_;
}

void ListLegacyAgentStatusLogsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListLegacyAgentStatusLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLegacyAgentStatusLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLegacyAgentStatusLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListLegacyAgentStatusLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListLegacyAgentStatusLogsRequest::getInstanceId() const {
  return instanceId_;
}

void ListLegacyAgentStatusLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListLegacyAgentStatusLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListLegacyAgentStatusLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

