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

#include <alibabacloud/sas/model/CreateCycleTaskRequest.h>

using AlibabaCloud::Sas::Model::CreateCycleTaskRequest;

CreateCycleTaskRequest::CreateCycleTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateCycleTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateCycleTaskRequest::~CreateCycleTaskRequest() {}

long CreateCycleTaskRequest::getFirstDateStr() const {
  return firstDateStr_;
}

void CreateCycleTaskRequest::setFirstDateStr(long firstDateStr) {
  firstDateStr_ = firstDateStr;
  setParameter(std::string("FirstDateStr"), std::to_string(firstDateStr));
}

std::string CreateCycleTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateCycleTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateCycleTaskRequest::getSource() const {
  return source_;
}

void CreateCycleTaskRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

int CreateCycleTaskRequest::getTargetStartTime() const {
  return targetStartTime_;
}

void CreateCycleTaskRequest::setTargetStartTime(int targetStartTime) {
  targetStartTime_ = targetStartTime;
  setParameter(std::string("TargetStartTime"), std::to_string(targetStartTime));
}

std::string CreateCycleTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCycleTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int CreateCycleTaskRequest::getIntervalPeriod() const {
  return intervalPeriod_;
}

void CreateCycleTaskRequest::setIntervalPeriod(int intervalPeriod) {
  intervalPeriod_ = intervalPeriod;
  setParameter(std::string("IntervalPeriod"), std::to_string(intervalPeriod));
}

std::string CreateCycleTaskRequest::getParam() const {
  return param_;
}

void CreateCycleTaskRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

int CreateCycleTaskRequest::getEnable() const {
  return enable_;
}

void CreateCycleTaskRequest::setEnable(int enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), std::to_string(enable));
}

std::string CreateCycleTaskRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void CreateCycleTaskRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string CreateCycleTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateCycleTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

int CreateCycleTaskRequest::getTargetEndTime() const {
  return targetEndTime_;
}

void CreateCycleTaskRequest::setTargetEndTime(int targetEndTime) {
  targetEndTime_ = targetEndTime;
  setParameter(std::string("TargetEndTime"), std::to_string(targetEndTime));
}

std::string CreateCycleTaskRequest::getPeriodUnit() const {
  return periodUnit_;
}

void CreateCycleTaskRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

