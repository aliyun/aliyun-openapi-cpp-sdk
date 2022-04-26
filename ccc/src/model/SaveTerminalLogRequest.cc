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

#include <alibabacloud/ccc/model/SaveTerminalLogRequest.h>

using AlibabaCloud::CCC::Model::SaveTerminalLogRequest;

SaveTerminalLogRequest::SaveTerminalLogRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "SaveTerminalLog") {
  setMethod(HttpRequest::Method::Post);
}

SaveTerminalLogRequest::~SaveTerminalLogRequest() {}

std::string SaveTerminalLogRequest::getCallId() const {
  return callId_;
}

void SaveTerminalLogRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

std::string SaveTerminalLogRequest::getContent() const {
  return content_;
}

void SaveTerminalLogRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string SaveTerminalLogRequest::getUniqueRequestId() const {
  return uniqueRequestId_;
}

void SaveTerminalLogRequest::setUniqueRequestId(const std::string &uniqueRequestId) {
  uniqueRequestId_ = uniqueRequestId;
  setParameter(std::string("UniqueRequestId"), uniqueRequestId);
}

std::string SaveTerminalLogRequest::getJobId() const {
  return jobId_;
}

void SaveTerminalLogRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string SaveTerminalLogRequest::getInstanceId() const {
  return instanceId_;
}

void SaveTerminalLogRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveTerminalLogRequest::getAppName() const {
  return appName_;
}

void SaveTerminalLogRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int SaveTerminalLogRequest::getDataType() const {
  return dataType_;
}

void SaveTerminalLogRequest::setDataType(int dataType) {
  dataType_ = dataType;
  setParameter(std::string("DataType"), std::to_string(dataType));
}

std::string SaveTerminalLogRequest::getStatus() const {
  return status_;
}

void SaveTerminalLogRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string SaveTerminalLogRequest::getMethodName() const {
  return methodName_;
}

void SaveTerminalLogRequest::setMethodName(const std::string &methodName) {
  methodName_ = methodName;
  setParameter(std::string("MethodName"), methodName);
}

