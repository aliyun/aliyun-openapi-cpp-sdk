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

#include <alibabacloud/outboundbot/model/CreateJobGroupRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateJobGroupRequest;

CreateJobGroupRequest::CreateJobGroupRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateJobGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateJobGroupRequest::~CreateJobGroupRequest() {}

std::string CreateJobGroupRequest::getRecallStrategyJson() const {
  return recallStrategyJson_;
}

void CreateJobGroupRequest::setRecallStrategyJson(const std::string &recallStrategyJson) {
  recallStrategyJson_ = recallStrategyJson;
  setParameter(std::string("RecallStrategyJson"), recallStrategyJson);
}

std::string CreateJobGroupRequest::getJobGroupName() const {
  return jobGroupName_;
}

void CreateJobGroupRequest::setJobGroupName(const std::string &jobGroupName) {
  jobGroupName_ = jobGroupName;
  setParameter(std::string("JobGroupName"), jobGroupName);
}

std::string CreateJobGroupRequest::getScriptId() const {
  return scriptId_;
}

void CreateJobGroupRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateJobGroupRequest::getStrategyJson() const {
  return strategyJson_;
}

void CreateJobGroupRequest::setStrategyJson(const std::string &strategyJson) {
  strategyJson_ = strategyJson;
  setParameter(std::string("StrategyJson"), strategyJson);
}

long CreateJobGroupRequest::getRingingDuration() const {
  return ringingDuration_;
}

void CreateJobGroupRequest::setRingingDuration(long ringingDuration) {
  ringingDuration_ = ringingDuration;
  setParameter(std::string("RingingDuration"), std::to_string(ringingDuration));
}

std::string CreateJobGroupRequest::getScenarioId() const {
  return scenarioId_;
}

void CreateJobGroupRequest::setScenarioId(const std::string &scenarioId) {
  scenarioId_ = scenarioId;
  setParameter(std::string("ScenarioId"), scenarioId);
}

std::string CreateJobGroupRequest::getPriority() const {
  return priority_;
}

void CreateJobGroupRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::string CreateJobGroupRequest::getJobGroupDescription() const {
  return jobGroupDescription_;
}

void CreateJobGroupRequest::setJobGroupDescription(const std::string &jobGroupDescription) {
  jobGroupDescription_ = jobGroupDescription;
  setParameter(std::string("JobGroupDescription"), jobGroupDescription);
}

std::vector<std::string> CreateJobGroupRequest::getCallingNumber() const {
  return callingNumber_;
}

void CreateJobGroupRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string CreateJobGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateJobGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long CreateJobGroupRequest::getMinConcurrency() const {
  return minConcurrency_;
}

void CreateJobGroupRequest::setMinConcurrency(long minConcurrency) {
  minConcurrency_ = minConcurrency;
  setParameter(std::string("MinConcurrency"), std::to_string(minConcurrency));
}

