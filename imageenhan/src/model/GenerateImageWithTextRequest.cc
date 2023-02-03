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

#include <alibabacloud/imageenhan/model/GenerateImageWithTextRequest.h>

using AlibabaCloud::Imageenhan::Model::GenerateImageWithTextRequest;

GenerateImageWithTextRequest::GenerateImageWithTextRequest()
    : RpcServiceRequest("imageenhan", "2019-09-30", "GenerateImageWithText") {
  setMethod(HttpRequest::Method::Post);
}

GenerateImageWithTextRequest::~GenerateImageWithTextRequest() {}

std::string GenerateImageWithTextRequest::getResolution() const {
  return resolution_;
}

void GenerateImageWithTextRequest::setResolution(const std::string &resolution) {
  resolution_ = resolution;
  setBodyParameter(std::string("Resolution"), resolution);
}

int GenerateImageWithTextRequest::getNumber() const {
  return number_;
}

void GenerateImageWithTextRequest::setNumber(int number) {
  number_ = number;
  setBodyParameter(std::string("Number"), std::to_string(number));
}

std::string GenerateImageWithTextRequest::getText() const {
  return text_;
}

void GenerateImageWithTextRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

bool GenerateImageWithTextRequest::getAsync() const {
  return async_;
}

void GenerateImageWithTextRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

