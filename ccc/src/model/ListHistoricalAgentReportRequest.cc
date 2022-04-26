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

#include <alibabacloud/ccc/model/ListHistoricalAgentReportRequest.h>

using AlibabaCloud::CCC::Model::ListHistoricalAgentReportRequest;

ListHistoricalAgentReportRequest::ListHistoricalAgentReportRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListHistoricalAgentReport") {
  setMethod(HttpRequest::Method::Post);
}

ListHistoricalAgentReportRequest::~ListHistoricalAgentReportRequest() {}

long ListHistoricalAgentReportRequest::getStartTime() const {
  return startTime_;
}

void ListHistoricalAgentReportRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long ListHistoricalAgentReportRequest::getStopTime() const {
  return stopTime_;
}

void ListHistoricalAgentReportRequest::setStopTime(long stopTime) {
  stopTime_ = stopTime;
  setParameter(std::string("StopTime"), std::to_string(stopTime));
}

int ListHistoricalAgentReportRequest::getPageNumber() const {
  return pageNumber_;
}

void ListHistoricalAgentReportRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListHistoricalAgentReportRequest::getInstanceId() const {
  return instanceId_;
}

void ListHistoricalAgentReportRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListHistoricalAgentReportRequest::getAgentIdList() const {
  return agentIdList_;
}

void ListHistoricalAgentReportRequest::setAgentIdList(const std::string &agentIdList) {
  agentIdList_ = agentIdList;
  setBodyParameter(std::string("AgentIdList"), agentIdList);
}

int ListHistoricalAgentReportRequest::getPageSize() const {
  return pageSize_;
}

void ListHistoricalAgentReportRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

