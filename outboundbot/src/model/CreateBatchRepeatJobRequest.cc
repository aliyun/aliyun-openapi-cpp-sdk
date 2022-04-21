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

#include <alibabacloud/outboundbot/model/CreateBatchRepeatJobRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateBatchRepeatJobRequest;

CreateBatchRepeatJobRequest::CreateBatchRepeatJobRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateBatchRepeatJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateBatchRepeatJobRequest::~CreateBatchRepeatJobRequest() {}

std::string CreateBatchRepeatJobRequest::getRecallStrategyJson() const {
  return recallStrategyJson_;
}

void CreateBatchRepeatJobRequest::setRecallStrategyJson(const std::string &recallStrategyJson) {
  recallStrategyJson_ = recallStrategyJson;
  setParameter(std::string("RecallStrategyJson"), recallStrategyJson);
}

std::string CreateBatchRepeatJobRequest::getDescription() const {
  return description_;
}

void CreateBatchRepeatJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateBatchRepeatJobRequest::getScriptId() const {
  return scriptId_;
}

void CreateBatchRepeatJobRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateBatchRepeatJobRequest::getFilterStatus() const {
  return filterStatus_;
}

void CreateBatchRepeatJobRequest::setFilterStatus(const std::string &filterStatus) {
  filterStatus_ = filterStatus;
  setParameter(std::string("FilterStatus"), filterStatus);
}

std::string CreateBatchRepeatJobRequest::getStrategyJson() const {
  return strategyJson_;
}

void CreateBatchRepeatJobRequest::setStrategyJson(const std::string &strategyJson) {
  strategyJson_ = strategyJson;
  setParameter(std::string("StrategyJson"), strategyJson);
}

long CreateBatchRepeatJobRequest::getRingingDuration() const {
  return ringingDuration_;
}

void CreateBatchRepeatJobRequest::setRingingDuration(long ringingDuration) {
  ringingDuration_ = ringingDuration;
  setParameter(std::string("RingingDuration"), std::to_string(ringingDuration));
}

std::string CreateBatchRepeatJobRequest::getPriority() const {
  return priority_;
}

void CreateBatchRepeatJobRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), priority);
}

std::vector<std::string> CreateBatchRepeatJobRequest::getCallingNumber() const {
  return callingNumber_;
}

void CreateBatchRepeatJobRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string CreateBatchRepeatJobRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBatchRepeatJobRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateBatchRepeatJobRequest::getName() const {
  return name_;
}

void CreateBatchRepeatJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateBatchRepeatJobRequest::getSourceGroupId() const {
  return sourceGroupId_;
}

void CreateBatchRepeatJobRequest::setSourceGroupId(const std::string &sourceGroupId) {
  sourceGroupId_ = sourceGroupId;
  setParameter(std::string("SourceGroupId"), sourceGroupId);
}

long CreateBatchRepeatJobRequest::getMinConcurrency() const {
  return minConcurrency_;
}

void CreateBatchRepeatJobRequest::setMinConcurrency(long minConcurrency) {
  minConcurrency_ = minConcurrency;
  setParameter(std::string("MinConcurrency"), std::to_string(minConcurrency));
}

