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

#include <alibabacloud/outboundbot/model/CreateBatchJobsRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateBatchJobsRequest;

CreateBatchJobsRequest::CreateBatchJobsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateBatchJobs") {
  setMethod(HttpRequest::Method::Post);
}

CreateBatchJobsRequest::~CreateBatchJobsRequest() {}

std::string CreateBatchJobsRequest::getJobFilePath() const {
  return jobFilePath_;
}

void CreateBatchJobsRequest::setJobFilePath(const std::string &jobFilePath) {
  jobFilePath_ = jobFilePath;
  setParameter(std::string("JobFilePath"), jobFilePath);
}

std::string CreateBatchJobsRequest::getScriptId() const {
  return scriptId_;
}

void CreateBatchJobsRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::vector<std::string> CreateBatchJobsRequest::getCallingNumber() const {
  return callingNumber_;
}

void CreateBatchJobsRequest::setCallingNumber(const std::vector<std::string> &callingNumber) {
  callingNumber_ = callingNumber;
}

std::string CreateBatchJobsRequest::getInstanceId() const {
  return instanceId_;
}

void CreateBatchJobsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

bool CreateBatchJobsRequest::getSubmitted() const {
  return submitted_;
}

void CreateBatchJobsRequest::setSubmitted(bool submitted) {
  submitted_ = submitted;
  setParameter(std::string("Submitted"), submitted ? "true" : "false");
}

std::string CreateBatchJobsRequest::getBatchJobName() const {
  return batchJobName_;
}

void CreateBatchJobsRequest::setBatchJobName(const std::string &batchJobName) {
  batchJobName_ = batchJobName;
  setParameter(std::string("BatchJobName"), batchJobName);
}

std::string CreateBatchJobsRequest::getStrategyJson() const {
  return strategyJson_;
}

void CreateBatchJobsRequest::setStrategyJson(const std::string &strategyJson) {
  strategyJson_ = strategyJson;
  setParameter(std::string("StrategyJson"), strategyJson);
}

std::string CreateBatchJobsRequest::getBatchJobDescription() const {
  return batchJobDescription_;
}

void CreateBatchJobsRequest::setBatchJobDescription(const std::string &batchJobDescription) {
  batchJobDescription_ = batchJobDescription;
  setParameter(std::string("BatchJobDescription"), batchJobDescription);
}

std::string CreateBatchJobsRequest::getScenarioId() const {
  return scenarioId_;
}

void CreateBatchJobsRequest::setScenarioId(const std::string &scenarioId) {
  scenarioId_ = scenarioId;
  setParameter(std::string("ScenarioId"), scenarioId);
}

