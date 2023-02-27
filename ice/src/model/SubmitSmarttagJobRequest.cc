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

#include <alibabacloud/ice/model/SubmitSmarttagJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitSmarttagJobRequest;

SubmitSmarttagJobRequest::SubmitSmarttagJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitSmarttagJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSmarttagJobRequest::~SubmitSmarttagJobRequest() {}

std::string SubmitSmarttagJobRequest::getTitle() const {
  return title_;
}

void SubmitSmarttagJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitSmarttagJobRequest::getContent() const {
  return content_;
}

void SubmitSmarttagJobRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string SubmitSmarttagJobRequest::getUserData() const {
  return userData_;
}

void SubmitSmarttagJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string SubmitSmarttagJobRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void SubmitSmarttagJobRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setParameter(std::string("NotifyUrl"), notifyUrl);
}

SubmitSmarttagJobRequest::ScheduleConfig SubmitSmarttagJobRequest::getScheduleConfig() const {
  return scheduleConfig_;
}

void SubmitSmarttagJobRequest::setScheduleConfig(const SubmitSmarttagJobRequest::ScheduleConfig &scheduleConfig) {
  scheduleConfig_ = scheduleConfig;
  setParameter(std::string("ScheduleConfig") + ".Priority", scheduleConfig.priority);
  setParameter(std::string("ScheduleConfig") + ".PipelineId", scheduleConfig.pipelineId);
}

std::string SubmitSmarttagJobRequest::getParams() const {
  return params_;
}

void SubmitSmarttagJobRequest::setParams(const std::string &params) {
  params_ = params;
  setParameter(std::string("Params"), params);
}

std::string SubmitSmarttagJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitSmarttagJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string SubmitSmarttagJobRequest::getContentType() const {
  return contentType_;
}

void SubmitSmarttagJobRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

SubmitSmarttagJobRequest::Input SubmitSmarttagJobRequest::getInput() const {
  return input_;
}

void SubmitSmarttagJobRequest::setInput(const SubmitSmarttagJobRequest::Input &input) {
  input_ = input;
  setParameter(std::string("Input") + ".Media", input.media);
  setParameter(std::string("Input") + ".Type", input.type);
}

std::string SubmitSmarttagJobRequest::getContentAddr() const {
  return contentAddr_;
}

void SubmitSmarttagJobRequest::setContentAddr(const std::string &contentAddr) {
  contentAddr_ = contentAddr;
  setParameter(std::string("ContentAddr"), contentAddr);
}

