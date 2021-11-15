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

#include <alibabacloud/alimt/model/TranslateImageRequest.h>

using AlibabaCloud::Alimt::Model::TranslateImageRequest;

TranslateImageRequest::TranslateImageRequest()
    : RpcServiceRequest("alimt", "2018-10-12", "TranslateImage") {
  setMethod(HttpRequest::Method::Post);
}

TranslateImageRequest::~TranslateImageRequest() {}

std::string TranslateImageRequest::getExt() const {
  return ext_;
}

void TranslateImageRequest::setExt(const std::string &ext) {
  ext_ = ext;
  setBodyParameter(std::string("Ext"), ext);
}

std::string TranslateImageRequest::getSourceLanguage() const {
  return sourceLanguage_;
}

void TranslateImageRequest::setSourceLanguage(const std::string &sourceLanguage) {
  sourceLanguage_ = sourceLanguage;
  setBodyParameter(std::string("SourceLanguage"), sourceLanguage);
}

std::string TranslateImageRequest::getField() const {
  return field_;
}

void TranslateImageRequest::setField(const std::string &field) {
  field_ = field;
  setBodyParameter(std::string("Field"), field);
}

std::string TranslateImageRequest::getImageUrl() const {
  return imageUrl_;
}

void TranslateImageRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

std::string TranslateImageRequest::getTargetLanguage() const {
  return targetLanguage_;
}

void TranslateImageRequest::setTargetLanguage(const std::string &targetLanguage) {
  targetLanguage_ = targetLanguage;
  setBodyParameter(std::string("TargetLanguage"), targetLanguage);
}

std::string TranslateImageRequest::getImageBase64() const {
  return imageBase64_;
}

void TranslateImageRequest::setImageBase64(const std::string &imageBase64) {
  imageBase64_ = imageBase64;
  setBodyParameter(std::string("ImageBase64"), imageBase64);
}

