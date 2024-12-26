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

#include <alibabacloud/schedulerx3/model/OperateRerunJobRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateRerunJobRequest;

OperateRerunJobRequest::OperateRerunJobRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateRerunJob") {
  setMethod(HttpRequest::Method::Post);
}

OperateRerunJobRequest::~OperateRerunJobRequest() {}

std::string OperateRerunJobRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateRerunJobRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string OperateRerunJobRequest::getDataTime() const {
  return dataTime_;
}

void OperateRerunJobRequest::setDataTime(const std::string &dataTime) {
  dataTime_ = dataTime;
  setParameter(std::string("DataTime"), dataTime);
}

long OperateRerunJobRequest::getStartDate() const {
  return startDate_;
}

void OperateRerunJobRequest::setStartDate(long startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), std::to_string(startDate));
}

long OperateRerunJobRequest::getJobId() const {
  return jobId_;
}

void OperateRerunJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string OperateRerunJobRequest::getAppName() const {
  return appName_;
}

void OperateRerunJobRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string OperateRerunJobRequest::getClusterId() const {
  return clusterId_;
}

void OperateRerunJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long OperateRerunJobRequest::getEndDate() const {
  return endDate_;
}

void OperateRerunJobRequest::setEndDate(long endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), std::to_string(endDate));
}

