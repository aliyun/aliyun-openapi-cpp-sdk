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

#include <alibabacloud/aigen/model/GenerateTextDeformationRequest.h>

using AlibabaCloud::Aigen::Model::GenerateTextDeformationRequest;

GenerateTextDeformationRequest::GenerateTextDeformationRequest()
    : RpcServiceRequest("aigen", "2024-01-11", "GenerateTextDeformation") {
  setMethod(HttpRequest::Method::Post);
}

GenerateTextDeformationRequest::~GenerateTextDeformationRequest() {}

std::string GenerateTextDeformationRequest::getTextContent() const {
  return textContent_;
}

void GenerateTextDeformationRequest::setTextContent(const std::string &textContent) {
  textContent_ = textContent;
  setBodyParameter(std::string("TextContent"), textContent);
}

std::string GenerateTextDeformationRequest::getFontName() const {
  return fontName_;
}

void GenerateTextDeformationRequest::setFontName(const std::string &fontName) {
  fontName_ = fontName;
  setBodyParameter(std::string("FontName"), fontName);
}

std::string GenerateTextDeformationRequest::getTtfUrl() const {
  return ttfUrl_;
}

void GenerateTextDeformationRequest::setTtfUrl(const std::string &ttfUrl) {
  ttfUrl_ = ttfUrl;
  setBodyParameter(std::string("TtfUrl"), ttfUrl);
}

long GenerateTextDeformationRequest::getN() const {
  return n_;
}

void GenerateTextDeformationRequest::setN(long n) {
  n_ = n;
  setBodyParameter(std::string("N"), std::to_string(n));
}

bool GenerateTextDeformationRequest::getAsync() const {
  return async_;
}

void GenerateTextDeformationRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string GenerateTextDeformationRequest::getPrompt() const {
  return prompt_;
}

void GenerateTextDeformationRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setBodyParameter(std::string("Prompt"), prompt);
}

std::string GenerateTextDeformationRequest::getOutputImageRatio() const {
  return outputImageRatio_;
}

void GenerateTextDeformationRequest::setOutputImageRatio(const std::string &outputImageRatio) {
  outputImageRatio_ = outputImageRatio;
  setBodyParameter(std::string("OutputImageRatio"), outputImageRatio);
}

