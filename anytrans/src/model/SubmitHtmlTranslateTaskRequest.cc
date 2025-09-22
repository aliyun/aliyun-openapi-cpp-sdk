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

#include <alibabacloud/anytrans/model/SubmitHtmlTranslateTaskRequest.h>

using AlibabaCloud::AnyTrans::Model::SubmitHtmlTranslateTaskRequest;

SubmitHtmlTranslateTaskRequest::SubmitHtmlTranslateTaskRequest()
    : RoaServiceRequest("anytrans", "2025-07-07") {
  setResourcePath("/anytrans/translate/html/submit"};
  setMethod(HttpRequest::Method::Post);
}

SubmitHtmlTranslateTaskRequest::~SubmitHtmlTranslateTaskRequest() {}

SubmitHtmlTranslateTaskRequest::ext SubmitHtmlTranslateTaskRequest::getExt() const {
  return ext_;
}

void SubmitHtmlTranslateTaskRequest::setExt(const SubmitHtmlTranslateTaskRequest::ext &ext) {
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

std::string SubmitHtmlTranslateTaskRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void SubmitHtmlTranslateTaskRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("sourceLanguage"), sourceLanguage);
}

std::string SubmitHtmlTranslateTaskRequest::getFormat() const {
  return format_;
}

void SubmitHtmlTranslateTaskRequest::setFormat(const std::string &format) {
  format_ = format;
  setBodyParameter(std::string("format"), format);
}

std::string SubmitHtmlTranslateTaskRequest::getScene() const {
  return scene_;
}

void SubmitHtmlTranslateTaskRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("scene"), scene);
}

std::string SubmitHtmlTranslateTaskRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void SubmitHtmlTranslateTaskRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("targetLanguage"), targetLanguage);
}

std::string SubmitHtmlTranslateTaskRequest::getText() const {
  return text_;
}

void SubmitHtmlTranslateTaskRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("text"), text);
}

std::string SubmitHtmlTranslateTaskRequest::getWorkspaceId() const {
  return workspaceId_;
}

void SubmitHtmlTranslateTaskRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

