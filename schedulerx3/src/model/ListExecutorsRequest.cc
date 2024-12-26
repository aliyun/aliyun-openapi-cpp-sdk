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

#include <alibabacloud/schedulerx3/model/ListExecutorsRequest.h>

using AlibabaCloud::SchedulerX3::Model::ListExecutorsRequest;

ListExecutorsRequest::ListExecutorsRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "ListExecutors") {
  setMethod(HttpRequest::Method::Get);
}

ListExecutorsRequest::~ListExecutorsRequest() {}

std::string ListExecutorsRequest::getMseSessionId() const {
  return mseSessionId_;
}

void ListExecutorsRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long ListExecutorsRequest::getJobId() const {
  return jobId_;
}

void ListExecutorsRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string ListExecutorsRequest::getAppName() const {
  return appName_;
}

void ListExecutorsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string ListExecutorsRequest::getClusterId() const {
  return clusterId_;
}

void ListExecutorsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListExecutorsRequest::getLabel() const {
  return label_;
}

void ListExecutorsRequest::setLabel(const std::string &label) {
  label_ = label;
  setParameter(std::string("Label"), label);
}

