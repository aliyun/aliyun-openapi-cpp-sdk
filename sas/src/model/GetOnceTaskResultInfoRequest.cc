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

#include <alibabacloud/sas/model/GetOnceTaskResultInfoRequest.h>

using AlibabaCloud::Sas::Model::GetOnceTaskResultInfoRequest;

GetOnceTaskResultInfoRequest::GetOnceTaskResultInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetOnceTaskResultInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetOnceTaskResultInfoRequest::~GetOnceTaskResultInfoRequest() {}

std::string GetOnceTaskResultInfoRequest::getTaskName() const {
  return taskName_;
}

void GetOnceTaskResultInfoRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string GetOnceTaskResultInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void GetOnceTaskResultInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetOnceTaskResultInfoRequest::getTaskId() const {
  return taskId_;
}

void GetOnceTaskResultInfoRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string GetOnceTaskResultInfoRequest::getTaskType() const {
  return taskType_;
}

void GetOnceTaskResultInfoRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

