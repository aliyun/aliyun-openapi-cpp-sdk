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

#include <alibabacloud/alimt/model/GetBatchTranslateRequest.h>

using AlibabaCloud::Alimt::Model::GetBatchTranslateRequest;

GetBatchTranslateRequest::GetBatchTranslateRequest()
    : RpcServiceRequest("alimt", "2018-10-12", "GetBatchTranslate") {
  setMethod(HttpRequest::Method::Post);
}

GetBatchTranslateRequest::~GetBatchTranslateRequest() {}

std::string GetBatchTranslateRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void GetBatchTranslateRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("SourceLanguage"), sourceLanguage);
}

std::string GetBatchTranslateRequest::getSourceText() const {
  return sourceText_;
}

void GetBatchTranslateRequest::setSourceText(const std::string &sourceText) {
  sourceText_ = sourceText;
  setBodyParameter(std::string("SourceText"), sourceText);
}

std::string GetBatchTranslateRequest::getFormatType() const {
  return formatType_;
}

void GetBatchTranslateRequest::setFormatType(const std::string &formatType) {
  formatType_ = formatType;
  setBodyParameter(std::string("FormatType"), formatType);
}

std::string GetBatchTranslateRequest::getApiType() const {
  return apiType_;
}

void GetBatchTranslateRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setBodyParameter(std::string("ApiType"), apiType);
}

std::string GetBatchTranslateRequest::getScene() const {
  return scene_;
}

void GetBatchTranslateRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setBodyParameter(std::string("Scene"), scene);
}

std::string GetBatchTranslateRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void GetBatchTranslateRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("TargetLanguage"), targetLanguage);
}

