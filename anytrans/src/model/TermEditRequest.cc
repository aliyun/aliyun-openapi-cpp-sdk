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

#include <alibabacloud/anytrans/model/TermEditRequest.h>

using AlibabaCloud::AnyTrans::Model::TermEditRequest;

TermEditRequest::TermEditRequest()
    : RoaServiceRequest("anytrans", "2025-07-07") {
  setResourcePath("/anytrans/translate/intervene/edit"};
  setMethod(HttpRequest::Method::Post);
}

TermEditRequest::~TermEditRequest() {}

TermEditRequest::ext TermEditRequest::getExt() const {
  return ext_;
}

void TermEditRequest::setExt(const TermEditRequest::ext &ext) {
  ext_ = ext;
  for(int dep1 = 0; dep1 != ext.terms.size(); dep1++) {
    setBodyParameter(std::string("ext") + ".terms." + std::to_string(dep1 + 1) + ".tgt", ext.terms[dep1].tgt);
    setBodyParameter(std::string("ext") + ".terms." + std::to_string(dep1 + 1) + ".termId", ext.terms[dep1].termId);
    setBodyParameter(std::string("ext") + ".terms." + std::to_string(dep1 + 1) + ".src", ext.terms[dep1].src);
  }
}

std::string TermEditRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void TermEditRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("sourceLanguage"), sourceLanguage);
}

std::string TermEditRequest::getScene() const {
  return scene_;
}

void TermEditRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("scene"), scene);
}

std::string TermEditRequest::getAction() const {
  return action_;
}

void TermEditRequest::setAction(const std::string &action) {
  action_ = action;
  setBodyParameter(std::string("action"), action);
}

std::string TermEditRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void TermEditRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("targetLanguage"), targetLanguage);
}

std::string TermEditRequest::getWorkspaceId() const {
  return workspaceId_;
}

void TermEditRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

