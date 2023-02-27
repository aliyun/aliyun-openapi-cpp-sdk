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

#include <alibabacloud/ice/model/SubmitDynamicImageJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitDynamicImageJobRequest;

SubmitDynamicImageJobRequest::SubmitDynamicImageJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitDynamicImageJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitDynamicImageJobRequest::~SubmitDynamicImageJobRequest() {}

std::string SubmitDynamicImageJobRequest::getSource() const {
  return source_;
}

void SubmitDynamicImageJobRequest::setSource(const std::string &source) {
  source_ = source;
  setParameter(std::string("Source"), source);
}

SubmitDynamicImageJobRequest::Output SubmitDynamicImageJobRequest::getOutput() const {
  return output_;
}

void SubmitDynamicImageJobRequest::setOutput(const SubmitDynamicImageJobRequest::Output &output) {
  output_ = output;
  setParameter(std::string("Output") + ".Media", output.media);
  setParameter(std::string("Output") + ".Type", output.type);
}

std::string SubmitDynamicImageJobRequest::getUserData() const {
  return userData_;
}

void SubmitDynamicImageJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

SubmitDynamicImageJobRequest::TemplateConfig SubmitDynamicImageJobRequest::getTemplateConfig() const {
  return templateConfig_;
}

void SubmitDynamicImageJobRequest::setTemplateConfig(const SubmitDynamicImageJobRequest::TemplateConfig &templateConfig) {
  templateConfig_ = templateConfig;
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.ScanMode", templateConfig.overwriteParams.scanMode);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Format", templateConfig.overwriteParams.format);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Width", std::to_string(templateConfig.overwriteParams.width));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Fps", std::to_string(templateConfig.overwriteParams.fps));
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.LongShortMode", templateConfig.overwriteParams.longShortMode ? "true" : "false");
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.TimeSpan.Duration", templateConfig.overwriteParams.timeSpan.duration);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.TimeSpan.End", templateConfig.overwriteParams.timeSpan.end);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.TimeSpan.Seek", templateConfig.overwriteParams.timeSpan.seek);
  setParameter(std::string("TemplateConfig") + ".OverwriteParams.Height", std::to_string(templateConfig.overwriteParams.height));
  setParameter(std::string("TemplateConfig") + ".TemplateId", templateConfig.templateId);
}

SubmitDynamicImageJobRequest::ScheduleConfig SubmitDynamicImageJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitDynamicImageJobRequest::setScheduleConfig(const SubmitDynamicImageJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

SubmitDynamicImageJobRequest::Input SubmitDynamicImageJobRequest::getInput() const {
  return input_;
}

void SubmitDynamicImageJobRequest::setInput(const SubmitDynamicImageJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitDynamicImageJobRequest::getName() const {
  return name_;
}

void SubmitDynamicImageJobRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

