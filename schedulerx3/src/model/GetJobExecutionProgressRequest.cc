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

#include <alibabacloud/schedulerx3/model/GetJobExecutionProgressRequest.h>

using AlibabaCloud::SchedulerX3::Model::GetJobExecutionProgressRequest;

GetJobExecutionProgressRequest::GetJobExecutionProgressRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "GetJobExecutionProgress") {
  setMethod(HttpRequest::Method::Get);
}

GetJobExecutionProgressRequest::~GetJobExecutionProgressRequest() {}

std::string GetJobExecutionProgressRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetJobExecutionProgressRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetJobExecutionProgressRequest::getClusterId() const {
  return clusterId_;
}

void GetJobExecutionProgressRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string GetJobExecutionProgressRequest::getAppName() const {
  return appName_;
}

void GetJobExecutionProgressRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string GetJobExecutionProgressRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void GetJobExecutionProgressRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

