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

#include <alibabacloud/imageenhan/model/GenerateImageWithTextAndImageRequest.h>

using AlibabaCloud::Imageenhan::Model::GenerateImageWithTextAndImageRequest;

GenerateImageWithTextAndImageRequest::GenerateImageWithTextAndImageRequest()
    : RpcServiceRequest("imageenhan", "2019-09-30", "GenerateImageWithTextAndImage") {
  setMethod(HttpRequest::Method::Post);
}

GenerateImageWithTextAndImageRequest::~GenerateImageWithTextAndImageRequest() {}

std::string GenerateImageWithTextAndImageRequest::getResolution() const {
  return resolution_;
}

void GenerateImageWithTextAndImageRequest::setResolution(const std::string &resolution) {
  resolution_ = resolution;
  setBodyParameter(std::string("Resolution"), resolution);
}

int GenerateImageWithTextAndImageRequest::getNumber() const {
  return number_;
}

void GenerateImageWithTextAndImageRequest::setNumber(int number) {
  number_ = number;
  setBodyParameter(std::string("Number"), std::to_string(number));
}

float GenerateImageWithTextAndImageRequest::getSimilarity() const {
  return similarity_;
}

void GenerateImageWithTextAndImageRequest::setSimilarity(float similarity) {
  similarity_ = similarity;
  setBodyParameter(std::string("Similarity"), std::to_string(similarity));
}

std::string GenerateImageWithTextAndImageRequest::getAspectRatioMode() const {
  return aspectRatioMode_;
}

void GenerateImageWithTextAndImageRequest::setAspectRatioMode(const std::string &aspectRatioMode) {
  aspectRatioMode_ = aspectRatioMode;
  setBodyParameter(std::string("AspectRatioMode"), aspectRatioMode);
}

std::string GenerateImageWithTextAndImageRequest::getText() const {
  return text_;
}

void GenerateImageWithTextAndImageRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GenerateImageWithTextAndImageRequest::getRefImageUrl() const {
  return refImageUrl_;
}

void GenerateImageWithTextAndImageRequest::setRefImageUrl(const std::string &refImageUrl) {
  refImageUrl_ = refImageUrl;
  setBodyParameter(std::string("RefImageUrl"), refImageUrl);
}

bool GenerateImageWithTextAndImageRequest::getAsync() const {
  return async_;
}

void GenerateImageWithTextAndImageRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

