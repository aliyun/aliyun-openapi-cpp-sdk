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

#include <alibabacloud/outboundbot/model/StartJobRequest.h>

using AlibabaCloud::OutboundBot::Model::StartJobRequest;

StartJobRequest::StartJobRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "StartJob") {
  setMethod(HttpRequest::Method::Post);
}

StartJobRequest::~StartJobRequest() {}

std::string StartJobRequest::getJobJson() const {
  return jobJson_;
}

void StartJobRequest::setJobJson(const std::string &jobJson) {
  jobJson_ = jobJson;
  setParameter(std::string("JobJson"), jobJson);
}

std::string StartJobRequest::getScriptId() const {
  return scriptId_;
}

void StartJobRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::vector<std::string> StartJobRequest::getCallingNumber() const {
  return callingNumber_;
}

void StartJobRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string StartJobRequest::getInstanceId() const {
  return instanceId_;
}

void StartJobRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string StartJobRequest::getJobGroupId() const {
  return jobGroupId_;
}

void StartJobRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

bool StartJobRequest::getSelfHostedCallCenter() const {
  return selfHostedCallCenter_;
}

void StartJobRequest::setSelfHostedCallCenter(bool selfHostedCallCenter) {
  selfHostedCallCenter_ = selfHostedCallCenter;
  setParameter(std::string("SelfHostedCallCenter"), selfHostedCallCenter ? "true" : "false");
}

std::string StartJobRequest::getScenarioId() const {
  return scenarioId_;
}

void StartJobRequest::setScenarioId(const std::string &scenarioId) {
  scenarioId_ = scenarioId;
  setParameter(std::string("ScenarioId"), scenarioId);
}

