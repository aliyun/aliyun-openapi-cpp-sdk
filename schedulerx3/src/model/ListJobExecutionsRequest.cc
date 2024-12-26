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

#include <alibabacloud/schedulerx3/model/ListJobExecutionsRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListJobExecutionsRequest;

ListJobExecutionsRequest::ListJobExecutionsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListJobExecutions") {
  setMethod(HttpRequest::Method::Get);
}

ListJobExecutionsRequest::~ListJobExecutionsRequest() {}

std::string ListJobExecutionsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListJobExecutionsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListJobExecutionsRequest::getStartTime() const {
  return startTime_;
}

void ListJobExecutionsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int ListJobExecutionsRequest::getPageNum() const {
  return pageNum_;
}

void ListJobExecutionsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long ListJobExecutionsRequest::getJobId() const {
  return jobId_;
}

void ListJobExecutionsRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string ListJobExecutionsRequest::getAppName() const {
  return appName_;
}

void ListJobExecutionsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListJobExecutionsRequest::getPageSize() const {
  return pageSize_;
}

void ListJobExecutionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListJobExecutionsRequest::getJobName() const {
  return jobName_;
}

void ListJobExecutionsRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListJobExecutionsRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void ListJobExecutionsRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

std::string ListJobExecutionsRequest::getEndTime() const {
  return endTime_;
}

void ListJobExecutionsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListJobExecutionsRequest::getClusterId() const {
  return clusterId_;
}

void ListJobExecutionsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int ListJobExecutionsRequest::getStatus() const {
  return status_;
}

void ListJobExecutionsRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

