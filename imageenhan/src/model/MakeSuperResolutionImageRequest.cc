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

#include <alibabacloud/imageenhan/model/MakeSuperResolutionImageRequest.h>

using AlibabaCloud::Imageenhan::Model::MakeSuperResolutionImageRequest;

MakeSuperResolutionImageRequest::MakeSuperResolutionImageRequest()
    : RpcServiceRequest("imageenhan", "2019-09-30", "MakeSuperResolutionImage") {
  setMethod(HttpRequest::Method::Post);
}

MakeSuperResolutionImageRequest::~MakeSuperResolutionImageRequest() {}

long MakeSuperResolutionImageRequest::getUpscaleFactor() const {
  return upscaleFactor_;
}

void MakeSuperResolutionImageRequest::setUpscaleFactor(long upscaleFactor) {
  upscaleFactor_ = upscaleFactor;
  setBodyParameter(std::string("UpscaleFactor"), std::to_string(upscaleFactor));
}

std::string MakeSuperResolutionImageRequest::getMode() const {
  return mode_;
}

void MakeSuperResolutionImageRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

std::string MakeSuperResolutionImageRequest::getOutputFormat() const {
  return outputFormat_;
}

void MakeSuperResolutionImageRequest::setOutputFormat(const std::string &outputFormat) {
  outputFormat_ = outputFormat;
  setBodyParameter(std::string("OutputFormat"), outputFormat);
}

std::string MakeSuperResolutionImageRequest::getUrl() const {
  return url_;
}

void MakeSuperResolutionImageRequest::setUrl(const std::string &url) {
  url_ = url;
  setBodyParameter(std::string("Url"), url);
}

long MakeSuperResolutionImageRequest::getOutputQuality() const {
  return outputQuality_;
}

void MakeSuperResolutionImageRequest::setOutputQuality(long outputQuality) {
  outputQuality_ = outputQuality;
  setBodyParameter(std::string("OutputQuality"), std::to_string(outputQuality));
}

