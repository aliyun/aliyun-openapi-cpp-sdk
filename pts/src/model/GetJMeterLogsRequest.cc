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

#include <alibabacloud/pts/model/GetJMeterLogsRequest.h>

using AlibabaCloud::PTS::Model::GetJMeterLogsRequest;

GetJMeterLogsRequest::GetJMeterLogsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetJMeterLogs") {
  setMethod(HttpRequest::Method::Post);
}

GetJMeterLogsRequest::~GetJMeterLogsRequest() {}

int GetJMeterLogsRequest::getAgentIndex() const {
  return agentIndex_;
}

void GetJMeterLogsRequest::setAgentIndex(int agentIndex) {
  agentIndex_ = agentIndex;
  setParameter(std::string("AgentIndex"), std::to_string(agentIndex));
}

std::string GetJMeterLogsRequest::getReportId() const {
  return reportId_;
}

void GetJMeterLogsRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

std::string GetJMeterLogsRequest::getLevel() const {
  return level_;
}

void GetJMeterLogsRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

long GetJMeterLogsRequest::getEndTime() const {
  return endTime_;
}

void GetJMeterLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetJMeterLogsRequest::getBeginTime() const {
  return beginTime_;
}

void GetJMeterLogsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetJMeterLogsRequest::getThread() const {
  return thread_;
}

void GetJMeterLogsRequest::setThread(const std::string &thread) {
  thread_ = thread;
  setParameter(std::string("Thread"), thread);
}

int GetJMeterLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetJMeterLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetJMeterLogsRequest::getPageSize() const {
  return pageSize_;
}

void GetJMeterLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetJMeterLogsRequest::getKeyword() const {
  return keyword_;
}

void GetJMeterLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

