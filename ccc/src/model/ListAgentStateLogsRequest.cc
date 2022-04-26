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

#include <alibabacloud/ccc/model/ListAgentStateLogsRequest.h>

using AlibabaCloud::CCC::Model::ListAgentStateLogsRequest;

ListAgentStateLogsRequest::ListAgentStateLogsRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListAgentStateLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListAgentStateLogsRequest::~ListAgentStateLogsRequest() {}

std::string ListAgentStateLogsRequest::getAgentId() const {
  return agentId_;
}

void ListAgentStateLogsRequest::setAgentId(const std::string &agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), agentId);
}

long ListAgentStateLogsRequest::getEndTime() const {
  return endTime_;
}

void ListAgentStateLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListAgentStateLogsRequest::getStartTime() const {
  return startTime_;
}

void ListAgentStateLogsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListAgentStateLogsRequest::getInstanceId() const {
  return instanceId_;
}

void ListAgentStateLogsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

