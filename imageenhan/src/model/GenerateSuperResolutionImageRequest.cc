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

#include <alibabacloud/imageenhan/model/GenerateSuperResolutionImageRequest.h>

using AlibabaCloud::Imageenhan::Model::GenerateSuperResolutionImageRequest;

GenerateSuperResolutionImageRequest::GenerateSuperResolutionImageRequest()
    : RpcServiceRequest("imageenhan", "2019-09-30", "GenerateSuperResolutionImage") {
  setMethod(HttpRequest::Method::Post);
}

GenerateSuperResolutionImageRequest::~GenerateSuperResolutionImageRequest() {}

int GenerateSuperResolutionImageRequest::getScale() const {
  return scale_;
}

void GenerateSuperResolutionImageRequest::setScale(int scale) {
  scale_ = scale;
  setBodyParameter(std::string("Scale"), std::to_string(scale));
}

std::string GenerateSuperResolutionImageRequest::getUserData() const {
  return userData_;
}

void GenerateSuperResolutionImageRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setBodyParameter(std::string("UserData"), userData);
}

std::string GenerateSuperResolutionImageRequest::getOutputFormat() const {
  return outputFormat_;
}

void GenerateSuperResolutionImageRequest::setOutputFormat(const std::string &outputFormat) {
  outputFormat_ = outputFormat;
  setBodyParameter(std::string("OutputFormat"), outputFormat);
}

bool GenerateSuperResolutionImageRequest::getAsync() const {
  return async_;
}

void GenerateSuperResolutionImageRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string GenerateSuperResolutionImageRequest::getImageUrl() const {
  return imageUrl_;
}

void GenerateSuperResolutionImageRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setBodyParameter(std::string("ImageUrl"), imageUrl);
}

int GenerateSuperResolutionImageRequest::getOutputQuality() const {
  return outputQuality_;
}

void GenerateSuperResolutionImageRequest::setOutputQuality(int outputQuality) {
  outputQuality_ = outputQuality;
  setBodyParameter(std::string("OutputQuality"), std::to_string(outputQuality));
}

