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

#include <alibabacloud/anytrans/model/TermQueryRequest.h>

using AlibabaCloud::AnyTrans::Model::TermQueryRequest;

TermQueryRequest::TermQueryRequest()
    : RoaServiceRequest("anytrans", "2025-07-07") {
  setResourcePath("/anytrans/translate/intervene/query"};
  setMethod(HttpRequest::Method::Post);
}

TermQueryRequest::~TermQueryRequest() {}

std::string TermQueryRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void TermQueryRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("sourceLanguage"), sourceLanguage);
}

std::string TermQueryRequest::getScene() const {
  return scene_;
}

void TermQueryRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("scene"), scene);
}

std::string TermQueryRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void TermQueryRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("targetLanguage"), targetLanguage);
}

std::string TermQueryRequest::getText() const {
  return text_;
}

void TermQueryRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("text"), text);
}

std::string TermQueryRequest::getWorkspaceId() const {
  return workspaceId_;
}

void TermQueryRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

