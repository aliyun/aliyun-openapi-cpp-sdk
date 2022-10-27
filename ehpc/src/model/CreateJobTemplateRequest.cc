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
    : RpcServiceRequest("ehpc", "2018-04-12", "CreateJobTemplate") {
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

std::string CreateJobTemplateRequest::getClockTime() const {
  return clockTime_;
}

void CreateJobTemplateRequest::setClockTime(const std::string &clockTime) {
  clockTime_ = clockTime;
  setParameter(std::string("ClockTime"), clockTime);
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

std::string CreateJobTemplateRequest::getUnzipCmd() const {
  return unzipCmd_;
}

void CreateJobTemplateRequest::setUnzipCmd(const std::string &unzipCmd) {
  unzipCmd_ = unzipCmd;
  setParameter(std::string("UnzipCmd"), unzipCmd);
}

std::string CreateJobTemplateRequest::getPackagePath() const {
  return packagePath_;
}

void CreateJobTemplateRequest::setPackagePath(const std::string &packagePath) {
  packagePath_ = packagePath;
  setParameter(std::string("PackagePath"), packagePath);
}

std::string CreateJobTemplateRequest::getMem() const {
  return mem_;
}

void CreateJobTemplateRequest::setMem(const std::string &mem) {
  mem_ = mem;
  setParameter(std::string("Mem"), mem);
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

int CreateJobTemplateRequest::getThread() const {
  return thread_;
}

void CreateJobTemplateRequest::setThread(int thread) {
  thread_ = thread;
  setParameter(std::string("Thread"), std::to_string(thread));
}

int CreateJobTemplateRequest::getPriority() const {
  return priority_;
}

void CreateJobTemplateRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

int CreateJobTemplateRequest::getGpu() const {
  return gpu_;
}

void CreateJobTemplateRequest::setGpu(int gpu) {
  gpu_ = gpu;
  setParameter(std::string("Gpu"), std::to_string(gpu));
}

bool CreateJobTemplateRequest::getWithUnzipCmd() const {
  return withUnzipCmd_;
}

void CreateJobTemplateRequest::setWithUnzipCmd(bool withUnzipCmd) {
  withUnzipCmd_ = withUnzipCmd;
  setParameter(std::string("WithUnzipCmd"), withUnzipCmd ? "true" : "false");
}

int CreateJobTemplateRequest::getNode() const {
  return node_;
}

void CreateJobTemplateRequest::setNode(int node) {
  node_ = node;
  setParameter(std::string("Node"), std::to_string(node));
}

int CreateJobTemplateRequest::getTask() const {
  return task_;
}

void CreateJobTemplateRequest::setTask(int task) {
  task_ = task;
  setParameter(std::string("Task"), std::to_string(task));
}

std::string CreateJobTemplateRequest::getInputFileUrl() const {
  return inputFileUrl_;
}

void CreateJobTemplateRequest::setInputFileUrl(const std::string &inputFileUrl) {
  inputFileUrl_ = inputFileUrl;
  setParameter(std::string("InputFileUrl"), inputFileUrl);
}

std::string CreateJobTemplateRequest::getName() const {
  return name_;
}

void CreateJobTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateJobTemplateRequest::getQueue() const {
  return queue_;
}

void CreateJobTemplateRequest::setQueue(const std::string &queue) {
  queue_ = queue;
  setParameter(std::string("Queue"), queue);
}

