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

#include <alibabacloud/ice/model/SubmitMediaInfoJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitMediaInfoJobRequest;

SubmitMediaInfoJobRequest::SubmitMediaInfoJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitMediaInfoJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMediaInfoJobRequest::~SubmitMediaInfoJobRequest() {}

std::string SubmitMediaInfoJobRequest::getSource() const {
  return source_;
}

void SubmitMediaInfoJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string SubmitMediaInfoJobRequest::getUserData() const {
  return userData_;
}

void SubmitMediaInfoJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

SubmitMediaInfoJobRequest::ScheduleConfig SubmitMediaInfoJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitMediaInfoJobRequest::setScheduleConfig(const SubmitMediaInfoJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

SubmitMediaInfoJobRequest::Input SubmitMediaInfoJobRequest::getInput() const {
  return input_;
}

void SubmitMediaInfoJobRequest::setInput(const SubmitMediaInfoJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitMediaInfoJobRequest::getName() const {
  return name_;
}

void SubmitMediaInfoJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

