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

#include <alibabacloud/swas-open/model/RunCommandRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::RunCommandRequest;

RunCommandRequest::RunCommandRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "RunCommand") {
  setMethod(HttpRequest::Method::Post);
}

RunCommandRequest::~RunCommandRequest() {}

std::string RunCommandRequest::getWorkingDir() const {
  return workingDir_;
}

void RunCommandRequest::setWorkingDir(const std::string &workingDir) {
  workingDir_ = workingDir;
  setParameter(std::string("WorkingDir"), workingDir);
}

std::string RunCommandRequest::getType() const {
  return type_;
}

void RunCommandRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string RunCommandRequest::getCommandContent() const {
  return commandContent_;
}

void RunCommandRequest::setCommandContent(const std::string &commandContent) {
  commandContent_ = commandContent;
  setParameter(std::string("CommandContent"), commandContent);
}

int RunCommandRequest::getTimeout() const {
  return timeout_;
}

void RunCommandRequest::setTimeout(int timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string RunCommandRequest::getRegionId() const {
  return regionId_;
}

void RunCommandRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RunCommandRequest::getWindowsPasswordName() const {
  return windowsPasswordName_;
}

void RunCommandRequest::setWindowsPasswordName(const std::string &windowsPasswordName) {
  windowsPasswordName_ = windowsPasswordName;
  setParameter(std::string("WindowsPasswordName"), windowsPasswordName);
}

std::string RunCommandRequest::getInstanceId() const {
  return instanceId_;
}

void RunCommandRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RunCommandRequest::getWorkingUser() const {
  return workingUser_;
}

void RunCommandRequest::setWorkingUser(const std::string &workingUser) {
  workingUser_ = workingUser;
  setParameter(std::string("WorkingUser"), workingUser);
}

std::string RunCommandRequest::getName() const {
  return name_;
}

void RunCommandRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::map<std::string, std::string> RunCommandRequest::getParameters() const {
  return parameters_;
}

void RunCommandRequest::setParameters(const std::map<std::string, std::string> &parameters) {
  parameters_ = parameters;
  for(auto const &iter1 : parameters) {
    setParameter(std::string("Parameters") + "." + iter1.first, iter1.second);
  }
}

bool RunCommandRequest::getEnableParameter() const {
  return enableParameter_;
}

void RunCommandRequest::setEnableParameter(bool enableParameter) {
  enableParameter_ = enableParameter;
  setParameter(std::string("EnableParameter"), enableParameter ? "true" : "false");
}

