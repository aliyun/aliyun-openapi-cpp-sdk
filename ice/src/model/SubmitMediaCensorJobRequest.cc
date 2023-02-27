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

#include <alibabacloud/ice/model/SubmitMediaCensorJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitMediaCensorJobRequest;

SubmitMediaCensorJobRequest::SubmitMediaCensorJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitMediaCensorJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMediaCensorJobRequest::~SubmitMediaCensorJobRequest() {}

std::string SubmitMediaCensorJobRequest::getDescription() const {
  return description_;
}

void SubmitMediaCensorJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitMediaCensorJobRequest::getTitle() const {
  return title_;
}

void SubmitMediaCensorJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitMediaCensorJobRequest::getOutput() const {
  return output_;
}

void SubmitMediaCensorJobRequest::setOutput(const std::string &output) {
  output_ = output;
  setParameter(std::string("Output"), output);
}

std::string SubmitMediaCensorJobRequest::getUserData() const {
  return userData_;
}

void SubmitMediaCensorJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitMediaCensorJobRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void SubmitMediaCensorJobRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

std::string SubmitMediaCensorJobRequest::getCoverImages() const {
  return coverImages_;
}

void SubmitMediaCensorJobRequest::setCoverImages(const std::string &coverImages) {
  coverImages_ = coverImages;
  setParameter(std::string("CoverImages"), coverImages);
}

SubmitMediaCensorJobRequest::ScheduleConfig SubmitMediaCensorJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitMediaCensorJobRequest::setScheduleConfig(const SubmitMediaCensorJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", std::to_string(scheduleConfig.priority));
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

std::string SubmitMediaCensorJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitMediaCensorJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

SubmitMediaCensorJobRequest::Input SubmitMediaCensorJobRequest::getInput() const {
  return input_;
}

void SubmitMediaCensorJobRequest::setInput(const SubmitMediaCensorJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitMediaCensorJobRequest::getBarrages() const {
  return barrages_;
}

void SubmitMediaCensorJobRequest::setBarrages(const std::string &barrages) {
  barrages_ = barrages;
  setParameter(std::string("Barrages"), barrages);
}

