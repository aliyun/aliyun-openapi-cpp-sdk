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

#include <alibabacloud/schedulerx3/model/OperateExecuteJobRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateExecuteJobRequest;

OperateExecuteJobRequest::OperateExecuteJobRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateExecuteJob") {
  setMethod(HttpRequest::Method::Post);
}

OperateExecuteJobRequest::~OperateExecuteJobRequest() {}

std::string OperateExecuteJobRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateExecuteJobRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long OperateExecuteJobRequest::getJobId() const {
  return jobId_;
}

void OperateExecuteJobRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string OperateExecuteJobRequest::getAppName() const {
  return appName_;
}

void OperateExecuteJobRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("AppName"), appName);
}

std::string OperateExecuteJobRequest::getWorker() const {
  return worker_;
}

void OperateExecuteJobRequest::setWorker(const std::string &worker) {
  worker_ = worker;
  setBodyParameter(std::string("Worker"), worker);
}

std::string OperateExecuteJobRequest::getInstanceParameters() const {
  return instanceParameters_;
}

void OperateExecuteJobRequest::setInstanceParameters(const std::string &instanceParameters) {
  instanceParameters_ = instanceParameters;
  setBodyParameter(std::string("InstanceParameters"), instanceParameters);
}

std::string OperateExecuteJobRequest::getClusterId() const {
  return clusterId_;
}

void OperateExecuteJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setBodyParameter(std::string("ClusterId"), clusterId);
}

std::string OperateExecuteJobRequest::getLabel() const {
  return label_;
}

void OperateExecuteJobRequest::setLabel(const std::string &label) {
  label_ = label;
  setBodyParameter(std::string("Label"), label);
}

