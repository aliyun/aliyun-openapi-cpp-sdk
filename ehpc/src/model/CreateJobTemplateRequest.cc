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

#include <alibabacloud/ehpc/model/CreateJobTemplateRequest.h>

using AlibabaCloud::EHPC::Model::CreateJobTemplateRequest;

CreateJobTemplateRequest::CreateJobTemplateRequest()
    : RpcServiceRequest("ehpc", "2017-07-14", "CreateJobTemplate") {
  setMethod(HttpRequest::Method::Get);
}

CreateJobTemplateRequest::~CreateJobTemplateRequest() {}

std::string CreateJobTemplateRequest::getStderrRedirectPath() const {
  return stderrRedirectPath_;
}

void CreateJobTemplateRequest::setStderrRedirectPath(const std::string &stderrRedirectPath) {
  stderrRedirectPath_ = stderrRedirectPath;
  setParameter(std::string("StderrRedirectPath"), stderrRedirectPath);
}

std::string CreateJobTemplateRequest::getCommandLine() const {
  return commandLine_;
}

void CreateJobTemplateRequest::setCommandLine(const std::string &commandLine) {
  commandLine_ = commandLine;
  setParameter(std::string("CommandLine"), commandLine);
}

std::string CreateJobTemplateRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateJobTemplateRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateJobTemplateRequest::getArrayRequest() const {
  return arrayRequest_;
}

void CreateJobTemplateRequest::setArrayRequest(const std::string &arrayRequest) {
  arrayRequest_ = arrayRequest;
  setParameter(std::string("ArrayRequest"), arrayRequest);
}

std::string CreateJobTemplateRequest::getPackagePath() const {
  return packagePath_;
}

void CreateJobTemplateRequest::setPackagePath(const std::string &packagePath) {
  packagePath_ = packagePath;
  setParameter(std::string("PackagePath"), packagePath);
}

std::string CreateJobTemplateRequest::getRegionId() const {
  return regionId_;
}

void CreateJobTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateJobTemplateRequest::getStdoutRedirectPath() const {
  return stdoutRedirectPath_;
}

void CreateJobTemplateRequest::setStdoutRedirectPath(const std::string &stdoutRedirectPath) {
  stdoutRedirectPath_ = stdoutRedirectPath;
  setParameter(std::string("StdoutRedirectPath"), stdoutRedirectPath);
}

std::string CreateJobTemplateRequest::getVariables() const {
  return variables_;
}

void CreateJobTemplateRequest::setVariables(const std::string &variables) {
  variables_ = variables;
  setParameter(std::string("Variables"), variables);
}

std::string CreateJobTemplateRequest::getRunasUser() const {
  return runasUser_;
}

void CreateJobTemplateRequest::setRunasUser(const std::string &runasUser) {
  runasUser_ = runasUser;
  setParameter(std::string("RunasUser"), runasUser);
}

bool CreateJobTemplateRequest::getReRunable() const {
  return reRunable_;
}

void CreateJobTemplateRequest::setReRunable(bool reRunable) {
  reRunable_ = reRunable;
  setParameter(std::string("ReRunable"), reRunable ? "true" : "false");
}

int CreateJobTemplateRequest::getPriority() const {
  return priority_;
}

void CreateJobTemplateRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateJobTemplateRequest::getName() const {
  return name_;
}

void CreateJobTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

