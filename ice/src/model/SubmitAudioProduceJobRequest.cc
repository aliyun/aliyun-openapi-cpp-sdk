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

#include <alibabacloud/ice/model/SubmitAudioProduceJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitAudioProduceJobRequest;

SubmitAudioProduceJobRequest::SubmitAudioProduceJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitAudioProduceJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAudioProduceJobRequest::~SubmitAudioProduceJobRequest() {}

std::string SubmitAudioProduceJobRequest::getOutputConfig() const {
  return outputConfig_;
}

void SubmitAudioProduceJobRequest::setOutputConfig(const std::string &outputConfig) {
  outputConfig_ = outputConfig;
  setParameter(std::string("OutputConfig"), outputConfig);
}

std::string SubmitAudioProduceJobRequest::getEditingConfig() const {
  return editingConfig_;
}

void SubmitAudioProduceJobRequest::setEditingConfig(const std::string &editingConfig) {
  editingConfig_ = editingConfig;
  setParameter(std::string("EditingConfig"), editingConfig);
}

std::string SubmitAudioProduceJobRequest::getInputConfig() const {
  return inputConfig_;
}

void SubmitAudioProduceJobRequest::setInputConfig(const std::string &inputConfig) {
  inputConfig_ = inputConfig;
  setParameter(std::string("InputConfig"), inputConfig);
}

std::string SubmitAudioProduceJobRequest::getDescription() const {
  return description_;
}

void SubmitAudioProduceJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitAudioProduceJobRequest::getTitle() const {
  return title_;
}

void SubmitAudioProduceJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitAudioProduceJobRequest::getUserData() const {
  return userData_;
}

void SubmitAudioProduceJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool SubmitAudioProduceJobRequest::getOverwrite() const {
  return overwrite_;
}

void SubmitAudioProduceJobRequest::setOverwrite(bool overwrite) {
  overwrite_ = overwrite;
  setParameter(std::string("Overwrite"), overwrite ? "true" : "false");
}

long SubmitAudioProduceJobRequest::getIsAsync() const {
  return isAsync_;
}

void SubmitAudioProduceJobRequest::setIsAsync(long isAsync) {
  isAsync_ = isAsync;
  setParameter(std::string("IsAsync"), std::to_string(isAsync));
}

