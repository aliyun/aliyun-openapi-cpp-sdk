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

#include <alibabacloud/videorecog/model/EvaluateVideoQualityRequest.h>

using AlibabaCloud::Videorecog::Model::EvaluateVideoQualityRequest;

EvaluateVideoQualityRequest::EvaluateVideoQualityRequest()
    : RpcServiceRequest("videorecog", "2020-03-20", "EvaluateVideoQuality") {
  setMethod(HttpRequest::Method::Post);
}

EvaluateVideoQualityRequest::~EvaluateVideoQualityRequest() {}

std::string EvaluateVideoQualityRequest::getMode() const {
  return mode_;
}

void EvaluateVideoQualityRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setBodyParameter(std::string("Mode"), mode);
}

bool EvaluateVideoQualityRequest::getAsync() const {
  return async_;
}

void EvaluateVideoQualityRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string EvaluateVideoQualityRequest::getVideoUrl() const {
  return videoUrl_;
}

void EvaluateVideoQualityRequest::setVideoUrl(const std::string &videoUrl) {
  videoUrl_ = videoUrl;
  setBodyParameter(std::string("VideoUrl"), videoUrl);
}

