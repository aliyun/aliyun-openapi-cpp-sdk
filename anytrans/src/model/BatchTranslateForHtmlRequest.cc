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

#include <alibabacloud/anytrans/model/BatchTranslateForHtmlRequest.h>

using AlibabaCloud::AnyTrans::Model::BatchTranslateForHtmlRequest;

BatchTranslateForHtmlRequest::BatchTranslateForHtmlRequest()
    : RoaServiceRequest("anytrans", "2025-07-07") {
  setResourcePath("/anytrans/translate/batchForHtml"};
  setMethod(HttpRequest::Method::Post);
}

BatchTranslateForHtmlRequest::~BatchTranslateForHtmlRequest() {}

BatchTranslateForHtmlRequest::ext BatchTranslateForHtmlRequest::getExt() const {
  return ext_;
}

void BatchTranslateForHtmlRequest::setExt(const BatchTranslateForHtmlRequest::ext &ext) {
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
  setBodyParameter(std::string("ext") + ".config.skipCsiCheck", ext.config.skipCsiCheck ? "true" : "false");
  setBodyParameter(std::string("ext") + ".domainHint", ext.domainHint);
}

std::string BatchTranslateForHtmlRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void BatchTranslateForHtmlRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("sourceLanguage"), sourceLanguage);
}

std::string BatchTranslateForHtmlRequest::getFormat() const {
  return format_;
}

void BatchTranslateForHtmlRequest::setFormat(const std::string &format) {
  format_ = format;
  setBodyParameter(std::string("format"), format);
}

std::string BatchTranslateForHtmlRequest::getScene() const {
  return scene_;
}

void BatchTranslateForHtmlRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("scene"), scene);
}

std::string BatchTranslateForHtmlRequest::getAppName() const {
  return appName_;
}

void BatchTranslateForHtmlRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setBodyParameter(std::string("appName"), appName);
}

std::string BatchTranslateForHtmlRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void BatchTranslateForHtmlRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("targetLanguage"), targetLanguage);
}

std::map<std::string, std::string> BatchTranslateForHtmlRequest::getText() const {
  return text_;
}

void BatchTranslateForHtmlRequest::setText(const std::map<std::string, std::string> &text) {
  text_ = text;
  for(auto const &iter1 : text) {
    setBodyParameter(std::string("text") + "." + iter1.first, iter1.second);
  }
}

std::string BatchTranslateForHtmlRequest::getWorkspaceId() const {
  return workspaceId_;
}

void BatchTranslateForHtmlRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("workspaceId"), workspaceId);
}

