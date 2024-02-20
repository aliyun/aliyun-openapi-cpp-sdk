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

#include <alibabacloud/aigen/model/GenerateCosplayImageRequest.h>

using AlibabaCloud::Aigen::Model::GenerateCosplayImageRequest;

GenerateCosplayImageRequest::GenerateCosplayImageRequest()
    : RpcServiceRequest("aigen", "2024-01-11", "GenerateCosplayImage") {
  setMethod(HttpRequest::Method::Post);
}

GenerateCosplayImageRequest::~GenerateCosplayImageRequest() {}

std::string GenerateCosplayImageRequest::getTemplateImageUrl() const {
  return templateImageUrl_;
}

void GenerateCosplayImageRequest::setTemplateImageUrl(const std::string &templateImageUrl) {
  templateImageUrl_ = templateImageUrl;
  setBodyParameter(std::string("TemplateImageUrl"), templateImageUrl);
}

std::string GenerateCosplayImageRequest::getFaceImageUrl() const {
  return faceImageUrl_;
}

void GenerateCosplayImageRequest::setFaceImageUrl(const std::string &faceImageUrl) {
  faceImageUrl_ = faceImageUrl;
  setBodyParameter(std::string("FaceImageUrl"), faceImageUrl);
}

bool GenerateCosplayImageRequest::getAsync() const {
  return async_;
}

void GenerateCosplayImageRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

long GenerateCosplayImageRequest::getStyle() const {
  return style_;
}

void GenerateCosplayImageRequest::setStyle(long style) {
  style_ = style;
  setBodyParameter(std::string("Style"), std::to_string(style));
}

