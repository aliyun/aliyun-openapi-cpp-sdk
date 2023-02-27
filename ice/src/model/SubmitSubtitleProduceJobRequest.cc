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

#include <alibabacloud/ice/model/SubmitSubtitleProduceJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitSubtitleProduceJobRequest;

SubmitSubtitleProduceJobRequest::SubmitSubtitleProduceJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitSubtitleProduceJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitSubtitleProduceJobRequest::~SubmitSubtitleProduceJobRequest() {}

std::string SubmitSubtitleProduceJobRequest::getOutputConfig() const {
  return outputConfig_;
}

void SubmitSubtitleProduceJobRequest::setOutputConfig(const std::string &outputConfig) {
  outputConfig_ = outputConfig;
  setParameter(std::string("OutputConfig"), outputConfig);
}

std::string SubmitSubtitleProduceJobRequest::getEditingConfig() const {
  return editingConfig_;
}

void SubmitSubtitleProduceJobRequest::setEditingConfig(const std::string &editingConfig) {
  editingConfig_ = editingConfig;
  setParameter(std::string("EditingConfig"), editingConfig);
}

std::string SubmitSubtitleProduceJobRequest::getInputConfig() const {
  return inputConfig_;
}

void SubmitSubtitleProduceJobRequest::setInputConfig(const std::string &inputConfig) {
  inputConfig_ = inputConfig;
  setParameter(std::string("InputConfig"), inputConfig);
}

std::string SubmitSubtitleProduceJobRequest::getDescription() const {
  return description_;
}

void SubmitSubtitleProduceJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitSubtitleProduceJobRequest::getType() const {
  return type_;
}

void SubmitSubtitleProduceJobRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string SubmitSubtitleProduceJobRequest::getTitle() const {
  return title_;
}

void SubmitSubtitleProduceJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitSubtitleProduceJobRequest::getUserData() const {
  return userData_;
}

void SubmitSubtitleProduceJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long SubmitSubtitleProduceJobRequest::getIsAsync() const {
  return isAsync_;
}

void SubmitSubtitleProduceJobRequest::setIsAsync(long isAsync) {
  isAsync_ = isAsync;
  setParameter(std::string("IsAsync"), std::to_string(isAsync));
}

