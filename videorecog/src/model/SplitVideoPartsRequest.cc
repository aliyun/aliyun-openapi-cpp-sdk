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

#include <alibabacloud/videorecog/model/SplitVideoPartsRequest.h>

using AlibabaCloud::Videorecog::Model::SplitVideoPartsRequest;

SplitVideoPartsRequest::SplitVideoPartsRequest()
    : RpcServiceRequest("videorecog", "2020-03-20", "SplitVideoParts") {
  setMethod(HttpRequest::Method::Post);
}

SplitVideoPartsRequest::~SplitVideoPartsRequest() {}

std::string SplitVideoPartsRequest::get_Template() const {
  return _template_;
}

void SplitVideoPartsRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setBodyParameter(std::string("Template"), _template);
}

int SplitVideoPartsRequest::getMinTime() const {
  return minTime_;
}

void SplitVideoPartsRequest::setMinTime(int minTime) {
  minTime_ = minTime;
  setBodyParameter(std::string("MinTime"), std::to_string(minTime));
}

int SplitVideoPartsRequest::getMaxTime() const {
  return maxTime_;
}

void SplitVideoPartsRequest::setMaxTime(int maxTime) {
  maxTime_ = maxTime;
  setBodyParameter(std::string("MaxTime"), std::to_string(maxTime));
}

bool SplitVideoPartsRequest::getAsync() const {
  return async_;
}

void SplitVideoPartsRequest::setAsync(bool async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async ? "true" : "false");
}

std::string SplitVideoPartsRequest::getVideoUrl() const {
  return videoUrl_;
}

void SplitVideoPartsRequest::setVideoUrl(const std::string &videoUrl) {
  videoUrl_ = videoUrl;
  setBodyParameter(std::string("VideoUrl"), videoUrl);
}

