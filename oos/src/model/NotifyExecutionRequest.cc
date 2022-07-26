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

#include <alibabacloud/oos/model/NotifyExecutionRequest.h>

using AlibabaCloud::Oos::Model::NotifyExecutionRequest;

NotifyExecutionRequest::NotifyExecutionRequest()
    : RpcServiceRequest("oos", "2019-06-01", "NotifyExecution") {
  setMethod(HttpRequest::Method::Post);
}

NotifyExecutionRequest::~NotifyExecutionRequest() {}

std::string NotifyExecutionRequest::getTaskName() const {
  return taskName_;
}

void NotifyExecutionRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string NotifyExecutionRequest::getExecutionId() const {
  return executionId_;
}

void NotifyExecutionRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string NotifyExecutionRequest::getRegionId() const {
  return regionId_;
}

void NotifyExecutionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string NotifyExecutionRequest::getNotifyType() const {
  return notifyType_;
}

void NotifyExecutionRequest::setNotifyType(const std::string &notifyType) {
  notifyType_ = notifyType;
  setParameter(std::string("NotifyType"), notifyType);
}

std::string NotifyExecutionRequest::getExecutionStatus() const {
  return executionStatus_;
}

void NotifyExecutionRequest::setExecutionStatus(const std::string &executionStatus) {
  executionStatus_ = executionStatus;
  setParameter(std::string("ExecutionStatus"), executionStatus);
}

std::string NotifyExecutionRequest::getNotifyNote() const {
  return notifyNote_;
}

void NotifyExecutionRequest::setNotifyNote(const std::string &notifyNote) {
  notifyNote_ = notifyNote;
  setParameter(std::string("NotifyNote"), notifyNote);
}

std::string NotifyExecutionRequest::getLoopItem() const {
  return loopItem_;
}

void NotifyExecutionRequest::setLoopItem(const std::string &loopItem) {
  loopItem_ = loopItem;
  setParameter(std::string("LoopItem"), loopItem);
}

std::string NotifyExecutionRequest::getTaskExecutionIds() const {
  return taskExecutionIds_;
}

void NotifyExecutionRequest::setTaskExecutionIds(const std::string &taskExecutionIds) {
  taskExecutionIds_ = taskExecutionIds;
  setParameter(std::string("TaskExecutionIds"), taskExecutionIds);
}

std::string NotifyExecutionRequest::getTaskExecutionId() const {
  return taskExecutionId_;
}

void NotifyExecutionRequest::setTaskExecutionId(const std::string &taskExecutionId) {
  taskExecutionId_ = taskExecutionId;
  setParameter(std::string("TaskExecutionId"), taskExecutionId);
}

std::string NotifyExecutionRequest::getParameters() const {
  return parameters_;
}

void NotifyExecutionRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

