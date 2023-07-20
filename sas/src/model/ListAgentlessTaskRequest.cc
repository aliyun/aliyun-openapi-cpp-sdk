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

#include <alibabacloud/sas/model/ListAgentlessTaskRequest.h>

using AlibabaCloud::Sas::Model::ListAgentlessTaskRequest;

ListAgentlessTaskRequest::ListAgentlessTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListAgentlessTask") {
  setMethod(HttpRequest::Method::Post);
}

ListAgentlessTaskRequest::~ListAgentlessTaskRequest() {}

std::string ListAgentlessTaskRequest::getInternetIp() const {
  return internetIp_;
}

void ListAgentlessTaskRequest::setInternetIp(const std::string &internetIp) {
  internetIp_ = internetIp;
  setParameter(std::string("InternetIp"), internetIp);
}

int ListAgentlessTaskRequest::getTargetType() const {
  return targetType_;
}

void ListAgentlessTaskRequest::setTargetType(int targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), std::to_string(targetType));
}

long ListAgentlessTaskRequest::getStartTime() const {
  return startTime_;
}

void ListAgentlessTaskRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string ListAgentlessTaskRequest::getUuid() const {
  return uuid_;
}

void ListAgentlessTaskRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ListAgentlessTaskRequest::getTargetName() const {
  return targetName_;
}

void ListAgentlessTaskRequest::setTargetName(const std::string &targetName) {
  targetName_ = targetName;
  setParameter(std::string("TargetName"), targetName);
}

std::string ListAgentlessTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void ListAgentlessTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListAgentlessTaskRequest::getRootTaskId() const {
  return rootTaskId_;
}

void ListAgentlessTaskRequest::setRootTaskId(const std::string &rootTaskId) {
  rootTaskId_ = rootTaskId;
  setParameter(std::string("RootTaskId"), rootTaskId);
}

int ListAgentlessTaskRequest::getPageSize() const {
  return pageSize_;
}

void ListAgentlessTaskRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAgentlessTaskRequest::getMachineName() const {
  return machineName_;
}

void ListAgentlessTaskRequest::setMachineName(const std::string &machineName) {
  machineName_ = machineName;
  setParameter(std::string("MachineName"), machineName);
}

std::string ListAgentlessTaskRequest::getLang() const {
  return lang_;
}

void ListAgentlessTaskRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListAgentlessTaskRequest::getTaskId() const {
  return taskId_;
}

void ListAgentlessTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

long ListAgentlessTaskRequest::getEndTime() const {
  return endTime_;
}

void ListAgentlessTaskRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int ListAgentlessTaskRequest::getCurrentPage() const {
  return currentPage_;
}

void ListAgentlessTaskRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

bool ListAgentlessTaskRequest::getRootTask() const {
  return rootTask_;
}

void ListAgentlessTaskRequest::setRootTask(bool rootTask) {
  rootTask_ = rootTask;
  setParameter(std::string("RootTask"), rootTask ? "true" : "false");
}

int ListAgentlessTaskRequest::getStatus() const {
  return status_;
}

void ListAgentlessTaskRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

std::string ListAgentlessTaskRequest::getIntranetIp() const {
  return intranetIp_;
}

void ListAgentlessTaskRequest::setIntranetIp(const std::string &intranetIp) {
  intranetIp_ = intranetIp;
  setParameter(std::string("IntranetIp"), intranetIp);
}

