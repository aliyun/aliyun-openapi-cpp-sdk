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

#include <alibabacloud/schedulerx3/model/OperateEnableJobsRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateEnableJobsRequest;

OperateEnableJobsRequest::OperateEnableJobsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateEnableJobs") {
  setMethod(HttpRequest::Method::Post);
}

OperateEnableJobsRequest::~OperateEnableJobsRequest() {}

std::string OperateEnableJobsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateEnableJobsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string OperateEnableJobsRequest::getClusterId() const {
  return clusterId_;
}

void OperateEnableJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string OperateEnableJobsRequest::getAppName() const {
  return appName_;
}

void OperateEnableJobsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<OperateEnableJobsRequest::long> OperateEnableJobsRequest::getJobIds() const {
  return jobIds_;
}

void OperateEnableJobsRequest::setJobIds(const std::vector<OperateEnableJobsRequest::long> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setBodyParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), std::to_string(jobIds[dep1]));
  }
}

