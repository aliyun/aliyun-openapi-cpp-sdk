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

#include <alibabacloud/schedulerx3/model/ListAlarmEventRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListAlarmEventRequest;

ListAlarmEventRequest::ListAlarmEventRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListAlarmEvent") {
  setMethod(HttpRequest::Method::Get);
}

ListAlarmEventRequest::~ListAlarmEventRequest() {}

std::string ListAlarmEventRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListAlarmEventRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListAlarmEventRequest::getStartTime() const {
  return startTime_;
}

void ListAlarmEventRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListAlarmEventRequest::getPageNum() const {
  return pageNum_;
}

void ListAlarmEventRequest::setPageNum(const std::string &pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), pageNum);
}

std::string ListAlarmEventRequest::getAlarmChannel() const {
  return alarmChannel_;
}

void ListAlarmEventRequest::setAlarmChannel(const std::string &alarmChannel) {
  alarmChannel_ = alarmChannel;
  setParameter(std::string("AlarmChannel"), alarmChannel);
}

std::string ListAlarmEventRequest::getAppName() const {
  return appName_;
}

void ListAlarmEventRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListAlarmEventRequest::getPageSize() const {
  return pageSize_;
}

void ListAlarmEventRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAlarmEventRequest::getJobName() const {
  return jobName_;
}

void ListAlarmEventRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListAlarmEventRequest::getAlarmType() const {
  return alarmType_;
}

void ListAlarmEventRequest::setAlarmType(const std::string &alarmType) {
  alarmType_ = alarmType;
  setParameter(std::string("AlarmType"), alarmType);
}

long ListAlarmEventRequest::getEndTime() const {
  return endTime_;
}

void ListAlarmEventRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListAlarmEventRequest::getClusterId() const {
  return clusterId_;
}

void ListAlarmEventRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

bool ListAlarmEventRequest::getReverse() const {
  return reverse_;
}

void ListAlarmEventRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

std::string ListAlarmEventRequest::getAlarmStatus() const {
  return alarmStatus_;
}

void ListAlarmEventRequest::setAlarmStatus(const std::string &alarmStatus) {
  alarmStatus_ = alarmStatus;
  setParameter(std::string("AlarmStatus"), alarmStatus);
}

