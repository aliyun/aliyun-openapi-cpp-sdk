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

#include <alibabacloud/pts/model/GetJMeterSamplingLogsRequest.h>

using AlibabaCloud::PTS::Model::GetJMeterSamplingLogsRequest;

GetJMeterSamplingLogsRequest::GetJMeterSamplingLogsRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetJMeterSamplingLogs") {
  setMethod(HttpRequest::Method::Post);
}

GetJMeterSamplingLogsRequest::~GetJMeterSamplingLogsRequest() {}

std::string GetJMeterSamplingLogsRequest::getResponseCode() const {
  return responseCode_;
}

void GetJMeterSamplingLogsRequest::setResponseCode(const std::string &responseCode) {
  responseCode_ = responseCode;
  setParameter(std::string("ResponseCode"), responseCode);
}

long GetJMeterSamplingLogsRequest::getAgentId() const {
  return agentId_;
}

void GetJMeterSamplingLogsRequest::setAgentId(long agentId) {
  agentId_ = agentId;
  setParameter(std::string("AgentId"), std::to_string(agentId));
}

std::string GetJMeterSamplingLogsRequest::getReportId() const {
  return reportId_;
}

void GetJMeterSamplingLogsRequest::setReportId(const std::string &reportId) {
  reportId_ = reportId;
  setParameter(std::string("ReportId"), reportId);
}

int GetJMeterSamplingLogsRequest::getMinRT() const {
  return minRT_;
}

void GetJMeterSamplingLogsRequest::setMinRT(int minRT) {
  minRT_ = minRT;
  setParameter(std::string("MinRT"), std::to_string(minRT));
}

long GetJMeterSamplingLogsRequest::getEndTime() const {
  return endTime_;
}

void GetJMeterSamplingLogsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetJMeterSamplingLogsRequest::getBeginTime() const {
  return beginTime_;
}

void GetJMeterSamplingLogsRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string GetJMeterSamplingLogsRequest::getThread() const {
  return thread_;
}

void GetJMeterSamplingLogsRequest::setThread(const std::string &thread) {
  thread_ = thread;
  setParameter(std::string("Thread"), thread);
}

int GetJMeterSamplingLogsRequest::getMaxRT() const {
  return maxRT_;
}

void GetJMeterSamplingLogsRequest::setMaxRT(int maxRT) {
  maxRT_ = maxRT;
  setParameter(std::string("MaxRT"), std::to_string(maxRT));
}

int GetJMeterSamplingLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetJMeterSamplingLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int GetJMeterSamplingLogsRequest::getSamplerId() const {
  return samplerId_;
}

void GetJMeterSamplingLogsRequest::setSamplerId(int samplerId) {
  samplerId_ = samplerId;
  setParameter(std::string("SamplerId"), std::to_string(samplerId));
}

bool GetJMeterSamplingLogsRequest::getSuccess() const {
  return success_;
}

void GetJMeterSamplingLogsRequest::setSuccess(bool success) {
  success_ = success;
  setParameter(std::string("Success"), success ? "true" : "false");
}

int GetJMeterSamplingLogsRequest::getPageSize() const {
  return pageSize_;
}

void GetJMeterSamplingLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetJMeterSamplingLogsRequest::getKeyword() const {
  return keyword_;
}

void GetJMeterSamplingLogsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

