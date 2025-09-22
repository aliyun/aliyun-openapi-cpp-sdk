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

#include <alibabacloud/anytrans/model/SubmitLongTextTranslateTaskRequest.h>

using AlibabaCloud::AnyTrans::Model::SubmitLongTextTranslateTaskRequest;

SubmitLongTextTranslateTaskRequest::SubmitLongTextTranslateTaskRequest()
    : RoaServiceRequest("anytrans", "2025-07-07") {
  setResourcePath("/anytrans/translate/longText/submit"};
  setMethod(HttpRequest::Method::Post);
}

SubmitLongTextTranslateTaskRequest::~SubmitLongTextTranslateTaskRequest() {}

SubmitLongTextTranslateTaskRequest::ext SubmitLongTextTranslateTaskRequest::getExt() const {
  return ext_;
}

void SubmitLongTextTranslateTaskRequest::setExt(const SubmitLongTextTranslateTaskRequest::ext &ext) {
  ext_ = ext;
  for(int dep1 = 0; dep1 != ext.sensitives.size(); dep1++) {
    setBodyParameter(std::string("ext") + ".sensitives." + std::to_string(dep1 + 1), ext.sensitives[dep1]);
  }
  for(int dep1 = 0; dep1 != ext.terminologies.size(); dep1++) {
    setBodyParameter(std::string("ext") + ".terminologies." + std::to_string(dep1 + 1) + ".tgt", ext.terminologies[dep1].tgt);
    setBodyParameter(std::string("ext") + ".terminologies." + std::to_string(dep1 + 1) + ".src", ext.terminologies[dep1].src);
  }
  setBodyParameter(std::string("ext") + ".textTransform.toLower", ext.textTransform.toLower ? "true" : "false");
  setBodyParameter(std::string("ext") + ".textTransform.toUpper", ext.textTransform.toUpper ? "true" : "false");
  setBodyParameter(std::string("ext") + ".textTransform.toTitle", ext.textTransform.toTitle ? "true" : "false");
  for(int dep1 = 0; dep1 != ext.examples.size(); dep1++) {
    setBodyParameter(std::string("ext") + ".examples." + std::to_string(dep1 + 1) + ".tgt", ext.examples[dep1].tgt);
    setBodyParameter(std::string("ext") + ".examples." + std::to_string(dep1 + 1) + ".src", ext.examples[dep1].src);
  }
  setBodyParameter(std::string("ext") + ".domainHint", ext.domainHint);
}

std::string SubmitLongTextTranslateTaskRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void SubmitLongTextTranslateTaskRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("sourceLanguage"), sourceLanguage);
}

std::string SubmitLongTextTranslateTaskRequest::getFormat() const {
  return format_;
}

void SubmitLongTextTranslateTaskRequest::setFormat(const std::string &format) {
  format_ = format;
  setBodyParameter(std::string("format"), format);
}

std::string SubmitLongTextTranslateTaskRequest::getScene() const {
  return scene_;
}

void SubmitLongTextTranslateTaskRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("scene"), scene);
}

std::string SubmitLongTextTranslateTaskRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void SubmitLongTextTranslateTaskRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("targetLanguage"), targetLanguage);
}

std::string SubmitLongTextTranslateTaskRequest::getText() const {
  return text_;
}

void SubmitLongTextTranslateTaskRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("text"), text);
}

std::string SubmitLongTextTranslateTaskRequest::getWorkspaceId() const {
  return workspaceId_;
}

void SubmitLongTextTranslateTaskRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

