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

#include <alibabacloud/ccc/model/ListLegacyAgentEventLogsRequest.h>

using AlibabaCloud::CCC::Model::ListLegacyAgentEventLogsRequest;

ListLegacyAgentEventLogsRequest::ListLegacyAgentEventLogsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListLegacyAgentEventLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListLegacyAgentEventLogsRequest::~ListLegacyAgentEventLogsRequest() {}

std::string ListLegacyAgentEventLogsRequest::getAgentId() const {
  return agentId_;
}

void ListLegacyAgentEventLogsRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

long ListLegacyAgentEventLogsRequest::getEndTime() const {
  return endTime_;
}

void ListLegacyAgentEventLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListLegacyAgentEventLogsRequest::getStartTime() const {
  return startTime_;
}

void ListLegacyAgentEventLogsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListLegacyAgentEventLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLegacyAgentEventLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLegacyAgentEventLogsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListLegacyAgentEventLogsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListLegacyAgentEventLogsRequest::getInstanceId() const {
  return instanceId_;
}

void ListLegacyAgentEventLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListLegacyAgentEventLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListLegacyAgentEventLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

