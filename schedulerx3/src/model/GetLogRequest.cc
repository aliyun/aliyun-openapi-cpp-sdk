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

#include <alibabacloud/schedulerx3/model/GetLogRequest.h>

using AlibabaCloud::SchedulerX3::Model::GetLogRequest;

GetLogRequest::GetLogRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "GetLog") {
  setMethod(HttpRequest::Method::Get);
}

GetLogRequest::~GetLogRequest() {}

std::string GetLogRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetLogRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long GetLogRequest::getStartTime() const {
  return startTime_;
}

void GetLogRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetLogRequest::getAppName() const {
  return appName_;
}

void GetLogRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int GetLogRequest::getLineNum() const {
  return lineNum_;
}

void GetLogRequest::setLineNum(int lineNum) {
  lineNum_ = lineNum;
  setParameter(std::string("LineNum"), std::to_string(lineNum));
}

std::string GetLogRequest::getKeyword() const {
  return keyword_;
}

void GetLogRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string GetLogRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void GetLogRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

int GetLogRequest::getOffset() const {
  return offset_;
}

void GetLogRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

std::string GetLogRequest::getLevel() const {
  return level_;
}

void GetLogRequest::setLevel(const std::string &level) {
  level_ = level;
  setParameter(std::string("Level"), level);
}

long GetLogRequest::getEndTime() const {
  return endTime_;
}

void GetLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetLogRequest::getClusterId() const {
  return clusterId_;
}

void GetLogRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool GetLogRequest::getReverse() const {
  return reverse_;
}

void GetLogRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

long GetLogRequest::getLogId() const {
  return logId_;
}

void GetLogRequest::setLogId(long logId) {
  logId_ = logId;
  setParameter(std::string("LogId"), std::to_string(logId));
}

