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

#include <alibabacloud/schedulerx3/model/GetDesigateInfoRequest.h>

using AlibabaCloud::SchedulerX3::Model::GetDesigateInfoRequest;

GetDesigateInfoRequest::GetDesigateInfoRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "GetDesigateInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetDesigateInfoRequest::~GetDesigateInfoRequest() {}

std::string GetDesigateInfoRequest::getMseSessionId() const {
  return mseSessionId_;
}

void GetDesigateInfoRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

std::string GetDesigateInfoRequest::getClusterId() const {
  return clusterId_;
}

void GetDesigateInfoRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long GetDesigateInfoRequest::getJobId() const {
  return jobId_;
}

void GetDesigateInfoRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string GetDesigateInfoRequest::getAppName() const {
  return appName_;
}

void GetDesigateInfoRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

