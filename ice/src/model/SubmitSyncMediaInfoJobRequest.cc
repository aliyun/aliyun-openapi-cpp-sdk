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

#include <alibabacloud/ice/model/SubmitSyncMediaInfoJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitSyncMediaInfoJobRequest;

SubmitSyncMediaInfoJobRequest::SubmitSyncMediaInfoJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitSyncMediaInfoJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSyncMediaInfoJobRequest::~SubmitSyncMediaInfoJobRequest() {}

std::string SubmitSyncMediaInfoJobRequest::getSource() const {
  return source_;
}

void SubmitSyncMediaInfoJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

std::string SubmitSyncMediaInfoJobRequest::getUserData() const {
  return userData_;
}

void SubmitSyncMediaInfoJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

SubmitSyncMediaInfoJobRequest::ScheduleConfig SubmitSyncMediaInfoJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitSyncMediaInfoJobRequest::setScheduleConfig(const SubmitSyncMediaInfoJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

SubmitSyncMediaInfoJobRequest::Input SubmitSyncMediaInfoJobRequest::getInput() const {
  return input_;
}

void SubmitSyncMediaInfoJobRequest::setInput(const SubmitSyncMediaInfoJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitSyncMediaInfoJobRequest::getName() const {
  return name_;
}

void SubmitSyncMediaInfoJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

