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

#include <alibabacloud/schedulerx3/model/ListJobsRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListJobs") {
  setMethod(HttpRequest::Method::Get);
}

ListJobsRequest::~ListJobsRequest() {}

std::string ListJobsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListJobsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string ListJobsRequest::getDescription() const {
  return description_;
}

void ListJobsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

int ListJobsRequest::getPageNum() const {
  return pageNum_;
}

void ListJobsRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long ListJobsRequest::getJobId() const {
  return jobId_;
}

void ListJobsRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string ListJobsRequest::getAppName() const {
  return appName_;
}

void ListJobsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListJobsRequest::getJobName() const {
  return jobName_;
}

void ListJobsRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setParameter(std::string("JobName"), jobName);
}

std::string ListJobsRequest::getClusterId() const {
  return clusterId_;
}

void ListJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListJobsRequest::getJobHandler() const {
  return jobHandler_;
}

void ListJobsRequest::setJobHandler(const std::string &jobHandler) {
  jobHandler_ = jobHandler;
  setParameter(std::string("JobHandler"), jobHandler);
}

std::string ListJobsRequest::getStatus() const {
  return status_;
}

void ListJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

