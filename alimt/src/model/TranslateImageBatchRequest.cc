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

#include <alibabacloud/alimt/model/TranslateImageBatchRequest.h>

using AlibabaCloud::Alimt::Model::TranslateImageBatchRequest;

TranslateImageBatchRequest::TranslateImageBatchRequest()
    : RpcServiceRequest("alimt", "2018-10-12", "TranslateImageBatch") {
  setMethod(HttpRequest::Method::Post);
}

TranslateImageBatchRequest::~TranslateImageBatchRequest() {}

std::string TranslateImageBatchRequest::getExt() const {
  return ext_;
}

void TranslateImageBatchRequest::setExt(const std::string &ext) {
  ext_ = ext;
  setBodyParameter(std::string("Ext"), ext);
}

std::string TranslateImageBatchRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void TranslateImageBatchRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("SourceLanguage"), sourceLanguage);
}

std::string TranslateImageBatchRequest::getImageUrls() const {
  return imageUrls_;
}

void TranslateImageBatchRequest::setImageUrls(const std::string &imageUrls) {
  imageUrls_ = imageUrls;
  setBodyParameter(std::string("ImageUrls"), imageUrls);
}

std::string TranslateImageBatchRequest::getCustomTaskId() const {
  return customTaskId_;
}

void TranslateImageBatchRequest::setCustomTaskId(const std::string &customTaskId) {
  customTaskId_ = customTaskId;
  setBodyParameter(std::string("CustomTaskId"), customTaskId);
}

std::string TranslateImageBatchRequest::getField() const {
  return field_;
}

void TranslateImageBatchRequest::setField(const std::string &field) {
  field_ = field;
  setBodyParameter(std::string("Field"), field);
}

std::string TranslateImageBatchRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void TranslateImageBatchRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("TargetLanguage"), targetLanguage);
}

