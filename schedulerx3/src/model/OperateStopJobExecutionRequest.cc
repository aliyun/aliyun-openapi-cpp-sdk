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

#include <alibabacloud/schedulerx3/model/OperateStopJobExecutionRequest.h>

using AlibabaCloud::SchedulerX3::Model::OperateStopJobExecutionRequest;

OperateStopJobExecutionRequest::OperateStopJobExecutionRequest()
    : RpcServiceRequest("schedulerx3", "2024-06-24", "OperateStopJobExecution") {
  setMethod(HttpRequest::Method::Post);
}

OperateStopJobExecutionRequest::~OperateStopJobExecutionRequest() {}

std::string OperateStopJobExecutionRequest::getMseSessionId() const {
  return mseSessionId_;
}

void OperateStopJobExecutionRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
}

long OperateStopJobExecutionRequest::getJobId() const {
  return jobId_;
}

void OperateStopJobExecutionRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), std::to_string(jobId));
}

std::string OperateStopJobExecutionRequest::getAppName() const {
  return appName_;
}

void OperateStopJobExecutionRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string OperateStopJobExecutionRequest::getJobExecutionId() const {
  return jobExecutionId_;
}

void OperateStopJobExecutionRequest::setJobExecutionId(const std::string &jobExecutionId) {
  jobExecutionId_ = jobExecutionId;
  setParameter(std::string("JobExecutionId"), jobExecutionId);
}

std::string OperateStopJobExecutionRequest::getClusterId() const {
  return clusterId_;
}

void OperateStopJobExecutionRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::vector<OperateStopJobExecutionRequest::std::string> OperateStopJobExecutionRequest::getTaskList() const {
  return taskList_;
}

void OperateStopJobExecutionRequest::setTaskList(const std::vector<OperateStopJobExecutionRequest::std::string> &taskList) {
  taskList_ = taskList;
  for(int dep1 = 0; dep1 != taskList.size(); dep1++) {
    setParameter(std::string("TaskList") + "." + std::to_string(dep1 + 1), taskList[dep1]);
  }
}

