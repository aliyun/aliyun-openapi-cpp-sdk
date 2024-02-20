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

#include <alibabacloud/aigen/model/GenerateTextTextureRequest.h>

using AlibabaCloud::Aigen::Model::GenerateTextTextureRequest;

GenerateTextTextureRequest::GenerateTextTextureRequest()
    : RpcServiceRequest("aigen", "2024-01-11", "GenerateTextTexture") {
  setMethod(HttpRequest::Method::Post);
}

GenerateTextTextureRequest::~GenerateTextTextureRequest() {}

std::string GenerateTextTextureRequest::getTextContent() const {
  return textContent_;
}

void GenerateTextTextureRequest::setTextContent(const std::string &textContent) {
  textContent_ = textContent;
  setBodyParameter(std::string("TextContent"), textContent);
}

std::string GenerateTextTextureRequest::getTextureStyle() const {
  return textureStyle_;
}

void GenerateTextTextureRequest::setTextureStyle(const std::string &textureStyle) {
  textureStyle_ = textureStyle;
  setParameter(std::string("TextureStyle"), textureStyle);
}

std::string GenerateTextTextureRequest::getFontName() const {
  return fontName_;
}

void GenerateTextTextureRequest::setFontName(const std::string &fontName) {
  fontName_ = fontName;
  setBodyParameter(std::string("FontName"), fontName);
}

std::string GenerateTextTextureRequest::getTtfUrl() const {
  return ttfUrl_;
}

void GenerateTextTextureRequest::setTtfUrl(const std::string &ttfUrl) {
  ttfUrl_ = ttfUrl;
  setBodyParameter(std::string("TtfUrl"), ttfUrl);
}

long GenerateTextTextureRequest::getN() const {
  return n_;
}

void GenerateTextTextureRequest::setN(long n) {
  n_ = n;
  setBodyParameter(std::string("N"), std::to_string(n));
}

bool GenerateTextTextureRequest::getAsync() const {
  return async_;
}

void GenerateTextTextureRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

bool GenerateTextTextureRequest::getAlphaChannel() const {
  return alphaChannel_;
}

void GenerateTextTextureRequest::setAlphaChannel(bool alphaChannel) {
  alphaChannel_ = alphaChannel;
  setBodyParameter(std::string("AlphaChannel"), alphaChannel ? "true" : "false");
}

std::string GenerateTextTextureRequest::getImageUrl() const {
  return imageUrl_;
}

void GenerateTextTextureRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

long GenerateTextTextureRequest::getImageShortSize() const {
  return imageShortSize_;
}

void GenerateTextTextureRequest::setImageShortSize(long imageShortSize) {
  imageShortSize_ = imageShortSize;
  setBodyParameter(std::string("ImageShortSize"), std::to_string(imageShortSize));
}

std::string GenerateTextTextureRequest::getPrompt() const {
  return prompt_;
}

void GenerateTextTextureRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setBodyParameter(std::string("Prompt"), prompt);
}

std::string GenerateTextTextureRequest::getOutputImageRatio() const {
  return outputImageRatio_;
}

void GenerateTextTextureRequest::setOutputImageRatio(const std::string &outputImageRatio) {
  outputImageRatio_ = outputImageRatio;
  setBodyParameter(std::string("OutputImageRatio"), outputImageRatio);
}

