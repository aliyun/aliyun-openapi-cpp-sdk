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

#include <alibabacloud/sas/model/GetLastOnceTaskInfoRequest.h>

using AlibabaCloud::Sas::Model::GetLastOnceTaskInfoRequest;

GetLastOnceTaskInfoRequest::GetLastOnceTaskInfoRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetLastOnceTaskInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetLastOnceTaskInfoRequest::~GetLastOnceTaskInfoRequest() {}

std::string GetLastOnceTaskInfoRequest::getTaskName() const {
  return taskName_;
}

void GetLastOnceTaskInfoRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string GetLastOnceTaskInfoRequest::getSource() const {
  return source_;
}

void GetLastOnceTaskInfoRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string GetLastOnceTaskInfoRequest::getSourceIp() const {
  return sourceIp_;
}

void GetLastOnceTaskInfoRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string GetLastOnceTaskInfoRequest::getTaskType() const {
  return taskType_;
}

void GetLastOnceTaskInfoRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

