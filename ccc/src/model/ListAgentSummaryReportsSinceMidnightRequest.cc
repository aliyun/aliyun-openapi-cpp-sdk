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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsSinceMidnightRequest.h>

using AlibabaCloud::CCC::Model::ListAgentSummaryReportsSinceMidnightRequest;

ListAgentSummaryReportsSinceMidnightRequest::ListAgentSummaryReportsSinceMidnightRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListAgentSummaryReportsSinceMidnight") {
  setMethod(HttpRequest::Method::Get);
}

ListAgentSummaryReportsSinceMidnightRequest::~ListAgentSummaryReportsSinceMidnightRequest() {}

std::string ListAgentSummaryReportsSinceMidnightRequest::getAgentIds() const {
  return agentIds_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setAgentIds(const std::string &agentIds) {
  agentIds_ = agentIds;
  setParameter(std::string("AgentIds"), agentIds);
}

int ListAgentSummaryReportsSinceMidnightRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getInstanceId() const {
  return instanceId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListAgentSummaryReportsSinceMidnightRequest::getSkillGroupId() const {
  return skillGroupId_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setSkillGroupId(const std::string &skillGroupId) {
  skillGroupId_ = skillGroupId;
  setParameter(std::string("SkillGroupId"), skillGroupId);
}

int ListAgentSummaryReportsSinceMidnightRequest::getPageSize() const {
  return pageSize_;
}

void ListAgentSummaryReportsSinceMidnightRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

