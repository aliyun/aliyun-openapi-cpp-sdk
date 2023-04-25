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

#include <alibabacloud/ccc/model/ListRealtimeAgentStatesRequest.h>

using AlibabaCloud::CCC::Model::ListRealtimeAgentStatesRequest;

ListRealtimeAgentStatesRequest::ListRealtimeAgentStatesRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListRealtimeAgentStates") {
  setMethod(HttpRequest::Method::Post);
}

ListRealtimeAgentStatesRequest::~ListRealtimeAgentStatesRequest() {}

std::string ListRealtimeAgentStatesRequest::getCallTypeList() const {
  return callTypeList_;
}

void ListRealtimeAgentStatesRequest::setCallTypeList(const std::string &callTypeList) {
  callTypeList_ = callTypeList;
  setParameter(std::string("CallTypeList"), callTypeList);
}

std::string ListRealtimeAgentStatesRequest::getQuery() const {
  return query_;
}

void ListRealtimeAgentStatesRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

bool ListRealtimeAgentStatesRequest::getOutboundScenario() const {
  return outboundScenario_;
}

void ListRealtimeAgentStatesRequest::setOutboundScenario(bool outboundScenario) {
  outboundScenario_ = outboundScenario;
  setParameter(std::string("OutboundScenario"), outboundScenario ? "true" : "false");
}

int ListRealtimeAgentStatesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRealtimeAgentStatesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListRealtimeAgentStatesRequest::getInstanceId() const {
  return instanceId_;
}

void ListRealtimeAgentStatesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListRealtimeAgentStatesRequest::getWorkModeList() const {
  return workModeList_;
}

void ListRealtimeAgentStatesRequest::setWorkModeList(const std::string &workModeList) {
  workModeList_ = workModeList;
  setParameter(std::string("WorkModeList"), workModeList);
}

std::string ListRealtimeAgentStatesRequest::getAgentIdList() const {
  return agentIdList_;
}

void ListRealtimeAgentStatesRequest::setAgentIdList(const std::string &agentIdList) {
  agentIdList_ = agentIdList;
  setBodyParameter(std::string("AgentIdList"), agentIdList);
}

std::string ListRealtimeAgentStatesRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListRealtimeAgentStatesRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

std::string ListRealtimeAgentStatesRequest::getAgentName() const {
  return agentName_;
}

void ListRealtimeAgentStatesRequest::setAgentName(const std::string &agentName) {
  agentName_ = agentName;
  setParameter(std::string("AgentName"), agentName);
}

int ListRealtimeAgentStatesRequest::getPageSize() const {
  return pageSize_;
}

void ListRealtimeAgentStatesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListRealtimeAgentStatesRequest::getStateList() const {
  return stateList_;
}

void ListRealtimeAgentStatesRequest::setStateList(const std::string &stateList) {
  stateList_ = stateList;
  setBodyParameter(std::string("StateList"), stateList);
}

