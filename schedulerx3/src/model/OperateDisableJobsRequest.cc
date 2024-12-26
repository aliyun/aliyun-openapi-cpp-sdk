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

#include <alibabacloud/schedulerx3/model/OperateDisableJobsRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateDisableJobsRequest;

OperateDisableJobsRequest::OperateDisableJobsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateDisableJobs") {
  setMethod(HttpRequest::Method::Post);
}

OperateDisableJobsRequest::~OperateDisableJobsRequest() {}

std::string OperateDisableJobsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateDisableJobsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string OperateDisableJobsRequest::getClusterId() const {
  return clusterId_;
}

void OperateDisableJobsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string OperateDisableJobsRequest::getAppName() const {
  return appName_;
}

void OperateDisableJobsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::vector<OperateDisableJobsRequest::long> OperateDisableJobsRequest::getJobIds() const {
  return jobIds_;
}

void OperateDisableJobsRequest::setJobIds(const std::vector<OperateDisableJobsRequest::long> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setBodyParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), std::to_string(jobIds[dep1]));
  }
}

