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

#include <alibabacloud/ice/model/SubmitAvatarVideoJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitAvatarVideoJobRequest;

SubmitAvatarVideoJobRequest::SubmitAvatarVideoJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitAvatarVideoJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitAvatarVideoJobRequest::~SubmitAvatarVideoJobRequest() {}

std::string SubmitAvatarVideoJobRequest::getOutputConfig() const {
  return outputConfig_;
}

void SubmitAvatarVideoJobRequest::setOutputConfig(const std::string &outputConfig) {
  outputConfig_ = outputConfig;
  setParameter(std::string("OutputConfig"), outputConfig);
}

std::string SubmitAvatarVideoJobRequest::getInputConfig() const {
  return inputConfig_;
}

void SubmitAvatarVideoJobRequest::setInputConfig(const std::string &inputConfig) {
  inputConfig_ = inputConfig;
  setParameter(std::string("InputConfig"), inputConfig);
}

std::string SubmitAvatarVideoJobRequest::getEditingConfig() const {
  return editingConfig_;
}

void SubmitAvatarVideoJobRequest::setEditingConfig(const std::string &editingConfig) {
  editingConfig_ = editingConfig;
  setParameter(std::string("EditingConfig"), editingConfig);
}

std::string SubmitAvatarVideoJobRequest::getDescription() const {
  return description_;
}

void SubmitAvatarVideoJobRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string SubmitAvatarVideoJobRequest::getTitle() const {
  return title_;
}

void SubmitAvatarVideoJobRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string SubmitAvatarVideoJobRequest::getUserData() const {
  return userData_;
}

void SubmitAvatarVideoJobRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

