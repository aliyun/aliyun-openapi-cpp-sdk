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

#include <alibabacloud/schedulerx3/model/OperateRetryJobExecutionRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateRetryJobExecutionRequest;

OperateRetryJobExecutionRequest::OperateRetryJobExecutionRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateRetryJobExecution") {
  setMethod(HttpRequest::Method::Post);
}

OperateRetryJobExecutionRequest::~OperateRetryJobExecutionRequest() {}

std::string OperateRetryJobExecutionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateRetryJobExecutionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long OperateRetryJobExecutionRequest::getJobId() const {
  return jobId_;
}

void OperateRetryJobExecutionRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string OperateRetryJobExecutionRequest::getAppName() const {
  return appName_;
}

void OperateRetryJobExecutionRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string OperateRetryJobExecutionRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void OperateRetryJobExecutionRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

std::string OperateRetryJobExecutionRequest::getClusterId() const {
  return clusterId_;
}

void OperateRetryJobExecutionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<OperateRetryJobExecutionRequest::std::string> OperateRetryJobExecutionRequest::getTaskList() const {
  return taskList_;
}

void OperateRetryJobExecutionRequest::setTaskList(const std::vector<OperateRetryJobExecutionRequest::std::string> &taskList) {
  taskList_ = taskList;
  for(int dep1 = 0; dep1 != taskList.size(); dep1++) {
    setParameter(std::string("TaskList") + "." + std::to_string(dep1 + 1), taskList[dep1]);
  }
}

