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

#include <alibabacloud/sas/model/ModifyCycleTaskRequest.h>

using AlibabaCloud::Sas::Model::ModifyCycleTaskRequest;

ModifyCycleTaskRequest::ModifyCycleTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyCycleTask") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCycleTaskRequest::~ModifyCycleTaskRequest() {}

long ModifyCycleTaskRequest::getFirstDateStr() const {
  return firstDateStr_;
}

void ModifyCycleTaskRequest::setFirstDateStr(long firstDateStr) {
  firstDateStr_ = firstDateStr;
  setParameter(std::string("FirstDateStr"), std::to_string(firstDateStr));
}

std::string ModifyCycleTaskRequest::getTaskName() const {
  return taskName_;
}

void ModifyCycleTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

int ModifyCycleTaskRequest::getTargetStartTime() const {
  return targetStartTime_;
}

void ModifyCycleTaskRequest::setTargetStartTime(int targetStartTime) {
  targetStartTime_ = targetStartTime;
  setParameter(std::string("TargetStartTime"), std::to_string(targetStartTime));
}

std::string ModifyCycleTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyCycleTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyCycleTaskRequest::getIntervalPeriod() const {
  return intervalPeriod_;
}

void ModifyCycleTaskRequest::setIntervalPeriod(int intervalPeriod) {
  intervalPeriod_ = intervalPeriod;
  setParameter(std::string("IntervalPeriod"), std::to_string(intervalPeriod));
}

std::string ModifyCycleTaskRequest::getParam() const {
  return param_;
}

void ModifyCycleTaskRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

int ModifyCycleTaskRequest::getEnable() const {
  return enable_;
}

void ModifyCycleTaskRequest::setEnable(int enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), std::to_string(enable));
}

std::string ModifyCycleTaskRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyCycleTaskRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string ModifyCycleTaskRequest::getTaskType() const {
  return taskType_;
}

void ModifyCycleTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

int ModifyCycleTaskRequest::getTargetEndTime() const {
  return targetEndTime_;
}

void ModifyCycleTaskRequest::setTargetEndTime(int targetEndTime) {
  targetEndTime_ = targetEndTime;
  setParameter(std::string("TargetEndTime"), std::to_string(targetEndTime));
}

std::string ModifyCycleTaskRequest::getPeriodUnit() const {
  return periodUnit_;
}

void ModifyCycleTaskRequest::setPeriodUnit(const std::string &periodUnit) {
  periodUnit_ = periodUnit;
  setParameter(std::string("PeriodUnit"), periodUnit);
}

std::string ModifyCycleTaskRequest::getConfigId() const {
  return configId_;
}

void ModifyCycleTaskRequest::setConfigId(const std::string &configId) {
  configId_ = configId;
  setParameter(std::string("ConfigId"), configId);
}

