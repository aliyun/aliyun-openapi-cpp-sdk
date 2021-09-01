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

#include <alibabacloud/mts/model/SubmitVideoQualityJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitVideoQualityJobRequest;

SubmitVideoQualityJobRequest::SubmitVideoQualityJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitVideoQualityJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitVideoQualityJobRequest::~SubmitVideoQualityJobRequest() {}

std::string SubmitVideoQualityJobRequest::getJobParams() const {
  return jobParams_;
}

void SubmitVideoQualityJobRequest::setJobParams(const std::string &jobParams) {
  jobParams_ = jobParams;
  setParameter(std::string("JobParams"), jobParams);
}

long SubmitVideoQualityJobRequest::getUserId() const {
  return userId_;
}

void SubmitVideoQualityJobRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

std::string SubmitVideoQualityJobRequest::getOutput() const {
  return output_;
}

void SubmitVideoQualityJobRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitVideoQualityJobRequest::getUserData() const {
  return userData_;
}

void SubmitVideoQualityJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitVideoQualityJobRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void SubmitVideoQualityJobRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

std::string SubmitVideoQualityJobRequest::getSourceType() const {
  return sourceType_;
}

void SubmitVideoQualityJobRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string SubmitVideoQualityJobRequest::getModelId() const {
  return modelId_;
}

void SubmitVideoQualityJobRequest::setModelId(const std::string &modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), modelId);
}

std::string SubmitVideoQualityJobRequest::getPipelineId() const {
  return pipelineId_;
}

void SubmitVideoQualityJobRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string SubmitVideoQualityJobRequest::getInput() const {
  return input_;
}

void SubmitVideoQualityJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitVideoQualityJobRequest::getScheduleParams() const {
  return scheduleParams_;
}

void SubmitVideoQualityJobRequest::setScheduleParams(const std::string &scheduleParams) {
  scheduleParams_ = scheduleParams;
  setParameter(std::string("ScheduleParams"), scheduleParams);
}

