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

#include <alibabacloud/ice/model/SubmitIProductionJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitIProductionJobRequest;

SubmitIProductionJobRequest::SubmitIProductionJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitIProductionJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitIProductionJobRequest::~SubmitIProductionJobRequest() {}

std::string SubmitIProductionJobRequest::getJobParams() const {
  return jobParams_;
}

void SubmitIProductionJobRequest::setJobParams(const std::string &jobParams) {
  jobParams_ = jobParams;
  setParameter(std::string("JobParams"), jobParams);
}

SubmitIProductionJobRequest::Output SubmitIProductionJobRequest::getOutput() const {
  return output_;
}

void SubmitIProductionJobRequest::setOutput(const SubmitIProductionJobRequest::Output &output) {
  output_ = output;
  setParameter(std::string("Output") + ".Media", output.media);
  setParameter(std::string("Output") + ".Type", output.type);
}

std::string SubmitIProductionJobRequest::getUserData() const {
  return userData_;
}

void SubmitIProductionJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitIProductionJobRequest::getFunctionName() const {
  return functionName_;
}

void SubmitIProductionJobRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

SubmitIProductionJobRequest::ScheduleConfig SubmitIProductionJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitIProductionJobRequest::setScheduleConfig(const SubmitIProductionJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

std::string SubmitIProductionJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitIProductionJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

SubmitIProductionJobRequest::Input SubmitIProductionJobRequest::getInput() const {
  return input_;
}

void SubmitIProductionJobRequest::setInput(const SubmitIProductionJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitIProductionJobRequest::getName() const {
  return name_;
}

void SubmitIProductionJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

