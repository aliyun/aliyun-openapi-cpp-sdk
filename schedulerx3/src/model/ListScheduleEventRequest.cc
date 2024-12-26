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

#include <alibabacloud/schedulerx3/model/ListScheduleEventRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListScheduleEventRequest;

ListScheduleEventRequest::ListScheduleEventRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListScheduleEvent") {
  setMethod(HttpRequest::Method::Get);
}

ListScheduleEventRequest::~ListScheduleEventRequest() {}

std::string ListScheduleEventRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListScheduleEventRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListScheduleEventRequest::getStartTime() const {
  return startTime_;
}

void ListScheduleEventRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListScheduleEventRequest::getPageNum() const {
  return pageNum_;
}

void ListScheduleEventRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string ListScheduleEventRequest::getAppName() const {
  return appName_;
}

void ListScheduleEventRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListScheduleEventRequest::getPageSize() const {
  return pageSize_;
}

void ListScheduleEventRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListScheduleEventRequest::getEvent() const {
  return event_;
}

void ListScheduleEventRequest::setEvent(const std::string &event) {
  event_ = event;
  setParameter(std::string("Event"), event);
}

std::string ListScheduleEventRequest::getKeyword() const {
  return keyword_;
}

void ListScheduleEventRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListScheduleEventRequest::getJobName() const {
  return jobName_;
}

void ListScheduleEventRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListScheduleEventRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void ListScheduleEventRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

long ListScheduleEventRequest::getEndTime() const {
  return endTime_;
}

void ListScheduleEventRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListScheduleEventRequest::getClusterId() const {
  return clusterId_;
}

void ListScheduleEventRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool ListScheduleEventRequest::getReverse() const {
  return reverse_;
}

void ListScheduleEventRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

